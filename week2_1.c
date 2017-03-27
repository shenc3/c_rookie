#include <stdio.h>

int main() {
    int hour1=0, hour0=0, min1=0, min0=0;
    int d, hour, result;
    
    scanf("%d", &d);
    
    if ( d > 0 ) {
        min0 = d % 10;
        d = d / 10;
        if ( d > 0 ) {
            min1 = d % 10;
            d = d / 10;
            if ( d > 0 ) {
                hour0 = d % 10;
                d = d / 10;
                if ( d > 0 ) {
                    hour1 = d;
                }
            }
        }
    }
    
    hour = hour1 * 10 + hour0;
    if ( hour - 8 < 0 ) {
        hour = 24 + (hour - 8);
    }
    else {
        hour = hour - 8;
    }
    
    hour1 = hour / 10;
    hour0 = hour % 10;
    
    result = hour1 * 1000 + hour0 * 100 + min1 * 10 + min0;
    printf("%d", result);
    return 0;
}
