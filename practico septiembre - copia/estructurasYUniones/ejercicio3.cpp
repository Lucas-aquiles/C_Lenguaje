#include <iostream>

using namespace std;

struct TALUMNO {
    int IdentificadorAlumno;
    int Edad;
    double Notas[5];
    bool Pasa;
};

void DeterminarAprobacion(TALUMNO &alumno) {
    int asignaturasAprobadas = 0;

    for (int i = 0; i < 5; i++) {
        if (alumno.Notas[i] >= 5.0) {
            asignaturasAprobadas++;
        }
    }

    if (asignaturasAprobadas > 3) {
        alumno.Pasa = true;
    } else {
        alumno.Pasa = false;
    }
}

void AumentarCalificacion(TALUMNO &alumno) {
    if (alumno.Edad > 20) {
        for (int i = 0; i < 5; i++) {
            alumno.Notas[i] += 0.5;
        }
    }
}

int main() {
    TALUMNO alumno;
    
    alumno.IdentificadorAlumno = 1;
    alumno.Edad = 22;
    alumno.Notas[0] = 8.0;
    alumno.Notas[1] = 7.5;
    alumno.Notas[2] = 6.0;
    alumno.Notas[3] = 7.5;
    alumno.Notas[4] = 9.5;

    DeterminarAprobacion(alumno);

    cout << "El alumno " << alumno.IdentificadorAlumno << " ";
    if (alumno.Pasa) {
        cout << "pasa de curso." << endl;
    } else {
        cout << "no pasa de curso." << endl;
    }

    TALUMNO alumnos[8];

    for (int i = 0; i < 8; i++) {
        AumentarCalificacion(alumnos[i]);
    }


    return 0;
}
