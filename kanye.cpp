#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main(int argc, char* argv[])
{
    bool quiet = false;
    float nums[2];
    unsigned int curr = 0;

    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "-q") == 0) {
            quiet = true;
        } else {
            nums[curr] = atof(argv[i]);
            ++curr;
        }
    }

    if (curr != 2) {
        cout << "Usage:" << endl;
        cout << argv[0] << " number_1 number_2 [-q]" << endl;
        cout << "Options:" << endl;
        cout << " -q quiet mode, only print the average." << endl;
        cout << "    useful for integrating into bash scripts." << endl;
        return 1;
    }

    float a = nums[0];
    float b = nums[1];
    float k = 0.25 *((a + b)+(a * b)+(a / b)+(b / a));

    if (!quiet) {
        cout << "Kanye avg. = ";
    }

    if ((a == 2 && b == 3) || (b == 2 && a == 3)) {
        cout << "5.76-blah-blah-blah" << endl;
    } else {
        cout << k << endl;
    }

    return 0;
}
