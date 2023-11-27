#include "Coffee_machine.h"
#include "constants.h"
#include <iostream>
        
        
        // Constructors
        
        Coffee_machine::Coffee_machine(double speed, double weight){
            m_speed = speed;
            m_weight = weight;            
        };

        //Methods
        auto Coffee_machine::characteristic(){
        return m_speed * m_weight * secret_variable;
        }

        // Setters and getters
        double Coffee_machine::get_speed_value(){
            return m_speed;
        }   

        void Coffee_machine::set_speed_value(double speed){
            m_speed = speed;
        }

        