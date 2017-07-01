/*
========UVA10035========
===Primary Arithmetic===
�\��G�p��X��Ƭۥ[�ɡA�@���X�Ӧ�Ʀ��i�� 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void carry(unsigned long x,unsigned long y)
{
  int za[15]={0};                                   //�ŧi�s��}�C 
  int s=0,len=0,p=0,q=0;                            //�ŧi1���p�ƭ�,���׭�,�Q����,���� 
  int zx[10]={0},zy[10]={0},con=0,cx=0,cy=0;        //x�ƭȦs��,y�ƭȦs�� 
  int i;                                            //�ŧifor�j���ܼ� 
  
  p=x; con=0;                                       //�Nx���ȶǵ�p,con�]��0 
  while(p!=0){q=p%10; p=p/10; zx[con]=q; con++;}    //�Nx���Ȥ@�@�s��}�C 
  cx=con;                                           //������� 
  p=y; con=0;                                       //�Ny���ȶǵ�p,con�]��0 
  while(p!=0){q=p%10; p=p/10; zy[con]=q; con++;}
  cy=con;
  
  int ci=0;
  if(cx>=cy){
    for(i=0;i<=cx;i++)
    {za[i]=zx[i]+zy[i]+ci; ci=za[i]/10; za[i]=za[i]%10; if(ci>0) s++;}      //�ƭȬۥ[(x>y) 
  }else{
    for(i=0;i<=cy;i++)
    {za[i]=zx[i]+zy[i]+ci; ci=za[i]/10; za[i]=za[i]%10; if(ci>0) s++;}      //�ƭȬۥ[(y>x)
  }
  
  if(s==0) printf("No carry operation.\n");                                 //�S���i�� 
  if(s==1) printf("%d carry operation.\n",s);                               //�i�@�� 
  if(s>1) printf("%d carry operations.\n",s);                               //�i�@��H�W 
}
int main(int argc, char *argv[])
{
  unsigned long a[100]={0},b[100]={0};  //�ŧi��ư}�C 
  int za=1,zb=1,c=0;                    //�ŧi�P�_��(za,zb),�p�ƭ� 
  int i;                                //�ŧifor�j���ܼ� 
  
  while((za!=0)&(zb!=0))
  {
    scanf("%lld %lld",&a[c],&b[c]);      //��Ja,b
    za=a[c]; zb=b[c];                    //�Na,b�ǵ��P�_�� 
    c++;                                 //�p�ƭ�+1 
  }
  for(i=0;i<(c-1);i++)
  {carry(a[i],b[i]);}                    //�N�ȶǤJ�Ƶ{�� 
  
  return 0;
}
