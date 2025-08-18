#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for(int i = 2; i <= n; ++i)
        fact *= i;
    return fact;
}

// Function to calculate Maclaurin series for e^x
double maclaurin_exp(double x, int terms) {
    double sum = 0.0;
    for(int n = 0; n < terms; ++n) {
        sum += (pow(x, n) / factorial(n));
    }
    return sum;
}

int main() {
    double x;
    int n;

    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter number of terms: ";
    cin >> n;

    double result = maclaurin_exp(x, n);
    cout << "Maclaurin series approximation of e^" << x << " is: " << result << endl;

    return 0;
}
