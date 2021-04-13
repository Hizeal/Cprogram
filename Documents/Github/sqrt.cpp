#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    double area;
    double side;
    cout << "Input the floor area"<<endl;
    cin >> area;
    cin.get();
    side = sqrt(area);
    cout << "The side is "<< side << endl;
    cin.get();
    return 0;
}