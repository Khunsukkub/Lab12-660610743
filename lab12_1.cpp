#include<iostream>
using namespace std;

int fibonacci(int num);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int num){

    if(num == 0 || num == 1){
        return num;
    } else if(num > 1){
        return fibonacci(num-1)+fibonacci(num-2);
    } else{
        cout << "incorrect input";
        return 0;
    }

}
