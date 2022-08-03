#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

#define max 70
int big[max];
int n;
void sub(char fir[],char sed[],char rst[] )
{
    int i,n, borrow=0;
	if((strlen(fir)>strlen(sed)))
	{
		n=1;
		for(i=0; i<max; ++i) {
        rst[i] = fir[i]-sed[i]-borrow; // 扣上一次借位
        if(rst[i]<0) {
            borrow=1, rst[i]+=10; // 需借位
        } else {
            borrow=0; // 無需借位
        }	
	}
	}
	else if((strlen(fir)==strlen(sed))){
	n=strcmp(fir,sed);
		if(n>=0){
			for(i=0; i<max; ++i) {
        	rst[i] = fir[i]-sed[i]-borrow; // 扣上一次借位
        		if(rst[i]<0) {
            	borrow=1, rst[i]+=10; // 需借位
        		} 
				else {
            	borrow=0; // 無需借位
        		}	
		
			}	
		
		}
		else{
			for(i=0; i<max; ++i) {
        	rst[i] = sed[i]-fir[i]-borrow; // 扣上一次借位
        		if(rst[i]<0) {
            	borrow=1, rst[i]+=10; // 需借位
        		} 
				else {
            	borrow=0; // 無需借位
        		}	
			}
		
		}
	}	
	else 
	{
		n=-1;
		for(i=0; i<max; ++i) {
        rst[i] = sed[i]-fir[i]-borrow; // 扣上一次借位
        if(rst[i]<0) {
            borrow=1, rst[i]+=10; // 需借位
        } else {
            borrow=0; // 無需借位
        }	
	}
	}

}
    	  
	    	

int change(char big[])
{
	int i,l;
	char s[max];
	for(i=0;i<max;i++)
	big[i]=0;
	if(scanf("%s",s)<1) return -1;
	l=strlen(s);
	for(i=0; i<l; i++)
	big[i]=s[l-i-1]-'0';

 return 0;
	
}

void Print(char big[])
{                
 int i,n;
 printf("整數一減整數二結果為：");
 for(i=max-1; i>0; i--)
   if(big[i]!=0) break;
 for(; i>=0; i--)
   printf("%d", big[i]);
 printf("\n");
}

void Printt(char big[])
{                
 int i,n;
 printf("整數一減整數二結果為：");
 printf("-");
 for(i=max-1; i>0; i--)
   if(big[i]!=0) break;
 for(; i>=0; i--)
   printf("%d", big[i]);
 printf("\n");
}


int main(){
	
	char fir[max],sed[max],rst[max];
	printf("請輸入整數一：");
	change(fir);
	printf("請輸入整數二：");
	change(sed);
	if((strlen(fir)>strlen(sed)))                 //看大小
                n=1;
	else if((strlen(fir)==strlen(sed)))
                n=strcmp(fir,sed);        
    else
                n=-1;
		
	sub(fir,sed,rst);
	if(n<0)
	Printt(rst);
	else
	Print(rst);
	}

	

