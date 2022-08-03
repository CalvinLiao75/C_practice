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
  
  
void Reverse(Node *first){               //遞迴                   /*反轉串列*/
	if (first->next!=NULL){
		 Reverse(first->next);
	}	
	printf("%s\n",first->data);
}




int main(int argc, char *argv[])
{

 
	do{
		
  
	
  	current=(Node *) malloc(sizeof(Node));//建立新節點
	printf("please input the name#%d: ",i+1);
	scanf("%s",&(current->data)); //輸入節點的data成員

	
	strcpy(name,current->data);
	 
	 	if(name[0]=='0')
	{
	
		break;
		}	
		
	 if((strlen(name)!=5))     //是否五位數 
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
		first=current;  //如果是第一個成員把指標frist指向目前的節點 
	}else{
		previous->next=current;//把前一個的next指向目前的節點 
	}
	current->next=NULL; //把目前的節點的next指向NULL
	previous=current; //把前一個節點設成目前的節點 
    i++;
  }while(name[0]!='0');
  
  current=first; //設current為第一個節點 
  printf("正序\n");
  printf("-----\n");
  
  while(current!=NULL){		
	printf("%s \n",current->data); //印出節點的資料 
	current=current->next;  //將ptr指向下一個節點 
  } 
  	printf("-----\n");
  printf("倒序\n");
  	printf("-----\n");
	Reverse(first);                                /*反轉整個串列*/
	
	printf("-----\n");
	
	
  system("PAUSE");	 
  return 0;

}
