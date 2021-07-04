#include "pthread.h"
#include <stdio.h>

void *printhello(void *data) {
    while(1){
        printf("Say Hello");
    }
    return NULL;
}

int main() {
    pthread_t thread_main;
    pthread_create(&thread_main, NULL, &printhello, NULL);
    while(1) {
        printf("Xin Chao");
        delay(100);
    }
    return 0;
}