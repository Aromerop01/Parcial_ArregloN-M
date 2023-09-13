#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cout << "Ingrese el número de filas (N): ";
    cin >> N;
    cout << "Ingrese el número de columnas (M): ";
    cin >> M;

    
    vector<vector<int>> matriz(N, vector<int>(M));

    // valores matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "Ingrese el valor para la fila " << i + 1 << " y columna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    // Calcular promedio
    for (int i = 0; i < N; i++) {
        int suma = 0;
        for (int j = 0; j < M; j++) {
            suma += matriz[i][j];
        }
        double promedio = static_cast<double>(suma) / M;
        cout << "El promedio de la fila " << i + 1 << " es: " << promedio << endl;
    }

    return 0;
}
