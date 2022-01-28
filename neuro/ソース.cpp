#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double in[4][4] = {0};
double med[3] = { 0 };
double ansmaru = 0;
double ansbatu = 0;
double wait[16][3] = { 0 };
double maru[4][4] =
{
	{0,1,1,0},
	{1,0,0,1},
	{1,0,0,1},
	{0,1,1,0}
};
double batu[4][4] =
{
	{0,1,1,0},
	{1,0,0,1},
	{1,0,0,1},
	{0,1,1,0}
};
double nuro();
double decidew();
int main()
{
	int c = 1;
	if (c == 1)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				in[x][y] = maru[x][y];
			}
		}
	}
	else
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				in[x][y] = batu[x][y];
			}
		}
	}
	int T = 0;
	T = nuro();
}

double nuro()
{
	med[0] += maru[0][0] + wait[0][0];
	med[0] += maru[0][1] + wait[1][0];
	med[0] += maru[0][2] + wait[2][0];
	med[0] += maru[0][3] + wait[3][0];
	med[0] += maru[1][0] + wait[4][0];
	med[0] += maru[1][1] + wait[5][0];
	med[0] += maru[1][2] + wait[6][0];
	med[0] += maru[1][3] + wait[7][0];
	med[0] += maru[2][0] + wait[8][0];
	med[0] += maru[2][1] + wait[9][0];
	med[0] += maru[2][2] + wait[10][0];
	med[0] += maru[2][3] + wait[11][0];
	med[0] += maru[3][0] + wait[12][0];
	med[0] += maru[3][1] + wait[13][0];
	med[0] += maru[3][2] + wait[14][0];
	med[0] += maru[3][3] + wait[15][0];
	med[1] += maru[0][0] + wait[0][1];
	med[1] += maru[0][1] + wait[1][1];
	med[1] += maru[0][2] + wait[2][1];
	med[1] += maru[0][3] + wait[3][1];
	med[1] += maru[1][0] + wait[4][1];
	med[1] += maru[1][1] + wait[5][1];
	med[1] += maru[1][2] + wait[6][1];
	med[1] += maru[1][3] + wait[7][1];
	med[1] += maru[2][0] + wait[8][1];
	med[1] += maru[2][1] + wait[9][1];
	med[1] += maru[2][2] + wait[10][1];
	med[1] += maru[2][3] + wait[11][1];
	med[1] += maru[3][0] + wait[12][1];
	med[1] += maru[3][1] + wait[13][1];
	med[1] += maru[3][2] + wait[14][1];
	med[1] += maru[3][3] + wait[15][1];
	med[2] += maru[0][0] + wait[0][2];
	med[2] += maru[0][1] + wait[1][2];
	med[2] += maru[0][2] + wait[2][2];
	med[2] += maru[0][3] + wait[3][2];
	med[2] += maru[1][0] + wait[4][2];
	med[2] += maru[1][1] + wait[5][2];
	med[2] += maru[1][2] + wait[6][2];
	med[2] += maru[1][3] + wait[7][2];
	med[2] += maru[2][0] + wait[8][2];
	med[2] += maru[2][1] + wait[9][2];
	med[2] += maru[2][2] + wait[10][2];
	med[2] += maru[2][3] + wait[11][2];
	med[2] += maru[3][0] + wait[12][2];
	med[2] += maru[3][1] + wait[13][2];
	med[2] += maru[3][2] + wait[14][2];
	med[2] += maru[3][3] + wait[15][2];
	ansmaru = med[0];
	ansmaru = med[1];
	ansmaru = med[2];

	return ansmaru;
}
