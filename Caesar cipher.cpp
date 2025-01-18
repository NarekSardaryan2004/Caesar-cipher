#include <iostream>
using namespace std;

int main()
{
    char message[100], encrypt[100];
    int i;

    cout << "Enter a message: ";
    cin >> message;

    for (i = 0; message[i] != '\0'; i++)
    {
        if (message[i] >= 'a' && message[i] <= 'z')
        {
            if (message[i] >= 'a' && message[i] < 'x')
            {
                encrypt[i] = message[i] + 3;
            }
            else if (message[i] >= 'x' && message[i] <= 'z')
            {
                encrypt[i] = message[i] - 23;
            }
        }
        else if (message[i] >= 'A' && message[i] <= 'Z')
        {
            if (message[i] >= 'A' && message[i] < 'X')
            {
                encrypt[i] = message[i] + 3;
            }
            else if (message[i] >= 'X' && message[i] <= 'Z')
            {
                encrypt[i] = message[i] - 23;
            }
        }
        else
        {
            encrypt[i] = message[i];
        }
    }
    encrypt[i] = '\0';
    cout << "Encrypted message: " << encrypt << endl;

    return 0;
}