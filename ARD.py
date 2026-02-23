import sys

def es_id(cadena):
    if len(cadena) == 0:
        return False
    
    # Primer carácter debe ser letra
    if not cadena[0].isalpha():
        return False
    
    i = 1
    while i < len(cadena):
        if i+1 >= len(cadena):
            return False
        
        if cadena[i].islower() and cadena[i+1].isdigit():
            i += 2
        else:
            return False
    
    return True


def es_entero(cadena):
    return len(cadena) > 0 and cadena.isdigit()


def es_incremento(cadena):
    return cadena == "++"


def es_suma(cadena):
    return cadena == "+"


def evaluar(cadena):
    if es_incremento(cadena):
        return True
    elif es_suma(cadena):
        return True
    elif es_entero(cadena):
        return True
    elif es_id(cadena):
        return True
    else:
        return False


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Uso: python programa.py archivo.txt")
        sys.exit(1)

    with open(sys.argv[1], "r") as archivo:
        for linea in archivo:
            cadena = linea.strip()
            if evaluar(cadena):
                print("acepta")
            else:
                print("no acepta")
