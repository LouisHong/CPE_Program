/*
=======UVA00151=======
=====Power Crisis=====
�\��G�N�@��ƭ��ন��r�Ѽg 
*/

#include <stdio.h>
#include <stdlib.h>

void power(int a)//�p��̤p���q���j�ƭȰƵ{�� 
{
  int w[100]={0},x[100]={0};  //�ŧi�ϰ�ư}�C,���q���ǰ}�C 
  int i,j;                    //�ŧifor�j���ܼ�
  int s=1,c=0,d=1,ans=0;      //�ŧi�˴���,�p�ƭ�,�}�C�X��,�̤p���q�� 
  
  for(i=0;i<a;i++){w[i]=i+1;}                   //�N1~a���ƭȶ�J 
  x[0]=w[0];                                    //�N1�]���u�����q�ϰ� 
  
  for(i=1;i<=200;i++)                           //�]�Y��98��,�̤p���q�ƭȬ�113(>98),�Gi���̤j�ȳ]200 
  {  while(s<a){
      if(w[d]!=0) c++;                          //�p�G���ϰ쥼�Q�_�q,�p�ƭ�+1 
      if(c==i) {x[s]=w[d]; w[d]=0; c=0; s++;}   //�p�G�p�ƭ�=���q��,�N�ϰ�g�J���q����,�ϰ��=0,�p�ƭ�=0,�˴���+1 
      if(d>=a) d=0;                             //�p�G�X�жW�L�ϰ�Ӽƭ�,�X���k0 
      d++;                                      //�X��+1 
     }
     //=======�^�_��l��========= 
     for(j=0;j<a;j++){w[j]=j+1;}
     x[0]=w[0]; s=1; c=0; d=1;
     //==========================
     if(x[a-1]==13) break;                      //�p�G��13�Ϭ��̫ᰱ�q�ϰ�,���X�j�� 
  }
  ans=i;                                        //�N�̤p���q�ȶǵ�ans 
  printf("%d\n",ans);                           //��X�̤p���q��
}
int main(int argc, char *argv[])
{
  int n[100]={0};  //�ŧi�ϰ�Ӽư}�C 
  int s=1,c=0;     //�ŧi�˴���,�p�ƭ� 
  int i;           //�ŧifor�j���ܼ� 
  
  while(s!=0){
    scanf("%d",&n[c]);                  //��J�ϰ�Ӽ�
    s=n[c];                             //�N��J�ȶǵ��˴��� 
    c++;                                //�p�ƭ�+1 
  }
  for(i=0;i<(c-1);i++)
  {power(n[i]);}                        //�N�ϰ�Ӽƶǵ��Ƶ{�� 

  //system("PAUSE");	
  return 0;
}
