#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
    // ((b) Fernando Ponce
    Employee employeesStack[5]={
        Employee("Julio ","Zela "),
        Employee("Octavio ","Muñoz "),
        Employee("Ricardo ","Palma "),
        Employee("Caballero ","Carmelo "),
        Employee("Alvaro ","Cuadros ")
    };

    // ((c) Fernando Ponce
    Employee* employessHeap = new Employee[5]{
        Employee("Leandro ","Ayala "),
        Employee("Jordan ","Castelo "),
        Employee("Vasco ","Gutierrez "),
        Employee("Miram ","Malaga "),
        Employee("Mirta ","Malaga ")       
    };
  
    //(d) Fernando
    // hay 10 objetos, 5 en el stack y 5 en el heap.

    // ((e)  
    delete[] employessHeap;    
    std::cout<<"Despues de liberar:"<<Employee::getCount()<<std::endl;

    // (f)
    /* En valor de count es 5, porque existen 5 objetos en el stack. Los objetos
        del heap fueron liberados con el operador delete */

    // ((g) Fabricio
    Employee* emplodina1; 
    Employee* emplodina2;
    if(true) {
        emplodina1 = new Employee("obj1 ", "obj1");
        emplodina2 = new Employee("obj2 ", "obj2");                
    }
    
    // (g)
    /* El valor de count es 7, porque se crearon dos nuevos objetos dentro de la
        condicional IF. */

    
    // ((i) 
    delete emplodina1;
    delete emplodina2;
    
    std::cout<<"Liberar memoria: "<<Employee::getCount()<<std::endl;

    return 0;
}