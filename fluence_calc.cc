#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main(int argc, char* argv[], char* argenv[]){
    double fluence = 0;
    ofstream fluence_file;
    fluence_file.open("output.dat", ios::out);
    for(int i = 0; i< 200; ++i){ //  200 corresponds 10cm
        fluence = 1e-3/((7.85e-3)*i*0.05*i*0.05);//  J/cm2
       fluence_file << i*0.05 << '\t' << fluence << '\t' << fluence/120e-15<< endl;
       }
    fluence_file.flush();
    fluence_file.close();
    return 0;    
}
