/*
========UVA10222========
===Decode the Mad man===
�\��G�ഫ��L��J�r�� 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chKey(char *a,int x)//��L�r���ഫ�Ƶ{�� 
{
  char key[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";    //��L�r���˯� 
  int i,j;                                                          //�ŧifor�j���ܼ� 
  
  for(i=0;i<x;i++){
    for(j=0;j<48;j++){
      if(a[i]==key[j]) a[i]=key[j-2];     //�v�r�˯�,�˯����˯���-2 
      if(a[i]=='I') a[i]=key[20];         //�ץ����P�t�νd�ҿ�J���խȿ��~��(I[o->you) 
    }
  }
  puts(a);                                //�r���X 
}
int main(int argc, char *argv[])
{
  char k[100];          //�ŧi��J�r�� 
  int len=0;            //�ŧi�����ܼ� 
  
  while(gets(k)!=NULL){
  len=strlen(k);        //�p��r����� 
  chKey(k,len);         //�N�r��,���׶Ǩ�Ƶ{�� 
  }
  
  return 0;
}
