#include <stdio.h>

int main () {
int i =0;
int x =5;

//mover a torre 5 casas para a direita
printf ("movimento da torre:\n");
for (int i = 0; i < 5 ; i++)
{ printf("%d torre para direita\n" ,i);
    
}



//mover o bispo 5 casas para direita
printf ("movimento do bispo:\n");
i =0;
while (i <5 ) {
    { printf("%d bispo para direita\n" ,i);}
    x++;
    i++;
}
//movendo bispo para cima
printf ("movimento do bispo:\n");
i =0;
while (i <5)
{ 
    {printf("%d bispo para cima\n" ,i); }
    x++;
    i++;

}
// movendo rainha  8 casas para cima e oito casas para a esquerda
printf ("movimento da rainha:\n");
i=0;
do {
    x++;   // para cima
    printf ("%drainha para cima\n" ,i);
    i++;

} while (i<8); 

//movendo para a esquerda
printf ("movimento da rainha:\n");
i= 0;
do {
    x--;
    printf ("%drainha para a esquerda\n" ,i);
    i++;
} while (i  < 8);












return 0;    
}