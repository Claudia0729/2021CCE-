//和第三個作業相似 但多了框框選擇
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
  int choice = mouseX % 3;//只有0 1 2 亂數選擇
  if(choice==0) rect(0,25,50,50);//四邊形
  if(choice==1) rect(0,125,50,50);
  if(choice==2) rect(0,225,50,50);

}
