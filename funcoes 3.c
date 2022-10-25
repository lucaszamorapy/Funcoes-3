/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

media(float x, float y, float z, float w){
    float aux;
    aux=(x+y+z+w)/4;
    if(aux>=6)
    printf("Aprovado com media %f\n",aux);
    else
    printf("Reprovado com media %f\n",aux);
    }
    float validacaonota(){
        float aux;
        do{
            scanf("%f",&aux);
            if(aux<0||aux>10){
                printf("Valor invalido");
                printf("Digite uma nota que seja maior ou igual a zero\n");
            }
        }while(aux<0||aux>10);
        return(aux);
    }
    main(){
        float n1,n2,n3,n4;
        printf("Digite a primeira nota\n");
        n1=validacaonota();
        printf("Digite a segunda nota\n");
        n2=validacaonota();
        printf("Digite a terceira nota\n");
        n3=validacaonota();
        printf("Digite a quarta nota\n");
        n4=validacaonota();
        media(n1,n2,n3,n4);
    }



