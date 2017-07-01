/*
=========UVA12019=========
===Doom's Day Algorithm===
�\��G��J����Ӭd�߬P��(��2011�~��) 
*/

#include <stdio.h>
#include <stdlib.h>

int week(int m,int d)//�p��P���Ƶ{�� 
{
  int w=0;                                      //�ŧi�^�ǭ� 
  
  if(m<=2){
    if(m==2) {w=d%7;}                           //�H2/28���P���@�ӱ��� 
    if(m==1) {w=(d+4)%7;}                       //�H1/31���P����ӱ���
  }else{
    if(m%2==0){                                 //�H4/4,6/6,8/8,10/10,12/12���P���@�ӱ���
      if(d>m) {w=(d-m)%7;}                       
      else {w=7-((m-d)%7); if(w>=7) w=w-7;}     
    }else{
      if(m<=8){                                 //�H3/3,5/5,7/7���P���|�ӱ���
        if(d>m) {w=((d-m+3)%7);}
        else {w=7-((m-d+4)%7); if(w>=7) w=w-7;}
      }else{                                    //�H9/9,11/11���P�����ӱ���
        if(d>=m) {w=(d-m+4)%7;}
        else {w=7-((m-d+3)%7); if(w>=7) w=w-7;}
      }
    }
  }
  
  return w;
}
int main(int argc, char *argv[])
{
  int n=0,x=0;                          //�ŧi��Ƶ���,�P���ܼ� 
  int M[100],D[100];                    //�ŧi��}�C,��}�C 
  int i;                                //for�j���ܼ� 
  
  scanf("%d",&n);                       //��J���� 
  for(i=0;i<n;i++)
  {scanf("%d %d",&M[i],&D[i]);}         //��J��� 
  
  for(i=0;i<n;i++){
    x=week(M[i],D[i]);                  //�N����e��Ƶ{���ñ����P���� 
    if(x==0) printf("Monday\n");        //���鬰�P���@ 
    if(x==1) printf("Tuesday\n");       //���鬰�P���G 
    if(x==2) printf("Wednesday\n");     //���鬰�P���T 
    if(x==3) printf("Thursday\n");      //���鬰�P���| 
    if(x==4) printf("Friday\n");        //���鬰�P���� 
    if(x==5) printf("Saturday\n");      //���鬰�P���� 
    if(x==6) printf("Sunday\n");        //���鬰�P���� 
  }
  
  return 0;
}
