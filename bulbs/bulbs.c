#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    // Input Text
    string text = get_string("Message: ");

    // Convert Text Into Decimal
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // Convert Decimal Into Binary
        char c = text[i];
        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            int bit = (c >> j) & 1;
            // Print Binary As Emojis
            print_bulb(bit);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
