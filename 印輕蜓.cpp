#include <stdio.h>
int main() {
	float a,b;
	float d;
	printf("Please input the size of the dragonfly:");
	scanf("%f",&a);
	b=a;
	d=a;
	for(int i=1;i<=2*a+1;i++){
		printf(" ");
	}
	printf("*");
	for(int i=1;i<=a-2;i++){
		printf(" ");
	}
	printf("*\n");
	
	
	for(int i=1;i<=a;i++){     //�W�ͻH 
if(i>1){                       //�W�ͻH�p�G���O�Ĥ@�h�̥���n�}�l�Ů� 

	for(int k=1;k<=i-1;k++)    //�ĤG�h�}�l���O�� 1.2.3�� 
	{
		printf(" ");
	}
}
	for(int i=1;i<=a+2;i++)     // 
	{
		printf("*");
	}
	
	for(int i=1;i<=b-1;i++)
	{
		printf(" ");
	}	
	for(int i=1;i<=a;i++){
		printf("*");
	}		
	for(int i=1;i<=b-1;i++)
	{
		printf(" ");
	}	
	for(int i=1;i<=a+2;i++){
		printf("*");
	}

		printf("\n");
	b-=1;
	}

	
	for(int i=1;i<=a;i++)//���ͻH 
	{
		printf(" ");
	}
	
	for(int i=1;i<=3*a+2;i++)//���ͻH 
	{
		printf("*");
	}
	printf("\n");
		
		for(int i=a;i>=1;i--){     //�U�ͻH    �U�ͻH���O���� ��3�h ��2�h ��1�h 
if(i<a+1){                       //�U�ͻH�p�G���O�̫�@�h�̥���n�}�l�� 2 1 0 �� 

	for(int k=i-1;k>=1;k--)    //�U�ͻH��1�h(�̥���)�}�l���O��  2 1 0�� 
	{
		printf(" ");
	}
}
	for(int i=1;i<=a+2;i++)     // 
	{
		printf("*");
	}
	
	for(int i=b;i>=1;i--)
	{
		printf(" ");
	}	
	for(int i=1;i<=a;i++){
		printf("*");
	}		
	for(int i=b;i>=1;i--)
	{
		printf(" ");
	}	
	for(int i=1;i<=a+2;i++){
		printf("*");
	}

		printf("\n");
	b+=1;
	}
		
	
	
	
	for(int i=(a+1)/2;i>=1;i--)        //�@3�`���� 
	{           
			for(int i=1;i<=a;i++)      //�@�`5�h 
		{             
		
				for(float k=1;k<=2*d+1;k++)
					{
						printf(" ");
					}
				for(int c=1;c<=b;c++)
					{
						printf("*");
					}
				for(int d=1;d<=2*a+1;d++)
					{
						printf(" ");
					}
				printf("\n");
		}
			d+=0.5;//�Ů�ݭn�h�@�� 
			b-=2;//�S���D 
	}
	
	
	
	
	}
	
	
	

