#include <stdio.h>

int main() 
{
    char * filename = "out.txt";

    FILE *fp = fopen(filename, "w");

    fprintf(fp, "%d %d %d %d\n", );

    fclose (fp);
    return 0;

}

//fopen, fread, fclose