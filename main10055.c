/*
===========UVA10055==========
==Hashmat the Brave Warrior==
�\��G�p��X����L�O�ۮt�h��(��Ƭ۴�) 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  unsigned long long n1=0,n2=0,a=0;         //�ŧi�S���ܼ�=>�ƭ�1�B�ƭ�2�B�۴�� 
  while(scanf("%lld%lld",&n1,&n2)!=EOF){    
    if(n1>n2) a=n1-n2;                      //�Y�ƭ�1>�ƭ�2,�ƭ�1-�ƭ�2
    if(n1<n2) a=n2-n1;                      //�Y�ƭ�1<�ƭ�2,�ƭ�2-�ƭ�1
    printf("%lld\n",a);                     //��X�۴�� 
  }
  return 0;
}
