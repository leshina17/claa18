#include <iostream>

class a{};

class b: public a{

};

//композиция HAS A    car engine машина без двигателя это не машина, мы создаем двигатель, когда создается машина, класс машина невозможно представить без двигателя
class engine{

};

class car{
    private: 
    engine _engine;
    public: 
    car():_engine(){

    }
};

//aгрегация человек не умрет, если потеряет паспорт(паспорт продолжит жить), человек без паспорта жить может 

class pasport{};

class person{
    private:
    pasport* _pasport;
    public: person(){

    }
};


//конкретизация аспектов наследования
// class cat{
//     private:
//     std::string _name;
//     public: 
//     cat(const std::string& name): _name(name){

//     }
//     const std::string& getname() const{
//         return _name;
//     }

//     std::string voice() const{
//         return "meow";
//     }
// };


// class dog{
//     private:
//     std::string _name;
//     public: 
//     dog(const std::string& name): _name(name){

//     }
//     const std::string& getname() const{
//         return _name;
//     }

//     std::string voice() const{
//         return "woof";
//     }

   
// };

// enum animaltype{};//дополнить
// class animal{};                              
//  void process(const animal& ob){
//         std::cout << ob.getname() << "says " << ob.voice() << std::endl;
//     }

class animal{
    private: std::string _name;
    public: 
};

int main(){
    
// cat cat("alisa ");
// dog dog("pulya ");
// process(cat);
// process(dog);
    // a aelem_a;
    // b elem_b;
    // a ab=b(); //переменная ав из класса а, но создается с помощью конструктора в обратно такое нельзя ( в ва=а()) В КОМПОЗИЦИИ ТАКОГО НЕЛЬЗЯ
    // a* aa=new a[5]{};

    return 0;
}