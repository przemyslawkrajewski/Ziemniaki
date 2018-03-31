#include <iostream>
#include <cstdlib>

#define MAX 100

void zalef(int x, int y, int v);
void rysuj();

char mapa[MAX][MAX]; 
int main()
{
	for (int i=0;i<MAX;i++)
	{
		for (int j=0;j<MAX;j++)
		{
			mapa[i][j] = rand()%3?' ':'#';
		}
	}
	std::cout << "\n";

	int x = rand()%MAX;
	int y = rand()%MAX;

	mapa[x][y] = 'X';


	zalef(x,y,60);
	rysuj();
}


void zalef(int x, int y, int v)
{
	if(v<0) return;

	//if(mapa[x][y]<v+48)
		 mapa[x][y]=v+48;

	if(x>0  && mapa[x-1][y] !='#' && mapa[x-1][y]<v+48) zalef(x-1,y  ,v-1);
	if(x<MAX && mapa[x+1][y] !='#'&& mapa[x+1][y]<v+48) zalef(x+1,y  ,v-1);
	if(y>0  && mapa[x][y-1] !='#'&& mapa[x][y-1]<v+48) zalef(x  ,y-1,v-1);
	if(y<MAX && mapa[x][y+1] !='#'&& mapa[x][y+1]<v+48) zalef(x  ,y+1,v-1);
}

void rysuj()
{
    for(int i=0;i<MAX;i++)
    {
        for (int j=0;j<MAX;j++)
        {
            std::cout << mapa[i][j];
        }
        std::cout << "\n";
    }
}
