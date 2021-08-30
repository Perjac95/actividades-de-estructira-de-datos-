#include <iostream>
#include <string>
#include <cmath>



using namespace std;
 
int main()
{
    double LadoA;
    double LadoB;
    double LadoC;
    double AreaEquilatero(double TEquilatero);
    double AreaIsosceles(double lado1,double lado2,double lado3); 
    double AreaEscaleno(double ladoA, double ladoB, double ladoC);
	int numero1;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
	int EncontrarMayor(int Num1, int Num2, int Num3, int Num4, int Num5);
    double CalcularPromedio(double suma, double contar);
    int contador = 0;
    double valores;
    double suma;
    double promedio; 
	
    cout << "Manuel Alberto Martinez,\nCarnet: MH100217\nDigita los lados para saber que tipo de triangulo es: \n";
	cout << "y en base a ello determinaré si es equilátero, escaleno o isósceles.\nEn base a la información, calcularé el área de dicha figura.\n";
    cout << "Primer lado: \n"; cin >> LadoA;
    cout << "Segundo lado: \n"; cin >> LadoB;
    cout << "Tercer lado: \n"; cin >> LadoC;
    
 
    if (LadoA == LadoB && LadoB == LadoC){
        cout << "Es un triangulo Equilatero \n " << endl;
        
        AreaEquilatero(LadoA);

        
    }else if(LadoA == LadoB || LadoA == LadoC || LadoB == LadoC){
        cout << "Es un triangulo Isosceles \n" << endl;
        
        AreaIsosceles(LadoA,LadoB,LadoC);
        
    }else{
        cout << "Es un triangulo Escaleno \n" << endl;
        
        AreaEscaleno(LadoA,LadoB,LadoC);
        
    }
	cout << "\n EJERCICIO 2";
    cout << "\n Ingrese 5 números y se le mostrara el numero mayor: \n";
    cout << " Ingrese Numero 1: "; cin >> numero1;
    cout << " Ingrese Numero 2: "; cin >> numero2;
    cout << " Ingrese Numero 3: "; cin >> numero3;
    cout << " Ingrese Numero 4: "; cin >> numero4;
    cout << " Ingrese Numero 5: "; cin >> numero5;

    EncontrarMayor(numero1,numero2,numero3,numero4,numero5);


	cout << "\n EJERCICIO 3";
    cout << "\n Introduzca los valores, para calcular el promedio: \n Para finalizar escriba \"0\" \n" ;
    
    while(valores !=0){
        contador++;
        cout << "Numero " << contador << " :"; cin >> valores;
        suma += valores;
        
        cout << "\n La suma de los numeros es: " << suma << " los numeros ingresados son: " << (contador-1) << endl;
        CalcularPromedio(suma,contador);
       
    }
	
    return 0;
}

void AreaEquilatero(double TEquilatero){
    double area;
	
	area = (sqrt(3)/4)*pow(TEquilatero, 2);
    cout << "El area del triangulo es: \n " << area << endl;
};

void AreaIsosceles(double lado1, double lado2, double lado3){
    double base;
    double ladoigual;
    double area;
    
    if (lado1 == lado2){
            ladoigual = lado1;
            base = lado3;
        }else if(lado1 == lado3){
            ladoigual = lado1;
            base = lado2;
        }else{
            ladoigual = lado2;
            base = lado1;
        }
        area=((base)*(sqrt(pow(ladoigual,2)-(pow(base,2)/4))))/2;
        
        cout << "El area del triangulo es: \n " << area << endl;
        
};

void AreaEscaleno(double ladoA, double ladoB, double ladoC){
    double perimetro;
    double area;
    
    perimetro = (ladoA + ladoB + ladoC)/2;
    area = sqrt(perimetro*(perimetro - ladoA) * (perimetro - ladoB) * (perimetro - ladoC));
        
    cout << "El area del triangulo es: \n " << area << endl;
    
};
void EncontrarMayor(int Num1, int Num2, int Num3, int Num4, int Num5){
    int NumMayor;
    
    if(Num1 >= Num2 && Num1 >= Num3 && Num1 >= Num4 && Num1 >= Num5){
        NumMayor = Num1;
    }else if(Num2 >= Num1 && Num2 >= Num3 && Num2 >= Num4 && Num2 >= Num5){
        NumMayor = Num2;
    }else if(Num3 >= Num1 && Num3 >= Num2 && Num3 >= Num4 && Num3 >= Num5){
        NumMayor = Num3;
    }else if(Num4 >= Num1 && Num4 >= Num2 && Num4 >= Num3 && Num4 >= Num5){
        NumMayor = Num4;
    }else if(Num5 >= Num1 && Num5 >= Num2 && Num5 >= Num3 && Num5 >= Num4){
        NumMayor = Num5;
    }
    cout << "\n EL numero mayor es: " << NumMayor << endl;
};
void CalcularPromedio(double suma, double contar){
    double promedio;
    
    promedio = suma/(contar-1);
    
    cout << "\n El promedio es: " << promedio << endl;
};