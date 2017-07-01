/*
========UVA10931========
=========Parity=========
�\��G�N�ƭ��ন�G�i��ú�X1���Ӽ� 
*/

#include <stdio.h>
#include <stdlib.h>

void bin(unsigned long x)
{
  unsigned long s=0;               //�ŧi�Q���Ƽƭ� 
  int b[32]={0};                   //�ŧi�G�i��}�C 
  int c=0,d=0;                     //�ŧi�G�i���ƺX��,1�Ӽƭp�� 
  int i;                           //�ŧifor�j���ܼ�
  
  for(i=0;i<32;i++){
    s=x/2; b[i]=x%2; x=s; c=i;     //s�sx�Ӽ�,�G�i��}�C�sx�l��,s�ǵ�x,c�s��ƺX�� 
    if(s==0) break;                //�p�G�ӼƬ�0,���X�j�� 
  }
  for(i=c;i>=0;i--)
  {if(b[i]==1) d++;}               //�p�G�Ӧ�Ƭ�1.�p�ƭ�+1 
  
  //======================�H�U����X====================
  printf("The parity of ");
  for(i=c;i>=0;i--)
  {printf("%d",b[i]);}
  printf(" is %d (mod 2).\n",d);
}
int main(int argc, char *argv[])
{
  unsigned long sum[100];       //�ŧi��J�ƭ� 
  unsigned long s=1;            //�ŧi�˴��� 
  int c=0;                      //�ŧi���Ƽƭ� 
  int i;                        //�ŧifor�j���ܼ� 
  
  while(s!=0){
    scanf("%lld",&sum[c]);      //��J�ƭ� 
    s=sum[c];                   //�N�ƭȶǵ��˴��� 
    c++;                        //�p�ƭ�+1 
  }
  for(i=0;i<(c-1);i++)
  {bin(sum[i]);}                //�N�ƭȶǵ��Ƶ{�� 
	
  return 0;
}
