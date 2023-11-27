#include <iostream>
#include "Coffee_machine.h"


int main()
{
  Coffee_machine machine_1;  
  std::cout << machine_1.get_speed_value() << std::endl;
  machine_1.set_speed_value(5);
  std::cout << machine_1.get_speed_value() << std::endl;
  

    
    
    return 0;
}
