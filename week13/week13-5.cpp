void setup()///�]�w//�u��1��
{
  size(300,300);//�j�p
  fill(#A2FF7E);
  textSize(50);
  textAlign(CENTER,CENTER);//����ܮ� ���������
}
int choice = -1;//�S�� ,0,1,2����
void draw()//�e�����V//�C��60��
{
  background(#FFFFFF);//�M�I��
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  //int choice = mouseX % 3;//�u��0 1 2
  if(choice==0) ellipse(30,50,50,50);//���@��/���
  if(choice==1) ellipse(30,150,50,50);
  if(choice==2) ellipse(30,250,50,50);
  //          ���/��� x  y   w   h
}
void mousePressed()//��mouse���U�h��
{
  choice = int ( random(3) );//���X���0,1,2
  //          �|�b0.00~2.99(���]�A3.0)
}
