#include <iostream>

using namespace std;

class Myclass
{
    int array[10];
    int index;
    public:
        Myclass()
        {
            index=0;
        }

        void add(int x);
        void print();

        Myclass & operator=(Myclass & x);
        int getElement(int i);
        int getIndex()
        {
            return index;
        }
};

void Myclass::add(int x)
{
    Myclass::array[index]=x;
    Myclass::index++;
}

void Myclass::print()
{
    for(int i=0; i< index; i++)
        cout << array[i]<<" ";
    cout<< endl;
}

int Myclass::getElement(int x)
{
    return array[x];
}

Myclass & Myclass::operator=(Myclass &x)
{
    Myclass new1;
    for(int i=0; i<x.getIndex(); i++)
    {
       this->add(x.getElement(i));
    }

    return new1;
}

int main()
{
    Myclass a,b;

    a.add(33);
    a.add(17);
    a.add(89);
    a.add(1);
    a.add(8);
    a.add(39);


    b=a;
    b.print();

    cout <<"Complexity (Step) = " << "O(" << b.getIndex() << ") = O(n) " << endl;

    return 0;
}

