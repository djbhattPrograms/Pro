#include <iostream>//memory address//pointer


using namespace std;

int main()
{
    int age =19;
    int *page =&age;
    double decimal =3.34;
    double *pdecimal= &decimal;
    string name ="mike";
    string *pname =&name;

    cout << "age: " << &age << endl;
    cout << "decimal: " <<&decimal << endl;
    cout << "name: " <<&name << endl;
    cout<<*page;// gives the number

