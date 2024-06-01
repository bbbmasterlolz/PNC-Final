#include "header.h"

int main(int argc, char *argv[]) {
	int bensin=0, D=1, M=1, Y=2024, menuu=1, tint, i, j, pselanjut, psebelum;
	str sekarang="bumi";
	str planet[6]={"-", "Bumi", "Mars", "Jupiter", "Neptun", "-"};
	char key;
	int x, y;
	Ruangan R[5];
	initData(R);

	system("cls");

	//kode
	while(1){
		setcolor(7);
		printf(
			"\e[H\n"
			"\n\tTanggal : %02d-%02d-%04d"
			"\n\tBensin  : %d"
			"\n\n"
		,D,M,Y,bensin);
		
		if(!strcmpi(sekarang, "Bumi")){
			pbumi();
		}else if(!strcmpi(sekarang, "Mars")){
			pmars();
		}else if(!strcmpi(sekarang, "Jupiter")){
			pjupiter();
		}else if(!strcmpi(sekarang, "Neptune")){
			pneptune();
		}

		
		printf("\n\n\n");
		if(menuu==1){
			setcolor(2);
			printf("\t[Inventory]");
			setcolor(7);
		}else{
			printf("\t[Inventory]");
		}
		
		if(menuu==2){
			setcolor(2);
			printf("\t[Pesanan]");
			setcolor(7);
		}else{
			printf("\t[Pesanan]");
		}
		
		if(menuu==3){
			setcolor(2);
			printf("\t[Take Off]");
			setcolor(7);
		}else{
			printf("\t[Take Off]");
		}
		
		if(!strcmpi(sekarang, "bumi")){
			if(menuu==4){
				setcolor(2);
				printf("\t[Isi Bensin Rocket]");
				setcolor(7);
			}else{
				printf("\t[Isi Bensin Rocket]");
			}
		}else{
			printf("                              ");
		}
		//clear kanan
		ckanan();
		
		key = getch();
		switch(key){
			case 13:
				switch(menuu){
					case 1:
						inventory(R, x, y);
						break;
					case 2:
						pesanan(R, x, y);
						break;
					case 3:
						gotoxy(60, 5);
						pselanjut=-999;
						psebelum=-999;
						i=1;
						printf("\e[sPilih Tujuan : \e[u\e[B");
						j=cari_planet(sekarang, planet);
						if(strcmpi(planet[j-1], "-")){
								printf("\e[s[%d]. %s\e[u\e[B", i, planet[j-1]);
								i++;psebelum=j;
						}
						if(strcmpi(planet[j+1], "-")){
								printf("\e[s[%d]. %s\e[u\e[B", i, planet[j+1]);
								i++;pselanjut=j;
						}
						printf("\e[s[0]. Kembali ke Menu\e[u\e[B");
						printf("\e[s>> ");
						fflush(stdin); scanf("%d", &tint);
						printf("\e[u\e[B\e[B");
						if(tint==0){
							printf("\e[sKembali ke Menu [!] \e[u\e[B");
						}else if(tint==psebelum){
							strcpy(sekarang, planet[j-1]);
							ckanan();
							if(!strcmpi(sekarang, "Bumi")){
								gotoxy(60, 5);
								pbumi();
							}else if(!strcmpi(sekarang, "Mars")){
								gotoxy(60, 5);
								pmars();
							}else if(!strcmpi(sekarang, "Jupiter")){
								gotoxy(60, 5);
								pjupiter();
							}else if(!strcmpi(sekarang, "Neptune")){
								gotoxy(60, 5);
								pneptune();
							}
							inkremen_tanggal(&D, &M, &Y);
							
						}else if(tint==pselanjut){
							strcpy(sekarang, planet[j+1]);
							ckanan();
							if(!strcmpi(sekarang, "Bumi")){
								gotoxy(60, 5);
								pbumi();
							}else if(!strcmpi(sekarang, "Mars")){
								gotoxy(60, 5);
								pmars();
							}else if(!strcmpi(sekarang, "Jupiter")){
								gotoxy(60, 5);
								pjupiter();
							}else if(!strcmpi(sekarang, "Neptune")){
								gotoxy(60, 5);
								pneptune();
							}
							inkremen_tanggal(&D, &M, &Y);
						}else{
							printf("\e[sTujuan Tidak Ditemukan [!] \e[u\e[B");
						}
						getch();
						break;
					case 4:
						gotoxy(60, 5);
						printf("\e[s         [Isi Bensin]\e[u\e[B");
						printf("\e[sMasukkan Jumlah Bensin : \e[u\e[B\e[B");
						fflush(stdin); scanf("%d", &tint);
						if(tint<1){
							printf("\e[sJumlah Bensin Invalid [!]\e[u\e[B");
						}else if(bensin + tint >50){
							printf("\e[sBensin melebihi kapasitas [!]\e[u\e[B");
						}else{
							bensin += tint;
							printf("\e[sBerhasil mengisi bensin sebanyak %d liter [!]\e[u\e[B", tint);
						}
						break;
				}
				break;
			
			case 'a':
				menuu--;
				if(menuu<1){
					menuu++;
				}
				break;
				
			case 'd':
				menuu++;
				if(menuu>3&&strcmpi(sekarang, "bumi")){
					menuu--;
				}else if(menuu>4){
					menuu--;
				}
				break;
		}
	}
	
	
	return 0;
}
