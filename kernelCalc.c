#include <stdlib.h>

long long* decimal_to_bin(long long Value) {

    if (Value < 0) return NULL;

    long long bit_count = 0;
    long long tmp = Value;

    if (tmp == 0) bit_count = 1;  
    else {
        while (tmp > 0) {
            bit_count++;
            tmp >>= 1;
        }
    }

    long long* decimal = calloc(bit_count + 1, sizeof(long long));
    if (!decimal) return NULL;

    for (int i = bit_count - 1; i >= 0; --i) {
        decimal[bit_count - 1 - i] = (Value >> i) & 1;
    }

    decimal[bit_count] = 0b1010;

    return decimal;
}