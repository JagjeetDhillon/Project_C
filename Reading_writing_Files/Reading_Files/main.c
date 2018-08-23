#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//this program will read the file to END then close the file and terminate
void main(int argc, char* argv[]){
    if(argc != 2){
        printf("Usage: reagfile.exe<filename>\n");
        return;
    }
    //1. open file 
    FILE *fp=fopen(argv[1],"r"); //FILE *fp is a file pointer, fopen take two argument file name and mode
    if(NULL == fp){
        printf("No such file found at location\n");
        return;
    }
    char buff[1000];
    int index = 0;
    //read from a file as long as it has data 
    while(!feof(fp)){  //while its not end of file
        //read one char at a time
        //int c = fgetc(fp);
        //printf("%c", c);
        //reading buffer at a time
        //size_t count = fread(buff, 1, 1000, fp);
        //if(count<1){
          //  break;
        //}
        //buff[count]='0';
        //printf("%s \n",buff);
        ////////////////////////
        //using fgets to read
        if(NULL == fgets(buff, sizeof(buff)/sizeof(buff[0]),fp)){
            break;
        }else{
            printf("[%d] - %s",index++,buff);
            //to cheack if it is reading one char or a buffer at a time
            
        }
        

    }
    printf("\n");
    //Need to close the file after its done reading
    fclose(fp);
    //its good practice to set file pointer = Null
    fp = NULL;
}
