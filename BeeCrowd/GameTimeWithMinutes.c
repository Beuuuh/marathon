#include <stdio.h>

int main()
{
    int Hi, Mi, Hf, Mf, dif;

    scanf("%d %d %d %d", &Hi, &Mi, &Hf, &Mf);
    
    dif = ((Hf*60)+Mf) - ((Hi*60)+Mi);
    
    if(dif<=0) {
        dif += 24 * 60;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);
    
    return 0;
}