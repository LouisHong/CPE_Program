/*
========UVA00100========
===The 3n + 1 problem===
�\��G��Ja,b�d���,�N�t��k���̤jcycle�ȿ�X
�t��k�G
1)��J n
2)�L�X n
3)�p�G n = 1 ����
4)�p�G n �O�_�� ���� n=3*n+1
5)�_�h n=n/2
6)GOTO 2
*/

#include <stdio.h>
#include <stdlib.h>

int cycle(int a)//cycle length �Ƶ{�� 
{
  int h[10000]={0};  //�ŧi�����t��k�ƭ� 
  int c=1;           //�ŧi�p�ƭ� 
  int i;             //�ŧifor�j���ܼ�
  
  h[0]=a;            //cycle�Ĥ@�ӭȬ���� 
  while(a>1){
    if(a%2==0) a=a/2;//�p�G�ƭȬ����ƴN����G 
    else a=(a*3)+1;  //�p�G�ƭȬ��_�ƴN���T��+1 
    h[c]=a;          //�Ncycle�ȰO���ܰ}�C 
    c++;             //�p�ƭ�+1 
  }
  
  return c;          //�^�ǭp�ƭ� 
}
int maxLen(int a,int b)//�D�X�̤jcycle�ȰƵ{�� 
{
  int n[500000]={0}; //�ŧi�s��cycle�}�C 
  int c=0,max=1,t=0; //�ŧi�p�ƭ�,�̤jcycle��,�洫�� 
  int i;             //�ŧifor�j���ܼ� 
  
  if(a>b) {t=a; a=b; b=t;}                  //�Ya>b,����ƼƭȤ��� 
  for(i=a;i<=b;i++){n[c]=cycle(i); c++;}    //�v�@�p��C�ӼƭȪ�cycle�� 
  for(i=0;i<c;i++){if(n[i]>max) max=n[i];}  //�D�X�̤jcycle��
  
  return max;                               //�^�ǳ̤jcycle��
}
int main(int argc, char *argv[])
{
  int a=0,b=0,ans=0;                      //�ŧi�d���(���a,b),cycle�̤j�� 
  
  while(scanf("%d %d",&a,&b)!=EOF){
    ans=0;                                //�Ncycle�̤j��
    ans=maxLen(a,b);                      //�Na,b��ȶǵ��Ƶ{��,�Dcycle�̤j�� 
    printf("%d %d %d\n",a,b,ans);         //��Xa,b,cycle�̤j�� 
  }
  	
  return 0;
}
