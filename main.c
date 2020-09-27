#include "stdio.h"
#include "personaje.h"

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
    printf("suma= %i\n", suma);
    printf("Promedio= %i\n",suma/5.0);
}
void mostrar(int n, char cadena []){
    int i;
    for(i=0; i<n ; i++){
        printf("%s",cadena);

    }
}
int main(){
    char op;
    char cadena[20];
    int n;
    do
    {
        printf("1) capturar enteros \n");
        printf("2) mostrar cadena n veces \n");
        printf("3) capturar personaje \n");
        printf("4) Mostrar personajes \n"); 
        printf("0) salir \n");
        scanf("%c",&op);


        switch (op)
        {
        case '1':
         capturar_enteros();
            break;
        case'2':
        printf("ingresa la cadena de 20 caracteres: ");
        fflush(stdin);
        fgets(cadena, sizeof(cadena), stdin);
        printf("n: ");
        scanf("%i",&n);
        mostrar(n,cadena);
        
            break;
        case'3':
        capturar_personajes();
            break;
            case '4':
            mostrar_personajes();
        
        default:
            break;
        }

        fflush(stdin);
    } while (op != '0');
    
    


    return 0;
}