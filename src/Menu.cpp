#include <iostream>
#include <string>
using namespace std;
#include "Items.h"
#include "Menu.h"

Menu::Menu()
{
    _cantidad=0;
    _item = nullptr;
}

void Menu::CargarItem(string nombre){

    Items *bufferCantidad;
    bufferCantidad = new Items[_cantidad+1];
    for(int i = 0; i < _cantidad; i++){

        bufferCantidad[i] = _item[i];
    }

    bufferCantidad[_cantidad].setNombreDeItem(nombre);
    if(bufferCantidad == nullptr) delete bufferCantidad;
    _item = bufferCantidad;
    _cantidad++;

}


void Menu::MostrarItem(){

    for(int i = 0; i < _cantidad; i++){
    cout << _item[i].getNombreDeItem()<<endl;

    }
}

