# Colores c++

  implementar colores y estilos de textos en la consola 
  
  ## dependencias
   ```cpp
   #include <iostream>
   #include <string>
   ```
   
## instalacion 
  ```
  git clone https://github.com/rrjo-0/Color-c--
  ```
  *(para trabajar el archivo en otra carpeta mueva el archivo)*
  
 ## USO
  *(rgb)*
  ```cpp
  #include <iostream>
  #include <color.h>
  using namespace std;

  int main(){
    cout << "rgb" << console.rgb(174,79,58) << " test\n" << F_Normal;
    return 0;
  }
  ```
 
 ## Valores definidos
<table align="width:90%">
    <thead>
        <tr>
            <th align="center">Colores</th>
            <th align="center">Color de Fondo</th>
            <th align="center">estilo</th>
        </tr>
        <tbody>
            <tr>
                <td align="center">Black</td>
                <td align="center">BG_Black</td>
                <td align="center">F_italics</td>
            </tr>
            <tr>
                <td align="center">Green/Green2</td>
                <td align="center">BG_Green</td>
                <td align="center">F_transparent</td>
            </tr>
            <tr>
                <td align="center">Yellow</td>
                <td align="center">BG_Yellow</td>
                <td align="center">F_Normal</td>
            </tr>
            <tr>
                <td align="center">Blue</td>
                <td align="center">BG_Blue</td>
                <td align="center">F_Bold</td>
            </tr>
            <tr>
                <td align="center">Magenta</td>
                <td align="center">BG_Magenta</td>
                <td align="center">F_Strikethrough</td>
            </tr>
            <tr>
                <td align="center">Cyan</td>
                <td align="center">BG_Cyan</td>
                <td align="center">F_BlinkingText</td>
            </tr>
            <tr>
                <td align="center">White</td>
                <td align="center">BG_White</td>
                <td align="center"></td>
            </tr>
        </tbody>
    </thead>
</table>
  
   
