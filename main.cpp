#include <iostream>
#include <vector>
using namespace std;

struct Estudiante{
    string nombre;
    int edad;
    float pormedio;
    vector<string> Materias_vector;
    vector<struct Asistencia> Asistencias_vector;
};

struct Asistencia{
    string fecha;
    string materia;
    string estado;
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
        estudiante1.Materias_vector.push_back(mat);
    }
    for (const auto& materia : estudiante1.Materias_vector) {
        cout << materia << " ";
    }
}

void mostrar_asistencia(){
    struct Asistencia asistencia1;
    int i = 1;
    string fech, mat, est;
    while (i != 0){
        cout << "Cual es la fecha:\n ";cin >> fech;
        cout << "Cual la asignatura:\n ";cin >> mat;
        cout << "Y cual el estado de presencia:\n ";cin >> est;
    }
}
int main(){
    mostrarEstudiante();
    mostrarMaterias();
}
