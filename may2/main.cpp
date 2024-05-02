#include <iostream>
#include <random>

class array{
    private:
        double* _arr;
        size_t _size;
    public:
        array(){
            _size=100;
            _arr= new double[_size];
            for (size_t i=0; i<_size; i++){
                _arr[i]=rand()%100;
            }
        }

        ~array(){
            delete [] _arr;
        }

        double get_min(){
            int mi=_arr[0];
            for (size_t i=1; i<_size; i++){
                if (_arr[i]<mi)
                    mi=_arr[i];
            }
            return mi;
        }

        double get_max(){
            int ma=_arr[0];
            for (size_t i=1; i<_size; i++){
                if (_arr[i]>ma)
                    ma=_arr[i];
            }
            return ma;
        }

        double get_middle(){
            double sum=0;
            for (size_t i=0; i<_size; i++){
                sum+=_arr[i];
            }
            return sum/(_size);
        }

};

class agry{
    private:
        array* _arr;
    public:
        agry(array* arr){
            _arr=arr;
        }

        void print(){
            std::cout << "MAX: " << _arr->get_max() << "\nMIN: " << _arr->get_min() << "\nMIDDLE: " << _arr->get_middle() << std::endl;
        }
};
int main(){
    
    array a;
    agry ag=agry(&a);
    ag.print();
    
    return 0;
}