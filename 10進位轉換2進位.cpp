#include<stdio.h>
#include<string.h>
int main()
{	
    int n,n1,i,a[100]={0},b[100]={0},t;
    int c,d;
    
    do{ 
    printf("請輸入被乘數");
	scanf("%d",&n);

	}while(n<0||n>2147483647);
	
	 do{ 
    printf("請輸入乘數");
	scanf("%d",&n1);

	}while(n1<0||n1>2147483647);
	c=n;
	d=n1;

        i=0;
        while(n>0)
        {	
            a[i]=n%2;
            n/=2;
            i++;

        }
        printf("被乘數%d轉換為二進位結果:",c);
        for(i--;i>=0;i--)
            printf("%d",a[i]);
        printf("\n");
  
 		i=0; 
  		 while(n1>0)
        {	
            b[i]=n1%2;
            n1/=2;
            i++;

        }
        printf("被乘數%d轉換為二進位結果:",d);
        for(i--;i>=0;i--)
            printf("%d",b[i]);
        printf("\n");
  	
  	
  	
  //for(){
 // for(){
  	
 // }
//  }
  
  
    return 0;
}

