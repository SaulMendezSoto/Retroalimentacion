#include "stdio.h"
void capturar_enteros(){
    int enteros[5],suma=0,i;
    float promedio;
    for(i=0; i<5; i++){
        scanf("%i",&enteros[i]);
    }
    for(i=0; i<5; i++){
        printf("%i\n",enteros[i]);
    }
    for(i=0; i<5; i++){
        suma=suma + enteros[i];
    }
    printf("suma= %i", suma);
    printf("Promedio= %i",suma/5.0);
}
int main(){
    char op;
    do
    {
        printf("1) capturar enteros \n");
        printf("2) mostrar cadena n veces \n");
        printf("3) capturar personaje \n");
        printf("0) salir \n");
        scanf("%c",&op);


        switch (op)
        {
        case '1':
         capturar_enteros();
            break;
        case'2':
            break;
        case'3':
            break;
        
        default:
            break;
        }

        fflush(stdin);
    } while (op != '0');
    
    


    return 0;
}