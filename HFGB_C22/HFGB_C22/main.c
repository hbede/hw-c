#include <stdio.h>

int longestWay()
{
	int zahl;
	int schritt = 0;
	int schritt_hilfe = 0;
	int groesste_schritt_zahl = 0;
	int zahl_hilfe;

	for (zahl = 1; zahl <= 250; zahl++)
	{
		schritt = 0;
		zahl_hilfe = zahl;
		while (zahl_hilfe != 4)
		{
			if (zahl_hilfe % 2 == 0)
			{
				zahl_hilfe = zahl_hilfe / 2;
				
			}
			else
			{
				zahl_hilfe = (zahl_hilfe * 3) + 1;
			}
			schritt++;
		}
		if (schritt_hilfe <= schritt)
		{
			schritt_hilfe = schritt;
			groesste_schritt_zahl = zahl;
		}
	}
	return groesste_schritt_zahl;


}
int main() {

	printf("%d has the longest way to 4.", longestWay());

	return 0;

}
