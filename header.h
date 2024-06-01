#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>

typedef char str[128];
typedef char push[3000];

void SetColor(unsigned short color);
void gotoxy(int x, int y);

void inkremen_tanggal(int *D, int *M, int *Y);
void pbumi();
void pmars();
void pjupiter();
void pneptune();
void ckanan();
int cari_planet(str dicari, str arr[]);


typedef struct{
	str nama;
	int jumlah;
}Item;

typedef struct{
	str pesanan;
	int ruang;
	Item I[3];
}Ruangan;


void initData(Ruangan R[]);
void showmenu(int x, int y);
void tampilData(Ruangan R[]);
int findRuang(Ruangan R[], int ruang1);
int getEmptyRoket(Ruangan R[]);
int inventory(Ruangan R[], int x, int y);
int pesanan(Ruangan R[], int x, int y);


//Angka	Warna Teks	Warna Latar Belakang
//0	Black	Black
//1	Blue	Black
//2	Green	Black
//3	Aqua	Black
//4	Red	Black
//5	Purple	Black
//6	Yellow	Black
//7	White	Black
//8	Gray	Black
//9	Light Blue	Black
//10	Light Green	Black
//11	Light Aqua	Black
//12	Light Red	Black
//13	Light Purple	Black
//14	Light Yellow	Black
//15	Bright White	Black

// enter 13