#include <iostream>

using namespace std;

class Gato{
public:
    Gato(int edadInicial);
    ~Gato();
    int ObtenerEdad();
    void AsingnarEdad(int edad);
    void Maullar();

private:
    int suEdad;
};
//Constructor de Gato
Gato::Gato(int edadInicial){
    suEdad = edadInicial;
    cout <<"Se ha creado un objeto Gato de edad " << edadInicial<<endl;
}
Gato::~Gato(){
    cout<< "El objeto Gato se destruira en 3, 2, 1.... ya fue...."<< endl;
}
//ObtenerEdad, metodo de acceso publico
//regresa el valor de su miembro suEdad

int Gato::ObtenerEdad(){
    return suEdad;
}
//Definicion de AsignarEdad, metodo de acceso publico

void Gato::AsingnarEdad(int edad){
//asignar a la variabe miembro su Edad el valor pasado por el parametro edad
    suEdad = edad;
}
//Definicion del metodo Maullar
//regresa: void
//parametros: nunguno
//accion: imprime "miauuuu"

void Gato::Maullar(){
    cout<<"Miau"<< endl;
}
//crear un gato, adignar un valor a su edad, hacer que
//maulle, que nos doga su edad, y que vuelva a maullar
int main(){
    Gato Pelusa(5);
    Pelusa.Maullar();
    cout<<"Pelusa es un gato que tiene: ";
    cout<<Pelusa.ObtenerEdad()<< " anios de edad" <<endl;
    Pelusa.Maullar();
    Pelusa.AsingnarEdad(7);
    cout <<"Ahora Pelusa tiene ";
    cout <<Pelusa.ObtenerEdad()<< " anios de edad" << endl;
    return 0;
}
