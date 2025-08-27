#include <stdio.h>

//fscanf

int main() {

    char arr[10];
    FILE *fp = fopen("hello.txt", "r");

    while (fgets(arr, 10, fp) != NULL)
        printf("%s", arr);

    fscanf(fp, "");

    fclose (fp);
    return 0;

}

//fopen, fread, fclose