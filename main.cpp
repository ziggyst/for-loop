#include <iostream>
#include <random>

using namespace std;

void createArray{
    arr int[10] = {};
    for (int i = 0;i<10;i++){
        arr[i] = rand()%1000;
    }
}



int main{
    createArray();
    for (auto i : arr){
        cout << i;                
    }
}