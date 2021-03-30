//
// Created by Jon Moríñigo on 30/3/21.
//
#include<stdio.h>
#include<string.h>

void main(int argc , char *argv[])
{
    FILE *fp;
    char line[100];

    // initialsing the file pointer to read
    fp = fopen(argv[2],"r");

    // reading line by line and comparing each word in line
    while(fscanf(fp , "%[^\n]\n" , line)!=EOF)
    {
        if(strstr(line , argv[1]) !=NULL)
        {
            // print that line
            printf("%s\n" , line);
        }
        else
        {
            continue;
        }
    }
    fclose(fp);
}