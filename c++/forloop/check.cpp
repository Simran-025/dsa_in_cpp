#include <iostream>
#include <cmath>
#include <typeinfo>
using namespace std;

int main() {
    auto result = pow(10, 2); // change arguments to see which overload is used
    cout << "Type of result: " << typeid(result).name() << endl;
    cout << "Value: " << result << endl;
}
