#include <iostream>
#include <vector>
using namespace std;

struct Estudiante{
    string nombre;
    int edad;
    float pormedio;

};

void mostrarEstudiante(){
    struct Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 12;
    estudiante1.pormedio = 9.4;
    cout << "Nombre: " << estudiante1.nombre<< "\nEdad: " << estudiante1.edad<< "\nPromedio: " << estudiante1.pormedio << endl;
}

int main(){
    mostrarEstudiante();
}
