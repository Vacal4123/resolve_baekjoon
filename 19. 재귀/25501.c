#include <stdio.h>
#include <string.h>

int recursion(const char* s, int l, int r, int* i) {
    (*i)++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1, i);
}

int isPalindrome(const char* s, int* i) {
    return recursion(s, 0, strlen(s) - 1, i);
}

int main() {
    int rec, n;
    char str[1001];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        rec = 0;
        scanf("%s", str);
        isPalindrome(str, &rec); // 컴파일러마다 차이가 존재하여 한번 더 실행
        printf("%d %d\n", isPalindrome(str, &rec), rec);
    }
    return 0;
}