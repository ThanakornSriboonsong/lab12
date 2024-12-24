#include<iostream>
#include<ctime>
using namespace std;

int fibonacci(int x ) ;

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
    
}

int fibonacci(int x ){
    if(x > 0){
    if( x == 0 ) x = 0 ;
    else if( x == 1 ) x = 1 ;
    else  x = fibonacci(x-1) + fibonacci(x-2) ;}
    return x ;



}