#include <iostream>
#include <random>

int* arr(int a, int b, size_t size){
    int* arr=new int[size];
    arr[0]=a;
    for (size_t i=1; i<size; i++){
        arr[i]=arr[i-1]+b;
    }
    return arr;
}

void print(int* arr, size_t size){
    for (size_t i=0; i<size; i++){
        std::cout << arr[i] << "  " << &arr[i] << std::endl;
    }
}

int** PSD(int* arr, size_t size){
    int** array_ptr=new int*[size];
    for(size_t i=0; i<size; i++){
        array_ptr[i]=&arr[i]; //массив адресов без перемешки
    }
    srand(time(NULL));
    int* per;
    int id;
    for (size_t i=0; i<20; i++){
        id=rand()%(size);
        per =array_ptr[id];
        array_ptr[id]=array_ptr[size-id-1];
        array_ptr[size-id-1]=per;
    }
    return array_ptr;
}

int main(){
    /*массив сортир
    функция которая будет перемешивать элементы массива без прямого доступа к их знаечнию
    написать функцию которая печатает этот массив и адреса элементов*/
    int* array=arr(17,1,10);
    print(array, 10);
    auto rez=PSD(array, 10);
    print(rez,10);

    delete []array;

    return 0;
}