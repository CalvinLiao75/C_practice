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

printf("\n請出拳 1剪刀 2石頭 3布:");
scanf("%d",&a); 
 while (getchar() != '\n');
 
 if((a != 1) && (a != 2)&&(a != 3)){printf("輸入錯誤\n");}
 
}while((a != 1) && (a != 2)&&(a != 3));

	srand( (unsigned)time(NULL) ); ㄌ 
    b=rand()%3+1;
	
	printf("%d",b);
	
	
	
	if((b==1)&&(a==1))
		{
		printf("電腦出剪刀、你出剪刀、平手喔");
			c=0;
		} 
	if((b==1)&&(a==2))
		{printf("電腦出剪刀、你出石頭、你贏囉");
		c=1;	
} 
	if((b==1)&&(a==3))
	printf("電腦出剪刀、你出布、你輸囉");{
			c=0;
	} 
		


	if((b==2)&&(a==1))
	{printf("電腦出石頭、你出剪刀、你輸囉");
		c=0;	
} 
	if((b==2)&&(a==2))
	{	
	printf("電腦出石頭、你出石頭、平手喔");
	c=0;
} 
	if((b==2)&&(a==3))
	{printf("電腦出石頭、你出布、你贏囉");
	c=1;
} 
		
	if((b==3)&&(a==1))
	{	
	printf("電腦出布，你出剪刀，你贏囉");
	c=1;
} 
	if((b==3)&&(a==2))
	{
	printf("電腦出布，你出石頭，你輸囉");
	c=0;
	} 
	if((b==3)&&(a==3))
	{	
	printf("電腦出布，你出布，平手喔");
	c=0;
	} 
}while(c!=1);

}

