#include <stdio.h> 
#include <stdlib.h> 

int d[5001][2000] = { 0 };
int main(){
	d[1][0] = 1;
 int i, j,k;
 for (i = 2; i <= 5000; i++)/*�j�ƹB�� �B���k�p�U,����X5000��,�]�w�C���̤j2000�Ӧ��*/
 {
  for (j = 0; j < 2000; j++)
  {
   d[i][j] += d[i - 1][j] + d[i - 2][j];
   d[i][j + 1] += d[i][j] / 10;
   d[i][j] %= 10;
  }
 }
 int n;
	printf("Please input the number of generations (1-500):");
	scanf("%d",&n);

for(k=1;k<=n;k++){
	 for (i = 1999; i >= 0; i--) /*��n������ư}�C �q�̫�@�Ӷ}�lŪ��*/
  {
   if (d[k][i] != 0)
    break;
  }
  if (i == -1)  /*��n=1�ɪ���X*/
   printf("0");
  else{
  	printf("�� %d �N�ƶq:",k);
  	for (; i >= 0; i--)
    printf("%d", d[k][i]);  /*�˿�X��Ӿ��*/
  	printf("\n");
  	
  }
  		
   
 }
	
	
}	
	


	
	
	
