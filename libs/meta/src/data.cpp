#include "data.h"
#include <iostream>

Data::Data(int data){
    this->m_data = data;
}
void Data::display(){
    std::cout<< "Data " << this->m_data << std::endl;
}