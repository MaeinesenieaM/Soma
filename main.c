#include <stdio.h>
#include <locale.h>

int main ()
{
    //Alocando memoria para os somadores e o resultado.
    int num01 = 0;
    int num02 = 0;
    int res = 0; 

    setlocale (LC_ALL, "Portuguese"); //Formata a linguagem do programa.

    printf ("======Somador======\n\n");
    printf ("Insira um número: ");
    scanf ("%d", &num01);
    printf ("Insira o somador: ");
    scanf ("%d", &num02);

    res = (num01 + num02);

    printf ("O Resultado da soma: %d", res);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}