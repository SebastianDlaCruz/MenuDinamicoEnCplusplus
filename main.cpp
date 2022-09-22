#include <iostream>
#include <string>
using namespace std;
#include "Items.h"
#include "Menu.h"
int main(){

    Menu menu;
    menu.CargarItem("1)Inicio");
    menu.CargarItem("2)Cargar");
    menu.CargarItem("3)Mostrar");
    menu.CargarItem("3)Delegar");
    menu.CargarItem("0)Salir");


    menu.MostrarItem();
}
