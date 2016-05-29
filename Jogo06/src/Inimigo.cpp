#include "Inimigo.h"


Inimigo::Inimigo()
{
    //ctor
    id++;
     myId=id;
}

Inimigo::~Inimigo()
{
    //dtor
}


const char* Inimigo::Get_Name(){

    return &name[0];
}

const int Inimigo:: GetposX(){

 return posx;
}

const int Inimigo::GetposY(){

 return posy;
}

const int Inimigo::GetId(){

 return myId;
}

void Inimigo::Set_Name(std::string n){

 name.clear();
 name.append(n);
 name.append("\0");
}

void Inimigo::SetposX(const int x){

   posx=x;
}

void Inimigo::SetposY(const int y){

    posy=y;

}
int Inimigo::id=0;
