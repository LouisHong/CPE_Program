/*
========UVA10929========
=====You can say 11=====
�\��G�P�_�ƭȬO�_��11������ 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ch11(int x,char* n) //�P�_11���ưƵ{�� 
{
  int a=0,a1=0,a0=0,c=0;    //�ŧi�ƭȥ[�`�ܼơB�_�Ƭ����ȡB���Ƭ����ȡB�P�_�ܼ� 
  int i;                    //�ŧifor�j��p�ƭ�
  
  for(i=0;i<x;i++)
  {
    a=n[i]-48;              //�N��ƪ�ascii-48([48~58]=>[0~9]) 
    if(i%2==0) a0+=a;       //�Y�������,�N���G�����󰸼Ƭ�����
    else a1+=a;             //�Y���_���,�N���G������_�Ƭ�����
  }
  if((a0-a1)%11==0) c=1;    //�p�⵲�G��11������ 
  else c=0;                 //�p�⵲�G�D11������ 

  return c;                 //�^�ǵ��G�ȵ��D�{�� 
}
int main(int argc, char *argv[])
{
  char str[100][1000],kin[100]={1},lenK[100];//�ŧi�����ȡB��J�ȡB���׭p�ƭ� 
  int i;                                     //�ŧifor�j��p�ƭ� 
  int k=0,len=0,z=1,yn=0;                    //�ŧi���ƭȡB���׭ȡB�����ȡB�P�_�� 
  while(z!=0)                                //�����O�_����J0 
  {
    scanf("%s",&kin);                        //��J�r�� 
    z=atoi(kin);                             //�N�r���ର�ƭ�(������) 
    len=strlen(kin);                         //�p��r����� 
    for(i=0;i<len;i++)
    {str[k][i]=kin[i];}                      //�N�r��O���U�� 
    lenK[k]=len;                             //�N���׭ȰO���U�� 
    k++;                                     //���ƭ�+1 
  }
  for(i=0;i<(k-1);i++)
  {
    yn=ch11(lenK[i],str[i]);                              //�N���׭ȡB�r��ᵹ�Ƶ{���P�_ 
    if(yn==1) printf("%s is a multiple of 11.\n",str[i]); //���G��11������ 
    else printf("%s is not a multiple of 11.\n",str[i]);  //���G�D11������ 
  }
  	
  return 0;
}
