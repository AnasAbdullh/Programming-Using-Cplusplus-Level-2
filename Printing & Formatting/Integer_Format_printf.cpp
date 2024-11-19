#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int num = 42;
    auto name = "Anas";
    auto Age = 20;

    printf("Decimal: %d\n", num);               // عشري
    printf("Unsigned: %u\n", num);              // موجب فقط
    printf("Octal: %o\n", num);                 // ثماني
    printf("Hexadecimal: %x\n", num);           // سداسي عشري (صغير)
    printf("Hexadecimal: %X\n", num);           // سداسي عشري (كبير)
    printf("Width 5: %5d\n", num);              // عرض 5
    printf("Width 5 (0-padding): %05d\n", num); //
    printf("Short: %hd\n", num);                // عدد قصير
    printf("Long: %ld\n", num);                 // عدد طويل

    printf("My Name is : %d\n", 55);
    printf("My Name is : %d Of %d\n", 20, 10);

    printf("Number of %0*d\n", 4, num);

    return 0;
}
