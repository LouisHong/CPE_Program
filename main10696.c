/*
========UVA10696========
==========f91===========
�\��G����McCarthy�������j��f91�{��
f91�G��J�@�ӥ����N�åB�̾ڥH�U���W�h�Ǧ^�@�ӥ���ơG
1)�p�GN<=100,����f91(N)=f91(f91(N+11))
2)�p�GN>=101,����f91(N)=N-10
*/

#include <stdio.h>
#include <stdlib.h>

int f91(int a)//f91�Ƶ{��(���j,�����D�N���N���P) 
{                       
  if(a<=100){           //�p�GN<=100 
    a=f91(f91(a+11));   //f91(N)=f91(f91(N+11))
  }else{                //�p�GN>=101
    a-=10;              //f91(N)=N-10
  }
                        
  return a;            //�N���G�^�� 
}
int main(int argc, char *argv[])
{
  int n[250000]={0};    //�ŧi�s��ƭȰ}�C 
  int s=1,c=0;          //�ŧi�P�_��,�p�ƭ� 
  int i;                //�ŧifor�j���ܼ� 
  
  while(s!=0){
    scanf("%d",&n[c]);                       //��J�ƭ� 
    s=n[c];                                  //�N�ƭȶǵ��P�_�� 
    c++;                                     //�p�ƭ�+1 
  }
  for(i=0;i<(c-1);i++)
  {printf("f91(%d) = %d\n",n[i],f91(n[i]));} //�N�ƭȶǵ��Ƶ{���ÿ�X 
	
  return 0;
}
