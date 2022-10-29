#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>
#include<inttypes.h>

int main()
{
    uint32_t a;
    int32_t b; 
    scanf("%d%d", &a, &b);
    if (b > 0){
        
        printf("input: 0x%X\nShift right %d\n", a, b);
        a = a >> b;
        printf("Result: 0x%X", a);
    }
    else if (b < 0){
        b = ~(b - 1);
        printf("input: 0x%X\nShift left %d\n", a, b);
        a = a << b;
        printf("Result: 0x%X", a);
    }
    else{
        printf("Zero shift is not defined");
    }
    return 0;

}