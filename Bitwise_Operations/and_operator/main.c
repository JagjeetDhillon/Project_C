#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int bitCounter(int n){
    int count = 0;
    while(n>0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;   
}

 void main(){
    int a = 4;
    int b = 5;
    printf("%d & %d = %d\n",a,b,a&b);
    printf("%d | %d = %d\n",a,b,a|b);
    printf("%d ^ %d = %d\n",a,b,a^b);
    printf("~ %d = %d\n",a,~a);
    printf(" %d >> 2 = %d\n",a,a>>2);
    printf(" %d << 2 = %d\n",a,a<<2);

    if(b&1){
        printf("the first bit is set\n");
    }else{
        printf("the first bit is not set\n");
    }
    for(int i = 0;i < 256;i++)
    {
        printf("Bitcount of %d is %d \n",i ,bitCounter(i));    
    }
    
 }  
