//�M�ĤT�ӧ@�~�ۦ� ���h�F�خؿ��
void setup()///�]�w//�u��1��
{
  size(300,300);//�j�p
  fill(#A2FF7E);
  textSize(50);
  textAlign(CENTER,CENTER);//����ܮ� ���������
}
void draw()//�e�����V//�C��60��
{
  background(#FFFFFF);//�M�I��
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  int choice = mouseX % 3;//�u��0 1 2 �üƿ��
  if(choice==0) rect(0,25,50,50);//�|���
  if(choice==1) rect(0,125,50,50);
  if(choice==2) rect(0,225,50,50);

}
