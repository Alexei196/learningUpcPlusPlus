#include<stdio.h>
#include<math.h>

int k = 99;

void iter(double*[], double*[], int, int);

int main(int argc, int* argv[]) {
    int m = argv[0], n = argv[1];
    double* A = (double*)malloc(m*n*sizeof(double));
    double* b = (double*)malloc(m*m*sizeof(double));
    //init W
    for(int i = 0; i < m; ++i) {
        for (int t = 0; t < n; ++t)
        {
            A[t + i*n] = i+t;
        }
        
    }
    //k iterations
    for(int v = 1; v < k; ++v){
        //create b
        for(int i = 0; i < m; ++i){
            b[i + i*m] = cos(v*i);
        }
        //multiply A by b

        iter(A, b, m, n);

    }
    return 1;
}

//performs the dot product operation
void iter(double* matrixA[], double* matrixB[], int m, int n) {
    for(int i = 0; i < m; ++i) {
        for (int t = 0; t < n; ++t)
        {
            int sum = 0;
            
        }
    }
}