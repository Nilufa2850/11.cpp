/*Define a class Circle with radius as instance variable.
Define rwo constructor in the class non parameterised and parameterised.*/

#include<iostream>
using namespace std ;

class Circle
{
    private :
        int rad ;

    public :
        Circle ()
        {
            rad = 1 ;
        }
        Circle (int r)
        {
            rad = r ;
        }
        void showData()
        {
            cout<<"Radius-"<<rad<<" Area-"<<3.14*rad*rad<<endl ;
        }
};

int main ()
{
    Circle c1,c2(5) ;

    c1.showData() ;
    c2.showData() ;
    
    return 0 ;
}
