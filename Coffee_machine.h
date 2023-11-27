#ifndef COFFEE_MACHINE_H
#define COFFEE_MACHINE_H


class Coffee_machine{
    public:

        // Constructors
        Coffee_machine() = default;
        Coffee_machine(double speed, double weight);

        //Methods
        auto characteristic();

        // Setters and getters
        double get_speed_value(); 

        void set_speed_value(double speed);
        
    private:
        double m_speed{2};
        double m_weight{2};
};

#endif