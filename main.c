#include "stdio.h"
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