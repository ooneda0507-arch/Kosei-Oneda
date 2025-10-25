 from ev3dev2.auto import Button
 # インポート

 button = Button()
 # オブジェクトを生成

 print(’start!!’)
 
 buttonname = (’UP’, ’DOWN’, ’LEFT’, ’RIGHT’, ’ENTER’)
 value_b = [False for i in range(5)]
 # 表示用の名前のタプルを作成
 # value_b（前回の状態）をすべて False で初期化

 # Button.up 等は押されている時に True を返すため，False（=押されていない状態）で初期化
  while not(button.backspace):
 # 戻るボタンが押されるまで処理を行う

   value = [button.up, button.down, button.left, button.right, button.enter]
 # 現在の状態を更新
    if not(value == value_b):
 # 前回と状態が異なる場合に次へ進む
     value_b = []
 # value_b を空にする
     for i in range(5):
 # value[0]～value[4]でまわす
     if value[i]:
      print(buttonname[i] + ’␣Button␣Pressed’) # 押されたボタンを表示
      value_b.append(True)
 # value_b のリストに True を追加
     else:
      value_b.append(False)
 # value_b のリストに False を追加