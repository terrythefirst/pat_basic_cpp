#include <stdio.h>  
int main() {  
    int n;  
    char ch;  
    scanf("%d %c", &n, &ch);  
    int m = 1;  
    while((m + 1) * (m + 1) / 2 - 1 <= n)  
        m += 2;  
    m -= 2;  
    for (int i = 0; i < m; ++i) {  
        for (int j = 0; j < m - i || j < i + 1; ++j) {  
            if (j >= i || j >= m - 1 - i)  
                putchar(ch);  
            else  
                putchar(' ');  
        }  
        putchar('\n');  
    }  
    printf("%d", n - (m + 1) * (m + 1) / 2 + 1);  
    return 0;  
}  