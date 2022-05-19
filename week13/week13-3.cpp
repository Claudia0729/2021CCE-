void setup()///設定//只做1次
{
  size(300,300);//大小
  fill(#A2FF7E);
  textSize(50);
  textAlign(CENTER,CENTER);//自顯示時 對齊正中間
}
void draw()//畫面太糟//每秒做60次
{
  background(#FFFFFF);//清背景
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  //text("Hello",mouseX,mouseY);
}
