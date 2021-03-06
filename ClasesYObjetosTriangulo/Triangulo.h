

class Triangulo{
    private: 
        int base;
        int altura;
    public: 
        Triangulo();
        Triangulo(int base,int altura);
        void setBase(int base);
        void setAltura(int altura);
        int getBase();
        int getAltura();
        int calcularArea();
};

Triangulo::Triangulo(){
    base=0;
    altura=0;
}

Triangulo::Triangulo(int base, int altura){
    this->base=base;
    this->altura=altura;
}

void Triangulo::setBase(int base){
    this->base=base;
}

void Triangulo::setAltura(int altura){
    this->altura=altura;

}

int Triangulo::getBase(){
    return base;
}

int Triangulo::getAltura(){
    return altura;
}

int Triangulo::calcularArea(){
    return (base*altura)/2;
}
