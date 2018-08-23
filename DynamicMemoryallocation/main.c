#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

char* combineStrings(char*p0, char*p1){
    if (NULL==p0 && NULL==p1){
        return NULL;
    }
    int size = strlen(p0)+strlen(p1);
    char* pResult = (char*)malloc(sizeof(char)*(size+1)); // we add +1 for null charactor to 

    if(NULL==pResult){
        return NULL;
    }
    //first apparoch to do operation
    //strcpy(pResult,p0);
    //strcat(pResult,p1);
    //second operation to do operation
    sprintf(pResult,"%s%s",p0,p1);
    return pResult;
}
void main(){
    char* pResult = combineStrings("hello my name is ","Jagjeet Singh Dhillon");
    if(NULL!=pResult){
        printf("Result = %s\n",pResult);
        free(pResult);
        pResult==NULL;
    }

}