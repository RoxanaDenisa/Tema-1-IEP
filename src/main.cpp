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

        Student& operator=(const Student&)=delete;//disable copy-assignmnt
        
};

int main()
{
    //initializare dinamica
    int age;
    int grade;
    char name[20];

    cout<<"Numele este ";
    cin>>name;

    cout<<"Varsta este ";
    cin>>age;

    cout<<"Nota este ";
    cin>>grade;

    Student student1(age, grade, name);
    //cout<<"Varsta studentului este "<<student1.get_varsta()<<"\n";
    //cout<<"Nota studentului este "<<student1.get_notaExamen()<<"\n";
    student1.display();
    student1.display(age);
  
    //initializare statica, adica se cunoaste valoarea de la compilare
    int age2=10;
    int grade2=10;
    char name2[]="Valentin";
    Student student2(age2,grade2,name2);
    student2.display();

    //Uilizarea copy-constructorului
    Student student3(student1);
    student3.display();

    return 0;
}
