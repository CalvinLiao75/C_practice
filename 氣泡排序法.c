#include<stdio.h>
#include<stdlib.h>

int main(){
	int *n=0;
	int length=0;
	while(1){
		int input;
		printf("�п�J�@�ӥ���ơG");
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
    printf("�A�ҿ�J������Ʀ�%d��\n",length);
    printf("�q�j��p�̧Ǭ��G");
	for( i = 0; i < length; i++ ) {
        printf("%d ", n[i]);
    }
	
	
	
	
} 
