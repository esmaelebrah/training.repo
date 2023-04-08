#include <stdio.h>

int main() {
    // Write C code here
    printf("Hello world");
    int c = 1;
    int total = 1;
    int a = 2;
    int b = 3;
    while (c)
    {
        if (a & c){
            if (c & b){
                total *= 2;
            }
            else {
                total *= 0;
            }
        }
        else {
            total *= 1;
        }
        
        c = c << 1;
        
    }
    printf("\n%d",total);
    int z= 6;
    int w = 1;
    while (z & w){
        w = w<<1;
    }
    
    int ans = w | z;
    printf("\nthe smallest number greater than n is  %d",ans);

    return 0;
}
