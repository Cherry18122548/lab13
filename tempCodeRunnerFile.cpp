#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double sum=0;
    double mean;
    for(int i=0;i < N; i++){
        sum = sum + A[i];
        mean = sum/N;
        B[0] = mean;
    }
    double stan;
    for(int i=0;i < N; i++){
        stan += pow(A[i]-mean,2);
    }
    B[1]=sqrt(stan/N);

    double Geo;
    for(int i=0;i < N; i++){
        Geo += pow(product, 1.0);
    }
    B[2]=Geo/N;

    double HarmonicMean;
    for(int i=0;i < N; i++){
        HarmonicMean += 1.0 / N;
    }
    B[3]= N / HarmonicMean;

    double max;
    double min;
    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max[] = B4[i];
        }
        if (A[i] < min) {
            min[] = B5[i];
        }
}

