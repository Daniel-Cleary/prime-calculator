#include <iostream>
#include <vector>

using namespace std;

int main() 
{
vector<int> primes;
primes.push_back(2);
bool passedTest = true;
unsigned int maxValue;

cout << "(Numbers greater than 3) Max Value: ";
cin >> maxValue;
cout << 2 << " ";

for(int a = 3; a < maxValue; a++){ //loop 100 vals
    passedTest = true;
    for(int b = 0; b < primes.size(); b++){ //loop through vals of vector
        if(a % primes[b] == 0)
        passedTest = false;
    }
    if(passedTest){
        primes.push_back(a); //Insert values into vector
        cout << a << " ";
    }
}
// for(int c = 0; c < primes.size(); c++)
//     cout << primes[c] << " ";

    return 0;
}