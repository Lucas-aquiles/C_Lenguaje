#include <iostream>
#include <string>

using namespace std;

struct alumnos {
    char Nombre[30];
    char domicilio[100];
    char localidad[40];
    char ciudad[40];
    int Notas[6];
    double Media;
};

int main() {
    alumnos VecAlum[10];

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin.getline(VecAlum[i].Nombre, 30);

        cout << "Ingrese el domicilio del estudiante " << i + 1 << ": ";
        cin.getline(VecAlum[i].domicilio, 100);

        cout << "Ingrese la localidad del estudiante " << i + 1 << ": ";
        cin.getline(VecAlum[i].localidad, 40);

        cout << "Ingrese la ciudad del estudiante " << i + 1 << ": ";
        cin.getline(VecAlum[i].ciudad, 40);

        cout << "Ingrese las calificaciones para el estudiante " << i + 1 << ": ";
        double sumaCalificaciones = 0.0;
        for (int j = 0; j < 6; j++) {
            cout << "Examen " << j + 1 << ": ";
            cin >> VecAlum[i].Notas[j];
            sumaCalificaciones += VecAlum[i].Notas[j];
        }
        VecAlum[i].Media = sumaCalificaciones / 6.0;
        cin.ignore(); // Limpiar el búfer de entrada después de ingresar las notas
    }

    cout << "\nDatos de los alumnos y sus calificaciones medias:" << endl;
    double mayorMedia = 0.0;
    string nombreMayorMedia;

    for (int i = 0; i < 10; i++) {
        cout << "Estudiante " << i + 1 << ":" << endl;
        cout << "Nombre: " << VecAlum[i].Nombre << endl;
        cout << "Domicilio: " << VecAlum[i].domicilio << endl;
        cout << "Localidad: " << VecAlum[i].localidad << endl;
        cout << "Ciudad: " << VecAlum[i].ciudad << endl;
        cout << "Calificaciones:" << endl;
        for (int j = 0; j < 6; j++) {
            cout << "Examen " << j + 1 << ": " << VecAlum[i].Notas[j] << endl;
        }
        cout << "Calificación Media: " << VecAlum[i].Media << endl;
        cout << "-----------------------------------" << endl;

        if (VecAlum[i].Media > mayorMedia) {
            mayorMedia = VecAlum[i].Media;
            nombreMayorMedia = VecAlum[i].Nombre;
        }
    }

    cout << "El alumno con la mayor media es: " << nombreMayorMedia << " con una media de " << mayorMedia << endl;

    return 0;
}
