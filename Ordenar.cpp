
#include <iostream> 

using namespace std;


void ordenarNum(int arreglo[]) {
    int Temp;
    for (int i = 0; i < 4; i++)
        for (int q = 0; q < 4 - 1; q++)
            if (arreglo[q] < arreglo[q + 1]) {
                Temp = arreglo[q];
                arreglo[q] = arreglo[q + 1];
                arreglo[q + 1] = Temp;
            }

    for (int i = 0; i < 4; i++)
        cout << arreglo[i] << endl;


}


int main() {

    int n;
    cout << "Escriba cuatro numeros a ordenar:" << endl;
    
    int Arreglo[4];
    for (int i = 0; i < 4; i++) {
        cout << "Escriba el numero " << i + 1 << ": ";
        cin >> n;
        Arreglo[i] = n;
    }
    cout << endl << "Numeros ordenados: " << endl;
    ordenarNum(Arreglo);
    system("pause");
    return 0;
}
