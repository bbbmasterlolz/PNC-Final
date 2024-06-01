#include "header.h"

void setcolor(unsigned short color) {
    HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsoleOutput,color);
}

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void inkremen_tanggal(int *D, int *M, int *Y){
        *D++;
        if(*M == 2 && *Y % 400 == 0 && *D > 29){
            *M++;
            *D=1;
        }else if(*M == 2 && *D > 28 && *Y % 400 != 0){
            *M++;
            *D=1;
        }else if((*M>=8 && *M<=12 && *M%2!=0) && *D > 30){
            *M++;
            *D=1;
        }else if((*M%2==0 && *M<8) && *D > 30){
            *M++;
            *D=1;
        }else if(*D > 31){
            *M++;
            *D=1;
        }
        if(*M > 12){
            *M = 1;
            *Y++;
        }
}

void pbumi(){
	printf("\e[s                         [ Bumi ]                \e[u\e[B");
	printf("\e[s                                                 \e[u\e[B");
	printf("\e[s                        ***********              \e[u\e[B");
	setcolor(1);
	printf("\e[s                     *****************           \e[u\e[B");
	printf("\e[s                 *************************       \e[u\e[B");
	setcolor(2);
	printf("\e[s               *****************************     \e[u\e[B");
	printf("\e[s              *******************************    \e[u\e[B");
	setcolor(1);
	printf("\e[s             *********************************   \e[u\e[B");
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(2);
	printf("\e[s            ***********************************  \e[u\e[B");
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(1);
	printf("\e[s            ***********************************  \e[u\e[B");
	printf("\e[s            ***********************************  \e[u\e[B");
	printf("\e[s            ***********************************  \e[u\e[B");
	printf("\e[s             *********************************   \e[u\e[B");
	setcolor(2);
	printf("\e[s              *******************************    \e[u\e[B");
	printf("\e[s               *****************************     \e[u\e[B");
	setcolor(1);
	printf("\e[s                 *************************       \e[u\e[B");
	printf("\e[s                     *****************           \e[u\e[B");
	setcolor(7);
	printf("\e[s                        ***********              \e[u\e[B");
	
}

void pmars(){
	printf("\e[s                         [ Mars ]                \e[u\e[B");
	printf("\e[s                                                 \e[u\e[B");
	setcolor(4);
	printf("\e[s                        ***********              \e[u\e[B");
	setcolor(7);
	printf("\e[s                     *****************           \e[u\e[B");
	setcolor(4);
	printf("\e[s                 *************************       \e[u\e[B");
	setcolor(7);
	printf("\e[s               *****************************     \e[u\e[B");
	setcolor(4);
	printf("\e[s              *******************************    \e[u\e[B");
	printf("\e[s             *********************************   \e[u\e[B");
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(7);
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(4);
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(7);
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(4);
	printf("\e[s            ***********************************  \e[u\e[B");
	printf("\e[s            ***********************************  \e[u\e[B");
	printf("\e[s             *********************************   \e[u\e[B");
	setcolor(7);
	printf("\e[s              *******************************    \e[u\e[B");
	printf("\e[s               *****************************     \e[u\e[B");
	setcolor(4);
	printf("\e[s                 *************************       \e[u\e[B");
	printf("\e[s                     *****************           \e[u\e[B");
	setcolor(7);
	printf("\e[s                        ***********              \e[u\e[B");
	
}
void pjupiter(){
	printf("\e[s                         [ Jupiter ]                \e[u\e[B");
	printf("\e[s                                                 \e[u\e[B");
	setcolor(4);
	printf("\e[s                        ***********              \e[u\e[B");
	setcolor(6);
	printf("\e[s                     *****************           \e[u\e[B");
	setcolor(4);
	printf("\e[s                 *************************       \e[u\e[B");
	setcolor(6);
	printf("\e[s               *****************************     \e[u\e[B");
	setcolor(4);
	printf("\e[s              *******************************    \e[u\e[B");
	printf("\e[s             *********************************   \e[u\e[B");
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(6);
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(4);
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(6);
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(4);
	printf("\e[s            ***********************************  \e[u\e[B");
	printf("\e[s            ***********************************  \e[u\e[B");
	printf("\e[s             *********************************   \e[u\e[B");
	setcolor(6);
	printf("\e[s              *******************************    \e[u\e[B");
	printf("\e[s               *****************************     \e[u\e[B");
	setcolor(4);
	printf("\e[s                 *************************       \e[u\e[B");
	printf("\e[s                     *****************           \e[u\e[B");
	setcolor(6);
	printf("\e[s                        ***********              \e[u\e[B");
	
}

