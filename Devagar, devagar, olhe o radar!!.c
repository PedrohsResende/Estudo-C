//#include <stdio.h>

ints main()
{
    double velocidadeMax,velocidadeCarro,multa,pontosCarteira;
    scanf("%lf", &velocidadeMax);
    scanf("%lf", &velocidadeCarro);
    if (velocidadeCarro <= velocidadeMax)
        {multa = 0;}
    else if (velocidadeCarro <= 1.2*velocidadeMax)
        {multa = 85.13;
        pontosCarteira = 4;}
    else if (velocidadeCarro <= 1.5*velocidadeMax)
        {multa = 127.69;
        pontosCarteira = 5;}
    else
        {multa = 574.62;
        pontosCarteira = 7;
}
    printf("%2.lf\n", multa);
    printf("%2.lf", pontosCarteira);
    return 0;
}   
