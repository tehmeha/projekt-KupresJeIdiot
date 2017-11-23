#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generiraj_broj()
{
    srand(time(0));
    return rand()%3 ;
}

int main()
{
    cout << generiraj_broj() << endl;
}

