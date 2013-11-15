/*
NIM/Nama  : 13512095/Edmund Ophie
Nama file : kartu.h
Topik     : ADT Kartu
Tanggal   : 25 November 2013
Deskripsi : Header Kartu
*/

#ifndef kartu_h
#define kartu_h

#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// Drawpile : Stack
// ListPlayer : List
// KartuTangan : Tabel/Array

bool IsDrawpileEmpty(Drawpile *D);
void ShuffleKartu (Drawpile *D);
void BagiCharacterCard(ListPlayer *LP);
void BagiKartu(ListPlayer *LP, KartuTangan *KT);
void DrawKartu(Player *P, DrawPile *D, KartuTangan *KT);
void DeleteKartuTangan (Player* P, KartuTangan *KT);
void ViewCardInHand (Player P, KartuTangan KT);

#endif