#include <iostream>

using namespace std;

class Persona
{
private:
    int edad;

public:
    int nombre;

    Persona(int ed)
    {
        if (ed >= 0)
        {
            edad = ed;
        }
        else
        {
            edad = 0;
        }
    }
    int getEdad()
    {
        return edad;
    }
};

int main()
{
    int x;
    cin >> x;
    Persona yo(x);
    cout << "hola " << yo.getEdad();
    return 0;
}