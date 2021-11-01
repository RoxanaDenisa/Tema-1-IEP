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
        int get_varsta(){
            return varsta;
        }
        int get_notaExamen(){
            return nota_examen;
        }
        void display(){
             cout<<"Studentul "<<nume<<" a obtinut nota "<<nota_examen<<"\n";
        }
        void display(int age){
             cout<<"Studentul "<<nume<< " cu varsta de "<<varsta<<" ani a obtinut nota "<<nota_examen<<"\n";
        }
        //Overloading la metoda display

        
        
};

int main()
{
   

    return 0;
}
