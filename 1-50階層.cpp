#include <stdio.h>

int main() {
    int i,j,N;
    //��l�ư}�C���e
   
    for(N=1;N<=50;N++){
	int a[2048]={0};
    a[0]=1;
    for (i=1 ; i<=N ; i++)  {  //i �q 1 ~ 200 �N�� 1x2x3...x200
        //�q�̧C��ƶ}�l�p��s�����G
        for (j=0 ; j < sizeof(a)/sizeof(a[0]) ; j++) {
            a[j] *= i;
        }
        //�B�z�Ʀr�i��
        for (j=0 ; j < sizeof(a)/sizeof(a[0])-1 ; j++) {
            a[j+1] += a[j]/10;
            a[j] %= 10;
        }
    }
    //�ǳƦC�L�X���G
    for (i=sizeof(a)/sizeof(a[0])-1 ; i >=0 ; i--) {
        if (a[i] != 0) break;
    }
    //�L�X�p�⧹�������G
   
        printf("%d!:",N);
       
    
	for ( ; i>=0 ; i--) {
        printf("%d",a[i]);
       
    }
    printf("\n");
   
}
}
