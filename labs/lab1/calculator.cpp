#include <iostream>
#include <cmath>
using namespace std;

void factor(int x)
{
    if (x < 0)
    {
        cout << "Не бери факториал отрицательного числа!";
    }
    else
    {
    int i;
    int ans;
    ans = 1;
    for (i = 1; i <= x; i++) 
    {
        ans = ans * i;
    }
    cout << ans;
    }
}
void sum(int x, int y)
{
    int ans;
    ans = x + y;
    cout << ans;
}
void sub(int x, int y)
{
    int ans;
    ans = x - y;
    cout << ans;
}
void mult(int x, int y)
{
    int ans;
    ans = x * y;
    cout << ans;
}
void divid(int x, int y)
{
    int ans;
    if (y == 0)
    {
        cout << "Не дели на ноль!";
    }
    else
    {
        ans = x / y;
        cout << ans;
    }
}
void degree(int x, int y)
{
    int ans;
    ans = pow(x, y);
    cout << ans;
}

int main()
{
    int x, y;
    char op;
    cout << "Введите значение x:";
    cin >> x;
    cout << "Укажите операцию:";
    cin >> op;
    switch(op) 
    {
        case '!':
            factor(x);
            break;
    
        default:
            cout << "Введите значение y:";
            cin >> y;
            switch(op) 
            {
                case '+':
                    sum(x, y);
                    break;
                case '-':
                    sub(x,y);
                    break;
                case '*':
                    mult(x,y);
                    break;
                case '/':
                    divid(x,y);
                    break;
                case '^':
                    degree(x,y);
                    break;
                default:
                    cout << "Ошибка. Неизвестная операция";
                    break; 
            }

            
    
    }
}
