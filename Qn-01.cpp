
#include<iostream>
#include<string.h>
using namespace std ;

class Numbers
{
    private :
        int size ;
        int *arr ;
    public :
        Numbers (int s)
        {
            size = s ;
            arr = (int*) malloc (size) ;

        } 
        // copy constructor 
        Numbers(Numbers &n)
        {
            size = n.size ;

            arr = (int*) malloc (size) ;
            for (int i=0 ; i<size ; i++)
                arr[i] = n.arr[i] ;
        }
        // destructor
        ~Numbers()
        {
            free(arr) ;
        }   
        
        void showData()
        {
            cout<<"Size - "<<size<<" Address - "<<arr<<endl<<" Value - "<<endl ;
            for (int i=0 ; i<size ; i++)
                cout<<arr[i]<<" " ;
            cout<<endl ;
        }
        
};

int main ()
{
    Numbers n1(5) ;
    Numbers n2 = n1 ;

    n1.showData() ;
    n2.showData() ;

    n1.~Numbers() ;
    n2.~Numbers() ;
    return 0 ;
}
