#include<stdio.h>
#include<stdlib.h> 

int main(){
	int num,i,j,k;
	int a=0,b=0;
	while(num>15||num<1||num%2==0)
	{
		printf("�п�J1~15�������_��:");
		scanf("%d",&num);
	}
	for(k=0;k<num;k++){					//���`�@�ݭn�X�h�A�C�T�Ƭ��@�h 
		for(i=a;i<=a+2;i++){			//�]�w�`�@�n�]�X�ơA�@�T�� ���� 
			for(j=b;j<num+1;j++)		//�]�w�n�]�X����- 
			{
				printf("-");
			}
			for(j=0;j<2*i+1;j++)		//�]�w�n�]�X����* 
			{
				printf("*");
			}
			for(j=b;j<num+1;j++)		//�]�w�n�]�X����- 
			{
				printf("-");
			}
			printf("\n");				//�C�]���@�ƭn���� 
			num--;						//�]�w�C�U�@��   -  �֤@�� 
		}
		a++;							//�]�w�C�h�@�h  *  �h�@�� �A�]��j���ȨS���� i=a,a�n+1 
		num=num+3;						//�⤧�e���num+�^�ӡA+3�O�]���p�G�h�Ƥj��1�Anum�n�h+1 
		b++;							//�]�w b�V�ӶV�p 
	}
	for(i=0;i<num-num/2;i++)			//��F������ 
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
