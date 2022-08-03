#include <stdio.h>
#include <stdlib.h>
int main(){
int num,i;
struct student
{
	char name[10];
	int score;
}*ptr;

printf("num of student");
scanf("%d",&num);

ptr=(struct student *)malloc(num*sizeof(struct student));

for(i=0;i<num;i++){
	fflush(stdin);
	printf("name for student %d",i+1);
	gets((ptr+i)->name);     //¥i±µ¨üenter
	
	printf("score for stu");
	scanf("%d",&(ptr+i)->score); 
	 }
	 
	 for(i=0;i<num;i++){
	 	printf("%s:score:%d",(ptr+i)->name,(ptr+i)->score);
	 } 
	 


}
