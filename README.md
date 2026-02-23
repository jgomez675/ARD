IMPLEMENTACIÓN DE UN AUTÓMATA RECONOCEDOR DETERMINISTA (ARD)
Validación de Tokens en C y Python

1. DESCRIPCIÓN GENERAL

El presente proyecto consiste en la implementación de un Autómata Reconocedor Determinista (ARD) cuyo propósito es validar cadenas de caracteres pertenecientes a determinados lenguajes formales. El sistema analiza cadenas almacenadas en un archivo de texto y determina si son aceptadas o rechazadas según las reglas definidas.

Los lenguajes reconocidos son:

- Identificador (id): [A-Za-z]([a-z][0-9])*
- Entero: [0-9]+
- Operador suma: +
- Operador incremento: ++

Por cada cadena evaluada, el programa imprime únicamente:

acepta

o

no acepta

El proyecto fue desarrollado en dos lenguajes de programación:

- Python 3
- C (compilado con GCC)

El entorno de ejecución es Linux.


2. DEFINICIÓN FORMAL DEL AUTÓMATA

El autómata se define formalmente como:

M = (Q, Σ, δ, q0, F)

Donde:

Q  = Conjunto finito de estados.
Σ  = Alfabeto de entrada (letras, dígitos y símbolo '+').
δ  = Función de transición determinista.
q0 = Estado inicial.
F  = Conjunto de estados de aceptación.

El reconocimiento se realiza de manera determinista. Para evitar ambigüedad léxica, el operador "++" se evalúa antes que el operador "+".


3. REQUISITOS DEL SISTEMA

El sistema debe ejecutarse en Linux.

Se requiere:

- Python 3
- GCC (GNU Compiler Collection)

Para verificar instalación:

python3 --version
gcc --version

Si GCC no está instalado:

sudo apt update
sudo apt install build-essential


4. ESTRUCTURA DEL PROYECTO

El directorio debe contener los siguientes archivos:

programa.py
programa.c
archivo.txt
README.txt

Descripción:

programa.py  -> Implementación del ARD en Python.
programa.c   -> Implementación del ARD en C.
archivo.txt  -> Archivo que contiene las cadenas a evaluar.
README.txt   -> Documento explicativo del proyecto.


5. FORMATO DEL ARCHIVO DE ENTRADA

El archivo "archivo.txt" debe contener una cadena por línea.

Ejemplo:

A
Aa1
++
+
123
a1b

Cada línea será evaluada de manera independiente por el autómata.


6. EJECUCIÓN DEL PROGRAMA EN PYTHON

Paso 1: Ubicarse en el directorio del proyecto:

cd ruta/del/proyecto

Paso 2: Ejecutar el programa:

python3 programa.py archivo.txt

El programa procesará cada línea del archivo e imprimirá el resultado por pantalla.


7. EJECUCIÓN DEL PROGRAMA EN C

Paso 1: Compilar el código fuente:

gcc programa.c -o programa

Este comando genera un archivo ejecutable llamado:

programa

Paso 2: Ejecutar el programa:

./programa archivo.txt

El sistema leerá el archivo y mostrará por salida estándar si cada cadena es aceptada o no aceptada.


8. FUNCIONAMIENTO INTERNO

El sistema realiza los siguientes pasos:

1. Abre el archivo de entrada.
2. Lee cada cadena.
3. Evalúa si la cadena pertenece a alguno de los lenguajes definidos.
4. Imprime el resultado correspondiente.

La validación se realiza utilizando funciones auxiliares que verifican patrones específicos como letras, dígitos y operadores.
