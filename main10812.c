/*
========UVA10812========
====Beat the Spread!====
�\��G����Ƭۥ[,��Ƭ۴�Ⱥ�X���(���G�����t) 
*/

#include <stdio.h>
#include <stdlib.h>

int x=0,y=0;       //�ŧi���
 
int spread(int n1,int n2)//�P�_��ưƵ{�� 
{
  int s=0;                  //�ŧi�P�_�ܼ� 
  
  x=(n1+n2)/2;              //(��Ƭۥ[)/2��Xx(�j��) 
  y=(n1-n2)/2;              //(��Ƭ۴�)/2��Xy(�p��) 
  if((x+y==n1)&(x-y==n2)){
    if((x>0)&(y>0)) s=1;    //�Y���G�X�z��X1 
  }else{
    s=0;                    //���X�z��X0 
  }
  
  return s;                 //�^�ǧP�_�� 
}
int main(int argc, char *argv[])
{
  int n=0,yn=0;                     //�ŧi���ƭ�,�P�_�� 
  int a[100],b[100];                //�ŧi��Ƭ����Ȱ}�C 
  int i;                            //for�j���ܼ� 
  
  scanf("%d",&n);                   //��J��ƭ� 
  for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);     //��J��ƩM�ȤΨ�Ʈt�� 
  }
  for(i=0;i<n;i++){
    yn=spread(a[i],b[i]);           //�N�ƭȩ�J�}�C�P�_��ƪ��ȬO�_�X�z 
    if(yn==1) printf("%d %d\n",x,y);//�X�z,��X��� 
    else printf("impossible\n");    //���X�z,��X"impossible" 
  }
	
  return 0;
}