void pneptune(){
	printf("\e[s                         [ neptune ]                \e[u\e[B");
	printf("\e[s                                                 \e[u\e[B");
	setcolor(1);
	printf("\e[s                        ***********              \e[u\e[B");
	setcolor(9);
	printf("\e[s                     *****************           \e[u\e[B");
	setcolor(1);
	printf("\e[s                 *************************       \e[u\e[B");
	setcolor(9);
	printf("\e[s               *****************************     \e[u\e[B");
	setcolor(1);
	printf("\e[s              *******************************    \e[u\e[B");
	printf("\e[s             *********************************   \e[u\e[B");
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(9);
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(1);
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(9);
	printf("\e[s            ***********************************  \e[u\e[B");
	setcolor(1);
	printf("\e[s            ***********************************  \e[u\e[B");
	printf("\e[s            ***********************************  \e[u\e[B");
	printf("\e[s             *********************************   \e[u\e[B");
	setcolor(9);
	printf("\e[s              *******************************    \e[u\e[B");
	printf("\e[s               *****************************     \e[u\e[B");
	setcolor(1);
	printf("\e[s                 *************************       \e[u\e[B");
	printf("\e[s                     *****************           \e[u\e[B");
	setcolor(7);
	printf("\e[s                        ***********              \e[u\e[B");
	
}

int cari_planet(str dicari, str arr[]){
	int i;
	for(i=1;i<5;i++){
		if(!strcmpi(arr[i], dicari)){
			return i;
		}
	}
	return -1;
}

void ckanan(){
	int i;
	gotoxy(60, 5);
	for(i=0;i<23;i++){
		printf("\e[s                                                    \e[u\e[B");
	}
	printf("\e[H");
}

void initData(Ruangan R[]){
	int i, j;
	for(i=0 ; i < 5; i ++){
		strcpy(R[i].pesanan,"-");
		R[i].ruang = 1+i;
		for(j = 0; j < 3; j++){
			if(j == 0){
				strcpy(R[i].I[j].nama,"Besi");
				R[i].I[j].jumlah = 0;
			}else if(j == 1){
				strcpy(R[i].I[j].nama,"Kayu");	
				R[i].I[j].jumlah = 0;
			}else{
				strcpy(R[i].I[j].nama,"Plastik");
				R[i].I[j].jumlah = 0;
			}
		}
	}	
}

int getEmptyRoket(Ruangan R[]){
	int i, j;
	for(i=0 ; i < 5; i ++){
		for(j = 0; j < 3; j++){
			if(R[i].I[j].jumlah != 0){
				return i;
			}
		}
	}
	return -1;
}

void showmenu(int x, int y){
	gotoxy(60, 5);
	printf("\e[s--=== Inventory ===--\e[u\e[B");
	printf("\e[s[1]. Show Ruangan\e[u\e[B");
	printf("\e[s[2]. Add Item\e[u\e[B");
	printf("\e[s[3]. Update Ruangan\e[u\e[B");
	printf("\e[s[4]. Delete Ruangan\e[u\e[B");
	printf("\e[s[0]. Kembali\e[u\e[B");
	printf("\e[s>> ");
}

void tampilData(Ruangan R[]){
	int i, j;
	for(i=0 ; i < 5; i ++){
		printf("\e[sRuangan [0%d]\e[u\e[B", R[i].ruang);
		printf("\e[sNomor Pesanan : %s\e[u\e[B", R[i].pesanan);
		printf("\e[sItem : " );
		for(j = 0; j < 3; j++){
			if(j == 0){
				if(R[i].I[j].jumlah != 0){
					printf("%s[%d] ", R[i].I[j].nama,  R[i].I[j].jumlah);
				}
			}else if(j == 1){
				if(R[i].I[j].jumlah != 0){
					printf("- %s[%d] ", R[i].I[j].nama,  R[i].I[j].jumlah);
				}
			}else if(j == 2){
				if(R[i].I[j].jumlah != 0){
					printf("- %s[%d]\e[u\e[B\e[B", R[i].I[j].nama,  R[i].I[j].jumlah);
				}else{
					printf(" - \e[u\e[B\e[B");
				}
			}
		}
	}	
}

int findRuang(Ruangan R[], int ruang1){
	int i, j;
	for(i=0 ; i < 5; i ++){
		if(ruang1 == R[i].ruang){
			return i;
		}
	}
	return -1;
}



