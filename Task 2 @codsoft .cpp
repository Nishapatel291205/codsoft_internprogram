//Simple calculator made by NISHA PATEL #TASK2 @CODSOFT
#include <iostream>
using namespace std;
class simplecalculator  //Creats class with name simplecalculator
{
    float n1,n2;
    char op;
    public:
    void get()
    {
        cout<<"IT'S SIMPLE CALCULATOR"<<endl;
        cout<<"1.addition (+)"<<endl;
        cout<<"2.subtraction (-)"<<endl;
        cout<<"3.multipliction (*)"<<endl;
        cout<<"4.division (/)"<<endl;
    cout << "Enter operator (+, -, *, /): "<<endl;
    cin >> op;
    cout << "Enter two numbers: "<<endl;
    cin >> n1 >> n2;
    }
    void method();
};

 void simplecalculator :: method()
{
    switch(op) 
    {
        case '+':
            cout <<"ADDITION OF " << n1 << " + " << n2 << " = " << n1 + n2;
            break;
        case '-':
            cout << n1 << " - " << n2 << " = " << n1 - n2;
            break;
        case '*':
            cout << n1 << " * " << n2 << " = " << n1 * n2;
            break;
        case '/':
            if (n2 = 0)
            {
                cout<<"you can not divide any number by zero..sorry this division is not possible..";
            }
            else
                 cout << n1 << " / " << n2 << " = " << n1 / n2;
            break; 
    }
}
int main()
{
    simplecalculator c;
    c.get();
    c.method();
}