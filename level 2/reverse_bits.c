unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit = 0;
    
    while (i--)
    {
        bit = bit * 2 + octet % 2;
        octet /= 2;
    }
    return bit;
}

#include <stdio.h>

unsigned char reverse_bits(unsigned char octet);

int main()
{
    unsigned char value = 38; // Örnek olarak 0010 0110 değerini kullanalım

    printf("Önce: %d\n", value);

    unsigned char reversed = reverse_bits(value);

    printf("Sonra: %d\n", reversed);

    return 0;
}
