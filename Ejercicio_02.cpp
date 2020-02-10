#include <iostream>

using namespace std;

class Gato{
public:
    Gato(int edadInicial, float pesoInicial);
    ~Gato();
    int ObtenerEdad();
    void AsingnarEdad(int edad);
    void AsignarPeso(float peso);
    float ObtenerPeso();
    void Maullar();

private:
    int suEdad;
    float suPeso;
};
//Constructor de Gato
Gato::Gato(int edadInicial, float pesoInicial){
    suEdad = edadInicial;
    suPeso = pesoInicial;
    cout <<"Se ha creado un objeto Gato de edad " << edadInicial<<endl;
    cout <<"El objeto Gato tiene un peso de " <<pesoInicial<< endl;
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

float Gato::ObtenerPeso(){
    return suPeso;
}
void Gato::AsignarPeso(float peso){
    suPeso = peso;
}

void Gato::Maullar(){
    cout<<"Miau"<< endl;
}
//crear un gato, adignar un valor a su edad, hacer que
//maulle, que nos doga su edad, y que vuelva a maullar
int main(){
    Gato Pelusa(5,3.5);
    Pelusa.Maullar();
    cout<<"Pelusa es un gato que tiene: ";
    cout<<Pelusa.ObtenerEdad()<< " anios de edad" <<endl;
    Pelusa.Maullar();
    Pelusa.AsingnarEdad(7);
    cout <<"Ahora Pelusa tiene ";
    cout <<Pelusa.ObtenerEdad()<< " anios de edad" << endl;
    cout <<"Pelusa tiene un peso de ";
    cout <<Pelusa.ObtenerPeso()<< " kilogramos" <<endl;
    Pelusa.Maullar();
    Pelusa.AsignarPeso(5);
    cout<< "Ahora Pelusa pesa ";
    cout << Pelusa.ObtenerPeso()<< " kilogramos" <<endl;
    Pelusa.Maullar();
    return 0;
}
