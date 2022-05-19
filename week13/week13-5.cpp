void setup()///設定//只做1次
{
  size(300,300);//大小
  fill(#A2FF7E);
  textSize(50);
  textAlign(CENTER,CENTER);//自顯示時 對齊正中間
}
int choice = -1;//沒選 ,0,1,2有選
void draw()//畫面太糟//每秒做60次
{
  background(#FFFFFF);//清背景
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  //int choice = mouseX % 3;//只有0 1 2
  if(choice==0) ellipse(30,50,50,50);//任一圓/橢圓
  if(choice==1) ellipse(30,150,50,50);
  if(choice==2) ellipse(30,250,50,50);
  //          圓形/橢圓 x  y   w   h
}
void mousePressed()//當mouse按下去時
{
  choice = int ( random(3) );//取出整數0,1,2
  //          會在0.00~2.99(不包括3.0)
}
