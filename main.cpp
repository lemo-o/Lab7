/*
Ben Hall
Section 05
10/12
Lab 7
*/
#include <iostream>
using namespace std;
#include <stdlib.h> //absolute value, quick and painless to change negatives to positive

class rectangle
{
    private:
    int width, height;
    public:
    void worker(int,int);
    void draw();
    int area() 
    {
        return width * height;
    }
    int perimeter()
    {
        if(height == 0 || width == 0)
        {return 0;}
        else{return width*2 + height *2;} //makes more sense if perimeter of nothing is 0.
    }
};

void rectangle::worker(int a, int b) //really hacky way of doing this so I don't have to name variables
{
    cout << "Please enter a height" << endl;
    cin >> a;
    cout << "Please enter a width" << endl;
    cin >> b;
    height = abs(a);
    width = abs(b);
}

void rectangle::draw()
{
    for(int i=0; i<height; i++){
        for(int i=0; i<width;i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    rectangle jeffrey;
    jeffrey.worker(0,0);
    jeffrey.draw();
    cout << "Area is: " << jeffrey.area() << endl;
    cout << "Perimeter is: " << jeffrey.perimeter() << endl;

    rectangle johnny;
    johnny.worker(0,0);
    johnny.draw();
    cout << "Area is: " << johnny.area() << endl;
    cout << "Perimeter is: " << johnny.perimeter() << endl;

    rectangle geoffrey;
    geoffrey.worker(0,0);
    geoffrey.draw();
    cout << "Area is: " << geoffrey.area() << endl;
    cout << "Perimeter is: " << geoffrey.perimeter() << endl;
    return 0;
}