/*Define a class Room for a hotel management project with room_no, room_type
, is_AC , price as instance variables. Initialise instance variables using 
constructor.*/

#include<iostream>
#include<string.h>
using namespace std ;

class Room
{
    private :
        int room_no ;
        char room_type[10] , is_AC[5] ;
        float price ;

    public :
        Room ()
        {
           room_no = 104 ;
           strcpy(room_type,"1BHK") ;
           strcpy(is_AC,"NO") ;
           price = 1000 ;
        }
        Room (int r , char type[] , char ac[] , float p)
        {
            room_no = r ;
            strcpy(room_type,type) ;
            strcpy(is_AC,ac) ;
            price = p ;
        }
        void showData()
        {
            cout<<room_no<<" "<<room_type<<" "<<is_AC<<" "<<price<<endl ;
        }
};

int main ()
{
    Room r1 , r2(200,"Double","YES",5000) ;

    r1.showData() ;
    r2.showData() ;
    
    return 0 ;
}
