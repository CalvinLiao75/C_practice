#include <stdio.h>
#include <stdlib.h>
	  
int main(){
	int num,tmp=0;
	
	int *p=0;   //���� 
	int i=0;
	do{

		printf("�п�J�����: ");
		scanf("%d",&num);
		if(num==-1)break;
		p=(int*)realloc(p,sizeof(int)*(i+1));
			
		p[i]=num; 
		i++;	
	}while(num>=0);   //�j��0�N�~�� 


	int a,b;	
		for(a=0;a<i;a++){
			for(b=a;b<i;b++){
				if(p[b]>p[a])
				{
					tmp=p[b];
					p[b]=p[a];
					p[a]=tmp;	
				}
			}
		}
	
		for(a=0;a<i;a++){
		
		printf("%d ",p[a]);
}
} 
