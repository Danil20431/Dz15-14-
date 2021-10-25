#include <iostream>
#include <cmath>  //  2.1

using namespace std;

int maxArray(/*const size_t size, int array[size]*/) // 1.2
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    int max = array[0];
    for (size_t i = 0; i < size; ++i)
    {
        if (max < array[i])
            max = array[i];
    }
    return max;
}

int minArray(/*const size_t size, int array[size]*/) // 1.1
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    int min = array[0];
    for (size_t i = 0; i < size; ++i)
    {
        if (min > array[i])
            min = array[i];
    }
    return min;
}

long long int multiplication(int x, int y) // 1.4
{
    long long int total = x * y;

    return total;
}

int sumArray(/*const size_t size, int array[size]*/) // 1.3
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    int sum = 0;
    for (size_t i = 0; i < size; i++)
        sum += array[i];

    return sum;
}

void index(int element/*const size_t size, , int array[size]*/) // 1.5
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    for (int i = 0; i <= size; i++)
        if (array[i] == element)
            cout << i;
        else
        {
            cout << "-1";
            break;
        }
}

void print(/*const size_t size, int array[size]*/) // 1.7
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}

int negative(/*const size_t size, int array[size]*/) // 1.9
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    int neg = 0;
    for (int i = 0; i < size; i++)
        if (array[i] < 0)
            neg++;

    return neg;
}

int arifmet(/*const size_t size, int array[size]*/) // 1.8
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    int sum = 0;
    int itog = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
        itog = sum / i;
    }
    return itog;
}

int chetn(/*const size_t size, int array[size]*/) // 1.11
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    int che = 0;
    for (int i = 0; i < size; i++)
        if (array[i] % 2 == 0)
            che++;

    return che;
}

int nechetn(/*const size_t size, int array[size]*/) // 1.13
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    int neche = 0;
    for (int i = 0; i < size; i++)
        if (array[i] % 2 != 0)
            neche++;

    return neche;
}

int positive(/*const size_t size, int array[size]*/) // 1.12
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    int pos = 0;
    for (int i = 0; i < size; i++)
        if (array[i] > 0)
            pos++;

    return pos;
}

void search(/*const size_t size, int array[size], */int number) // 1.6     не знаю, как сделать функцию через int, чтобы вывести true или false, ведь там нужен boolalpha
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    int iter = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == number)
        {
            cout << i << "true";
            break;
            iter++;
        }
        if (iter == 0)
        {
            cout << "false";
            break;
        }
    }
    /*  ИЛИ
     bool yesNO = false;
     int iter = 0;
    for(int i = 0; i<size ;i++)
    {
        if (array[i] == number)
        {
            yesNO = true;
            iter++;
        }

        cout << boolalpha << yesNO; */
}

int vhozden(int number/*const size_t size, int array[size]*/) // 1.10
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    //int number;
    int kolvo = 0;
    for (int i = 0; i < size; i++)
        if (array[i] == number)
            kolvo++;

    return kolvo;
}

void sort(/*const size_t size, int array[size]*/) // 1.14
{
    const int size = 3;
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
        array[i] = rand() % 10 + 1;
    bool sortirofka = false;
    int perem = array[0];
    for (int i = 0; i < size; i++)
        if (array[i] >= perem)
        {
            perem = array[i];
            sortirofka = true;
        }
        else
        {
            sortirofka = false;
            break;
        }
    cout << boolalpha << sortirofka;
}

int stepen(int number, int step_en) // 2.1
{
    int itog = 1;
    /*cout << "Enter a number";
    cin >> number;
    cout<<"Enter a stepen";
    cin >> step_en;*/
    for (int i = 0; i <= step_en; i++)
        itog *= number;

    return itog;

    /* ИЛИ
     void
     cout <<  pow(number, step_en); */
}

unsigned long long int factor(unsigned int number) // 2.2
{
    long long int itog = 1;
    for (int i = 0, number1 = 1; i <= number; i++)
    {
        itog *= number1;
        number1++;
    }

    return itog;
}

int sum(int number1, int number2) // 2.5
{
    int summa = number1 + number2;

    return summa;
}

int sumChifr(int number) // 2.3 - проверить
{
    int num = number;
    int summa = 0;

    while (num > 0)
    {
        summa += num % 10;
        num /= 10;
    }

    return summa;

}

void reverse_number(int number) // 2.4         не знаю, как сделать функцию через int, чтобы вывести true или false, ведь там нужен boolalpha
{
    bool xXxX = false;
    int itog = 0;
    int tmp = number;
    while (number != 0)
    {
        itog = 10 * itog + number % 10;
        number /= 10;
    }
    if (tmp == itog)
        xXxX = true;

    cout << boolalpha << xXxX;
}

void simple_number(int number) // 2.6
{
    bool aswD = false;
    if (number % 2 == 0)
        cout << boolalpha << aswD;
    else
    {
        aswD = true;
        cout << boolalpha << aswD;
    }
}

void che_number(int number) // 2.7
{
    bool aswD = true;
    if (number % 2 == 0)
        cout << boolalpha << aswD;
    else
    {
        aswD = false;
        cout << boolalpha << aswD;
    }
}

int main()
{
    //minArray(); // 1.1
    
    //maxArray(); //1.2
    
    //sumArray(); //1.3

    /*int x; //1.4
    int y;
    cin >> x >> y;
    multiplication(x, y);*/

    /*int elem; //1.5
    cin >> elem;
    index(elem);*/

    /*int num; //1.6
    cin >> num;
    search(num);*/

    //print(); //1.7
    
    //arifmet(); //1.8

    //negative(); //1.9

    /*int num; //1.10
    cin >> num;
    vhozden(num);*/

    //chetn(); //1.11

    //positive(); //1.12

    //nechetn(); //1.13

    //sort(); //1.14

    /*int num, step; //2.1
    cin >> num >> step;
    stepen(num, step);*/

    /*int num; //2.2
    cin >> num;
    factor(num);*/

    /*int num; //2.3
    cin >> num;
    sumChifr(num);*/
    
    /*int num; //2.4
    cin >> num;
    reverse_number(num);*/

    /*int num1, num2; //2.5
    cin >> num1 >> num2;
    sum(num1, num2);*/

    /*int num; //2.6
    cin >> num;
    simple_number(num);*/

    /*int num; //2.7
    cin >> num;
    che_number(num);*/

    /*
    Работает:  1.5-1.7, 1.14, 2.4, 2.6-2.7                   ФУНКЦИИ VOID
    Ничего не выводит: 1.1-1.4, 1.8-1.13, 2.1-2.3, 2.5       ВО ВСЕХ ЕСТЬ RETURN
    */
    return 0;
}
