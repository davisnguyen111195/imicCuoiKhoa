/*
*Sử dụng thư viện “pthread.h” trên linux hoặc "windown.h" trên windows viết một chương trình multithread. Với 2 thread in xen kẻ dòng chữ:
[Task 1] Say hello
[Task 2] Xin chao
*/
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
    }
    return 0;
}
