#include<iostream>
#include <ctime>
using namespace std;

long fibonacci(long num);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long fibonacci(long num){

    if(num == 0 || num == 1){
        return num;
    } else if(num > 1){
        return fibonacci(num-1)+fibonacci(num-2);
    } else{
        cout << "incorrect input";
        return 0;
    }

}
