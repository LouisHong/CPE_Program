/*
=======UVA10235=======
=====Simply Emirp=====
�\��G�P�_��ƻP�Ͻ�� 
*/

#include <stdio.h>
#include <stdlib.h>

int powX(int a,int x)//����Ƶ{��(�]��math.h����pow(����,����)����) 
{
  int s=0;   //�ŧi�s�񩳼� 
  int i;     //�ŧifor�j���ܼ�
  
  s=a;                        //�N���Ʀs�� 
  for(i=1;i<x;i++){a*=s;}     //���Ʀs���� 
  if(x==0) a=1;               //�p�G����Ƭ�0,���ƭȬ�1 
  
  return a;                   //�^�ǩ��ƭ� 
}
int emirp(int a)//�P�_�Ͻ�ưƵ{��
{
  int n[10]={0};        //�s��ƭȰ}�C 
  int p=0,c=0,s=0,em=0; //�ŧi�Q����(�p���),���׭�(�p�ƭ�),�P�_��,�Ͻ���ܼ� 
  int i;                //�ŧifor�j���ܼ� 
  
  p=a;                                      //�N�ƭȶǵ��Q���� 
  for(i=0;i<10;i++)
  {n[c]=p%10; p=p/10; c++; if(p==0) break;} //�}�C=���Q���l��,�Q����=���Q,���׭�+1,�p�G�Q���Ƭ�0�N���X�j�� 
  for(i=0;i<c;i++)
  {em+=n[i]*powX(10,c-i-1);}                //�ϦV������ۥ[ 
  c=0;                                      //���׭��k0(�ܦ��p�ƭȥ�)
  for(i=2;i<em;i++)
  {if(em%i==0) c++;}                        //�p�G�㰣,�p�ƭ�+1 
  if((c==0)&(a!=em)) s=1;                   //�p�G�p�ƭȬ�0�B���۵������,�P�_��=1 
  
  return s;                                 //�^�ǧP�_�� 
}
int prime(int a)//�P�_��ưƵ{�� 
{
  int c=0,s=0;    //�ŧi�p�ƭ�,�P�_�� 
  int i;          //�ŧifor�j���ܼ� 
  
  for(i=2;i<a;i++){if(a%i==0) c++;}        //�p��㰣�Ӽ� 
  if(c==0) s=1;                            //�p�G���Ƭ����,�P�_�ȿ�X��1 
  if((s==1)&(a>10)) {if(emirp(a)==1) s=2;} //�P�_�Ȭ�1,�P�_�O�_���Ͻ��,�p�G�O,�P�_�ȿ�X��2
  
  return s;                                //�^�ǧP�_�� 
}
int main(int argc, char *argv[])
{
  int n=0,s=0;     //�ŧi�ƭ��ܼ�,��������ܼ� 
   
  while(scanf("%d",&n)!=EOF){
    s=prime(n);                                //�N�ƭȶǦܰƵ{�� 
    if(s==2) printf("%d is emirp.\n",n);       //�O�Ͻ�� 
    if(s==1) printf("%d is prime.\n",n);       //�O���,�����O�Ͻ�� 
    if(s==0) printf("%d is not prime.\n",n);   //���O��� 
  }
	
  return 0;
}
