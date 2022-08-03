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
	
	
	for(int i=1;i<=a;i++){     //上翅膀 
if(i>1){                       //上翅膀如果不是第一層最左邊要開始空格 

	for(int k=1;k<=i-1;k++)    //第二層開始分別空 1.2.3格 
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

	
	for(int i=1;i<=a;i++)//中翅膀 
	{
		printf(" ");
	}
	
	for(int i=1;i<=3*a+2;i++)//中翅膀 
	{
		printf("*");
	}
	printf("\n");
		
		for(int i=a;i>=1;i--){     //下翅膀    下翅膀分別為為 第3層 第2層 第1層 
if(i<a+1){                       //下翅膀如果不是最後一層最左邊要開始空 2 1 0 格 

	for(int k=i-1;k>=1;k--)    //下翅膀第1層(最左邊)開始分別空  2 1 0格 
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
		
	
	
	
	for(int i=(a+1)/2;i>=1;i--)        //共3節尾巴 
	{           
			for(int i=1;i<=a;i++)      //一節5層 
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
			d+=0.5;//空格需要多一個 
			b-=2;//沒問題 
	}
	
	
	
	
	}
	
	
	

