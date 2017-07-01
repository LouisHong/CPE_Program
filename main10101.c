/*
========UVA10101========
=====Bangla Numbers=====
�\��G�N�@��ƭ��ন��r�Ѽg 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num[10]={0};                //�ƭȤ��Φs��}�C 
void output(int a)              //��r��X�Ƶ{�� 
{
  int i;                                                //�ŧifor�j���ܼ�
  int s=0,z=0;                                          //�e�b�ƭȭp�� 
  printf("%4d.",a);                                     //���ؽs����X 
    for(i=9;i>=0;i--)
    { 
      if(num[i]!=0) {
        printf(" %d",num[i]);                           //�ƭȿ�X 
        if((i%5)+(i/5)==1) printf(" shata");            //��r��X(shata) 
        if((i%5)+(i/5)==2) printf(" hajar");            //��r��X(hajar)
        if((i%5)+(i/5)==3) printf(" lakh");             //��r��X(lakh)
        if((i%5)+(i/5)==4) printf(" kuti");             //��r��X(kuti)
        if(i>4) s++;                                    //�e�b�ƭȬ��s�����p�� 
      }else{
        z++;                                            //���ƭȬ��s�����p�� 
        if((i==4)&(num[4]==0)&(s!=0)) printf(" kuti");  //�Y�e�b���Ȧ�num[4]�S�Ȱ��� 
      }
    }
  if(z==10) printf(" %d",0);                            //���ƭȳ����s���� 
  printf("\n");                                         //���� 
}
void bangla(int x0,int x1)      //�ƭȤ��ΰƵ{�� 
{
  int m[5]={100,10,100,100,100};                   //�s�񰣼Ƽƭ� 
  int i;                                           //�ŧifor�j���ܼ�
  int q=0,r=0;                                     //�ŧi�Q����(q)&����(r)�ܼ�

  for(i=0;i<10;i++) {num[i]=0;}
  if(x0!=0)                                        //x0�ƬO�_��0 
  {
    for(i=0;i<5;i++)
    {q=x0/m[i]; r=x0%m[i]; x0=q; num[i]=r;}
  }
  if(x1!=0)                                        //x1�ƬO�_��0
  {
    for(i=1;i<5;i++)
    {q=x1/m[i]; r=x1%m[i]; x1=q; num[i+4]=r;}
  }
}
int main(int argc, char *argv[])
{
  char n[20]={0},m1[7]={0},m0[9]={0};  //�ŧi�r��(��J��),�e�b���r��,��b���r�� 
  int a1=0,a0=0;                       //�ŧi�e�b���ܼ�,��b���ܼ�
  int count=0,len=0,c=1;               //�ŧi�p�ƭ� 
  int i;                               //�ŧifor�j���ܼ� 
  
  while(scanf("%s",n)!=EOF){           //��J�r��(�h���J�B��ƥ���) 
  
    for(i=0;i<7;i++) {m1[i]=0;}        //m1�k�s 
    for(i=0;i<9;i++) {m0[i]=0;}        //m0�k�s 
    a1=0; a0=0;                        //a1&a2�k�s 
  
    len=strlen(n);                     //�p��r�����
    if(len<16)                         //�r����פp��16?
    {
      for(i=0;i<16;i++)
      {
        if(len>9)                      //�r����פj��9?
        {
          if(i<(len-9)) m1[i]=n[i];    //�N�e��(len-9)�쪺�r���g�im1
          else m0[i-(len-9)]=n[i];     //�N�᭱�E�쪺�r���g�im0
        }else{
          m0[i]=n[i];                  //������Ҧ��r���g�im0 
        }
      }
      a1=atoi(m1); a0=atoi(m0);        //�N�r�����r 
      bangla(a0,a1);                   //�ƭȤ��� 
      output(c);                       //��r��X 
    }
    c++;                               //���ؽs���p�� 
  }                                    //while����	
  return 0;
}
