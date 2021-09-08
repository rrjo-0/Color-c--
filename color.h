/*
           _____    
          / ___ \  
         / /__/ | ____  
        / __  _/'/    \+ +
       / /  \ \ | |||. |+  +
   + +/_/ + /_/+'\____/' + +
    + +++  +   ++  +  + ++  +
      creado por: rrjo
    
         ++ github: rrjo-0 ++
    Gracias por verme o usarme!!!!


*/
#include <iostream>
#include <string>

// verfica si es linux o Windows
#ifdef linux
    #define OS 1
#endif
#ifdef _WIN32
    #define OS 2
#endif

// si es linux los caracteres especiales estan activados

// colores para los caracteres de la consola
#define Black "\e[30m"
#define Green "\e[31m"
#define Green2 "\e[32m"
#define Yellow "\e[33m"
#define Blue "\e[34m"
#define Magenta "\e[35m"
#define Cyan "\e[36m"
#define White "\e[37m"

// colores para el fondo de la consola
#define BG_Black "\e[40m"
#define BG_Green "\e[42m"
#define BG_Yellow "\e[43m"
#define BG_Blue "\e[44m"
#define BG_Magenta "\e[45m"
#define BG_Cyan "\e[46m"
#define BG_White "\e[47m"

// formatos de letra
#define F_italics "\e[3m"
#define F_transparent "\e[8m"
#define F_Normal "\e[0m"
#define F_Bold "\e[1m"
#define F_Strikethrough "\e[9m"
#define F_BlinkingText "\e[5m"

using namespace std;



// rgb
class console{
    public:
    struct{
        int rgb = 0;
    }error;
    
    string rgb(int r, int g, int b){
        try{
             if (r < 256 && g < 256 && b < 256){
                     return "\e[38;2;" + to_string(r) + ";" + to_string(g) + ";" + to_string(b) + "m";
             }  
         error.rgb = 1;
         return "";
        }catch(const std::exception& e){
         error.rgb = 1;
         return "";
        }
      return "";
    }
}console;
