#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* It is forbidden, to use the library math.h */

double my_abs(double zahl) /* abszolutertek fv */
{
    if (zahl > 0)
    {
        return zahl;
    }
    return -zahl;
}

double my_hoch(double zahl, double faktor) /* hatvanyozo fv */
{
    int i;
    double hoch = zahl;
    for (i = 1; i < faktor; i++)
    {
        hoch *= zahl;
    }
    return hoch;
}

double f3(float x)
{
    int i = 1;
    double glieder = 0;
    double glieder_war = 0;
    double sum = 0;
    if (x > -1 && x < 1)
    {
        do
        {
            glieder_war = glieder;
            glieder = (2.0 / ((2.0 * i) - 1.0)) * my_hoch(x, ((2.0 * i) - 1.0) );
            i++;
            sum += glieder;
        } while (my_abs(glieder - glieder_war) > 1e-7);
        return sum;
    }
    else
    {
        printf("Du musst eine reelle Zahl zwischen -1 und 1 eingeben!");
    }
	return 0;
}

double f3_eff(float x)
{
    int i = 1;
    double glieder = (2.0 * x)/i;
    double glieder_war;
    double sum = glieder;
    if( x > -1 && x < 1)
    {
        do
        {
            glieder_war = glieder;
            i += 2;
            glieder = (glieder / (2.0 / (i - 2.0)) * ((2.0 / i) * x * x));
            sum += glieder;
        } while (my_abs(glieder - glieder_war) > 1e-7);
        return sum;
    }
    else
    {
        printf("Du musst eine reelle Zahl zwischen -1 und 1 eingeben!");
    }
	return 0;
}

int main() {

    double x = 0.0;

    printf("Add x: ");
    scanf("%lf", &x);
    printf("f3(x) = %1.7f\n", f3(x));
    printf("f3_eff(x) = %1.7f\n", f3_eff(x));
    return 0;
}