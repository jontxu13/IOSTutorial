#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{

    char c;
    FILE *source, *target;

    if (argc < 3) {
        printf("Need more parameters.\n");
        return -1;
    }

    source = fopen(argv[1], "r");
    if (source == NULL){
        printf("The source file doesn't exists.\n");
        return -1;
    }
    target = fopen(argv[2], "a");

    while( ( c = fgetc(source) ) != EOF ){
        fputc(c, target);
    }
    fclose(source);
    fclose(target);
    return 0;
}