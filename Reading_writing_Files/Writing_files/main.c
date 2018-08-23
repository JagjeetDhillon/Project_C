#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//example Cap files<infile><outfile>
 
void main(int argc, char *argv[])
{
    if(argc != 3){
        printf("example capfile.exe <infile> <outfile>\n");
        return;
    }
    //we need to takenames fo the files to char pointer
    char * pinFile = argv[1];
    char * poutFile = argv[2];
    //we need to open files
    //infile in read mode ; outfile in write mode
    //there must be a file to read
    FILE *fin = fopen(pinFile, "r"); //opening infile in read mode 
    
    if(NULL==fin){
        printf("There is no file to read\n");
        return;
    }
    FILE *fout = fopen(poutFile, "w"); //opening outfile in write mode
    if(NULL==fout){
        printf("There is no file to write\n");
        fclose(fin);
        fin=NULL;
        return;
    }
    // now we will read the content from fin and convert it to uppercase then write to fout
    while(!feof(fin)){
        int c = fgetc(fin);
        if(EOF != c){
            fputc(toupper(c),fout);
        }    
    }
    fclose(fin);
    fin=NULL;
    fclose(fout);
    fout=NULL;

}   

