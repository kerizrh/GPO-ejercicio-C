#include <stdio.h>
int main() {
    int a = 5, b = 0;
    printf("%d", a / b); // Esto causará una división por cero
    return 0; //Simulara un error en C y dara un mensaje de error en kernel
}
