PImage img;//在外面宣告 才能在setup跟draw用
void setup()//設定
{
  size(500,400);
  img = loadImage("dog.jpg");
  
}
void draw()//畫圖每秒60次
{
  image( img, mouseX,mouseY);
  
}
