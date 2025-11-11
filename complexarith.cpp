#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float r,float i)
    {real=r;
    imag=i;
    }
    ~complex()
    {
    }
complex operator+(complex c)
{
float r=real+c.real;
float i=imag+c.imag;
return(complex(r,i));
}
complex operator-(complex c)
{
    float r=real-c.real;
    float i=imag-c.imag;
    return(complex(r,i));
}
complex operator*(complex c)
{
    float r=real*c.real-imag*c.imag;
    float i=real*c.real+imag*c.imag;
    return(complex(r,i));
}
 complex operator/(complex c) 
 {
        float denominator = c.real * c.real + c.imag * c.imag;
        if (denominator == 0) {
            cout << "Division by zero error!" << endl;
            return complex(0, 0);
        }
        float r = (real * c.real + imag * c.imag) / denominator;
        float i = (imag * c.real - real * c.imag) / denominator;
        return complex(r, i);

}
void display(void)
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}
};
int main()
{
    complex c1(6,4),c2(4,3);
    cout<<"First complex number:";
    c1.display();
    cout<<"Second complex number;";
    c2.display();
    complex sum=c1+c2;
    cout<<"sum:";
    sum.display();
    complex diff=c1-c2;
    cout<<"difference";
    diff.display();
    complex prod=c1*c2;
    cout<<"product";
    prod.display();
    complex div=c1/c2;
    cout<<"division";
    div.display();
    return(0);
}
