#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if (argc <= 1)
        return 1;

    int n;
    scanf("%d", &n);

    int mult = atoi(argv[1]);
    printf("%d\n", n * mult);

    return 0;
}
