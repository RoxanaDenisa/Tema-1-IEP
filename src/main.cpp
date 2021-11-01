#include <iostream>
#include <string.h>
using namespace std;
class Student{
    private:
        int varsta;
        char *nume;
        int nota_examen;
        char gen;
    public:
        //Constructor
        Student(int v, int g, char *n, char G){
            varsta=v;
            nota_examen=g;
            nume=new char[strlen(n)+1];
            strcpy(nume,n);
            gen=G;
             cout<<"Constructor\n";
        }
        
        //Copy constructor
        Student(const Student &obj){
            varsta=obj.varsta;
            nota_examen=obj.nota_examen;
            gen=obj.gen;
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
            if (gen=='M')
                cout<<"Studentul "<<nume<<" a obtinut nota "<<nota_examen<<"\n";
            else
                 cout<<"Studenta "<<nume<<" a obtinut nota "<<nota_examen<<"\n";
        }
        void display(int age){
             if (gen=='M')
                 cout<<"Studentul "<<nume<< " cu varsta de "<<varsta<<" ani a obtinut nota "<<nota_examen<<"\n";
            else
                 cout<<"Studenta "<<nume<< " cu varsta de "<<varsta<<" ani a obtinut nota "<<nota_examen<<"\n";
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
    char genul;

    cout<<"Numele este ";
    cin>>name;

    cout<<"Varsta este ";
    cin>>age;

    cout<<"Nota este ";
    cin>>grade;

    cout<<"Genul este M/F:";
    cin>>genul;

    Student student1(age, grade, name, genul);
    //cout<<"Varsta studentului este "<<student1.get_varsta()<<"\n";
    //cout<<"Nota studentului este "<<student1.get_notaExamen()<<"\n";
    student1.display();
    student1.display(age);
  
    //initializare statica, adica se cunoaste valoarea de la compilare
    int age2=10;
    int grade2=10;
    char name2[]="Valentin";
    char gen2='M';
    Student student2(age2,grade2,name2,gen2);
    student2.display();
    /*
        SAU REUTILIZAND TIPURILE DE DATE 
        age=10;
        grade=10;
        strcpy(name, "Valentin");
        genul='M';
        Student student2(age2,grade2,name2,gen2);
        student2.display();
    */

    //Uilizarea copy-constructorului
    Student student3(student1);
    student3.display();
    cout<<"Varsta este "<<student3.get_varsta()<<"\n";
    return 0;
}
