#include <stdio.h>

int main() {
    int N, Count = 0, i;
    scanf("%d", &N);

    for (i = 666; Count != N; i++){
        int temp = i;
        while(temp >= 666){
            if(temp % 1000 == 666) {
                Count++;
                break;
            }
            else
                temp /= 10;
        }
    }
    printf("%d\n", --i);
    return 0;
}