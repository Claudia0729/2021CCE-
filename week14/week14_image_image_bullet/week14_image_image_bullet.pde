PImage img,img2;
void setup()
{
  size(600,600);
  img = loadImage("img.png");//主角
  img2 = loadImage("img2.png");//子彈
}
int dy=0;//子彈飛多遠
void draw()
{
  background(255);
  imageMode(CENTER);//讓滑鼠在圖的正中心
  image(img,mouseX,mouseY);
  if (mousePressed)
  {
    image(img2,mouseX,mouseY-dy);//子彈往上飛
    dy++;
  }//技巧 選好指令 右鍵可看相關說明
}
  
