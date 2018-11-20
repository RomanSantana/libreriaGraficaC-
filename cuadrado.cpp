#include<iostream>
#include<conio.h>
#include<windows.h>

#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77
#define suma 43
#define resta 45

using namespace std;

void gotoxy(int x1, int y1)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon,dwPos);
}
void OcultarCursor()
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;

	SetConsoleCursorInfo(hCon,&cci);
}

char opcion;
int x=10,y=10;
int a=0,b=0,aa=0,bb=0;
int c=2;int d=2;

int main()
{
	OcultarCursor();

	while(opcion!='z')
	{
		system("cls");
		a= c+x; b= d+y;
		aa= x; bb =y;
	
				while(x<a)
				{
					gotoxy(x,y); cout<<"*";	
					x++;
				}
				while(y<b)
				{	
					gotoxy(x,y);cout<<"*";
					y++;
				}
				while(x>aa)
				{
					gotoxy(x,y); cout<<"*";
					x--;	
				}
				while(y>bb)
				{
					gotoxy(x,y); cout<<"*";
					y--;
				}

				

		opcion=getch();
		switch(opcion)
		{
			/*case arriba: y--;break;*/
			case arriba:
				if(y>1)
				{
					y--; break;
				}
				else
				{
					break;
				}

		/*	case abajo: y++;break;*/
			case abajo:
				if(y<35)
				{
					y++;break;
				}
				else
				{
					break;
				}

			/*case izquierda: x--;break;*/
			case izquierda:
				if(x>1)
				{
					x--;break;
				}
				else
				{
					break;
				}

			/*case derecha: x++;break;*/
			case derecha:
				if(a<77)
				{	
					x++;break;
				}
				else
				{
					break;
				}

			case suma:
				if(c<5 && d<5 )
				{

					c++;
					d++;
					break;
				}
					

		    case resta:
		        if(c>2 && d>2 )
				{
					c--;
					d--;
				}; break;	
				
		}
	}
		return 0;
		}



