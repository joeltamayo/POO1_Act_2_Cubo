#include <iostream>
using namespace std;

class Cubo
{
public:
    int tipo;
    int medida;

public:
    void generarCubo();
};

void Cubo::generarCubo()
{
    for (int c = 0; c < medida; c++)
    {
        for (int i = 0; i < medida; i++)
        {
            if (tipo == 1)
            {
                cout << "*";
            }
            else
            {
                if ((c == 0 || i == 0) || (c == (medida - 1)) || (i == (medida - 1)))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

void Clear()
{
    cout << "\x1B[2J\x1B[H";
}

int main()
{
    int opc = 1;
    Cubo c;
    cout << "Selecciona el tipo:" << endl;
    cout << "Opcion 1: Con relleno \nOpcion 2: Sin relleno" << endl;
    cin >> c.tipo;
    cout << "Medida del alto:" << endl;
    cin >> c.medida;
    cout << endl;
    c.generarCubo();
    return 0;
}