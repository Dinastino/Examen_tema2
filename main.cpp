#include <iostream>
#include <vector>
using namespace std;

struct Estudiante{
    string nombre;
    int edad;
    float pormedio;
    vector<string> materias;
};

void mostrarEstudiante(){
    struct Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 12;
    estudiante1.pormedio = 9.4;
    cout << "Nombre: " << estudiante1.nombre<< "\nEdad: " << estudiante1.edad<< "\nPromedio: " << estudiante1.pormedio << endl;
}

void mostrarMaterias(){
    string mat;
    int i;
    for (i=0,i<10,i++){
        cin >> mat;
    }
}

int main(){
    mostrarEstudiante();
    mostrarMaterias();
}
