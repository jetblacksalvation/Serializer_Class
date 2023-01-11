// RAII_stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//interface - required to be implemnted via programmer 

namespace VR {


    template <class Virtual_Class>
    class Serial {
    private:
        typedef  Virtual_Class* _Virtual_Cl_PTR;



        //long long Byte_Lengths[sizeof(Virtual_Class)];//each member must have the size of members created
        _Virtual_Cl_PTR instance = 0;

    public:


        //write a bunch of overloads 


        Serial(FILE *f) {
            //first arguement counts members, all others 

        };//invoker must define
        virtual int Write_C(FILE* f) = 0;
        virtual int S_Write_C(FILE * f) = 0;
        virtual Virtual_Class S_Read_C(FILE* f) = 0;//returns an instance of class 
    };
    template <class num>
    class Serial_Number : VR::Serial<num> {
        //where num is a number AND NOT a class, classes will have to be created themselves
    public:
        virtual int Write_C(FILE* f) {
            // i should abstract file writing and reading 
        }


    };
}


int p() {
    std::cout << "hello\n";
    return 0;
}

int main()
{


    std::cout << "Hello World!\n";
}
    