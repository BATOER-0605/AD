#include <stdio.h>

void find_negatives(int[], int, int[]);

int main(){
    int i;
    int n = 10;
    int numbers[10];
    int negatives[10];

    for (i = 0; i < n; i++) {
        printf("%d番目の整数を入力: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    find_negatives(numbers, n, negatives);

    return 0;
}

void find_negatives(int numbers[], int n, int negatives[]) {
    int i;
    int non=0;

    for (i = 0; i < n; i++) {
        if (numbers[i] < 0) {
            negatives[non] = numbers[i];
            non++;
        }
    }

    printf("負の整数: ");

    for (i = 0; i < non; i++) {
        printf("%d ", negatives[i]);
    }
    
    printf("\n");
} 
