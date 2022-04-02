// Перегрузіть оператор -,+,*,/ для класу, в якому зберігаєте координати цілих точок
#include <iostream>
#include<Windows.h>
using namespace std;
class Point
{
private: 
	int m_a;
	int m_b;
public:
	Point() {//конструктор без параметів
		m_a = 0;
		m_b = 0;
	}
    Point(int m_a, int m_b) {//конструктор присвоєння значень
        this->m_a = m_a;
        this->m_b = m_b;
    }
    Point& operator + (const Point& other) { //перевантаження оператору +
        Point m_c;
        m_c.m_a=this->m_a + other.m_a;     
        m_c.m_b= this->m_b + other.m_b;
       
        return m_c;
    }   
    Point& operator - (const Point& other) { //перевантаження оператору -
        Point m_c;
        m_c.m_a = this->m_a - other.m_a;
        m_c.m_b = this->m_b - other.m_b;

        return m_c;
    }
    Point& operator * (const Point& other) { //перевантаження оператору *
        Point m_c;
        m_c.m_a = this->m_a * other.m_a;
        m_c.m_b = this->m_b * other.m_b;

        return m_c;
    }
    Point& operator / (const Point& other) { //перевантаження оператору /
        Point m_c;
        m_c.m_a = this->m_a / other.m_a;
        m_c.m_b = this->m_b / other.m_b;

            return m_c;
    }     
    void print() {//ф-н виводу точок
        cout << "first point = " << m_a << " second point = " << m_b << endl;
    }
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Point A(10 , 8);
    Point B(5 , 4);
    Point C;
    C = A + B;
    cout << "Додавання :";
    C.print();
    
    C = A - B;
    cout << "Віднімання :";
    C.print();

    C = A * B;
    cout << "Множення :";
    C.print();

    C = A / B;
    cout << "Ділення :";
    C.print();
    
}

