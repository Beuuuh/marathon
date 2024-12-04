#include <stdio.h>

int main() {
    int i, evenCount, oddCount, positiveCount, negativeCount, numbers[5];

    for(i=0; i<5; i++) {
        scanf("%d", &numbers[i]);
        
        if((numbers[i] % 2) == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        if(numbers[i] > 0) {
            positiveCount++;
        }
        if(numbers[i] < 0) {
            negativeCount++;
        }
    }

    printf("%d valor(es) par(es)\n", evenCount);
    printf("%d valor(es) impar(es)\n", oddCount);
    printf("%d valor(es) positivo(s)\n", positiveCount);
    printf("%d valor(es) negativo(s)\n", negativeCount);

    return 0;
}
