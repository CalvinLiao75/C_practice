#include<stdio.h>
#include<stdlib.h>

int main(){
int kg,cm,age;
char name[2];
char sex,F,M;
float end=0.000;
        printf("�п�J�z���m�W:");
        scanf("%s",&name);
        printf("�п�J�z���魫(����):");
        scanf("%d",&kg);
        printf("�п�J�z������(����):");
        scanf("%d",&cm);
        printf("�п�J�z���~��(���):");
        scanf("%d",&age);
        fflush(stdin); //�M���w�İ�
        printf("�п�J�z���ʧO(M/F):");
        scanf(" %c",&sex);
        if(sex=='M'){
        end=(1.2*(float)kg/(((float)cm/100)*((float)cm/100))+(0.23*(float)age-5.4)-10.8*1);
        printf("(%s)������v�� %.3f %",name,end);
        if(end>=25.0)
                printf(",�P�w���Ŭ� %c\033[1;35;40m�L�D\033[0m%c\n",34,34);
        else if(end>=20.0)
                printf(",�P�w���Ŭ� %c\033[1;31;40m�έD\033[0m%c\n",34,34);
        else if(end>=17.0)
                printf(",�P�w���Ŭ� %c\033[1;33;40m���D\033[0m%c\n",34,34);
        else if(end>=13.0)
                printf(",�P�w���Ŭ� %c\033[1;32;40m���`\033[0m%c\n",34,34);
        else if(end<=10.0)
                printf(",�P�w���Ŭ� %c\033[1;37;40m����\033[0m%c\n",34,34);
        else if(end<=7.0)
                printf(",�P�w���Ŭ� %c\033[1;34;40m��G\033[0m%c\n",34,34);
        else
                printf(",�P�w���Ŭ� %c\033[1;36;40m�L�G\033[0m%c\n",34,34);
        }
       if(sex=='F')
        {
        end=(1.2*(float)kg/(((float)cm/100)*((float)cm/100))+(0.23*(float)age-5.4)-10.8*0);
        printf("(%s)������v�� %.3f %",name,end);
         if(0<=end&&end<=13.9)
                printf(",�P�w���Ŭ� %c\033[40;36m�L�G\033[0%c\n",34,34);
        else if(14<=end&&end<=16.9)
                printf(",�P�w���Ŭ� %c\033[40;34m��G\033[0m%c\n",34,34);
        else if(17<=end&&end<=19.9)
                printf(",�P�w���Ŭ� %c\033[40;37m����\033[0m%c\n",34,34);
        else if(20<=end&&end<=23.9)
                printf(",�P�w���Ŭ� %c\033[40;32m���`\033[0m%c\n",34,34);
        else if(24<=end&&end<=26.9)
                printf(",�P�w���Ŭ� %c\033[40;33m���D\033[0m%c\n",34,34);
        else if(27<=end&&end<=29.9)
                printf(",�P�w���Ŭ� %c\033[40;31m�έD\033[0m%c\n",34,34);
        else
                printf(",�P�w���Ŭ� %c\033[40;35m�L�D\033[0m%c\n",34,34);

        }
}

