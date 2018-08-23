#include <iostream>
using namespace std;

double eApprox(int n);
double factorial (int n);

int main() { cout.precision(30);
    for (int n = 1; n <= 15; n++) {
        cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
    }
    return 0;
}

double eApprox(int n) {
    double total = 1.00;
    double denominator = 1.00;
    for (int counter = 1; counter <=n; counter++){
        //get the factorial for the denominator
        denominator *= counter;
        //add 1 + (1/each denominator)
        total += (1.00/denominator);
    }
    return total;
}
