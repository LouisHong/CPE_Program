/*
=========UVA10008=========
===What's Cryptanalysis===
�\��G�p��@�q�ܦU�Ӧr�����Ӽ� 
*/

#include <stdio.h>
#include <stdlib.h>

char n[100][1000];            //�ŧi�����y�l�r���}�C 

void count(int x)//�p�Ʀr���Ƶ{�� 
{
  char c[26];                                           //�ŧiA~Z�r���ܼ� 
  int d[26];                                            //�ŧi�p�Ʀr���ܼ� 
  int i,j;                                              //�ŧifor�j���ܼ� 
  
  for(i=0;i<26;i++)
  {c[i]=65+i; d[i]=0;}                                  //�N�r���ܼ�A~Z��J,�N�p���ܼƭȶ�0 
  for(i=0;i<=x;i++){
    for(j=0;j<100;j++){
      if((n[i][j]>96)&(n[i][j]<123)) d[n[i][j]-97]++;   //�Y��a~z�N�N�ӭp�ƭ�+1 
      if((n[i][j]>64)&(n[i][j]<91)) d[n[i][j]-65]++;    //�Y��A~Z�N�N�ӭp�ƭ�+1
    }
  }
  for(j=26;j>0;j--){
    for(i=0;i<26;i++){
     if(d[i]==j) printf("%c %d\n",c[i],d[i]);           //�̷ӭp�Ƥj�p�ȿ�X 
    }
  }
}
int main(int argc, char *argv[])
{
  int a;                //�ŧi����ܼ� 
  int i;                //�ŧifor�j���ܼ� 
  
  scanf("%d",&a);       //��J��� 
  for(i=0;i<=a;i++)
  {gets(n[i]);}         //��J�y�l 
  count(a);             //�N��ƶǤJ�Ƶ{�� 
	
  return 0;
}
