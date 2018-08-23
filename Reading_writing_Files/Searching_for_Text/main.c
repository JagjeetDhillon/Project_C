#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//searching for a Text in file using
//usiing colorlnFile
void main(int argc, char *argv[])
{
    if(argc!=3){
        printf("Example: colorinFile.exe <filename> <Text>\n");
        return;
    }
    char *pFile = argv[1];
    char *pWord = argv[2];
    int len = strlen(pWord);

    //need to open a file
    FILE *pin = fopen(pFile, "r");
    if(pin == NULL){
        printf("failed to open file: %s \n",pFile);
        return;
    }
    while(!feof(pin)){
        int c = fgetc(pin);
        if(EOF == c){
            break;
        }
        if(c == pWord[0]){
            char word[100];
            int index = 0;
            do{
                word[index++] = c;
                c = fgetc(pin);
            }while(!feof(pin) && index<len && index< 1000);
            word[index] = '0';
            if(strcmp(word, pWord)==0){
                printf("#######\n");
                printf("%s",word);
                printf("#######\n");
            }
            else{
                printf("%s",word);
            }
        }
        printf("%c",c);
    }
    fclose(pin);
    pin = NULL;
    printf("\n");
}
