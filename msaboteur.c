/*
NIM/Nama  : 13512095/Edmund Ophie
Nama file : msaboteur.c
Topik     : Saboteur
Tanggal   : 25 November 2013
Deskripsi : Program Utama Saboteur
*/

//#include "kartu.h"

#include <stdio.h>
#include <string.h>
int main() {
	
	/* Kamus */
	char Input[20];
	char Nama[50];
	int Pil;
	
	

	/* Algoritma */
	
	// Load isi file players.in ke dalam suatu struktur data internal
	
	/* Preparation Mode */
	
	do{
		printf(">"); scanf("%s", Input);
		
		if(strcmp(Input, "highscores") == 0)
			Pil = 1;
		else
		if(strcmp(Input, "viewplayers") == 0)
			Pil = 2;
		else
		if(strcmp(Input, "add") == 0)
			Pil = 3;
		else
		if(strcmp(Input, "delete") == 0)
			Pil = 4;
		else
		if(strcmp(Input, "play") == 0)
			Pil = 5;
		else
		if (strcmp(Input, "start") == 0)
			Pil = 6;
		else
			Pil = 0;
			
		switch(Pil)
		{
			case 1: 
					break;
			case 2:
					break;
			case 3:	{
					while(scanf("%s", Nama) == 1)
					{
						printf("%s\n", Nama);
					}
					break;
					}
			case 4:
					break;
			case 5:
					break;
			case 6:
					break;
			default: break;			
		}
	}
	while(Pil != 0);
	
	return 0;
}