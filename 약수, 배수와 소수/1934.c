#include <stdio.h>
#define SWAP(X, Y) { int temp = (X); (X) = (Y); (Y) = (temp);}

int main() {
    int T, n[3], s;

    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &n[0], &n[1]);
        n[2] = n[0] * n[1];
        if(n[0] > n[1])
            SWAP(n[0], n[1]);
        for (s = n[1]; s <= n[2]; s += n[1])
            if(s % n[0] == 0)
                break;
        printf("%d\n", s);
    }
    return 0;

}