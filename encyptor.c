#include <stdio.h>



void
main(int argc, char **argv) {
    if(!argc) {
        printf("Arguments can't be empty. Use --help\n");
    }
    
    else if(argv=="--help") {
        printf("");
    }

    else if(argc) {

    }
    else {
        return 0;
    }
};