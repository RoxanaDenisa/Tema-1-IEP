#include <iostream>
#include <string.h>
using namespace std;
class Student{
    private:
        int varsta;
        char *nume;
        int nota_examen;
    public:
        //Constructor
        Student(int v, int g, char *n){
            varsta=v;
            nota_examen=g;
            nume=new char[strlen(n)+1];
            strcpy(nume,n);
             cout<<"Constructor\n";
        }
        
        //Copy constructor
        Student(const Student &obj){
            varsta=obj.varsta;
            nota_examen=obj.nota_examen;
            nume=new char[strlen(obj.nume)+1];
            strcpy(nume,obj.nume);
            cout<<"Copy constructor\n";
                         
        }

        //Destructor
        ~Student(){
            cout<<"Freeing\n";
            delete nume;

        }
        
        
};

int main()
{
   

    return 0;
}
