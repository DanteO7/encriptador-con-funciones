#include <iostream>
#include <cstring>
using namespace std;

void minusculas(char texto[]){

for(int i=0;i<strlen(texto);i++){
texto[i]=tolower(texto[i]);

}
}

string encriptar(char texto[]){
int aux;
char letras [] = {"abcdefghijklmnopqrstuvwxyz"};
string textoEncriptado;
for(int i=0;i<strlen(texto);i++){
  if(texto[i]==' '){
    textoEncriptado+='*';
}
    for(int j=0;j<strlen(letras);j++){
        if(texto[i]==letras[j]){
            aux=(j+2);
            if(aux>=strlen(letras)){
                aux=aux-strlen(letras);
                textoEncriptado+= letras[aux];
            }else{
                textoEncriptado+= letras[aux];
                }
            }
        }
    }
    return textoEncriptado;
}

string desencriptar(char texto[]){
int aux;
char letras [] = {"abcdefghijklmnopqrstuvwxyz"};
string textoDesencriptado;
for(int i=0;i<strlen(texto);i++){
  if(texto[i]=='*'){
    textoDesencriptado+=" ";
}
    for(int j=0;j<strlen(letras);j++){
        if(texto[i]==letras[j]){
            aux=(j-2);
            if(aux<0){
                aux=aux+strlen(letras);
                textoDesencriptado+=letras[aux];
            }else{
                textoDesencriptado+=letras[aux];
                }
            }
        }
    }
    return textoDesencriptado;
}

int main (){

int decision;
string textoEncriptado;
char textoUsuario[100];
char textoEncriptadoArray[100];

cout << "ingresar un texto: ";
cin.getline(textoUsuario, 100);

cout << endl << "que quiere hacer?: " << endl << "1.encriptar el texto" << endl << "2.desencriptar texto" << endl << "3.terminar el programa" << endl;
cin >> decision;
minusculas(textoUsuario);
while(decision!=3){
if (decision==1){
    textoEncriptado=encriptar(textoUsuario);
    cout << "el texto encriptado es: " << textoEncriptado << endl;
    cout << endl << "que quiere hacer?: " << endl << "1.encriptar el texto" << endl << "2.desencriptar texto" << endl << "3.terminar el programa" << endl;
    cin >> decision;
}else if(decision==2){
    strcpy(textoEncriptadoArray, textoEncriptado.c_str());
    string textoDesencriptado=desencriptar(textoEncriptadoArray);
    cout << "el texto desenciptado es: " << textoDesencriptado << endl;
    cout << endl << "que quiere hacer?: " << endl << "1.encriptar el texto" << endl << "2.desencriptar texto" << endl << "3.terminar el programa" << endl;
    cin >> decision;
}else{
    cout << "error. ingrese un numero valido" << endl << endl << "que quiere hacer?: " << endl << "1.encriptar el texto" << endl << "2.desencriptar texto" << endl << "3.terminar el programa" << endl;
    cin >> decision;
}
}
return 0;
}
