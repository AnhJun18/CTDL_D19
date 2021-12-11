#include <winbgim.h> 
#include <iostream> 
#include <fstream>
#include "Define.h"
#include "ChuanHoaDuLieu.h"
#include "MayBay.h"
#include "hanhkhach.h"
#include "chuyenbay.h"
#include "IO.h"
#include "XuLi.h"
#include "DeleteMemory.h"

int main(int argc, char *argv[])
{
	atexit(DeleteMemory);
	
    unsigned short int **mapID = new unsigned short int *[WD_HEIGHT];
	for(int i=0;i<= WD_HEIGHT;i++)
	 	mapID[i]= new unsigned short int[WD_WIDTH];
	 	
	resetMapID(mapID);
	
	danhsachmaybay dsmb;
	nodeCB *First =NULL;
	node *root=NULL;
    
	Open_file_MB(dsmb);
	Open_file_chuyen_bay(First);
	Open_file_hanh_khach(root);
	
	check_hoantat_all(First,dsmb);
	Save_file_chuyen_bay(First);
	Save_file_MB(dsmb);
	
	PT_MapID = mapID; 
	PT_MB= dsmb.data;
	PT_CB =  First;
	PT_HK = root;
	
	initwindow(WD_WIDTH,WD_HEIGHT);	
	setwindowtitle("Quan Li May Bay 1.0");		
	setbkcolor(WHITE);					
   	cleardevice();
	setcolor(BLACK);
	setfillstyle(1,WHITE);	
	bar(0,0,WD_WIDTH,WD_HEIGHT);		
	setbkcolor(GRAY);
	settextstyle(0, 0, 2);
    	
    vemenu(mapID);
    Logo(375,68);
    
 	int x,y;
	int id=0;
	int idnext=0;
	while(true){
		
		id=0;
		if(ismouseclick(WM_LBUTTONDOWN)){
			getmouseclick(WM_LBUTTONDOWN, x, y);
			id = mapID[y][x];
			clearmouseclick(WM_LBUTTONDOWN);
		}
		
		
place:		switch(id){
			case ID_MAYBAY:
				resetMH(mapID);
				taoButton(0,0,100,250,175,mapID,WHITE,BLACK,WHITE,"MAY BAY");
				manhinhmaybay(First,dsmb,mapID,idnext,false);
				taoButton(ID_MAYBAY,0,100,250,175,mapID,LIGHTGREEN,BLACK,LIGHTGREEN,"MAY BAY");
			    id= idnext;
			    goto place;
				break;
				
			case ID_CHUYENBAY:
				if( dsEmpty(dsmb)){
				       	MessageBox(NULL,"\t \t ERROR! \nHien Chua Co May Bay Nao Trong Danh Sach !","THONG BAO",MB_ICONERROR|MB_OK);
				       	id= ID_MAYBAY;
			    		goto place;
				}
				else{
					check_hoantat_all(First,dsmb);
					Save_file_chuyen_bay(First);
					Save_file_MB(dsmb);
					resetMH(mapID);
					taoButton(0,0,225,250,300,mapID,WHITE,BLACK,WHITE,"CHUYEN BAY");
					manhinhchuyenbay(First,dsmb,mapID,idnext);
					taoButton(ID_CHUYENBAY,0,225,250,300,mapID,LIGHTGREEN,BLACK,LIGHTGREEN,"CHUYEN BAY");
					id= idnext;
			    goto place;
				}
				
				break;
			case ID_VE:
				if(dsEmpty(dsmb)){
					       	MessageBox(NULL,"\n                     ERROR!	\n  Hien Chua Co May Bay Nao Trong Danh Sach !","THONG BAO",MB_ICONERROR|MB_OK);
					       	id= ID_MAYBAY;
				    		goto place;
						}
				else if ( dsCBEmpty(First) ){
					       	MessageBox(NULL,"\n                     ERROR!	\n  Hien Chua Co Chuyen Bay Nao Trong Danh Sach !","THONG BAO",MB_ICONERROR|MB_OK);
					       	id= ID_CHUYENBAY;
				    		goto place;
						}
				else{
					   	check_hoantat_all(First,dsmb);
						Save_file_chuyen_bay(First);
						Save_file_MB(dsmb);
						resetMH(mapID);
						taoButton(0,0,350,250,425,mapID,WHITE,BLACK,WHITE,"VE");
						manhinhve(root,First,dsmb,mapID,idnext);
						taoButton(ID_VE,0,350,250,425,mapID,LIGHTGREEN,BLACK,LIGHTGREEN,"VE");
						id= idnext;
				    	goto place;
					}
					break;
			 case ID_THONGKE:
			 	if( dsEmpty(dsmb) ){
				       	MessageBox(NULL,"\t \t ERROR! \nHien Chua Co May Bay Nao Trong Danh Sach !","THONG BAO",MB_ICONERROR|MB_OK);
				       	id= ID_MAYBAY;
			    		goto place;
				}
				else{
					check_hoantat_all(First,dsmb);
					Save_file_chuyen_bay(First);
					Save_file_MB(dsmb);
					resetMH(mapID);
					taoButton(0,0,475,250,550,mapID,WHITE,BLACK,WHITE,"THONG KE");
					manhinhthongke(dsmb,mapID,idnext);
					taoButton(ID_THONGKE,0,475,250,550,mapID,LIGHTGREEN,BLACK,LIGHTGREEN,"THONG KE");
					id= idnext;
			   		 goto place;
				}
				
				break;
			case ID_EXIT:
					taoButton(0,0,600,250,675,mapID,WHITE,BLACK,RED,"THOAT");
					if( MessageBox(NULL,"\n   [ Xac Nhan Thoat Chuong Trinh]   \n","THONG BAO",MB_ICONWARNING|MB_OKCANCEL) == IDOK){
	        		
						 DeleteMemory();
						 return 0;
						  }	
				else{
						taoButton(ID_EXIT,0,600,250,675,mapID,LIGHTGREEN,BLACK,LIGHTGREEN,"THOAT");
						resetMH(mapID);
						Logo(375,68);
				}
				break;
				 
		 }
		delay(100);
	}
	
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}
