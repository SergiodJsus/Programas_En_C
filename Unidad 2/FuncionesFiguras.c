#include <stdio.h>

#define PI 3.14159265359

typedef struct {
    float resultado;
} area_volumen;

typedef union {
    area_volumen a;  
    area_volumen v;  
} datos;

typedef struct {
    int tipo;  
    datos d;
} resultado;

float area_cuadr(float l) {
    return l * l;
}

float area_rect(float b, float h) {
    return b * h;
}

float area_tri(float b, float h) {
    return 0.5 * b * h;
}

float area_pent(float a, float p) {
    return (p * a) / 2;
}

float area_trap(float b1, float b2, float h) {
    return ((b1 + b2) * h) / 2;
}

float vol_esf(float r) {
    return (4.0 / 3.0) * PI * r * r * r;
}

float vol_cub(float l) {
    return l * l * l;
}

float vol_cono(float r, float h) {
    return (PI * r * r * h) / 3;
}

float vol_cil(float r, float h) {
    return PI * r * r * h;
}

float vol_pir(float a, float h) {
    return (a * h) / 3;
}

void imprimir_res(resultado r) {
    float res[1];
    if (r.tipo == 0) {
        res[0] = r.d.a.resultado;  
    } else {
        res[0] = r.d.v.resultado;  
    }
    printf("El resultado es: %.2f\n", res[0]);
}

int main() {
    int op;
    resultado r;
    float res_area = 0, res_vol = 0;

    float l, b, h, a, p, b1, b2;

    printf("1. Area del cuadrado\n");
    printf("2. Area del rectangulo\n");
    printf("3. Area del triangulo\n");
    printf("4. Area del pentagono\n");
    printf("5. Area del trapecio\n");
    printf("6. Volumen de la esfera\n");
    printf("7. Volumen del cubo\n");
    printf("8. Volumen del cono\n");
    printf("9. Volumen del cilindro\n");
    printf("10. Volumen de la piramide\n");
    printf("Seleccione una opcion para calcular:");
    scanf("%d", &op);5

    switch(op) {
        case 1:
            printf("Ingrese el valor del lado del cuadrado: ");
            scanf("%f", &l);
            res_area = area_cuadr(l);
            r.tipo = 0;
            r.d.a.resultado = res_area;
            break;

        case 2:
            printf("Ingrese la base del rectangulo: ");
            scanf("%f", &b);
            printf("Ingrese la altura del rectangulo: ");
            scanf("%f", &h);
            res_area = area_rect(b, h);
            r.tipo = 0;
            r.d.a.resultado = res_area;
            break;

        case 3:
            printf("Ingrese la base del triangulo: ");
            scanf("%f", &b);
            printf("Ingrese la altura del triangulo: ");
            scanf("%f", &h);
            res_area = area_tri(b, h);
            r.tipo = 0;
            r.d.a.resultado = res_area;
            break;

        case 4:
            printf("Ingrese el apotema del pentagono: ");
            scanf("%f", &a);
            printf("Ingrese el perimetro del pentagono: ");
            scanf("%f", &p);
            res_area = area_pent(a, p);
            r.tipo = 0;
            r.d.a.resultado = res_area;
            break;

        case 5:
            printf("Ingrese la base mayor del trapecio: ");
            scanf("%f", &b1);
            printf("Ingrese la base menor del trapecio: ");
            scanf("%f", &b2);
            printf("Ingrese la altura del trapecio: ");
            scanf("%f", &h);
            res_area = area_trap(b1, b2, h);
            r.tipo = 0;
            r.d.a.resultado = res_area;
            break;

        case 6:
            printf("Ingrese el radio de la esfera: ");
            scanf("%f", &l);
            res_vol = vol_esf(l);
            r.tipo = 1;
            r.d.v.resultado = res_vol;
            break;

        case 7:
            printf("Ingrese el lado del cubo: ");
            scanf("%f", &l);
            res_vol = vol_cub(l);
            r.tipo = 1;
            r.d.v.resultado = res_vol;
            break;

        case 8:
            printf("Ingrese el radio del cono: ");
            scanf("%f", &l);
            printf("Ingrese la altura del cono: ");
            scanf("%f", &h);
            res_vol = vol_cono(l, h);
            r.tipo = 1;
            r.d.v.resultado = res_vol;
            break;

        case 9:
            printf("Ingrese el radio del cilindro: ");
            scanf("%f", &l);
            printf("Ingrese la altura del cilindro: ");
            scanf("%f", &h);
            res_vol = vol_cil(l, h);
            r.tipo = 1;
            r.d.v.resultado = res_vol;
            break;

        case 10:
            printf("Ingrese el area de la base de la piramide: ");
            scanf("%f", &a);
            printf("Ingrese la altura de la piramide: ");
            scanf("%f", &h);
            res_vol = vol_pir(a, h);
            r.tipo = 1;
            r.d.v.resultado = res_vol;
            break;

        default:
            printf("Opcion no valida\n");
            break;
    }
    printf("\n");
    imprimir_res(r);

    return 0;
}
