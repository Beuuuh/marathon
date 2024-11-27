#include <stdio.h>

int main() {
    int Hi, Mi, Hf, Mf, Drh, Drm;
    
    scanf("%d", &Hi);
    scanf("%d", &Mi);
    scanf("%d", &Hf);
    scanf("%d", &Mf);

    Hi = Hi * 60;
    Hf = Hf * 60;
    Drm = (Hf - Hi) + (Mf - Mi);
    
    if(Drm > 60) {
        Drh = Drm/60;
        Drm = Drm % 60;
    } 
    
    else {
            Drh = 0;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", Drh, Drm);
    }
}