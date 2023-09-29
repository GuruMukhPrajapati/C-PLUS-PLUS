#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void input_roll(int n)
    {
        roll = n;
    }

    void disp_roll()
    {
        cout << "roll is: " << roll << endl;
    }
};

class Marks : public Student
{
protected:
    float m1;
    float m2;

public:
    void input_marks(float p, float q)
    {
        m1 = p;
        m2 = q;
    }

    void disp_marks()
    {
        cout << "marks1: " << m1 << endl;
        cout << "marks2: " << m2 << endl;
    }
};

class Final : public Marks
{
private:
    float total;

public:
    void display()
    {
        total = m1 + m2;
        disp_roll();
        disp_marks();
        cout << "total marks: " << total << endl;
    }
};

int main()
{
    Final x;
    x.input_roll(1001);
    x.input_marks(54.56, 22.00);
    x.display();
    return 0;
}
