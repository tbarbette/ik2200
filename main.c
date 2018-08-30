#include <stdio.h>

int main(int argc, int argv) {
    printf("Hello world !");

    if (argc <= 1)
        return 1;

    int n;
    scanf("%d", &n);

    printf("%d", n * 2);

    return 0;
}
