/*
=======UVA10344======
=====23 Out of 5=====
�\��G��J���ӼƦr,�b5�ӼƦr�����J�@�ǹB��l�ϱo���G��23 
*/

#include <stdio.h>
#include <stdlib.h>

int ch23(int *a[],int *n[])//�⦡�p��Ƶ{�� 
{
  int b[4],d[5];      //�ŧi�s��Ÿ�,�ƭȰ}�C 
  int i;              //�ŧifor�j��}�C
  
  for(i=0;i<5;i++){d[i]=n[i];}                               //�N�ƭȰO���s��d�}�C��
  for(i=0;i<4;i++){
    b[i]=a[i];                                               //�N�Ÿ��O���s��b�}�C�� 
    if(b[i]==2) {d[i+1]=d[i]*d[i+1]; d[i]=0; b[i]=b[i-1];}   //�p�G�Ÿ���"x",�u���B�z,��e���ƭȬ�0,��e�Ÿ������e���Ÿ� 
  }
  for(i=0;i<4;i++){
    if(b[i]==0) d[i+1]=d[i]+d[i+1];                          //�۾F��Ƭۥ[(���G���ᶵ) 
    if(b[i]==1) d[i+1]=d[i]-d[i+1];                          //�۾F��Ƭ۴�(���G���ᶵ) 
  }
  
  return d[4];                                               //�N�ѥX�Ӫ����צ^�� 
}
int q235(int *n[])//�P�_�O�_�����׬�23���զX�Ƶ{�� 
{
  int ans=0,p=0,s=0;                               //�ŧi�p���,�Q����,��X�P�_�� 
  int m[4]={0};                                    //�ŧi�Ÿ������}�C 
  int i,j;                                         //�ŧifor�j��}�C 
  
  for(i=0;i<256;i++){                              //============================
    p=i;                                           //�Ÿ��t��,�����Ÿ��ܰ}�C0~256=>0000~3333(4�i��)
    for(j=0;j<4;j++){m[j]=p%4; p=p/4;}             //============================
    ans=ch23(m,n);                                 //�p�� 
    if(ans==23) {s=1; break;}                      //�p�G�⦡��X�ᵪ�׬�23,�N���X�j��,s=1 
  }
  
  return s;                                        //�N�P�_���G�^�� 
}
int main(int argc, char *argv[])
{
  int a[5]={0},n[25][5];  //�ŧi�P�_�Ȱ}�C,���ư}�C 
  int c=0,s=0;            //�ŧi�p�ƭ�,�P�_�� 
  int i;                  //�ŧifor�j��}�C 
  
  for(i=0;i<5;i++){a[i]=1;}                                               //�N�P�_�Ȱ}�C���]��1 
  while((a[0]!=0)&(a[1]!=0)&(a[2]!=0)&(a[3]!=0)&(a[4]!=0)){
    scanf("%d %d %d %d %d",&n[c][0],&n[c][1],&n[c][2],&n[c][3],&n[c][4]); //��J5�ӼƦr 
    for(i=0;i<5;i++){a[i]=n[c][i];}                                       //�N�Ʀr�ǵ��P�_�}�C 
    c++;                                                                  //�p�ƭ�+1 
  }
  for(i=0;i<(c-1);i++){
    s=q235(n[i]);                                                         //�N���ư}�C��J�Ƶ{�� 
    if(s==1) printf("Possible\n");                                        //�Y�����׬�23���զX�N��XPossible 
    else printf("Impossible\n");                                          //�p�G�S��,��XImpossible
  }
  
  system("PAUSE");	
  return 0;
}
