# include <stdio.h>

int main() {
    int d = 0;
    int even = -1, odd = 0;
    while ( d != -1) {
        if ( d % 2 == 0) {
            even ++;
        } else {
            odd++;
        }
        scanf("%d", &d);
    }

    printf("%d %d", odd, even);
    
    return 0;
}

