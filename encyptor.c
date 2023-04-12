#include <stdio.h>
#include <encrypt.c>


void
main(int argc, char **argv) {
    if(!argc) {
        printf("Arguments can't be empty. Use --help\n");
    }
    
    else if(argv[7]=="--help") {
        printf("");
    }

    else if(argc) {

    }
    else {
        return 0;
    }
};