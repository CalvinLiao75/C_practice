#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
	char data[5];
	struct node *next;
};
typedef struct node Node;

  int i=0,val;
  char name[5];
  Node *first,*current,*previous;
  
  
void Reverse(Node *first){               //���j                   /*�����C*/
	if (first->next!=NULL){
		 Reverse(first->next);
	}	
	printf("%s\n",first->data);
}




int main(int argc, char *argv[])
{

 
	do{
		
  
	
  	current=(Node *) malloc(sizeof(Node));//�إ߷s�`�I
	printf("please input the name#%d: ",i+1);
	scanf("%s",&(current->data)); //��J�`�I��data����

	
	strcpy(name,current->data);
	 
	 	if(name[0]=='0')
	{
	
		break;
		}	
		
	 if((strlen(name)!=5))     //�O�_����� 
		{
			printf("Input error\n");
			continue;
		}

int c;

		if(!((((name[0]>=65)&&(name[0]<=90))||((name[0]>=97)&&(name[0]<=122)))
			&&(((name[1]>=65)&&(name[1]<=90))||((name[1]>=97)&&(name[1]<=122)))
		   	&&(((name[2]>=65)&&(name[2]<=90))||((name[2]>=97)&&(name[2]<=122)))
			&&(((name[3]>=65)&&(name[3]<=90))||((name[3]>=97)&&(name[3]<=122)))
			&&(((name[4]>=65)&&(name[4]<=90))||((name[4]>=97)&&(name[4]<=122)))))
		{
			printf("Input error\n");
			continue;
		}	

	if(i==0){
		first=current;  //�p�G�O�Ĥ@�Ӧ��������frist���V�ثe���`�I 
	}else{
		previous->next=current;//��e�@�Ӫ�next���V�ثe���`�I 
	}
	current->next=NULL; //��ثe���`�I��next���VNULL
	previous=current; //��e�@�Ӹ`�I�]���ثe���`�I 
    i++;
  }while(name[0]!='0');
  
  current=first; //�]current���Ĥ@�Ӹ`�I 
  printf("����\n");
  printf("-----\n");
  
  while(current!=NULL){		
	printf("%s \n",current->data); //�L�X�`�I����� 
	current=current->next;  //�Nptr���V�U�@�Ӹ`�I 
  } 
  	printf("-----\n");
  printf("�˧�\n");
  	printf("-----\n");
	Reverse(first);                                /*�����Ӧ�C*/
	
	printf("-----\n");
	
	
  system("PAUSE");	 
  return 0;

}
