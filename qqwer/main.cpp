#include <iostream>

class A{
    protected:
    int _y;

    private: 
    int _x;
    void fun2(){
        std::cout << "fun2" << std::endl;
    }
    
    public: 
    A(){
        std::cout << "Default Constructor A" << std::endl;
    }
    A(int x){
        _x=x;
        std::cout << "x Constructor A" << std::endl;
    }
    void fun1(){
        std::cout << "fun1" << std::endl;
    }
    // void setX(int x){
    //     _x=x;
    // } чушь
    int _z;

};

class B: private A{

public: 
    B(){
        //_x запрещен
        _y; //norma (В МЭЙН НЕЛЬЗЯ)
        _z; //нормально
        //setX(10); //чушь, лучше протектед
        _y=20;//протектед введено только для наследования (модификатор, приватный для класса, позволяющий пользоваться этим полем наследнику)
              //приватное из класса наследования нельзя менять, но если хочется (выше)
         std::cout << "Default Constructor b" << std::endl;
        }
    B (int x) : A(x) {//вызываем конструктор родительского класса, где а(), нужно вызывать только так!!!! 

        std::cout << "x Constructor b" << std::endl;
    }
};

class C: public B{
    public: C(){
        //_y=10; //если предыдущее наследование приватное, то неправильно
        //_z=10;
        //_yB=10;//protected
        //_zB=10;//public
        std::cout << "Default Constructor c" << std::endl;
    }
};

int main(){
    A a=B(10);//так можно
    //B b=B(10);
    C c;

//к fun2 не имеем доступа
    return 0;
}