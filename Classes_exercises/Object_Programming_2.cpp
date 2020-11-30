
// Software engineering Homework 3.2
// Manuel Ojeda Osorio
// M1 MAIA Student

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

enum scale {ounces, kilograms};

class ZooAnimal  {
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
    ZooAnimal *mother;
public:
    void NewAnimal (char*, int, int, int); // create function
    void Destroy (); // destroy function
    void isMotherOf (ZooAnimal& mother){
        this->mother = &mother;
    }
    void changeWeight (int pounds);
    void changeWeightDate (int today){
        this->weightDate = today;
    }
    char* reptName ();
    int reptWeight ();
    void reptWeight (scale which);
    inline int reptWeightDate ();
    int daysSinceLastWeighed (int today);
};

void ZooAnimal::NewAnimal(char *name, int numberCage, int dateWeight, int weight){
    this-> name = name;
    this-> cageNumber = numberCage;
    this-> weightDate = dateWeight;
    this-> weight = weight;
    }

inline int ZooAnimal::reptWeightDate()
{
    return this->weightDate;
}

    // -------- member function to return the animal's name
char* ZooAnimal::reptName(){
    return name;
    }

int main()
{
    ZooAnimal child_tiger, mother_tiger;
    child_tiger.NewAnimal("Alex", 23, 151120, 350);
    mother_tiger.NewAnimal("Sylvia", 24, 051020, 300);
    child_tiger.isMotherOf(mother_tiger);
    cout << "Alex's weight date : " << child_tiger.reptWeightDate() << endl;
    cout << "The mother of Alex is: " << mother_tiger.reptName() << endl;

}
