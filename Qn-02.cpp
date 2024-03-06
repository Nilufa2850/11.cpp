/*Define a class Student and write a program to enter student details 
using constructor and define member function to display all the detailes.*/

#include<iostream>
#include<string.h>
using namespace std ;

class Student
{
    private :
        int roll_no ;
        char name[30] ;
        char Class[10] , section ;

    public :
        Student ()
        {
            roll_no = 1 ;
            strcpy (name,"Nimlufa yasmin") ;
            strcpy(Class , "3rd Year") ;
            section = 'A' ;
        }
        void showData()
        {
            cout<<"Roll No. -  "<<roll_no<<endl ;
            cout<<"Name     -  "<<name<<endl ;
            cout<<"Class    -  "<<Class<<endl ;
            cout<<"Section  -  "<<section<<endl ;
        }  
};
int main ()
{
    Student s1 ;
    s1.showData() ;
    return 0 ;
}
