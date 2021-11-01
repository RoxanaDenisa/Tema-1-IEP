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
        
        
        
};

int main()
{
   

    return 0;
}
