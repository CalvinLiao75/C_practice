#include<stdio.h>
#include<stdlib.h> 

int main(){
	int num,i,j,k;
	int a=0,b=0;
	while(num>15||num<1||num%2==0)
	{
		printf("請輸入1~15之間的奇數:");
		scanf("%d",&num);
	}
	for(k=0;k<num;k++){					//樹葉總共需要幾層，每三排為一層 
		for(i=a;i<=a+2;i++){			//設定總共要跑幾排，共三排 不變 
			for(j=b;j<num+1;j++)		//設定要跑幾次的- 
			{
				printf("-");
			}
			for(j=0;j<2*i+1;j++)		//設定要跑幾次的* 
			{
				printf("*");
			}
			for(j=b;j<num+1;j++)		//設定要跑幾次的- 
			{
				printf("-");
			}
			printf("\n");				//每跑完一排要換行 
			num--;						//設定每下一行   -  少一個 
		}
		a++;							//設定每多一層  *  多一個 ，因為j的值沒有變 i=a,a要+1 
		num=num+3;						//把之前減掉的num+回來，+3是因為如果層數大於1，num要多+1 
		b++;							//設定 b越來越小 
	}
	for(i=0;i<num-num/2;i++)			//樹幹的部分 
	{
		for(j=0;j<num/2+2;j++)
		{
			printf("-");
		}
		for(j=0;j<num;j++)
		{
			printf("*");
		}
		for(j=0;j<num/2+2;j++)
		{
			printf("-");
		}
		printf("\n");
		
	}
	
	
	
		
}
