#include<iostream>
using namespace std;
class Updatable
{
public:
    virtual void update() = 0;
};

class SomeClass : public Updatable
{
public:
    virtual void update()
    {
        printf("update for SomeClass was called\n");
    }
};

class AnotherClass : public Updatable
{
public:
    virtual void update()
    {
        printf("update for AnotherClass was called\n");
    }
};

int main()
{
    Updatable* v[10];
    int n = 0;
    SomeClass a, b;
    AnotherClass c, d;
    v[n++] = &a;
    v[n++] = &b;
    v[n++] = &c;
    v[n++] = &d;

    for (int i = 0; i < n; i++)
     v[i]->update();
}