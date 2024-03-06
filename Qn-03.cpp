/*Define a class Date with d, m , y as instance variables.
Initialise members using initialiser. */

#include<iostream>
#include<string.h>
using namespace std ;

class Date
{
    private :
        int d,m,y ;

    public :
        Date (int d, int m , int y) : d(d),m(m) ,y(y)
        {
           //empty
        }
        void showData()
        {
            cout<<d<<"/"<<m<<"/"<<y<<endl ;
        }  
};
int main ()
{
    Date d1(20,04,2003) ;
    d1.showData() ;
    
    return 0 ;
}
