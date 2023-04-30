#include<stdio.h>

int main()
{
    float valor1;
    float valor2;
    float resultado;
    char operation;

//get data from user

    printf("Bem vindo a calculadora jonathon. Aqui os resultados são rápidos!\n");
    scanf("%f", &valor1);
    scanf("%s", &operation);
retorno2:
    scanf("%f", &valor2);

//select correct operation
retorno:

    switch (operation)
    {
    case '^':
        while(valor2>1)
        {
            valor1 = valor1*valor1;
            valor2--;
        }
        resultado=valor1;
        break;
        
    case 'x':
        resultado=valor1*valor2;
        valor1=resultado;
        break;
    case '*':
        resultado=valor1*valor2;
        valor1=resultado;
        break;
    case '/':
        resultado=valor1/valor2;
        valor1=resultado;
        break;
    case '-':
     resultado=valor1-valor2;
     valor1=resultado;
        break;
    case '+':
        resultado=valor1+valor2;
        valor1=resultado;
        break;
    
    default:
        printf("escolha uma operação válida!");
        operation='z';
        break;
    }

//invalid number

    if (operation=='z')
    {
        scanf("%s",&operation);
        goto retorno;
    }
//results and re-run the code
    printf("%f\n", resultado);
    scanf("%s", &operation);
    if(operation=='=')
    {
        printf("Seu resultado é: %f.\nNós da calculadora jonathon ficamos felizes em ter ajudado!!!\n", resultado);
        return 0;
    }
    else
    {
        goto retorno2;
    }    
}