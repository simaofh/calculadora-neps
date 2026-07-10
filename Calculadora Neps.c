#include<stdio.h>

void rep(float *n1, float *n2){
    printf("\nDigite o primeiro número: ");
    scanf("%f", n1);
    printf("\nDigite o segundo número: ");
    scanf("%f", n2);

}


int operacao(){


    int op;
    float n1, n2, total = 0;
    char sn;

     while(1){
        printf("===============================\n   Calculadora Simples\n===============================\n");
        printf("Selecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção: ");

        scanf("%d", &op);

        if(op==1){
            rep(&n1, &n2);
            float ad = n1+n2;
            printf("\nResultado: %.0f + %.0f = %.0f\n", n1, n2, ad);
            total+=ad;

        }else if(op==2){
            rep(&n1, &n2);
            float sub = n1-n2;
            printf("\nResultado: %.0f - %.0f = %.0f\n", n1, n2, sub);
            total+=sub;

        }else if(op==3){
            rep(&n1, &n2);
            float mult = n1*n2;
            printf("\nResultado: %.0f * %.0f = %.0f\n", n1, n2, mult);
            total+=mult;

        }else if(op==4){
            rep(&n1, &n2);
            if(n2==0){
                printf("Erro: Divisão por zero não é permitida.\n");
                continue;

            }else{
                float div = n1/n2;
                total+= div;
                printf("\nResultado: %.0f / %.0f = %.0f\n", n1, n2, div);
            }
        }else if(op==5){
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
            return 0;

        }else{
            printf("Erro: selencione uma opção válida\n");
            continue;
        }

        while(1){
            printf("Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &sn);

            if(sn=='n' || sn=='N'){
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                return 0;

            }else if(sn=='s' || sn=='S'){
                break;

            }else{
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");

            }
        }
        return 0;

}
}


int main(){
    operacao();

    return 0;
}
