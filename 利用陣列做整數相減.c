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
        rst[i] = fir[i]-sed[i]-borrow; // ���W�@���ɦ�
        if(rst[i]<0) {
            borrow=1, rst[i]+=10; // �ݭɦ�
        } else {
            borrow=0; // �L�ݭɦ�
        }	
	}
	}
	else if((strlen(fir)==strlen(sed))){
	n=strcmp(fir,sed);
		if(n>=0){
			for(i=0; i<max; ++i) {
        	rst[i] = fir[i]-sed[i]-borrow; // ���W�@���ɦ�
        		if(rst[i]<0) {
            	borrow=1, rst[i]+=10; // �ݭɦ�
        		} 
				else {
            	borrow=0; // �L�ݭɦ�
        		}	
		
			}	
		
		}
		else{
			for(i=0; i<max; ++i) {
        	rst[i] = sed[i]-fir[i]-borrow; // ���W�@���ɦ�
        		if(rst[i]<0) {
            	borrow=1, rst[i]+=10; // �ݭɦ�
        		} 
				else {
            	borrow=0; // �L�ݭɦ�
        		}	
			}
		
		}
	}	
	else 
	{
		n=-1;
		for(i=0; i<max; ++i) {
        rst[i] = sed[i]-fir[i]-borrow; // ���W�@���ɦ�
        if(rst[i]<0) {
            borrow=1, rst[i]+=10; // �ݭɦ�
        } else {
            borrow=0; // �L�ݭɦ�
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
 printf("��Ƥ@���ƤG���G���G");
 for(i=max-1; i>0; i--)
   if(big[i]!=0) break;
 for(; i>=0; i--)
   printf("%d", big[i]);
 printf("\n");
}

void Printt(char big[])
{                
 int i,n;
 printf("��Ƥ@���ƤG���G���G");
 printf("-");
 for(i=max-1; i>0; i--)
   if(big[i]!=0) break;
 for(; i>=0; i--)
   printf("%d", big[i]);
 printf("\n");
}


int main(){
	
	char fir[max],sed[max],rst[max];
	printf("�п�J��Ƥ@�G");
	change(fir);
	printf("�п�J��ƤG�G");
	change(sed);
	if((strlen(fir)>strlen(sed)))                 //�ݤj�p
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

	

