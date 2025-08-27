#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "cleanbuffer.h"

int getopts (int argc, char *argv[])
{
    int opt = 0;

    char *opts = "sti";

    char c = 0;
    c = getchar();

    if(argc == 1) 
    {
        printf("getopt test\n");
        printf("opts -s - square_solver\n");
        printf("opts -t - run_test\n");
        //-o out.txt
        printf("opts -i - choose square_solver or run_test\n");
        return 0;
    }

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
                while (c != 't')
                    {
                        CleanBuffer();
                        printf ("Try again\n");
                        printf ("Enter s if you want to solve equation\nOR\n");
                        printf ("Enter t if you want to run tests\n");

                    }
                printf ("UnitTest\n");
                RunTest();
                exit(1); 
                break;
            case 'i':
                option();
                break;
        }
    }
}
