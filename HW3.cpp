#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    float x, f;
    cin >> x;
    cout << fixed << setprecision(2);
    if(x > 0){
        f = 3 * x + sqrt(x);
        cout << f;
    }else{
        f = exp(x) + 4;
        cout << f;
    }
    return 0;
}
