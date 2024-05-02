#include <iostream>
#include <random>

struct kortezh{
    double num;
    int c;
};

bool contain(kortezh* arr, int size, double num){
    for(int i=0; i<size; i++){
        if (arr[i].num==num)
            return true;
    return false;
    }
}

double moda(double* arr, int size){
    kortezh* arr1=new kortezh[size];
    for (int i=0; i,size; i++){
        if (contain(arr[i],arr1,size)){
            arr1[i].count+=1;
        }
        else{
            arr1[i].num=arr[i];
            arr1[i].count=1;
        }
    int max=0;
    double max+elem=0;
    for (int i=0; i<size; i++){
        if (max<arr1[i].count)
            max=arr[i]
    }

    }
}

int main(){
    int size=100;
    double* arr=new double[size];

    for(int i=0; i<size; i++){
        arr[i]=rand()%101+(rand()%101)/1000;
        std::cout << arr[i] << std::endl;
    }

    return 0;
}