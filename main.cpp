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
    string n;
    int e;
    float p;
    cout << "Escriba el nombre: \n";cin >> n;
    estudiante1.nombre = n;
    cout << "Escriba la edad: \n";cin >> e;
    estudiante1.edad = e;
    cout << "Escriba el promedio: \n";cin >> p;
    estudiante1.pormedio = p;
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

void mostrar_asistencia(Estudiante& estudiante1){
    struct Asistencia nueva_asistencia;
    int i = 1;
    string fech, mat, est;
    while (i != 0){
        try {
            cout << "Cual es la fecha:\n ";
            cin >> fech;
            nueva_asistencia.fecha = fech;
            cout << "Cual la asignatura:\n ";
            cin >> mat;
            nueva_asistencia.materia = mat;
            cout << "Y cual el estado de presencia:\n ";
            cin >> est;
            nueva_asistencia.estado = est;
            estudiante1.Asistencias_vector.push_back(nueva_asistencia);
            if (fech == "final") {
                i = 0;
            }
        }
        catch (const){}
    }
    for (const auto& asistencia : estudiante1.Asistencias_vector) {
        cout << "Fecha: " << asistencia.fecha << "\tMateria: " << asistencia.materia << "\tEstado: " << asistencia.estado << endl;
    }
}

int main(){
    mostrarEstudiante();
    mostrarMaterias();
}
