/*
=========UVA00256========
====Quirksome Squares====
�\��G��J�@��N,�C�XN��ƪ�Quirksome Squares�Ҧ���
(Quirksome Squares:�N��Ʊq������,��ƩM������굥���Ӫ���) 
*/

#include <stdio.h>
#include <stdlib.h>

void format(int a,int x)//�N�e����0�Ƶ{�� 
{
  int n[8];                               //�ŧiformat�}�C 
  int p=0,q=0,c=0;                        //�ŧi�Q����,����,�p�ƭ� 
  int i;                                  //�ŧifor�j���ܼ�
  for(i=0;i<a;i++)
  {p=x/10; q=x%10; x=p; n[c]=q; c++;}     //�N��Ƽg�J�}�C(�q�C���->�����) 
  for(i=a-1;i>=0;i--){printf("%d",n[i]);} //�N�}�C��X 
  printf("\n");                           //���� 
}
void qui(int a)//��XQuirksome Squares
{
  int num[100]={0};                      //�ŧi�����}�C 
  int i;                                 //�ŧifor�j���ܼ� 
  int p=1,q=1,x=0,y=0;                   //�ŧi�̤j��,���έ�,���Ϋ᪺����ܼ� 
  int c=0;                               //�ŧi�p�ƭ� 
  
  for(i=0;i<a;i++) {p=p*10;}             //�p��̤j�� 
  for(i=0;i<a/2;i++) {q=q*10;}           //�p����έ� 
  for(i=0;i<p;i++){
    x=i/q; y=i%q;                        //�p����Ϋ᪺��� 
    if(((x+y)*(x+y))==i){num[c]=i; c++;} //�p�G�ŦXQuirksome Squares,�N�ƭȦs�J�}�C,�p�ƭ�+1 
  }
  for(i=0;i<c;i++){format(a,num[i]);}    //�N�ƭȶǵ��Ƶ{������X 
}
int main(int argc, char *argv[])
{
  int a=0;   //�ŧi��J�ƭ� 
  
  while(scanf("%d",&a)!=EOF){qui(a);}   //�N�ƭȶǵ��Ƶ{�� 
	
  return 0;
}
