int main(int argc, char** argv) {
    char palabra[] = "angela";
    int numero_letras = strlen(palabra) - 1; 
    int i = numero_letras; 
    int indice = 0; 

    printf("# de letras es: %d\n", numero_letras);
    
    char reves[numero_letras + 1]; 

    while (1) {
        printf("%c\n", palabra[i]); 
        printf("indice: %d\n", i);
        
        reves[indice] = palabra[i]; 
        indice++; 
        
        if (i == 0) {
            break; 
        }
        i--; 
    }
    reves[indice] = '\0'; 
    
    printf("Palabra al revés: %s\n", reves); 

    
    if (strcmp(palabra, reves) == 0) {
        printf("La palabra \"%s\" es un palíndromo.\n", palabra);
    } else {
        printf("La palabra \"%s\" no es un palíndromo.\n", palabra);
    }

    return 0;
}
