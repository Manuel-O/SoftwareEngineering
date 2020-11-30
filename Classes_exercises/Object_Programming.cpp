
// Software engineering Homework 3.1
// Manuel Ojeda Osorio
// M1 MAIA Student

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

class ZooAnimal {

private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;

public:
    void Destroy (); // destroy function
    char* reptName ();
    int daysSinceLastWeighed (int today);

    void NewAnimal(char *name, int numberCage, int dateWeight, int weight){
        this-> name = name;
        this-> cageNumber = numberCage;
        this-> weightDate = dateWeight;
        this-> weight = weight;
        }
   };

void ZooAnimal::Destroy(){
    delete [] name;
    }

    // -------- member function to return the animal's name
char* ZooAnimal::reptName(){
    return name;
    }

    // -------- member function to return the number of days
    // -------- since the animal was last weighed
int daysSinceLastWeighed(int today){
    int startday, thisday, weightDate;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
        thisday += 360;
    return (thisday-startday);
   }


// ========== an application to use the ZooAnimal class
int main ()
{
    ZooAnimal bozo;
    bozo.NewAnimal ("Bozo", 408, 1027, 400);

    cout << "This animal's name is " << bozo.reptName() << endl;

    bozo.Destroy ();
}

