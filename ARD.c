#include <stdio.h>
#include <ctype.h>
#include <string.h>

int es_id(char *cadena) {
    int i = 0;
    
    if (!isalpha(cadena[0]))
        return 0;
    
    i = 1;
    
    while (cadena[i] != '\0') {
        if (!islower(cadena[i]) || !isdigit(cadena[i+1]))
            return 0;
        i += 2;
    }
    
    return 1;
}

int es_entero(char *cadena) {
    int i = 0;
    if (cadena[0] == '\0')
        return 0;
    
    while (cadena[i] != '\0') {
        if (!isdigit(cadena[i]))
            return 0;
        i++;
    }
    return 1;
}

int es_incremento(char *cadena) {
    return strcmp(cadena, "++") == 0;
}

int es_suma(char *cadena) {
    return strcmp(cadena, "+") == 0;
}

int main(int argc, char *argv[]) {
    FILE *archivo;
    char cadena[100];

    if (argc != 2) {
        printf("Uso: ./programa archivo.txt\n");
        return 1;
    }

    archivo = fopen(argv[1], "r");
    if (!archivo) {
        printf("Error al abrir archivo\n");
        return 1;
    }

    while (fscanf(archivo, "%s", cadena) != EOF) {
        if (es_incremento(cadena) || 
            es_suma(cadena) || 
            es_entero(cadena) || 
            es_id(cadena)) {
            printf("acepta\n");
        } else {
            printf("no acepta\n");
        }
    }

    fclose(archivo);
    return 0;
}
