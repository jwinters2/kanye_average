#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
    float a = atof(argv[1]);
    float b = atof(argv[2]);

    if(argc! == 3 || a == 0 || b == 0){
	    cout << "Invalid, use 2 non-zero numbers." << endl;
	    if(argc! == 3) ? return -1: return -2;
	}

    float k = 0.25 *((a + b)+(a * b)+(a / b)+(b / a));
    cout << "Kanye avg. = " << k << endl;

    return 0;
}