/*
======UVA10082======
=======WERTYU=======
�\��G�ץ����r���~ 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void debug(int a,char *n)
{
  char key[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";//��L�r������ 
  int i,j;                                                      //�ŧifor�j���ܼ�
  
  for(i=0;i<a;i++){
    for(j=0;j<47;j++){
      if(n[i]==key[j]) n[i]=key[j-1];                           //�v�r����,�˯�����ޭ�+1 
    }
  }
  puts(n);                                                      //�r���X 
}
int main(int argc, char *argv[])
{
  char k[100][1000];    //�ŧi�x�s�r��}�C 
  int c=0,len=0;        //�ŧi�p�ƭ�,���׭� 
  
  while(gets(k[c])!=NULL){
    len=strlen(k[c]);     //�p��r����� 
    debug(len,k[c]);      //�N�r�����,�r��ǵ��Ƶ{�� 
    c++;                  //�p�ƭ�+1 
  }
	
  return 0;
}
