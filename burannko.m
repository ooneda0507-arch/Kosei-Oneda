clear; close all; clc;

function dydt = swing_eq(t, y, g, l0, dl, omega, phi)
    theta = y(1);
    dtheta = y(2);
    l = l0 + dl * sin(omega * t + phi);
    dl_dt = dl * omega * cos(omega * t + phi);

    ddtheta = -2 * dl_dt / l * dtheta - g / l * sin(theta);
    dydt = [dtheta; ddtheta];
end

% --- パラメータ定義 ---
g = 9.81;          % 重力加速度
l0 = 1.0;          % ブランコの平均長さ[m]
dl = 0.1;          % 長さ変化の振幅[m]
omega = 2*pi;      % 立ちしゃがみの周期[rad/s]
phi = 0;           % しゃがみのタイミング（位相）←ここを変えて比較

% シミュレーション設定
tspan = 0:0.01:60;                 % シミュレーション時間[s]
theta0 = deg2rad(5);            % 初期角度[rad]
dtheta0 = 0;                    % 初期角速度
y0 = [theta0; dtheta0];

% ODE解く
[t, y] = ode45(@(t, y) swing_eq(t, y, g, l0, dl, omega, phi), tspan, y0);

%video
vid = VideoWriter('burannko.mp4','MPEG-4');
vid.FrameRate = 50;
open(vid);

fig = figure;              % ← ここで Figure を作成
set(fig, 'Visible', 'on'); % ← 表示状態を明示

for i = 1:5:length(t)
    theta = y(i,1);
    l = l0 + dl * sin(omega * t(i) + phi);
    x = l * sin(theta);
    y_pos = -l * cos(theta);

    clf(fig);              % Figure をクリア
    plot([0 x], [0 y_pos], 'k', 'LineWidth',2);
    hold on;
    plot(x, y_pos, 'ro', 'MarkerSize',10, 'MarkerFaceColor','r');
    plot(0,0, 'k+','MarkerSize',8);
    axis equal;
    axis([-1.5 1.5 -1.5 0.2]);
    title(sprintf('時刻 t = %.2f [s]', t(i)));
    xlabel('x [m]'); ylabel('y [m]');

    drawnow;
    frame = getframe(fig); % ← fig を引数に指定
    writeVideo(vid, frame);
end
    close(vid);
    hold off;