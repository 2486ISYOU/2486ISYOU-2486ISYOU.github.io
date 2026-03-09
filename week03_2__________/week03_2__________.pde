//week03-2好玩的程式設計-互動
//今天主題IF判斷按滑鼠就變紫色
void setup(){
  size(400,300);
}
void draw(){
  if(mousePressed)background(255,128,255);
  else background(0,255,0);
}
