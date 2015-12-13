#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
  if(argc!=3 || atof(argv[1])==0 || atof(argv[2])==0)
    {
      cout<<"invalid, use 2 non-zero numbers"<<endl;
    }
  else
    {
      float a=atof(argv[1]);
      float b=atof(argv[2]);
      cout<<"kanye avg. = "<<0.25*((a+b)+(a*b)+(a/b)+(b/a))<<endl;
    }
  return 0;
}
