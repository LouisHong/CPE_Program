/*
========UVA10140========
=====Prime Distance=====
�\��G�N�@��ƭ��ন��r�Ѽg 
*/

#include <stdio.h>
#include <stdlib.h>

void prop(unsigned long long a,unsigned long long b)//��ưƵ{�� 
{
  int i,j;                              //�ŧifor�j���ܼ� 
  int c=0,s=0,d=0,min=1,max=1;          //�ŧi��ƭp�ƭ�,(��ƺX��/�̤j�t�X��),�̤p�t�X��,�̤p�t��,�̤j�t�� 
  unsigned long long x[100000]={0};     //�ŧi��Ʀs��}�C
  int q=0;
   
  for(i=a;i<=b;i++){
    for(j=2;j<i;j++){if((i%j)==0) {break;} s++;}//�P�_��� 
    if(s==i-2) {x[c]=i; c++;}                   //�N��Ƽg�J�}�C 
    s=0;
  }
  min=x[1]-x[0]; s=0; d=0;                      //�N�̤j�t�X��,�̤p�t�X��,�̤p�t��,�̤j�t�Ȫ�l�� 
  for(i=1;i<(c-1);i++){
    q=x[i+1]-x[i];                              //�N�۾F��Ƭ۴� 
    if(q>max) {max=q; s=i;}                     //���̤j�t�� 
    if(q<min) {min=q; d=i;}                     //���̤p�t�� 
  }
  if(c>1) printf("%llu,%llu are closest, %llu,%llu are most distant.\n",x[d],x[d+1],x[s],x[s+1]); //��X 
  else printf("There are no adjacent primes.\n");//�����ӽ�ƪ���X 
}
int main(int argc, char *argv[])
{
  unsigned long long a=0,b=0;                 //�ŧi�d��Ȥ���� 
  
  while(scanf("%llu %llu",&a,&b)!=EOF){
    prop(a,b);                           //�N��ƶǵ��Ƶ{�� 
  }
	
  return 0;
}
