#include <iostream>

int main()
{
    int numero = 123456;
    int reverso = 0;

    do
    {
        reverso *= 10;
        reverso += (numero % 10);
        numero /= 10;
    } while (numero != 0);

    std::cout << reverso << std::endl;

    return 0;
}
