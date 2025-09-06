El presente es un pequeño ejercicio en C para una guia de Gestión y programación de Sistemas Operativos de la Universidad de El Salvador

🐧 Ejercicio 3 - División por Cero en C
📌 Descripción

Este programa en C provoca una excepción de división por cero para demostrar cómo el kernel de Linux maneja errores de software.
🚀 Compilación y Ejecución
Requisitos

    Kali Linux (o cualquier distribución Linux con GCC instalado)

    Terminal de comandos

Pasos para ejecutar

    Abre una terminal en Kali Linux.

    Crea el archivo div0.c:
    bash

nano div0.c

Copia y pega el siguiente código:
c

#include <stdio.h>

int main() {
    int a = 5, b = 0;
    printf("%d", a / b); // División por cero
    return 0;
}

Guarda y cierra el editor:

    Ctrl + O → Enter → Ctrl + X

Compila el programa:
bash

gcc div0.c -o div0

Ejecuta el programa:
bash

./div0

⚠️ Resultado Esperado

Al ejecutar el programa, verás un error como:
text

Floating point exception (core dumped)

🔍 ¿Qué está pasando?

    El programa intenta dividir 5 / 0, lo cual es matemáticamente imposible.

    El CPU detecta esta operación inválida y genera una excepción.

    El kernel de Linux captura esta excepción y termina el programa para proteger la estabilidad del sistema.
