#include <stdio.h>

int main ()
{
    int pilihan;
    int m, i, j;
    puts ("1. Level 1");
    puts ("2. Level 2");
    puts ("3. Level 3");
    puts ("Exit");
    printf ("Masukkan Pilihan: ");
    scanf ("%d", &pilihan);

    switch (pilihan)
    {
        case 1:
        system ("cls");
        printf ("Masukkan Angka: ");
        scanf ("%d", &m);

        for (i=1; i<=m; i++)
        {
            for (j=i; j<=i*i; j+=i)
            {
                printf ("%d", j);
            }
            printf ("\n");
        }
        break;


    case 2:
        printf ("belum jadi");
        break;

    case 3:
        printf ("belum jadi");
        break;

    case 4:
        printf ("Selesai");
        break;

    default:
        printf ("Pilihan Salah");


    }
}
