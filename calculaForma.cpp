#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>  // Para usar std::setprecision

void menuCalculos();
void areaCirculo();
void areaQuadrado();
void areaRetangulo();
void areaTriangulo();

void limparTela();

int main(){
    menuCalculos();
}

void menuCalculos(){
    int op = 0;

    std::cout << "CALCULO DE ÁREA\n\nSelecione a opção" << std::endl << std::endl
              << "(1)Área do Círculo" << std::endl
              << "(2)Área Quadrada" << std::endl
              << "(3)Área retangular" << std::endl 
              << "(4)Área Triangulo" << std::endl
              << ">>>:";

    std::cin >> op;

    system("cls");

   switch (op)
   {
   case 1:
        std::cout << "Calculo da Área do Círculo:" << std::endl;
        areaCirculo();
    break;
   case 2:
        std::cout << "Calculo de Área do Quadrado" << std::endl;
        areaQuadrado();
    break; 
   case 3:
        std::cout << "Calculo de Área do Retangulo" << std::endl;
        areaRetangulo();
    break; 
   case 4:
        std::cout << "Calculo de Área do Triangulo" << std::endl;
        areaTriangulo();
    break;
    
   default:
        std::cout << "Algo deu errado! " << std::endl;
        menuCalculos();
    break;
   }           
}

//Funções de Calculo de Área

//Área do Círculo (A = PI*r**2)
void areaCirculo(){
    const float PI = 3.14159265;
    float a = 0.0;
    float r = 0.0;
    std::string back;

    std::cout << "Digite o RAIO da circunferencia\n>>>:";
    std::cin >> r;

    a = PI * std::pow(r, 2);

    std::cout << "ÁREA: " << std::fixed << std::setprecision(2) << a << std::endl;
    std::cout << std::endl;
   
   limparTela();
}

//Área do Quadrado (A = l**2)
void areaQuadrado(){
    float a = 0.0;

    std::cout << "Digite quanto mede o LADO do quadrado\n>>>:";
    std::cin >> a;

    a = std::pow(a, 2);

    std::cout << "ÁREA: " << std::fixed << std::setprecision(2) << a << std::endl;
    std::cout << std::endl;

    limparTela();
}

//Área do Retangulo (A = L * C)
void areaRetangulo(){
    float a = 0.0;
    float l,c = 0.0;

    std::cout << "Digite quanto mede Comprimento e largura do retangulo\n>>>:";
    std::cin >> l >> c;
    
    a = l * c;

    std::cout << "ÁREA: " << std::fixed << std::setprecision(2) << a << std::endl;
    std::cout << std::endl;

    limparTela();
}

//Área do Triangulo (A = B*H / 2)
void areaTriangulo(){
    float a = 0.0;
    float b,h = 0.0;

    std::cout << "Digite BASE e ALTURA\n>>>:";
    std::cin >> b >> h;

    a = b * h / 2;

    std::cout << "ÁREA: " << std::fixed << std::setprecision(2) << a << std::endl;
    std::cout << std::endl;

    limparTela();
}


//UTILITÁRIOS

void limparTela() {
    std::cout << "Pressione ENTER para voltar ao menu...";
    std::cin.ignore();  // Ignora qualquer entrada anterior
    std::cin.get();     // Aguarda o pressionamento de Enter
    system("cls");      // Limpa a tela
    menuCalculos();     // Volta ao menu
}