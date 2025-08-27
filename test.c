#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "cleanbuffer.h"
#include "RunTest.h"
#include "option.h"
 
int main(int argc, char **argv) {
    if(argc == 1) 
    {
        printf("getopt test\n");
        printf("usage:\n");
        printf(" opts -a n -b m -o s\n");
        printf("example:\n");
        printf(" $ opts -a 323 -b 23 -o '-'\n");
        printf(" 323 - 23 = 300\n");
        return 0;
    }
    char *opts = "s:t:i:";
    int opt;
    while((opt = getopt(argc, argv, opts)) != -1) 
    {
        switch(opt) {
            case 's':
                while (c != 's')
                {
                    CleanBuffer();
                    printf ("Try again\n");
                    printf ("Enter s if you want to solve equation\nOR\n");
                    printf ("Enter t if you want to run tests\n");

                }
                return 0;
                break;
             case 't':
                printf ("UnitTest\n");
                RunTest();
                exit(1);
                break;
             case 'i':
                option();
                break;
        }
    }
    return 0;
}