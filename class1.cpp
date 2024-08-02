#include<bits/stdc++.h>

using namespace std;

class Box
{
    public:
    int height;
    int width;
    int length;
    string colour;

    Box(int height, int width, int length, string colour)
    {
        this->height = height;  //*box1.height
        this->width = width;
        this->length = length;
        this->colour = colour;
    }

    Box()
    {
        this->height = 6;
        this->width = 6;
        this->length = 6;
        this->colour = "blue";
    }
    
    void print()
    {
        cout<<height<<endl;
        cout<<width<<endl;
        cout<<length<<endl;
        cout<<colour<<endl;
    }

    void print_colour()
    {
        cout<<colour<<endl;
    }

    int get_volume()
    {
        return height*length*width;
    }

};

// class Order
// {
    
// };

int main()
{
    Box* box1 = new Box(9,9,9,"red");
    box1->print();
    cout<<box1->get_volume();
    cout<<box1<<endl;
    Box* box2 = new Box(5,5,5,"pink");
    cout<<"---------------------------\n";
    box2->print();
    cout<<box2;
    cout<<"---------------------------\n";
    Box box3 = Box(10,10,10,"black");
    box3.print();
    cout<<box3.get_volume();
    return 0;
}