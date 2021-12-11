#pragma once
#include "Define.h"


struct maybay{
	char sohieumaybay[MAXLENGHT_SHMB+1];
	char loaimaybay[MAXLENGHT_LMB+1];
	int socho;
	// Thuoc tinh phu
	int soChuyenDaBay=0;
};

struct danhsachmaybay{
	maybay *data[MAXMAYBAY];
	int soluong = 0;
};

maybay *newmb(maybay mb){

	maybay *temp = new maybay;
    *temp  = mb;
	return temp;
}

bool dsEmpty(danhsachmaybay &dsmb){
	
	return(dsmb.soluong == 0 ? true : false);
}

bool FullDS(danhsachmaybay &dsmb){
	
	return(dsmb.soluong  >= MAXMAYBAY ? true : false);
}

void add_newmb_vaods(danhsachmaybay &dsmb, maybay &mb){
	dsmb.data[dsmb.soluong] = newmb(mb);
	dsmb.soluong ++;
}

int timkiem_mb(danhsachmaybay &dsmb, char *sohieuMB){
	for(int i=0  ;i < dsmb.soluong ;i++)
	    { 
	        if(strcmp(dsmb.data[i]->sohieumaybay, sohieuMB) == 0)
	           return i;
		}
   return -1;
}

void delete_mb_khoids(danhsachmaybay &dsmb , int vitri){
	delete dsmb.data[vitri];
	for(int i=vitri; i< dsmb.soluong -1; i++ )
		dsmb.data[i]= dsmb.data[i+1];
	dsmb.soluong--;
}

void edit_mb(danhsachmaybay &dsmb , int vitri, maybay &mb){
	    *dsmb.data[vitri]=  mb ;
}