int inventory(Ruangan R[],int x,int y){
	int menu, index, ruang1, i, count;

	
	
	do{
		ckanan();
		showmenu(x,y);
	
		scanf("%d\e[u\e[B", &menu);

		switch(menu){
			case 1:
				if(getEmptyRoket(R) != -1){
					ckanan();
					x = 60;
					y = 5;
					gotoxy(x,y);
					printf("\e[s	[ Ruangan Roket ]\e[u\e[B");
					tampilData(R);
				}else{
					x = 60;
					y = 13;
					gotoxy(x,y);
					printf("Rocket Masih Kosong [!]");
				}
			break;
			
			case 2:
				ckanan();
				x = 60;
				y = 5;
				count = 0;
				gotoxy(x,y);
				printf("\e[s	[ADD ITEM]\e[u\e[B");
				printf("\e[B\e[sRuangan : ");scanf("%d\e[u\e[B", &ruang1);
				if(findRuang(R,ruang1) != -1){
					index = findRuang(R,ruang1);
					for(i=0; i <3 ; i++){
						if(R[index].I[i].jumlah != 0){
							count++;
						}
					}
					if(count == 3){
						x = 60;
						y = 8;
						gotoxy(x,y);
						printf("Ruangan Full [!]");
						break;
					}
						x = 60;
						y = 8;
					for(i=0; i <3 ; i++){
						y+=2;
						gotoxy(x,y);
						printf("\e[sItem - %d : %s\e[u\e[B",  i+1, R[index].I[i].nama);
						while(1){
							printf("\e[sJumlah [0 - 15] : ");scanf("%d\e[u\e[B", &R[index].I[i].jumlah);
							if(R[index].I[i].jumlah < 0 || R[index].I[i].jumlah > 15){
								y+=2;
								gotoxy(x,y);
								printf("\e[s	Jumlah Invalid [!]\e[u\e[B");
							}else{
								y+=2;
								gotoxy(x,y);
								printf("\e[s	Berhasil Memasukkan Item\e[u\e[B");
								break;
							}
						}
					}
					printf("\e[BRuangan tidak cocok dengan pesanan apapun[!]");
				}else{
					x = 60;
					y = 13;
					gotoxy(x,y);
					printf("Ruangan Hanya 1 - 5 [!]");
				}
			break;
			
			case 3:
				if(getEmptyRoket(R) != -1){
					ckanan();
					count = 0;
					x = 60;
					y = 5;
					gotoxy(x,y);
					printf("\e[s	[UPDATE RUANGAN]\e[u\e[B");
					tampilData(R);
					printf("\e[B\e[sMasukkan Ruangan Yang Ingin Di-Update : ");scanf("%d\e[u\e[B", &ruang1);
					if(findRuang(R,ruang1) != -1 ){
						index = findRuang(R,ruang1);
						for(i = 0; i < 3 ; i ++){
							if(R[index].I[i].jumlah == 0){
								count ++;
							}
						}
						if(count == 3){
							x = 60;
							y = 28;
							gotoxy(x,y);
							printf("Ruangan 0%d masih kosong [!]", ruang1);
							break;
						}
						ckanan();
						x = 60;
						y = 5;
						gotoxy(x,y);
						printf("\e[s	[UPDATE RUANGAN]\e[u\e[B");
							x = 60;
							y = 8;
						for(i=0; i <3 ; i++){
							y+=2;
							gotoxy(x,y);
							printf("\e[sItem - %d : %s\e[u\e[B",  i+1, R[index].I[i].nama);
							while(1){
								printf("\e[sJumlah [0 - 15] : ");scanf("%d\e[u\e[B", &R[index].I[i].jumlah);
								if(R[index].I[i].jumlah < 0 || R[index].I[i].jumlah > 15){
									y+=2;
									gotoxy(x,y);
									printf("\e[s	Jumlah Invalid [!]\e[u\e[B");
								}else{
									y+=2;
									gotoxy(x,y);
									printf("\e[s	Berhasil Memasukkan Item\e[u\e[B");
									break;
								}
							}
						}
						
						printf("\e[BRuangan tidak cocok dengan pesanan apapun[!]");
					}
				}else{
					x = 60;
					y = 13;
					gotoxy(x,y);
					printf("Rocket Masih Kosong [!]");
					
				}
			break;
			
			
			case 4 :
				if(getEmptyRoket(R) != -1){
					ckanan();
					count = 0;
					x = 60;
					y = 5;
					gotoxy(x,y);
					printf("\e[s	[DELETE RUANGAN]\e[u\e[B");
					tampilData(R);
					printf("\e[B\e[sMasukkan Ruangan Yang Ingin Di-Delete : ");scanf("%d\e[u\e[B", &ruang1);
					if(findRuang(R,ruang1) != -1 ){
						index = findRuang(R,ruang1);
						for(i = 0; i < 3 ; i ++){
							if(R[index].I[i].jumlah == 0){
								count ++;
							}
						}
						if(count == 3){
							x = 60;
							y = 28;
							gotoxy(x,y);
							printf("Ruangan 0%d masih kosong [!]", ruang1);
							break;
						}else{
							for(i = 0; i < 3 ; i ++){									
								R[index].I[i].jumlah = 0;
							}
							x = 60;
							y = 28;
							gotoxy(x,y);
							printf("\e[B\e[BBerhasil Menghapus Isi Ruangan 0%d [!]", ruang1);
						}	
					}
				}else{
				x = 60;
				y = 13;
				gotoxy(x,y);
				printf("Rocket Masih Kosong [!]");	
				}
			break;
			
			case 0:
				x = 60;
				y = 13;
				gotoxy(x,y);
				printf("Kembali...");
			break;
		}getch();
	}while(menu != 0);
}


int pesanan(Ruangan R[], int x,int  y){
	int menu, index, ruang1, i, count;
}