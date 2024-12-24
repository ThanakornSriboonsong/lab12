#include<iostream>
<<<<<<< HEAD
#include<ctime>
using namespace std;

int fibonacci(int x ) ;
=======
#include <ctime>
using namespace std;


long long int fibonacci(long long int x ) ;
>>>>>>> 8d2d191fb7a7079085984e115c573f4ce1f65317

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

<<<<<<< HEAD
int fibonacci(int x ){
=======
long long int fibonacci(long long int x ){
>>>>>>> 8d2d191fb7a7079085984e115c573f4ce1f65317
    if(x > 0){
    if( x == 0 ) x = 0 ;
    else if( x == 1 ) x = 1 ;
    else  x = fibonacci(x-1) + fibonacci(x-2) ;}
    return x ;



}