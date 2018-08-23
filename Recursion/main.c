#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
// this is a examle of implementing the Factrial function using recursive function

int Factrial_1(int n){
    //iterative apparoch
    int fact = 1;
    for(int i=n; i>1; --i){
        fact *= i;
    }
    return fact;
}
int Factrial_2(int n){
    //iterative apporoch
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int Factrial_3(int n){
    //recursive approch
    if(n==0||n==1){
        return 1;
    }
    return n* Factrial_3(n-1);
}

int main(){
    printf("Factorial of %d = %d \n",4,Factrial_1(4));
    printf("Factorial of %d = %d \n",4,Factrial_2(4));
    printf("Factorial of %d = %d \n",4,Factrial_3(4));
}