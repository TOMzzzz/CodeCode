#include <stdio.h>
int getSum(int a, int b) {
    if(b == 0){
        return a;
    }
    int x = a^b;
    int c = (a&b)<<1;
    return getSum(x,c);
}
