#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
int main(){
int b;
int a;
int c;
do{
	 c=0;
do{

printf("\n�ХX�� 1�ŤM 2���Y 3��:");
scanf("%d",&a); 
 while (getchar() != '\n');
 
 if((a != 1) && (a != 2)&&(a != 3)){printf("��J���~\n");}
 
}while((a != 1) && (a != 2)&&(a != 3));

	srand( (unsigned)time(NULL) ); �{ 
    b=rand()%3+1;
	
	printf("%d",b);
	
	
	
	if((b==1)&&(a==1))
		{
		printf("�q���X�ŤM�B�A�X�ŤM�B�����");
			c=0;
		} 
	if((b==1)&&(a==2))
		{printf("�q���X�ŤM�B�A�X���Y�B�AĹ�o");
		c=1;	
} 
	if((b==1)&&(a==3))
	printf("�q���X�ŤM�B�A�X���B�A���o");{
			c=0;
	} 
		


	if((b==2)&&(a==1))
	{printf("�q���X���Y�B�A�X�ŤM�B�A���o");
		c=0;	
} 
	if((b==2)&&(a==2))
	{	
	printf("�q���X���Y�B�A�X���Y�B�����");
	c=0;
} 
	if((b==2)&&(a==3))
	{printf("�q���X���Y�B�A�X���B�AĹ�o");
	c=1;
} 
		
	if((b==3)&&(a==1))
	{	
	printf("�q���X���A�A�X�ŤM�A�AĹ�o");
	c=1;
} 
	if((b==3)&&(a==2))
	{
	printf("�q���X���A�A�X���Y�A�A���o");
	c=0;
	} 
	if((b==3)&&(a==3))
	{	
	printf("�q���X���A�A�X���A�����");
	c=0;
	} 
}while(c!=1);

}

