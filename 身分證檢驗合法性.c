#include<stdlib.h>
#include<stdio.h>

    int id_num(char ch)
    {
    switch(ch)
    {
        case 'A': return 10 ;break;   case 'P': return 23; break;
        case 'B': return 11 ;break;   case 'Q': return 24; break;
        case 'C': return 12 ;break;   case 'R': return 25; break;
        case 'D': return 13 ;break;   case 'S': return 26; break;
        case 'E': return 14 ;break;   case 'T': return 27; break;
        case 'F': return 15 ;break;   case 'U': return 28; break;
        case 'G': return 16 ;break;   case 'V': return 29; break;
        case 'H': return 17 ;break;   case 'W': return 32; break;
        case 'I': return 34 ;break;   case 'X': return 30; break;
        case 'J': return 18 ;break;   case 'Y': return 31; break;
        case 'K': return 19 ;break;   case 'Z': return 33; break;
        case 'L': return 20 ;break;
        case 'M': return 21 ;break;
        case 'N': return 22 ;break;
        case 'O': return 35 ;break;
    }
}

int main(){

        char id[12];
        int i=0,tmp,tmp2,total=0;
        printf("�п�J�ˬd���Τ@�s��:");
                for(i=0;i<10;i++)       //��FOR�j���JID
                 scanf(" %c",&id[i]);   //�P�_�u�ϥΤ@�Ӧr��

        if((id[0]>='a'&& id[0]<='z')||(id[0]>='A' && id[0]<='Z')||(id[0]>='a'&& id[0]<='z')||(id[0]>='A' && id[0]<='Z'))        //�P�_�O�_�έ^��
                {tmp=id_num(id[0]);
                if((id[1]=='A' || id[1]=='B'|| id[1]=='C'|| id[1]=='D'))        //�P�_�ĤG�ӬO�_��ABCD
                        {
                        tmp2=id_num(id[1]);
                        total=(tmp%10)*9+tmp/10+(tmp2%10)*8+(id[2]-'0')*7+(id[3]-'0')*6+(id[4]-'0')*5+(id[5]-'0')*4+(id[6]-'0')*3+(id[7]-'0')*2+(id[8]-'0')*1+(id[9]-'0')*1;    //�p���Ӫ���
                        if((total%10) ==0)
                        {
                                printf("�Τ@�Ҹ� ");
                                for(i=0;i<10;i++)
                                {printf("%c",id[i]);}
                                printf(" �X�k\n");}
                        else
                                printf("�Τ@�Ҹ� ");
                                for(i=0;i<10;i++)
                                {printf("%c",id[i]);}
                                printf(" ���X�k\n");}
                else
                        printf("��J���~�A�ĤG�X�^��r����A�BB�BC��D\n");}

        else
        printf("�榡���~�A�e��X�����^��r��\n");



}

