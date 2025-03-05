#include <stdio.h>
int main(){
    char operador;
        printf("%s\n","Selecciona el programa");
        printf("%s\n","a) Imprimir caracteres de escape");
        printf("%s\n","b) Imprimir los tipos de datos");
        printf("%s\n","c) Calcular un promedio");
        printf("%s\n","d) Lista de temperatura en formato entero");
        printf("%s\n","e) Lista de temperatura en formato flotante");
        printf("%s\n","f) Imprime una tabla de multiplicar");
        printf("%s\n","g) Imprimir una diagonal con asteriscos");
        printf("%s\n","h) Imprimir un cuadro de numeros");
        printf("%s\n","i) Imprimir un cuadrado de asteriscos");
        printf("%s\n","j) Imprimir un triangulo rectangulo a la izquierda");
        printf("%s\n","k) Imprimir un triangulo rectangulo a la derecha");
        printf("%s\n","l) Imprimir un triangulo equilatero");
        printf("%s\n","m) Imprime un Trapecio");
        printf("%s\n","n) Calcular promedio leyendo datos");
        printf("%s\n","o) Calcula volumen y area de una esfera");
        printf("%s\n","p) Calcula volumen y area de un cilindro");
        printf("%s\n","q) Calcula volumen y area de un cono");
        printf("%s\n","r) Ejecuta una prueba de switch con numeros");
        printf("%s\n","s) Ejecuta una prueba de switch con letras");
        printf("%s\n","t) Ejecuta una calculadora");
        scanf("%c", &operador);

    switch (operador){

        case 'a': //Ejecuta el codigo de caracteres de escape

            printf("\\a Alarma\n");
            printf("\\b Retroceso\n");
            printf("\\f Avance de pagina\n");
            printf("\\n Retorno de carro y avance de linea\n");
            printf("\\r Retorno de carro\n");
            printf("\\t Tabulacion\n");
            printf("\\\\ Diagonal invertida\n");
            printf("\\? Signo de interrogacion\n");
            printf("\\\" Comillas dobles\n");
            printf("\\000 Octal\n");
            printf("\\xhh Hexadecimal\n");
            printf("\\0 Caracter nulo\n");
        
        break;

        case 'b': //Ejecuta el codigo de tipos de datos

            printf("%s","%d Imprime datos enteros decimales: 5\n");
            printf("%s","%i Imprime datos enteros: 2\n");
            printf("%s","%o Imprime datos octales: 6\n");
            printf("%s","%x Imprime datos hexadecimales: 8A1\n");
            printf("%s","%u Imprime datos enteros sin signo en decimal: 23\n");
            printf("%s","%c Imprime datos de caracteres: #\n");
            printf("%s","%e Imprime datos reales expresados en base y exponente:5^2 \n");
            printf("%s","%f Imprime datos reales escrito con punto decimal: 23.12\n");
            printf("%s","%g Imprime datos reales : 14\n");
            printf("%s","%s Imprime cadenas de caracteres: Hola123\n");
            printf("%s","%lf Imprime datos reales de tipo long double: 2.1646466565466642\n");

        break;

        case 'c': //Ejecuta el codigo de calcular promedio con datos definidos 

            float cali1=8;
            float cali2=9;
            float cali3=10;
            float resul;

            resul = (cali1 + cali2 + cali3) / 3;

            printf("%s%f","El promedio es: ", resul);

        break;

        case 'd': //Ejecuta el codigo de imprimir la lista de temperatura en enteros

            int fahre, cel; /* Declarar variables en formato int*/
            int low, upp, stp; /* Declarar variables en formato int*/
        
                low = 0; /* Asignar valores a una variable*/
                upp = 300;  /* Asignar valores a una variable*/
                stp = 20;  /* Asignar valores a una variable*/
                fahre = low;  /* Asignar valores a una variable*/
        
                    while (fahre <= upp) {  /* Declarar un ciclo que se realiza mientraas fahre es menor o igual a upp*/
                        cel = 5 * (fahre-32) / 9; /*Realizar la aperacion para cel*/
                        printf("%d\t%d\n", fahre, cel); /* imprimir las variables fahre y cel con una tabulacion y un salto de linea*/
                        fahre = fahre + stp; /*Sumar stp a fahre*/

                    } /*fin del ciclo*/

        break;

        case 'e': //Ejecuta el codigo de imprimir la lista de temperatura en flotantes

            float fahr, celsius;
            int lower, upper, step;


            lower=0;
            upper=300;
            step=20;

             fahr = lower;

              while (fahr<=upper) {
                    celsius = (5.0/9.0) * (fahr-32.0);
                    printf("%3.0f%6.1f\n", fahr, celsius);
                    fahr = fahr + step;
            }

        break;

        case 'f': //Ejecuta el codigo de tabla de multiplicar

        int tabla = 1;

            while (tabla<= 10){
                int numero = 0;
                while (numero <= 0) {
                int mult = tabla * numero;
                printf("%s %d %s %d %s %d\n", "(", tabla, ")(", numero, ")=", mult);
                numero++;
                }
                tabla++;
            }

        break;

        case 'g':  //Ejecuta el codigo de imprimir diagonal con asteriscos

            int esp=1;

            for(int aaa=9;aaa>=0;aaa--){

            for(int bbb=2;bbb<=esp;bbb++){
                printf("%4s"," ");
            }

            esp++;
            printf("%4s","*");
            printf("\n");

            }   

        break;

        case 'h': //Ejecuta el codigo de imprimir un cuadro de numeros del 0 al 10

            printf("\n%s\n", "ejemplo de impresiom");

            int limity = 10;
                while (limity >= 0) {
                    int limx = 10;
                    while (limx >= 0) {
                        printf("%4d", limx);
                        limx--;
                    
                    }
                    printf("\n");
                    limity--;
                }
            
                printf("\n%s\n","ejemplo de impresion");
            
                int limy = 0;
                while (limy <= 10) {
                    int limx = 0;
                    while (limx <= 10) {
                        printf("%4d", limx);
                        limx++;
                    
                    }
                    printf("\n");
                    limy++;
                }
            
                printf("\n%s\n","ejemplo de impresion");

        break;


        case 'i': //Ejecuta el codigo de imprimir un cuadrado con asteriscos

            for (int aaaa=0;aaaa<=9;aaaa++){
                printf("%3s","*");
            }
            printf("\n");
            for(int bbbb=1;bbbb<=7;bbbb++){
                printf("%3s","*");
            
                for (int cccc=1;cccc<=8;cccc++){
                    printf("%3s"," ");
                }
            
                printf("%3s","*");
                printf("\n");
            
            }
            for (int aaaa=0;aaaa<=9;aaaa++){
                printf("%3s","*");
            }

        break;

        case 'j': //Ejecuta el codigo de imprimir un triangulo rectangulo a la izquierda

            int ast=1;
            for (int iii=6 ; iii>=0;iii--) {
                for (int jjj=1; jjj<= ast; jjj++) {
                printf("%5s", "*");
            }
            ast++;
            printf("\n");

            }

        break;

        case 'k': //Ejecuta el codigo de imprimir un triangulo rectangulo a la derecha

            int aste=1;
            for (int ii=6 ; ii>=0;ii--) {
                for (int kk=6; kk>= aste; kk--){
                    printf("%5s", " ");
                
                }
                for (int jj=1; jj<= aste; jj++) {
                printf("%5s", "*");
            }
            aste++;
            printf("\n");

            }

        break;

        case 'l': //Ejecuta el codigo de imprimir un triangulo equilatero

            int espa = 6;
            int asteri = 0; 
            
            for (int x = 6; x >= 0; x--) {  
                for (int y = 1; y <= espa; y++) {  
                    printf("%5s", " ");  
                }
                for (int z = 0; z <= asteri; z++) {  
                    printf("%5s","*");  
                }
            
                asteri+=2; 
                espa--;   
                printf("\n");  
            }

        break;

        case 'm': //Ejecuta el codigo de imprimir un trapecio 

            int espacio = 3;
            int asterisco = 3; 
            
            for (int m = 3; m >= 0; m--) {  
                for (int o = 1; o <= espacio; o++) {  
                    printf("%5s", " ");  
                }
                for (int q = 1; q <= asterisco; q++) {  
                    printf("%5s","*");  
                }
            
                asterisco+=2; 
                espacio--;   
            

                printf("\n");  
            
            }       

        break;

        case 'n': //Ejecuta el codigo de calcular un promedio introduciendo datos

            char nombre[50];
            printf("%s\n", "Ingrese su nombre: ");
            scanf("%s", &nombre);
            
            int cal1;
            printf("%s", "Ingresa la calificacion 1: ");
            scanf("%d", &cal1);
            
            int cal2;
            printf("%s", "Ingresa la calificacion 2: ");
            scanf("%d", &cal2);
            
            int cal3;
            printf("%s", "Ingresa la calificacion 3: ");
            scanf("%d", &cal3);
            
            float promedio=(cal1 + cal2 + cal3)/3;
            printf("%s%s", "Nombre:", nombre);
            printf("\n");
            printf("%s%2f", "El promedio es:\n", promedio);
            printf("\n");
            
            if(promedio>=6){
                printf("%s\n","APROBADO!");
            } else { 
                printf("%s\n","REPROBADO :(");
            }

        break;

        case 'o': //Ejecuta el codigo de calcular el volumen y area de una esfera

            float ra;
            float volum;
            float bpi=3.1416;
            float areae;
            
            printf("%s\n", "Introduce el valor del radio");
            scanf("%f", &ra);
            
            volum = (4*bpi*ra*ra*ra)/3;
            areae = (4*bpi*ra*ra);
            
            printf("%s%.4f\n", "El volumen es: ", volum);
            printf("%s%.4f\n", "El area es: ",areae);

        break;

        case 'p': //Ejecuta el codigo de calcular el volumen y area de un cilindro

            float h;
            float rad;
            float api=3.1416;
            float vol;
            float ar;
            
            printf("%s\n", "Ingresa el valor de la altura: ");
            scanf("%f", &h);
            printf("%s\n", "Ingresa el radio de la circunferencia: ");
            scanf("%f", &rad);
            
            vol = (api*rad*rad*h);
            ar = ((2*api)*(rad*h)+(2*api*rad*rad));
            
            printf("%s%.4f\n", "El volumen es: ", vol);
            printf("%s%.4f\n", "El area es: ", ar);

        break;

        case 'q': //Ejecuta el codigo de calcular el volumen y area de un cono

            float radi;
            float altura;
            float volumenc;
            float pi=3.1416;
            float areatotal;
            float hipotenusa;
            
            printf("Dame el valor de la altura\n");
            scanf("%f",&altura);
            printf("%s\n","Dame el valor del radio");
            scanf("%f",&radi);
            
            hipotenusa=(radi*radi)+(altura*altura);
            areatotal=(pi*radi*radi)+(pi*radi*hipotenusa);
            volumenc=(pi*radi*radi*altura)/3;
            
            printf("El volumen es: \n %f\n", volumenc);
            printf("El area total es: \n %.2f \n",areatotal);

        break;

        case 'r': //Ejecuta el codigo de un ejemplo de uso de switch con opciones en numeros

            int opc;
            printf ("%s\n", "Seleccione una opcion");
            printf("%s\n", "1: summar");
            printf("%s\n", "2: restar");
            scanf("%d", &opc);
            
            
            switch(opc){
                case 1:
                    printf("%s\n", "ha seleccionado suma");
                    break;

                case 2:
                    printf("%s\n", "Ha selecionado suma");
                    break;
                default:
                    printf("%s\n", "Selecciona algo correcto");
                    break;
            }

        break;

        case 's': //Ejecuta el codigo de un ejemplo de uso de switch con opciones de letras 

            printf("%s\n","Seleccione una ope");
            printf("%s\n","a)Seleccionar ope 1");
            printf("%s\n","a)Seleccionar ope 2");
            char ope;
            scanf("%c", &ope);
            switch(ope){ 
                case 'a':
                    printf("%s\n", "Seleeciono ope 1");
                    break;
            
                case 'b':
                    printf("%s\n", "Seleeciono ope 2");
                    break;
            
                default:
                    printf("%s\n", "Selecione una opcion valida");
                    break;
                }

        break;

        case 't': //Ejecuta el codigo de una calculadora con operaciones basicas

            float num1, num2;
            int operacion;
            float res;
            printf("%s", "Ingresa el numero 1: ");
            scanf("%f", &num1);
            printf("%s", "Ingresa el numero 2: ");
            scanf("%f", &num2);
                
            printf("%s\n", "Que operacion quieres realizar?");
            printf("%s\n", "1: Sumar");
            printf("%s\n", "2: Restar");
            printf("%s\n", "3: Multiplicar");
            printf("%s\n", "4: Division");
            scanf("%d", &operacion);
                
            switch(operacion){
                case 1:
                    res=num1+num2;
                    printf("%s\n%.5f", "El resultado es:", res);
                    break;
            
                case 2:
                    res=num1-num2;
                    printf("%s\n%.5f", "El resultado es:", res);
                    break;
            
                case 3:
                    res=num1*num2;
                    printf("%s\n%.5f", "El resultado es:", res);
                    break;

                case 4:
                    res=num1/num2;
                    printf("%s\n%.5f", "El resultado es:", res);
                    break;
            
                default:
                    printf("%s", "No has elegido un operacion correcta");
                    break;
            }

        break;

        default: //Te indica que no has elegido una opcion correcta
            printf("%s", "ELIGE UNA OPCION CORRECTA");
            break;
    }
return 0;
}