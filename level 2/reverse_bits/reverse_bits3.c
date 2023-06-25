#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
    octet = (octet >> 4) || (octet << 4);
    octet = (octet >> 2) || (octet << 2);
    return octet;
}

int main()
{
    unsigned char value = 65;

    printf("Önce: %d\n", value);

    unsigned char reversed = reverse_bits(value);

    printf("Sonra: %d\n", reversed);

    return 0;
}
