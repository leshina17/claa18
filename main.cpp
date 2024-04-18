#include <iostream>
#include <random>


template<typename T>
T res(T* arr1, T* arr2,int size1, int size2){
    T min=arr1[0];
    T max=arr2[0];
    for (int i=1; i<size1; i++){
        if (arr1[1]<min)
            min=arr1[i];
    }
    for (int i=1; i<size2; i++){
        if (arr2[1]>max)
            max=arr2[i];
    }
    return max-min;
}

int main(){
    int size1=1+rand()%21;
    int size2=1+rand()%21;
    int* arr1=new int[size1];
    int* arr2=new int[size2];
    
    for (int i=0; i<size1; i++){
        arr1[i]=-10+rand()%21;
    }

    for (int i=0; i<size2; i++){
        arr2[i]=-10+rand()%21;
    }
    int resu=res(arr1, arr2,size1, size2);
    std::cout << resu << std::endl;

    return 0;
}