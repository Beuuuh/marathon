#include <stdio.h>

int main() {
    int i, number, position, input;

    for (i = 0; i < 100; i++) {
        scanf("%d", &input);
        if(i == 0) {
            number = input;
        } else {
            if(number < input) {
                number = input;
                position = i + 1;
            }
            
        }
    }

    printf("%d\n", number);
    printf("%d\n", position);

    return 0;
}