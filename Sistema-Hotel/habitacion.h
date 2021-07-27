#ifndef HABITACION_H
#define HABITACION_H
//creacion de clase habitacion
class Habitacion
{
private:
    //atributos privados
    int idHabitacion;
    int tipoHabitacion;
    int numeroHabitacion;
    int numeroPiso;
    int estadoHabitacion;

public:
    //constructores
    Habitacion();
    Habitacion(int _idH, int _tipoH, int _numHabi, int _numPiso, int _estadH);

    //metodos setters y getters
    void setIdHabitacion(int _idH);
    void setTipoHabitacion(int _tipoH);
    void setNumHabitacion(int _numHab);
    void setNumPiso(int _numPiso);
    void setEstadoH(int _estadoH);

    int getIdHabitacion() ;
    int getTipoHabitacion() ;
    int getNumHabitacion() ;
    int getNumPiso() ;
    int getEstadoH();
};

#endif // HABITACION_H
