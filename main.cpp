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
    estudiante1.pormedio = 5.1;
    cout << "Nombre: " << estudiante1.nombre<< "\nEdad: " << estudiante1.edad<< "\nPromedio: " << estudiante1.pormedio << endl;
}

void mostrarMaterias(){
    struct Estudiante estudiante1;
    string mat;
    int i;
    cout << "Escriba las Asignaturas/Materias una por una:" << endl;
    for (i=0,i<10,++i) {
        cin >> mat;
        estudiante1.materias.push_back(mat);
    }
    for (const auto& materia : estudiante1.materias) {
        cout << materia << " ";
    }
}

int main(){
    mostrarEstudiante();
    mostrarMaterias();
}
