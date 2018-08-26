#include <iostream>
#include <string>
#include "data.h"

        Data::Data(int dia, int mes, int ano){
            this->dia = dia;
            this->mes = mes;
            this->ano = ano;
        }

        int Data::get_dia(){
            return this->dia;
        }

        int Data::get_mes(){
            return this->mes;
        }

        int Data::get_ano(){
            return this->ano;
        }

        std::string Data::get_data_curto(){
            return std::to_string(get_dia())+"/"+std::to_string(get_mes())+"/"+std::to_string(get_ano());
        }

        std::string Data::get_data_longo(){
           std::string meses[12]= {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

           return std::to_string(get_dia())+" de "+meses[get_mes()]+" de "+std::to_string(get_ano());
        }


int main()
{
    Data d = Data(12, 1, 2014);
    std::cout << d.get_data_longo() << std::endl;
    return 0;
}

