#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int numInstrucciones;

    string primerPalabra;

    string tipoPersona;

    string nombrePersona;

    cin >> numInstrucciones;

    queue<string> trabajadores;
    queue<string> alumnos;

    vector<string> atendidos;

    int numTrabajadores;
    int  numAlumnos = 0;

    for (int i = 0; i < numInstrucciones; i++)
    {

        cin >> primerPalabra;

        if (primerPalabra == "ATIENDE")
        {
            if (numTrabajadores > 0)
            {
                atendidos.push_back(trabajadores.front());
                trabajadores.pop();
                numTrabajadores--;
            }
            else if (numAlumnos > 0)
            {
                atendidos.push_back(alumnos.front());
                alumnos.pop();
                numAlumnos--;
            }
            else
            {
                break;
            }
        }
        else
        {
            cin >> tipoPersona;

            cin >> nombrePersona;

            if (tipoPersona == "ALUMNO")
            {

                alumnos.push(nombrePersona);
                numAlumnos++;
            }
            if (tipoPersona == "TRABAJADOR")
            {

                trabajadores.push(nombrePersona);
                numTrabajadores++;
            }
        }
    }

    for (int i = 0; i < atendidos.size(); i++)
    {
        cout << atendidos[i] << "\n";
    }

    return 0;
}
