#pragma once
#include "ngayh.h"
#include "Define.h"


//----------------chuyen bay--------------
struct chuyenbay{
	char MaCB[MAXLENGHT_MACB+1];
	char Sanbayden[MAXLENGHT_SANBAYDEN+1];
	char SohieuMB[MAXLENGHT_SHMB+1];
	int trangthai;
	Day_time mytime;
	char **dsve;// ------------ds ve------------------
	int sove;
};

struct nodeCB{
	chuyenbay data;
	nodeCB *CBnext = NULL;
};

void khoitaodsve_trangthai(danhsachmaybay &dsmb,chuyenbay &cb){
	
	cb.trangthai= CONVE;
	cb.sove = dsmb.data[timkiem_mb(dsmb, cb.SohieuMB)]->socho;
	cb.dsve= new char *[cb.sove+1];
	for(int i=1 ; i<= cb.sove ; i++){
		  cb.dsve[i]= new char[MAXLENGHT_CMND+1];
		  strcpy(cb.dsve[i],"0");     //ve con trong
	}
}

nodeCB *taonodecbmoi(chuyenbay &cb)
{
	nodeCB *temp = new nodeCB;
	temp -> data = cb;
	temp -> CBnext = NULL; 
	return temp;
}
bool dsCBEmpty(nodeCB *First)
{
   return(First == NULL);
}

void add_cb_vaods(nodeCB *&first, chuyenbay &cb )
{
	nodeCB *nodetam = taonodecbmoi(cb);
	if(first==NULL){
	    first = nodetam;
	    first->CBnext=NULL;
		}
	else 
	{
		nodeCB *nodechay = first ;
		for(nodechay = first; nodechay -> CBnext != NULL; nodechay = nodechay -> CBnext );
			nodechay -> CBnext = nodetam ;
	}	
}
//int Delete_info(nodeCB *&First,char*Ma){  
//	    nodeCB * p,*q;
//		p=First;
//	  if (First==NULL ) return 0;
//	  if (strcmp(First->data.MaCB , Ma)==0 ) {
//	     p=First;
//		 First = p->CBnext;
//		 delete p ; 
//		 return 1;
//	  }   
//	for ( p=First; p->CBnext!=NULL && strcmp(p->CBnext->data.MaCB, Ma) != 0 ; p=p->CBnext) ;
//	if (p->CBnext!= NULL ) {
//			q=p->CBnext; 
//			p->CBnext=q->CBnext;
//			delete q;
//			 return 1;
//		}
//	     return 0;
//}
nodeCB * timcb_MACB(nodeCB *first, char *x) // tim chuyen bay => co hoac k 
{
	nodeCB *nodechay =first;
    for(nodechay = first; nodechay  != NULL; nodechay = nodechay -> CBnext) /////????????
    	if(strcmp(nodechay -> data.MaCB, x) ==0)
    	   return  nodechay;
	
	 return NULL;
}
//nodeCB * timcb_vitri(nodeCB *first, int vitri) // tim chuyen bay => co hoac k 
//{
//	nodeCB *nodechay =first;
//	int count=1;
//    for(nodechay = first; nodechay  != NULL; nodechay = nodechay -> CBnext) /////????????
//    	if(count == vitri)
//    	   return  nodechay;
//    	else count++;
//}
bool tim_cb_SHMB(nodeCB *first, char *x) // tim chuyen bay => co hoac k 
{
	nodeCB *nodechay =first;
    for(nodechay = first; nodechay  != NULL; nodechay = nodechay -> CBnext) /////????????
    	if(strcmp(nodechay -> data.SohieuMB, x) ==0)
    	   return  true;
	
	 return false;
}

//bool check_trangthai_SHMB(nodeCB *first, char *x) // kiem tra xem chuyen bay da hoan thanh hay huy chuyen chua
//{
//	nodeCB *nodechay =first;
//    for(nodechay = first; nodechay  != NULL; nodechay = nodechay -> CBnext) /////????????
//    	if(strcmp(nodechay -> data.SohieuMB, x) ==0)
//    	    if(nodechay->data.trangthai == CONVE ||nodechay->data.trangthai == HETVE)
//    	       return  false;
//	
//	 return true;
//}
int huychuyen(nodeCB *temp) // huy chuyen bay
{
	if(temp->data.trangthai == CONVE || temp->data.trangthai == HETVE){
		temp-> data.trangthai = HUYCHUYEN;
		return 1;
	}
	   return 0;
}

int hieuchinhngayh(nodeCB *temp,Day_time a){
	
	if(TGTL(a) == true){
	    temp-> data.mytime = a;
	    return 1;
	    }
	return 0;
}
int checkfull(nodeCB *temp){

	for(int i=1 ; i<= temp->data.sove ; i++ ){
		if(strcmp(temp->data.dsve[i] , "0") == 0)
		return 0;
	}
	temp->data.trangthai = HETVE;
	return 1;
}
int sovechuaban(chuyenbay &cb){
     int count=0;
	for(int i=1 ; i<= cb.sove ; i++ ){
		if(strcmp(cb.dsve[i] , "0") == 0)
		        count++;
	}
   return count;
}

void check_hoantat(nodeCB *temp,danhsachmaybay &dsmb){    
	   if(temp -> data.trangthai == CONVE || temp->data.trangthai== HETVE){
	   	 if(TGQK(temp -> data.mytime)==true){
	   	 	temp->data.trangthai = HOANTAT;	
	   	 	dsmb.data[timkiem_mb(dsmb,temp->data.SohieuMB)]->soChuyenDaBay ++;
			}	
	   }
	  
}
void check_hoantat_all(nodeCB *&first,danhsachmaybay &dsmb){
	   nodeCB *nodeChay;
	   for( nodeChay=first; nodeChay != NULL ; nodeChay = nodeChay->CBnext){
	   	  check_hoantat(nodeChay,dsmb);
	   	    
	   }
}


