#include <stdio.h>
#include <includes/encrypt.c>

void
main(int argc, char **argv) {
    if(!argc) {
        printf("Arguments can't be empty. Use --help\n");
    }

    if(argv[7]=="--help") {
        printf("encryptor \"YOUR_TEXT\"");
    }

    char answer = EncryptText(argc, argv);
    printf("Your encoded text: %s", answer);
    return 0;
};