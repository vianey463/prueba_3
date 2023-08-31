#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i <= 5; i++) { // Error: índice fuera del rango del arreglo
        arr[i] = i;
    }
    return 0;
}
