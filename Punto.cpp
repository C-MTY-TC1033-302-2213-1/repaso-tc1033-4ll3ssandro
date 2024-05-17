#include "Punto.hpp"

Punto::Punto(){
    x = 0;
    y = 0;
}
Punto::Punto(double _X, double _Y){
    x = _X;
    y = _Y;
}

//metodos modificadores - setters
void Punto::setX(double _X){
    x = _X;
}
void Punto::setY(double _Y){
    y = _Y;
}

//Metodos de acceso - gettters
double Punto::getX(){
    return x;
}
double Punto::getY(){
    return y;
}

// Otros metodos
double Punto::calculaDistancia(Punto p2){
    return sqrt( (p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y) );
}
std::string Punto::str(){
    return '(' + std::to_string(x) + ',' + std::to_string(y) + ')';
}