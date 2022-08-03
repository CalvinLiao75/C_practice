#include <stdio.h>
#include <string.h>
#define M 1000
#define N 20
 main()
{
    char str1[M][N];
    char str2[M];
    int strC[M];
    int i=0,j=0,k=0,t=0,x=0;
    gets(str2);
    t=strlen(str2)+1;
    printf("¿é¤J¦r¦ê?:%s\n",str2);
     
    while(j<t)  
    {
        for(;str2[j]==32;j++);
        while(k<N&&str2[j]!=32)
                str1[i][k++]=str2[j++];    
        str1[i][k]='\0'; 
        strC[i]=1;  
        for(x=0;x<i;x++) 
            if(strncmp(str1[i],str1[x],N)==0)   
            {
                strC[x]++; 
                i--;        
                break; 
            }      
            i++; 
            k=0;
    }
     
    printf("µ²ªG:\n");  
    t=0; 
    for(;t<i;t++)
        printf("%s,%d\n",str1[t],strC[t]);   
}
