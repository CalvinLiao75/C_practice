#include<stdio.h>
#include<stdlib.h>

int main(){
	int *n=0;
	int length=0;
	while(1){
		int input;
		printf("請輸入一個正整數：");
		scanf("%d", &input);
		if(input==-1)break;
		n=realloc(n,sizeof(int)*(length+1));
		n[length]=input;
		length++;			
	}
	int i=0,j=0;
	int temp=0;
	    for( i = 0; i < length; i++) {
        for( j = i; j < length; j++) {
            if( n[j] > n[i] ) {
                temp = n[j];
                n[j] = n[i];
                n[i] = temp;
            }
        }
    }
    printf("你所輸入的正整數有%d個\n",length);
    printf("從大到小依序為：");
	for( i = 0; i < length; i++ ) {
        printf("%d ", n[i]);
    }
	
	
	
	
} 
