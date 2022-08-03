#include<stdio.h>
#include<stdlib.h>

int main(){
int kg,cm,age;
char name[2];
char sex,F,M;
float end=0.000;
        printf("請輸入您的姓名:");
        scanf("%s",&name);
        printf("請輸入您的體重(公斤):");
        scanf("%d",&kg);
        printf("請輸入您的身高(公分):");
        scanf("%d",&cm);
        printf("請輸入您的年齡(整數):");
        scanf("%d",&age);
        fflush(stdin); //清除緩衝區
        printf("請輸入您的性別(M/F):");
        scanf(" %c",&sex);
        if(sex=='M'){
        end=(1.2*(float)kg/(((float)cm/100)*((float)cm/100))+(0.23*(float)age-5.4)-10.8*1);
        printf("(%s)的體指率為 %.3f %",name,end);
        if(end>=25.0)
                printf(",判定分級為 %c\033[1;35;40m過胖\033[0m%c\n",34,34);
        else if(end>=20.0)
                printf(",判定分級為 %c\033[1;31;40m肥胖\033[0m%c\n",34,34);
        else if(end>=17.0)
                printf(",判定分級為 %c\033[1;33;40m略胖\033[0m%c\n",34,34);
        else if(end>=13.0)
                printf(",判定分級為 %c\033[1;32;40m正常\033[0m%c\n",34,34);
        else if(end<=10.0)
                printf(",判定分級為 %c\033[1;37;40m健美\033[0m%c\n",34,34);
        else if(end<=7.0)
                printf(",判定分級為 %c\033[1;34;40m精瘦\033[0m%c\n",34,34);
        else
                printf(",判定分級為 %c\033[1;36;40m過瘦\033[0m%c\n",34,34);
        }
       if(sex=='F')
        {
        end=(1.2*(float)kg/(((float)cm/100)*((float)cm/100))+(0.23*(float)age-5.4)-10.8*0);
        printf("(%s)的體指率為 %.3f %",name,end);
         if(0<=end&&end<=13.9)
                printf(",判定分級為 %c\033[40;36m過瘦\033[0%c\n",34,34);
        else if(14<=end&&end<=16.9)
                printf(",判定分級為 %c\033[40;34m精瘦\033[0m%c\n",34,34);
        else if(17<=end&&end<=19.9)
                printf(",判定分級為 %c\033[40;37m健美\033[0m%c\n",34,34);
        else if(20<=end&&end<=23.9)
                printf(",判定分級為 %c\033[40;32m正常\033[0m%c\n",34,34);
        else if(24<=end&&end<=26.9)
                printf(",判定分級為 %c\033[40;33m略胖\033[0m%c\n",34,34);
        else if(27<=end&&end<=29.9)
                printf(",判定分級為 %c\033[40;31m肥胖\033[0m%c\n",34,34);
        else
                printf(",判定分級為 %c\033[40;35m過胖\033[0m%c\n",34,34);

        }
}

