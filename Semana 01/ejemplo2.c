//Ejemplo 2 22.02.23
#include <stdio.h>

int main(){
    int arr[5];

    arr[0] = 5;
    arr[2] = -10;
    arr[3 / 2] = 2; //Lo mismo que arr[1] = 2
    arr[3] = arr[0];

    printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);

    return 0;
}