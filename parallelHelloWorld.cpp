#include<stdio.h>
#include<sys/upcxx.h>

using namespace std;

int main(){
    upcxx::init();
    cout << "Hello from " << upcxx::rand_me() << endl;
    upcxxbarrier();
    if(upcxx::rank_me() == 0) cout << "Done.\n";
    upcxx::finalize();
    return 0; 
}