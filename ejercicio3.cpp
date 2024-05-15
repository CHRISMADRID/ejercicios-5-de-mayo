#include <iostream>
using namespace std;
int main()
{
    // declarar variables
    int angulo;
    int anguloagudo = 0;
    int anguloobstuso = 0;
    int angulorecto = 0;

    cout << "ingrese un angulo en grados : ";
    cin >> angulo;

    if (angulo < 90)
    {
        cout << "el angulo es agudo \n";
    }
    if (angulo > 90)
    {
        cout << "el angulo es obtuso \n";
    }
    if (angulo == 90)
    {
        cout << "el angulo es recto \n";
    }

  
  return 0;

}