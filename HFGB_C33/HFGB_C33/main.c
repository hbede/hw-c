#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double _abs(double x)
{
    if (x >= 0.0)
    {
        return x;
    }
    return -x;
}

double root3(double x)
{
    double glieder;
    double next_glieder = 0;
    double glieder_hilfe = 1;
    if (_abs(x) <= 1.0)
    {
        glieder = x / 3.0;
    }
    else
    {
        glieder = 3.0 * x;
    }
    while (_abs(next_glieder - glieder_hilfe) > 0.00001)
    {   
        glieder_hilfe = glieder;
        next_glieder = ((2.0 * glieder) + (x / (glieder * glieder))) / 3.0;
        glieder = next_glieder;      
    } 
    return next_glieder;
}
int main() {

    double x = 0.0;

    printf("Add x: ");
    scanf("%lf", &x);
    printf("%1.5lf\n", root3(x));
    return 0;

}