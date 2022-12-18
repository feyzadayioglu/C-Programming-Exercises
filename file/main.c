#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * dosya = fopen("feyza.bin", "w");
    if (dosya == NULL) {

    printf("dosya acilamadi\n");
    exit(1);
}


}
