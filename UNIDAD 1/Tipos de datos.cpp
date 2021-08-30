#include <iostream>
#include <limits>

using namespace std;
 
int main(){
    int imin = numeric_limits<int>::min();
    int imax = muneric_limits<int>::max();
    
    cout << " imin = " << imin << endl;
    cout << " imax = " << imax << "\n";
    cout << " tamanio de int : " << sizeof(int) <<endl;
    
    float fmin = std::numeric_limits<float>::min();
    float fmax = std::numeric_limits<float>::max();
    
    cout << " fmin = " << fmin << endl;
    cout << " fmax = " << fmax << "\n";
    cout << " tamanio de float : " << sizeof(float) <<endl;
    
    char fmin = std::numeric_limits<char>::min();
    char fmax = std::numeric_limits<char>::max();
    
    cout << " cmin = " << cmin << endl;
    cout << " cmax = " << cmax << "\n";
    cout << " tamanio de char : " << sizeof(char) <<endl;
    
    return 0;
    
