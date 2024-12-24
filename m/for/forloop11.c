#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

    int n;
    cin>>n;
    double sum = 0;
    for (int i =1; i<=n; i++) {
        sum=sum + sin(i)/pow(2,i);
    }
    cout<<setprecision(2)<<sum<<endl;
    return 0;
}