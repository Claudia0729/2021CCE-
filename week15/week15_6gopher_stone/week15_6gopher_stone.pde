//小地鼠遊戲
PImage img1,img2, img3 ,img4,gopher,soil,bg,stone1,stone2;
int [][] stone=//java的括號在左邊
{
  {1,0,0,0,0,0,0,0},//一串很長的東西用逗號
  {0,1,0,0,0,0,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,0,1,0,0,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,0,0,1,0,0},
  {0,0,0,0,0,0,1,0},
  {0,0,0,0,0,0,0,1},
};
//int a[10] = {1,2,3,4,5,6,7,8,9};
void setup()
{
  size(640,480);
  img1 = loadImage("groundhogIdle.png");
  img2 = loadImage("groundhogDown.png");
  img3 = loadImage("groundhogLeft.png");
  img4 = loadImage("groundhogRight.png");
  soil = loadImage("soil8x24.png");//土壤
  bg = loadImage("bg.jpg");//背景
  stone1 = loadImage("stone1.png");
  stone2 = loadImage("stone2.png");
  gopher=img1;
}
int x=300,y=0,dx=0,dy=0;
void draw()//畫圖
{

  image(bg, 0, 0);//background(255)
  image(soil, 0, 160-y);//卷軸,土壤往上捲
  int speed=3;
  for ( int i=0;i<8;i++ )//左手i
  {
    for ( int j=0;j<8;j++)//右手j
    {
      if ( stone[i][j]==1 ) image(stone1, 80*j,80*i+160-y);
                                      //  左標要顛倒
      //if (如果小地座標與 80*j 80*i 很接近)就走慢一點
      if( dist(x,y-80,80*j,80*i)<40 ) speed=1; 
    }
  }
  image(gopher, x, 80);//本來是image(gopher, x, y)
  x +=dx*speed; y +=dy*speed;
}
void keyPressed()//按下某個按鍵
{
  if( keyCode == DOWN ) { gopher=img2; dx=0; dy=1;}
  if( keyCode == LEFT)  { gopher=img3; dx=-1;dy=0;}
  if( keyCode == RIGHT ){ gopher=img4; dx=+1;dy=0;}
}
void keyReleased()
{
  gopher = img1;dx=0;dy=0;
}
  
