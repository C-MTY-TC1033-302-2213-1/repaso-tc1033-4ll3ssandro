#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>


class Punto{
    private:
        double x;
        double y;

    public:
        //Constructores
        Punto();
        Punto(double _X, double _Y);

    //metodos modificadores - setters - sirven para cambiar el valor de un atributo
    void setX(double _X);
    void setY(double _Y);   
    
    //Metodos de acceso - gettters - retorna el valor del atributo
    double getX();
    double getY();

    //Otros metodos
    double calculaDistancia(Punto p2);
    std::string str();
};

#endif /* Punto_hpp*/