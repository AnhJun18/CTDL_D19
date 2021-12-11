
//=======================================MAY BAY======================================

void resetmb(maybay &mb);
bool checkmb(maybay &mb);
int timkiem_mb(danhsachmaybay &dsmb, char *sohieuMB);
void add_newmb_vaods(danhsachmaybay &dsmb, maybay &mb);
void delete_mb_khoids(danhsachmaybay &dsmb , int vitri);
void edit_mb(danhsachmaybay &dsmb , int vitri, maybay &mb);
void veKhungDSMB(unsigned short int **mapID );
void veKhungCongCuMB(unsigned short int **mapID );
void taodongdsmb(int stt, int x, int y,int x1,int y1,maybay &mb,bool click,unsigned short int **mapID);
void clickmb(maybay &mb,int vitri,unsigned short int **mapID);
void unclickmb(maybay &mb,int vitri,unsigned short int **mapID);
void manhinhmaybay(nodeCB *First,danhsachmaybay &dsmb,unsigned short int **mapID ,int &idnext,bool chichonshmb);


//=======================================CHUYEN BAY======================================
void resetcb(chuyenbay &cb);
bool checkcb(chuyenbay &cb);
bool dsEmpty(nodeCB *First);
void khoitaodsve_trangthai(danhsachmaybay &dsmb,chuyenbay &cb);
bool Check_MB_SanSangBay(nodeCB *First,chuyenbay &cb);
void add_cb_vaods(nodeCB *&first, chuyenbay &cb );
bool tim_cb_SHMB(nodeCB *first, char *x);
int huychuyen(nodeCB *temp);
int hieuchinhngayh(nodeCB *temp,Day_time a);
int checkfull(nodeCB *temp);
int sovechuaban(chuyenbay &cb);
void check_hoantat_all(nodeCB *&first,danhsachmaybay &dsmb);
void vekhungdscb(unsigned short int ** mapID);
void vekhungnhaplieucb(unsigned short int ** mapID);
void taodongdscb(int stt, int x, int y,int x1,int y1,chuyenbay &cb);
void clickchuyenbay(int vitri,chuyenbay &cb);
void unclickchuyenbay(int vitri,chuyenbay &cb);
void manhinhchuyenbay(nodeCB *&First,danhsachmaybay &dsmb,unsigned short int **mapID ,int &idnext );

//=======================================VE======================================
bool checkve(chuyenbay &cb,int vt, hanhkhach &hk);
void vekhungve(unsigned short int ** mapID);
void taodongdscb_in_ve(int stt, int x, int y,int x1,int y1,chuyenbay &cb);
void clickcb(int vitri,chuyenbay &cb);
void unclickcb(int vitri,chuyenbay &cb);
void clickghe(int soghe,int soday,int kichthuoc,int cantrai,unsigned short int **mapID);
void unclickghe(int soghe,int soday,int kichthuoc,int cantrai,unsigned short int **mapID,bool datve);
void sodove(chuyenbay &cb,unsigned short int **mapID,int &soghe,int &soday,int &kichthuoc,int &cantrai,bool datve);
bool Check_HK_SanSangBay(nodeCB *First,chuyenbay &cb, char *cmnd);
void manhinhve(node *&root,nodeCB *&First,danhsachmaybay &dsmb,unsigned short int **mapID,int &idnext);

//=======================================HANH KHACH======================================
void resethk(hanhkhach &hk);
void edit_data_HK(node *temp, hanhkhach &hk);
void add_HK_to_list(node *&root, hanhkhach &hk);
void taodongdshk(int stt, int x, int y,int x1,int y1,int soghe,hanhkhach &hk);
void dsHKthuocCB(nodeCB *nodecb,node *root,unsigned short int ** mapID);

//=================================  LOGO  ================================================
 void Logo(int X,int Y)
{                
    setcolor(BLACK);
	setbkcolor(WHITE);
	settextstyle(10,0,4);
	outtextxy(825-textwidth(" DO AN QUAN LI MAY BAY ")/2,10, " DO AN QUAN LI MAY BAY ");
	settextstyle(10,0,3);
	outtextxy(825-textwidth(" GVHD: LUU NGUYEN KY THU ")/2,40, " GVHD: LUU NGUYEN KY THU ");
	line(825-textwidth("GVHD: LUU NGUYEN KY THU")/2,63,825-textwidth("GVHD: LUU NGUYEN KY THU")/2+textwidth("GVHD"),63);
    settextstyle(8,0,2);
	string str;
	ifstream f;
	f.open("Logo.TXT",ios::in);
//	setcolor(12);
     int H=Y;
	while (true)
	{
		getline(f,str);
		outtextxy(X,H, str.c_str());
		H=H+25; 
		if(f.eof())
		{
			break;
		}	
	}
	f.close();
	int d=2;   //do day  vien
    line(X+95,Y+432,X+307,Y+192);
    line(X+95-d,Y+432,X+307-d,Y+192);
//	line(X+95,Y+432,X+450,Y+32);
	line(X+365,Y+129,X+450,Y+32);
	line(X+365-d,Y+129,X+450-d,Y+32);

	
	line(X+560,Y+157,X+805,Y+432);
	line(X+560+d,Y+157,X+805+d,Y+432);
//	line(X+450,Y+32,1180,Y+432);
	line(X+450,Y+32,X+515,Y+107);
	line(X+450+d,Y+32,X+515+d,Y+107);
	
	line(X+95,Y+432,X+225,Y+432);
	line(X+95-d,Y+432+d,X+225,Y+432+d);
	line(X+365,Y+432,X+605,Y+432);
	line(X+365,Y+432+d,X+605,Y+432+d);
	line(X+670,Y+432,X+805,Y+432);
	line(X+670,Y+432+d,X+805+d,Y+432+d);
	
//	setcolor(BLACK);
	settextstyle(10,0,2);
	line(780,600,1350,600);
	line(810,580,810,720);
	
	outtextxy(825,615, "THANH VIEN: ");
	line(825,635,950,635);
	outtextxy(900,640, "1.LE PHUONG ANH      -   N19DCCN006");
	outtextxy(900,665, "2.LE HOANG CAM VY    -   N19DCCN229");
	outtextxy(900,690, "3.GIANG MANH TUAN    -   N19DCCN176");
	settextstyle(0,0,2);
}

void setID(int id,int x1,int y1, int x2,int y2,unsigned short int ** mapID){
	
	for(int i=y1 ; i<=y2 ; i++)
		for(int j=x1; j <= x2; j++)
			mapID[i][j] = id ;
		
}

void resetMapID(unsigned short int ** mapID){
	
		setID(0,0,0,WD_WIDTH,WD_HEIGHT,mapID);

}

void resetMH(unsigned short int **mapID){
	
		setID(0,250,0,WD_WIDTH,WD_HEIGHT,mapID);
		
		setfillstyle(1,WHITE);	
		bar(250,0,WD_WIDTH,WD_HEIGHT);
}

void resetmb(maybay &mb){
	
			mb.sohieumaybay[0]='\0';
			mb.loaimaybay[0]='\0';
			mb.soChuyenDaBay=0;
			mb.socho=0;
}

void resetcb(chuyenbay &cb){
	
			cb.MaCB[0]='\0';
			cb.Sanbayden[0]='\0';
			cb.SohieuMB[0]='\0';
			cb.sove=0;
			cb.mytime = Time_now();
			
}
void resethk(hanhkhach &hk){
	
			hk.cmnd[0] = '\0';
		    hk.ho[0]='\0';
		    hk.ten[0]='\0';
		    hk.phai[0]='\0';
}

void resetthanhchucnang(unsigned short int **mapID){
	
		setID(0,350,500,1150,550,mapID);
		
		setfillstyle(1,WHITE);	
		bar(305,505,1145,545);
		
}
void resetkhungds(unsigned short int **mapID){
	
	setID(0,250,0,1350,500,mapID);

	setfillstyle(1,WHITE);	
	bar(251,0,1352,499);
			
}

bool checkmb(maybay &mb){
	
	if(strlen(mb.sohieumaybay) == 0)  {
	    MessageBox(NULL,"So Hieu May Bay Khong Duoc De Trong","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false;
	}
	if(mb.socho < 20 ) {
		
		 MessageBox(NULL,"So Cho May Bay Toi Thieu La 20 (>= 20))","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false ;
	}
	if(strlen(mb.loaimaybay) == 0) {
		 MessageBox(NULL,"Loai May Bay Khong Duoc De Trong","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false;
	}
	return true;
}

bool checkcb(chuyenbay &cb){
	if(strlen(cb.MaCB) == 0) {
		 MessageBox(NULL,"Ma Chuyen Bay Khong Duoc De Trong","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false;
	}
	if(strlen(cb.SohieuMB) == 0) {
		 MessageBox(NULL,"So Hieu May Bay Khong Duoc De Trong","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false;
	}
	if(strlen(cb.Sanbayden) == 0) {
		 MessageBox(NULL,"San Bay Den Khong Duoc De Trong","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false;
	}
	
	if(TGTL(cb.mytime) == false	){
       MessageBox(NULL,"Thoi Gian Khong Hop Le ","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false;
	}
	return true;
}

bool checkve(chuyenbay &cb, int vt, hanhkhach &hk){
	if(strlen(cb.MaCB) == 0) {
		 MessageBox(NULL,"Ma Chuyen Bay Khong Duoc De Trong","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false;
	}
	if(strlen(hk.cmnd) == 0) {
		 MessageBox(NULL,"CMND Khong Duoc De Trong","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false;
	}
	if( vt == 0) {
		 MessageBox(NULL,"So Ghe Khong Duoc De Trong","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false;
	}
	if(strlen(hk.ho) == 0) {
		 MessageBox(NULL,"Ho & Ten Dem Khong Duoc De Trong","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false;
	}
	if(strlen(hk.ten) == 0) {
		 MessageBox(NULL,"Ten Khong Duoc De Trong","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false;
	}
	if(strlen(hk.phai) == 0) {
		 MessageBox(NULL,"Vui Long Chon Phai (Nam/Nu)","THONG BAO",MB_ICONWARNING|MB_OK);
		 return false;
	}
	return true;
}

void Input(int x,int y,int kieuChuanHoa, char s[], int n, int &id,unsigned short int **mapID,bool &kt){
	kt=0;
	char c;
	int idtmp=id;
	int h,k;
	setbkcolor(WHITE);
	setcolor(BLACK);
	while(true){
			if(ismouseclick(WM_LBUTTONDOWN)){
				getmouseclick(WM_LBUTTONDOWN, h, k);
				idtmp = mapID[k][h];
				clearmouseclick(WM_LBUTTONDOWN);
	      	  }
	      	  
	      	if(id != idtmp) {
			 	 kt=1;
			  	id=idtmp;
			  	if(s[strlen(s)-1]==' ')
			    	s[strlen(s)-1]='\0';
			  	return ;
			  }
	      	
		    if (kbhit()){
				c=getch();
				if(c!= 13){
						if(c==8 && strlen(s) != 0)  {    //Phim BackSpace
							outtextxy(x+textwidth(s),y," ");
							s[strlen(s)-1] = '\0';	
						  }
					   else	Nhap(x,y,kieuChuanHoa,c,s,n);
					}
				else {
						if(s[strlen(s)-1]==' ')
		    				s[strlen(s)-1]='\0';
						return ;
					}
				}
			else { 
					outtextxy(x+textwidth(s),y,"|");
					outtextxy(x+textwidth(s),y," ");	
				}
	
	}
}

void taoButton(int id, int x1, int y1, int x2, int y2, unsigned short int **mapID, int mauVien, int mauText , int mauBG , char *text){
	
		setcolor(mauVien);
		setfillstyle(1, mauBG);
		bar(x1, y1, x2, y2);
		rectangle(x1, y1, x2, y2);
		
		setcolor(mauText);
		setbkcolor(mauBG);
		outtextxy(x1+(x2-x1-textwidth(text))/2,y1+(y2-y1-textheight(text))/2, text);
		
		setID(id,x1,y1,x2,y2,mapID);
	
}
void taoEditText(int id, int x1, int y1, int x2, int y2, unsigned short int **mapID, int mauVien, int mauBG){
	
		setcolor(mauVien);
		setfillstyle(1, mauBG);
		bar(x1, y1, x2, y2);
		rectangle(x1, y1, x2, y2);
		
		setID(id,x1,y1,x2,y2,mapID);
	
}

void taoLable(int x1, int y1, int x2, int y2, int mauVien,int mauText, int mauBG, char* text){
	
		setcolor(mauVien);
		setfillstyle(1, mauBG);
		bar(x1, y1, x2, y2);
		rectangle(x1, y1, x2, y2);
		
		setcolor(mauText);
		setbkcolor(mauBG);
		outtextxy(x1+(x2-x1-textwidth(text))/2,y1+(y2-y1-textheight(text))/2, text);	
}

void vemenu( unsigned short int **mapID){
		setfillstyle(1,GRAY);	
		bar(0,0,250,770);
		settextstyle(10, 0, 4);
		outtextxy(125-textwidth("MENU")/2,25,"MENU");
		settextstyle(0, 0, 2);
		taoButton(ID_MAYBAY,0,100,250,175,mapID,LIGHTGREEN,BLACK,LIGHTGREEN,"MAY BAY");
		taoButton(ID_CHUYENBAY,0,225,250,300,mapID,LIGHTGREEN,BLACK,LIGHTGREEN,"CHUYEN BAY");
		taoButton(ID_VE,0,350,250,425,mapID,LIGHTGREEN,BLACK,LIGHTGREEN,"VE");
		taoButton(ID_THONGKE,0,475,250,550,mapID,LIGHTGREEN,BLACK,LIGHTGREEN,"THONG KE");
		taoButton(ID_EXIT,0,600,250,675,mapID,LIGHTGREEN,BLACK,LIGHTGREEN,"THOAT");

}

void veKhungCongCuMB(unsigned short int **mapID ){

		setcolor(BLACK);
		taoLable(650,20,1000,70,BLACK,BLACK,GRAY,"DANH SACH MAY BAY");
		rectangle(300,500,1350,750);
		line(300,550,1350,550);
		taoButton(ADD_MB,670,510,740,540,mapID,BLACK,BLACK,LIGHTGREEN,"THEM");
	    taoButton(DELETE_MB,790,510,860,540,mapID,BLACK,BLACK,LIGHTGREEN,"XOA");
	    taoButton(EDIT_MB,910,510,980,540,mapID,BLACK,BLACK,LIGHTGREEN,"SUA");
	    
	    taoLable(370,575,500,625,BLACK,BLACK,GRAY,"SHMB");
	    taoEditText(0,500,575,900,625,mapID,BLACK,DARKGRAY);
	    taoLable(1000,575,1150,625,BLACK,BLACK,GRAY,"So Cho");
	    taoEditText(0,1150,575,1280,625,mapID,BLACK,DARKGRAY);
	    taoLable(370,675,570,725,BLACK,BLACK,GRAY,"Loai May Bay");
	    taoEditText(0,570,675,1280,725,mapID,BLACK,DARKGRAY);
}

void veKhungDSMB(unsigned short int **mapID ){
		settextstyle(0, 0, 2);
		setcolor(BLACK);
		rectangle(350,100,1300,430);
		line(350,130,1300,130);
		line(350+4*16,100,350+4*16,130);
		line(350+20*16,100,350+20*16,130);
		line(350+50*16,100,350+50*16,130);
	
		setbkcolor(WHITE);
		settextstyle(8,0,0);
		setusercharsize(1,2,1,2);
		outtextxy(350+2*16-textwidth("STT")/2,110,"STT");
		outtextxy(350+12*16-textwidth("SoHieuMayBay")/2,110,"SoHieuMayBay");
		outtextxy(350+35*16-textwidth("Loai May Bay")/2,110,"Loai May Bay");
		outtextxy(350+50*16+(1300-350-50*16)/2-textwidth("So Ghe")/2,110,"So Ghe");
	
}

void taodongdsmb(int stt, int x, int y,int x1,int y1,maybay &mb,bool isclick,unsigned short int **mapID){
    
		setcolor(BLACK);
		settextstyle(8, 0, 0);
		setusercharsize(1,2,1,2);
		line(x,y1,x1,y1);
		line(x+4*16,y,x+4*16,y1);
		line(x+20*16,y,x+20*16,y1);
		line(x+50*16,y,x+50*16,y1);
		if(isclick)
			setbkcolor(RED);
		else 
			setbkcolor(WHITE);
		outtextxy(x+2*16-textwidth(toChars(stt))/2,y+10,toChars(stt));
		outtextxy(x+12*16-textwidth(mb.sohieumaybay)/2,y+10,mb.sohieumaybay);
		outtextxy(x+35*16-textwidth(mb.loaimaybay)/2,y+10,mb.loaimaybay);
		outtextxy(x+50*16+(1300-x-50*16)/2-textwidth(toChars(mb.socho))/2,y+10,toChars(mb.socho));
		settextstyle(0, 0, 2);	

}

void clickmb(maybay &mb,int vitri,unsigned short int **mapID){

		setfillstyle(1,RED);
        bar(350,130+(vitri-1)%10*30,1300,160+(vitri-1)%10*30);
        rectangle(350,130+(vitri-1)%10*30,1300,160+(vitri-1)%10*30);
        taodongdsmb(vitri,350,130+(vitri-1)%10*30,1300,160+(vitri-1)%10*30,mb,true,mapID);
        setfillstyle(1,DARKGRAY);
    	bar(501,576,900,625);
		bar(1151,576,1280,625);
		bar(571,676,1280,725);
		setbkcolor(DARKGRAY);
    	outtextxy(505,590,mb.sohieumaybay);
    	outtextxy(1155,590,toChars(mb.socho));
    	outtextxy(575,690,mb.loaimaybay);
	        
}

void unclickmb(maybay &mb,int vitri,unsigned short int **mapID){

		setfillstyle(1,WHITE);
        bar(350,130+(vitri-1)%10*30,1300,160+(vitri-1)%10*30);
        rectangle(350,130+(vitri-1)%10*30,1300,160+(vitri-1)%10*30);
        taodongdsmb(vitri,350,130+(vitri-1)%10*30,1300,160+(vitri-1)%10*30,mb,false,mapID);
        setfillstyle(1,DARKGRAY);
    	bar(501,576,900,625);
		bar(1151,576,1280,625);

		bar(571,676,1280,725);
}

void manhinhmaybay(nodeCB *First,danhsachmaybay &dsmb,unsigned short int **mapID ,int &idnext,bool isFindMB){
	
	maybay mb;
	resetmb(mb);
	bool kt=0;
	int tranghientai=1;
	int trangcuoi= ceil(dsmb.soluong/10.0);
	char s[50]="";
	int vitri=0;
	bool dangNhapLieu=0;
	if(! isFindMB){
		veKhungCongCuMB(mapID);
	}
	veKhungDSMB(mapID);
	if(dsEmpty(dsmb)){
		settextstyle(0, 0, 2);
		outtextxy(825-strlen("! DANH SACH TRONG !")*4,135,"! DANH SACH TRONG !");
		
	    taoButton(0,790,510,860,540,mapID,BLACK,BLACK,GRAY,"XOA");
	    taoButton(0,910,510,980,540,mapID,BLACK,BLACK,GRAY,"SUA");
	}
	     
	else{
			for(int i=0; i < dsmb.soluong && i< 10 ;i++ ){
				taodongdsmb(i+1,350,130+i*30,1300,160+i*30,*dsmb.data[i],0,mapID);
				setID(1000 +i,350,130+i*30,1300,160+i*30,mapID);
				}
		     if(! isFindMB){
		     	mb=*dsmb.data[0];
		     	vitri=1;
		     	clickmb(mb,1,mapID); 
			 }   	
			 	
	}
	settextstyle(0, 0, 2);
	 if( tranghientai < trangcuoi)
		taoButton(NEXT_PAGE,1200,450,1275,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT");
	else taoLable(1200,450,1275,480,BLACK,BLACK,GRAY,"NEXT");
		
		taoLable(375,450,450,480,BLACK,BLACK,GRAY,"BACK");
			
    int x,y; 	
	int idtmp;
	char chartemp;

	while(true){
		
		delay(100);
		idtmp=0;
		if(ismouseclick(WM_LBUTTONDOWN)){
			getmouseclick(WM_LBUTTONDOWN, x, y);
			idtmp = mapID[y][x];
			clearmouseclick(WM_LBUTTONDOWN);
		 }
		
co:		switch(idtmp){
	        case ADD_MB:     // Them May Bay
				 if(FullDS (dsmb) ){
	        		MessageBox(NULL," So Luong May Bay Vuot Qua Gioi Han Cho Phep !","ERROR!",MB_ICONWARNING|MB_OK);
				}
				else{
					 dangNhapLieu=1;
		        	 if(  ! dsEmpty(dsmb) ){
		        	 	unclickmb(mb,vitri,mapID);
					 }
		        	 resetmb(mb);
		        	 s[0]='\0';
		           	 resetthanhchucnang(mapID);
		           
		           	 taoButton(LUU_ADDMB,730,510,800,540,mapID,BLACK,BLACK,LIGHTGREEN,"LUU");
		           	 taoButton(HUY_ADDMB,850,510,920,540,mapID,BLACK,BLACK,LIGHTGREEN,"HUY");
		           	 taoEditText(ED_SHMB,500,575,900,625,mapID,BLACK,WHITE);
					 taoEditText(ED_SOGHE,1150,575,1280,625,mapID,BLACK,WHITE);
					 taoEditText(ED_LOAIMB,570,675,1280,725,mapID,BLACK,WHITE);	 
				}
	        	
	           	 break;
	        case DELETE_MB:     // Xoa May Bay
	        
	        if(tim_cb_SHMB(First,mb.sohieumaybay) == true){
	        		MessageBox(NULL,"May Bay Da Thuc Hien Bay Khong The Xoa !","THONG BAO",MB_ICONWARNING|MB_OK);
			}
			else if( MessageBox(NULL,"Xac Nhan Xoa ","THONG BAO",MB_ICONWARNING|MB_OKCANCEL) == IDOK)
	           {
	           	delete_mb_khoids(dsmb ,vitri-1);	
	        	Save_file_MB(dsmb);
	        	setfillstyle(1,WHITE);
	        	bar(351,131+(vitri-1) % 10*30,1300,430);
	        	setcolor(BLUE);
	        	for(int i=(vitri-1)%10; i+(tranghientai-1)*10 < dsmb.soluong && i < 10 ;i++ )
	     		   taodongdsmb(i+1+(tranghientai-1)*10,350,130+i*30,1300,160+i*30,*dsmb.data[i+(tranghientai-1)*10],0,mapID);
	     		if( dsmb.soluong % 10 == 0){
		     			trangcuoi--;
		     			
		     			if(dsEmpty(dsmb) ){
		     				setbkcolor(WHITE);
		     				outtextxy(825-strlen("! DANH SACH TRONG !")*4,135,"! DANH SACH TRONG !");
		     			    taoEditText(0,500,575,900,625,mapID,BLACK,DARKGRAY);
							taoEditText(0,1150,575,1280,625,mapID,BLACK,DARKGRAY);
							taoEditText(0,570,675,1280,725,mapID,BLACK,DARKGRAY);
						    taoButton(0,790,510,860,540,mapID,BLACK,BLACK,GRAY,"XOA");
						    taoButton(0,910,510,980,540,mapID,BLACK,BLACK,GRAY,"SUA");
						    setID(0,350,130,1300,160,mapID);
		     				resetmb(mb);
						 }
		     			else {
		     					if(trangcuoi < tranghientai){
		     						idtmp=121;
								    goto co;
								 }
								if(trangcuoi == tranghientai){
									 taoButton(0,1200,450,1275,480,mapID,BLACK,BLACK,GRAY,"NEXT");
								}
						 	}
					 	}
					 	
				else {
						if(trangcuoi == tranghientai)
							setID(0,350,130+(dsmb.soluong % 10)*30,1300,160+(dsmb.soluong % 10)*30,mapID);
					}
								 
				if( ! dsEmpty(dsmb)){
     	      			mb = *dsmb.data[(tranghientai-1)*10];
						vitri=(tranghientai-1)*10+1;
						clickmb(mb,vitri,mapID);
					}
			   }
	        	
	        	break;
	        
	        case EDIT_MB:   // Edit May Bay
	        	
	        	 dangNhapLieu=1;
	           	 resetthanhchucnang(mapID);
	           	 
	           	 taoButton(LUU_EDITMB,730,510,800,540,mapID,BLACK,BLACK,LIGHTGREEN,"LUU");
	           	 taoButton(HUY_EDITMB,850,510,920,540,mapID,BLACK,BLACK,LIGHTGREEN,"HUY");
	           	 
	           	 if(tim_cb_SHMB(First,mb.sohieumaybay)==false){
	           	 	 strcpy(s,toChars(mb.socho));
	           	 	taoEditText(ED_SOGHE,1150,575,1280,625,mapID,BLACK,WHITE);
	           	 	 setbkcolor(WHITE);
	        	 	outtextxy(1155,590,toChars(mb.socho));
				}
				 
				 taoEditText(ED_LOAIMB,570,675,1280,725,mapID,BLACK,WHITE);
				 setbkcolor(WHITE);
	        	 outtextxy(575,690,mb.loaimaybay);
	        	  
	        	 break;
	        case ED_SHMB:      // Nhap SHMB
	        	  do{
	        	  	idtmp = ED_SHMB;
	        	  	Input(505,590,INHOA_VIETLIEN,mb.sohieumaybay,MAXLENGHT_SHMB,idtmp,mapID,kt);
	        	  	if(idtmp ==HUY_ADDMB || idtmp ==HUY_EDITMB)
	        	  	  break;
	        		if(timkiem_mb(dsmb,mb.sohieumaybay) != -1)
	        		   MessageBox(NULL,"So Hieu May Bay Da Ton Tai \n   Vui Long Nhap Lai! !","THONG BAO",MB_ICONWARNING|MB_OK);
	        		} while(timkiem_mb(dsmb,mb.sohieumaybay) != -1);
	        		if(kt==1) goto co;
	        		
	        case ED_SOGHE:    // Nhap So Ghe Cua May BAy
			    do{
			    	idtmp=ED_SOGHE;
			    	Input(1155,590,NUMBER,s,MAXLENGHT_SOCHO,idtmp,mapID,kt);
			    	if(idtmp ==HUY_ADDMB || idtmp ==HUY_EDITMB)
	        	  	  break;
				    mb.socho= ChangeCharToNum(s);
				    if (mb.socho < 20)
				       MessageBox(NULL," Vui Long Nhap So Ghe >= 20 !","THONG BAO",MB_ICONWARNING|MB_OK);
				} while(mb.socho < 20);
				
				if(kt==1) goto co;
				
			case ED_LOAIMB:   // Nhap Loai May Bay
				idtmp=ED_LOAIMB;
				Input(575,690,CHUSOTHUONG,mb.loaimaybay,MAXLENGHT_LMB,idtmp,mapID,kt);
				if(kt==1) goto co;
				break;
				
			case LUU_ADDMB  :   // Luu Them May Bay
				if(checkmb(mb)){
					dangNhapLieu=0;
					  add_newmb_vaods(dsmb,mb);	
					  Save_file_MB(dsmb);
					  if((dsmb.soluong % 10   == 1)) {
						trangcuoi++;
						  if(trangcuoi-tranghientai ==1 )
					         taoButton(NEXT_PAGE,1200,450,1275,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT");
					  }
					  if(tranghientai==trangcuoi ){
						if((dsmb.soluong==1) || (dsmb.soluong % 10 != 1)){
							vitri=dsmb.soluong ;
					     taodongdsmb(vitri,350,130+(vitri-1)%10*30,1300,160+(vitri-1)%10*30,*dsmb.data[vitri-1],0,mapID);
					     setID(1000+(vitri-1)%10,350,130+(vitri-1)%10*30,1300,160+(vitri-1)%10*30,mapID);
						}
						clickmb(mb,vitri,mapID);
				   	}
					else{
						mb = *dsmb.data[(tranghientai-1)*10];
						vitri=(tranghientai-1)*10+1;
						clickmb(mb,vitri,mapID);	
					  }
					resetthanhchucnang(mapID);
					taoButton(ADD_MB,670,510,740,540,mapID,BLACK,BLACK,LIGHTGREEN,"THEM");
				    taoButton(DELETE_MB,790,510,860,540,mapID,BLACK,BLACK,LIGHTGREEN,"XOA");
				    taoButton(EDIT_MB,910,510,980,540,mapID,BLACK,BLACK,LIGHTGREEN,"SUA");
					setID(0,500,575,900,625,mapID);
					setID(0,1150,575,1280,625,mapID);
					setID(0,570,675,1280,725,mapID);
					}
				break;
			
		case LUU_EDITMB:   // Luu Sua May Bay
				if(checkmb(mb)==1){
					dangNhapLieu=0;
					edit_mb(dsmb,vitri-1,mb);
					clickmb(mb,vitri,mapID);
				 
					Save_file_MB(dsmb);
					resetthanhchucnang(mapID);
					taoButton(ADD_MB,670,510,740,540,mapID,BLACK,BLACK,LIGHTGREEN,"THEM");
				    taoButton(DELETE_MB,790,510,860,540,mapID,BLACK,BLACK,LIGHTGREEN,"XOA");
				    taoButton(EDIT_MB,910,510,980,540,mapID,BLACK,BLACK,LIGHTGREEN,"SUA");
					setID(0,500,575,900,625,mapID);
					setID(0,1150,575,1280,625,mapID);
					setID(0,570,675,1280,725,mapID);
				
				}			
				break;
			case  HUY_ADDMB :  //Huy Luu
				
				dangNhapLieu=0;
				resetthanhchucnang(mapID);
				taoButton(ADD_MB,670,510,740,540,mapID,BLACK,BLACK,LIGHTGREEN,"THEM");
				if( !dsEmpty(dsmb)){
					taoButton(DELETE_MB,790,510,860,540,mapID,BLACK,BLACK,LIGHTGREEN,"XOA");
			    	taoButton(EDIT_MB,910,510,980,540,mapID,BLACK,BLACK,LIGHTGREEN,"SUA");
				}
				else{
					taoButton(0,790,510,860,540,mapID,BLACK,BLACK,GRAY,"XOA");
			    	taoButton(0,910,510,980,540,mapID,BLACK,BLACK,GRAY,"SUA");
				}
			    
			     taoEditText(0,500,575,900,625,mapID,BLACK,DARKGRAY);
				 taoEditText(0,1150,575,1280,625,mapID,BLACK,DARKGRAY);
				 taoEditText(0,570,675,1280,725,mapID,BLACK,DARKGRAY);
			    if( !dsEmpty(dsmb)){
					mb = *dsmb.data[(tranghientai-1)*10];
					vitri=(tranghientai-1)*10+1;
					clickmb(mb,vitri,mapID);
			    }
					break;
					
			case HUY_EDITMB: // Huy Sua
			
				dangNhapLieu=0;
				resetthanhchucnang(mapID);
				taoButton(ADD_MB,670,510,740,540,mapID,BLACK,BLACK,LIGHTGREEN,"THEM");
			    taoButton(DELETE_MB,790,510,860,540,mapID,BLACK,BLACK,LIGHTGREEN,"XOA");
			    taoButton(EDIT_MB,910,510,980,540,mapID,BLACK,BLACK,LIGHTGREEN,"SUA");
			     taoEditText(0,500,575,900,625,mapID,BLACK,DARKGRAY);
				 taoEditText(0,1150,575,1280,625,mapID,BLACK,DARKGRAY);
				 taoEditText(0,570,675,1280,725,mapID,BLACK,DARKGRAY);
				mb = *dsmb.data[vitri-1];
			     clickmb(mb,vitri,mapID);
					break;
				
			case NEXT_PAGE:  // Next Trang 
			
				tranghientai++;
				if( tranghientai < trangcuoi)
					taoButton(NEXT_PAGE,1200,450,1275,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT");
				else{
					if(dsmb.soluong % 10 != 0)
							setID(0,350,130+(dsmb.soluong % 10)*30,1300,430,mapID);
					taoButton(0,1200,450,1275,480,mapID,BLACK,BLACK,GRAY,"NEXT");
				} 
					
				taoButton(BACK_PAGE,375,450,450,480,mapID,BLACK,BLACK,LIGHTGREEN,"BACK");
				
				setfillstyle(1,WHITE);
				bar(350,130,1300,430);
				rectangle(350,130,1300,430);
				for(int i=0; i+(tranghientai-1)*10 < dsmb.soluong && i < 10 ;i++ )
	     			  taodongdsmb(i+1+(tranghientai-1)*10,350,130+i*30,1300,160+i*30,*dsmb.data[i+(tranghientai-1)*10],0,mapID);
	     			  
 			if( !dangNhapLieu &&  (! isFindMB)){	
			     mb = *dsmb.data[(tranghientai-1)*10];
					vitri=(tranghientai-1)*10+1;
					clickmb(mb,vitri,mapID);
			}
				
				break;

			case BACK_PAGE:  // Back Trang
				tranghientai--;
				
				if( tranghientai > 1)
				   taoButton(BACK_PAGE,375,450,450,480,mapID,BLACK,BLACK,LIGHTGREEN,"BACK");
				else 
					taoButton(0,375,450,450,480,mapID,BLACK,BLACK,GRAY,"BACK");
				
			   if( tranghientai < trangcuoi)
				taoButton(NEXT_PAGE,1200,450,1275,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT");
				
				setfillstyle(1,WHITE);
				bar(350,130,1300,430);
				rectangle(350,130,1300,430);
		
				for(int i=0; i+(tranghientai-1)*10 < dsmb.soluong && i < 10 ;i++ ){
	     			  taodongdsmb(i+1+(tranghientai-1)*10,350,130+i*30,1300,160+i*30,*dsmb.data[i+(tranghientai-1)*10],0,mapID);
	     			  	setID(1000+i,350,130+i*30,1300,160+i*30,mapID);
									}
				if(! dangNhapLieu  &&  (! isFindMB)){
					mb = *dsmb.data[(tranghientai-1)*10];
				vitri=(tranghientai-1)*10+1;
				clickmb(mb,vitri,mapID);
				}
	     		
				break;
	        
	        case 1000:case 1001:case  1002 :case 1003: case 1004 :case 1005: case 1006 :case 1007: case 1008: case 1009:
	        	 	
				        if( ! dangNhapLieu){
				        	
				        	if((tranghientai-1)*10 < vitri && (tranghientai)*10 >= vitri ){
				        	unclickmb(mb,vitri,mapID);
				        	}
					        vitri=(idtmp-1000+1)+(tranghientai-1)*10;
					        if( isFindMB){
				        		idnext=vitri-1;
				        		return;
							}
					       
				        	mb=*dsmb.data[idtmp-1000+(tranghientai-1)*10];
				        	strcpy(s,toChars(mb.socho));
				        	clickmb(mb,vitri,mapID);
						}
				        	
				        	break;
	        case ID_CHUYENBAY:case ID_VE:case ID_THONGKE:case ID_EXIT:   // case Menu
	        	if( ! isFindMB){
	        	   
	        	  if(dangNhapLieu){
	        			if( MessageBox(NULL," Du Lieu Vua Nhap Chua Duoc Luu \n"
						         			"    Ban co muon thoat khong ??? "
											,"THONG BAO",MB_ICONWARNING|MB_OKCANCEL) == IDOK){
	        				idnext=idtmp;
	        					return;
						  }	
			          	}
				else{
						idnext=idtmp;
	        			return;
					}
				}
			default:
				 if (kbhit()){    // Bat Phim Khi Chua CLick Vao EdiitText
					chartemp=getch();
					break;
				}
	     }
	}
}
void vekhungdscb(unsigned short int ** mapID){
	
		taoLable(650,0,1000,50,BLACK,BLACK,GRAY,"DANH SACH CHUYEN BAY");
			// LOC
		taoLable(320,70,400,90,BLACK,BLACK,GRAY,"MaCB");
		taoEditText(LOC_MACB,400,70,560,90,mapID,BLACK,WHITE);
		taoLable(630,70,700,90,BLACK,BLACK,GRAY,"DATE");
		taoEditText(LOC_NGAY,700,70,730,90,mapID,BLACK,WHITE);
		taoEditText(LOC_THANG,750,70,780,90,mapID,BLACK,WHITE);
		taoEditText(LOC_NAM,800,70,850,90,mapID,BLACK,WHITE);
		setbkcolor(WHITE);
		outtextxy(732,70,"/");
		outtextxy(782,70,"/");
		taoLable(925,70,1045,90,BLACK,BLACK,GRAY,"DiemDen");
		taoEditText(LOC_DIEMDEN,1045,70,1330,90,mapID,BLACK,WHITE);
		rectangle(300,100,1350,430);
		line(300,130,1350,130);
		line(300+5*8 ,100,300+5*8,130);
		line(300+35*8,100,300+35*8,130);
		line(300+65*8,100,300+65*8,130);
		line(300+85*8,100,300+85*8,130);
		line(300+120*8,100,300+120*8,130);
		setbkcolor(WHITE);
		settextstyle(8, 0, 0);
		setusercharsize(1,2,1,2);
		outtextxy(300+5*4-strlen("STT")*4,110,"STT");
		outtextxy(300+20*8-strlen("MaCB")*4,110,"MaCB");
		outtextxy(300+50*8-strlen("SoHieuMB")*4,110,"SoHieuMB");
		outtextxy(300+75*8-strlen("ThoiGian")*4,110,"ThoiGian");
		outtextxy(300+102*8-strlen("DiemDen")*4,110,"DiemDen");
		outtextxy(300+125*8-strlen("TrangThai")*4,110,"TrangThai");
		settextstyle(0, 0, 2);
		
}

void vekhungnhaplieucb(unsigned short int ** mapID){
	
		setcolor(BLACK);
		// THANH TRANG THAI
		setbkcolor(BLACK);
		rectangle(300,500,1350,750);
		line(300,550,1350,550);
		taoButton(ADD_CB,650,510,750,540,mapID,BLACK,BLACK,LIGHTGREEN,"Them");
		taoButton(CANCEL_CB,775,510,875,540,mapID,BLACK,BLACK,LIGHTGREEN,"HuyCB");
		taoButton(EDIT_CB,900,510,1000,540,mapID,BLACK,BLACK,LIGHTGREEN,"Sua");	
		// KHUNG NHAP LIEU
		taoLable(350,570,450,610,BLACK,BLACK,GRAY,"MaCB");
	    taoEditText(0,450,570,800,610,mapID,BLACK,DARKGRAY);
	    
	    taoLable(850,570,950,610,BLACK,BLACK,GRAY,"SHMB");
	    taoEditText(0,950,570,1300,610,mapID,BLACK,DARKGRAY);
	    
	    
	    taoLable(350,630,470,670,BLACK,BLACK,GRAY,"DiemDen");
	    
	    taoEditText(0,470,630,975,670,mapID,BLACK,DARKGRAY); 
	    
	    taoLable(1000,630,1150,670,BLACK,BLACK,GRAY,"TrangThai");
	    taoLable(1150,630,1300,670,BLACK,BLACK,DARKGRAY,"");
	    
	   	taoLable(350,690,460,730,BLACK,BLACK,GRAY,"Ngay");
		taoEditText(0,460,690,515,730,mapID,BLACK,DARKGRAY);	
		taoLable(520,690,610,730,BLACK,BLACK,GRAY,"Thang");
		taoEditText(0,610,690,665,730,mapID,BLACK,DARKGRAY); 
		taoLable(670,690,730,730,BLACK,BLACK,GRAY,"Nam");
		taoEditText(0,730,690,830,730,mapID,BLACK,DARKGRAY);
		taoLable(865,690,940,730,BLACK,BLACK,GRAY,"Time");
		taoEditText(0,940,690,995,730,mapID,BLACK,DARKGRAY);
		taoEditText(0,1020,690,1075,730,mapID,BLACK,DARKGRAY);
		setbkcolor(WHITE);
		outtextxy(997,700,":");
		settextstyle(0, 0, 2);
		
}

void taodongdscb(int stt, int x, int y,int x1,int y1,chuyenbay &cb){
	
		setcolor(BLACK);
		settextstyle(8, 0, 0);
		setusercharsize(1,2,1,2);
	    line(x,y1,x1,y1);
		line(x+5*8 ,y,300+5*8,y1);
		line(300+35*8,y,300+35*8,y1);
		line(300+65*8,y,300+65*8,y1);
		line(300+85*8,y,300+85*8,y1);
		line(300+120*8,y,300+120*8,y1);
		
		outtextxy(300+5*4-textwidth(toChars(stt))/2,y+10,toChars(stt));
		outtextxy(300+20*8-textwidth(cb.MaCB)/2,y+10,cb.MaCB);
		outtextxy(300+50*8-textwidth(cb.SohieuMB)/2,y+10,cb.SohieuMB);
		outtextxy(300+75*8-textwidth(tocharDate(cb.mytime))/2,y+10,tocharDate(cb.mytime));
		outtextxy(300+102.5*8-textwidth(cb.Sanbayden)/2,y+10,cb.Sanbayden);
		if(cb.trangthai == HUYCHUYEN)
			 outtextxy(300+125.5*8-textwidth("HUYCHUYEN")/2,y+10,"HUYCHUYEN");
		else if(cb.trangthai == CONVE)
		    
		      outtextxy(300+125.5*8-textwidth("CONVE")/2,y+10,"CONVE");
		 else if(cb.trangthai == HETVE)
		     
		      outtextxy(300+125.5*8-textwidth("HETVE")/2,y+10,"HETVE");
		     
		else 
		      outtextxy(300+125.5*8-textwidth("HOANTAT")/2,y+10,"HOANTAT");
	
		settextstyle(0,0,2);
}
void clickchuyenbay(int vitri,chuyenbay &cb){
	
		setfillstyle(1,RED);
        bar(300,130+(vitri-1)%10*30,1350,160+(vitri-1)%10*30);
        rectangle(300,130+(vitri-1)%10*30,1350,160+(vitri-1)%10*30);
        setbkcolor(RED);
        taodongdscb (vitri,300,130+(vitri-1)%10*30,1350,160+(vitri-1)%10*30,cb);
        setfillstyle(1,DARKGRAY);
    	bar(451,571,800,610);
		bar(951,571,1300,610);
		bar(471,631,975,670);
		bar(1151,631,1300,670);
		bar(461,691,515,730);       // NGAY
		bar(611,691,665,730);		//THANG
		bar(731,691,830,730);
		bar(941,691,995,730);
		bar(1021,691,1075,730);
		setbkcolor(DARKGRAY);
		settextstyle(0,0,2);
    	outtextxy(455,580,cb.MaCB);
    	outtextxy(955,580,cb.SohieuMB);
    	outtextxy(475,640,cb.Sanbayden);

    	if(cb.trangthai == 0)
    	     outtextxy(1225-textwidth("HUYCHUYEN")/2,640,"HUYCHUYEN");
	    else if(cb.trangthai == 1)
    	     outtextxy(1225-textwidth("CONVE")/2,640,"CONVE");
    	 else if(cb.trangthai == 2)
    	     outtextxy(1225-textwidth("HETVE")/2,640,"HETVE"); 
	    else 
    	     outtextxy(1225-textwidth("HOANTAT")/2,640,"HOANTAT"); 
		
		outtextxy(465,700,toChars(cb.mytime.ngay));
        
		outtextxy(615,700,toChars(cb.mytime.thang));
	
		outtextxy(735,700,toChars(cb.mytime.nam));
		outtextxy(945,700,toChars(cb.mytime.gio));
		outtextxy(1025,700,toChars(cb.mytime.phut));
}

void unclickchuyenbay(int vitri,chuyenbay &cb){
	
		setfillstyle(1,WHITE);
        bar(300,130+(vitri-1)%10*30,1350,160+(vitri-1)%10*30);
        rectangle(300,130+(vitri-1)%10*30,1350,160+(vitri-1)%10*30);
        setbkcolor(WHITE);
        taodongdscb (vitri,300,130+(vitri-1)%10*30,1350,160+(vitri-1)%10*30,cb);
        setfillstyle(1,DARKGRAY);
    	bar(451,571,800,610);
		bar(951,571,1300,610);
		bar(471,631,975,670);
		bar(1151,631,1300,670);
		bar(461,691,515,730);       // NGAY
		bar(611,691,665,730);		//THANG
		bar(731,691,830,730);
		bar(941,691,995,730);
		bar(1021,691,1075,730);
}

void manhinhchuyenbay(nodeCB *&First,danhsachmaybay &dsmb,unsigned short int **mapID ,int &idnext ){

    vekhungdscb(mapID);
    vekhungnhaplieucb(mapID);
    chuyenbay cb;
    resetcb(cb);
    int namhientai=cb.mytime.nam;
   	bool dangnhaplieu= false;
	nodeCB **dautrang= new nodeCB*[0];
	nodeCB *nodechay ;
	int tranghientai=0;
	int trangcuoi = 0;
	int slcb=0;
	settextstyle(0, 0, 2);
	if( dsCBEmpty(First) ){
		 outtextxy(825-strlen("! DANH SACH TRONG !")*4,135,"! DANH SACH TRONG !");
			taoButton(0,775,510,875,540,mapID,BLACK,BLACK,GRAY,"HuyCB");
			taoButton(0,900,510,1000,540,mapID,BLACK,BLACK,GRAY,"Sua");
	}
	else{
		tranghientai=1;
		slcb=0;
		for(nodechay = First; nodechay != NULL; nodechay = nodechay -> CBnext ){
				slcb++;
				if(slcb <=10){
					taodongdscb(slcb,300,100+slcb*30,1350,130+slcb*30,nodechay->data);
		     		setID(1000+slcb,300,100+slcb*30,1350,130+slcb*30,mapID);
				}
				if (slcb % 10 ==1){	
					trangcuoi++;
					dautrang[trangcuoi] = new nodeCB;
				   dautrang[trangcuoi]= nodechay;
					}
			}
		if(slcb > 10){	
			taoButton(NEXT_PAGECB,1200,450,1300,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT>");
		}
		else
		  taoButton(0,1200,450,1300,480,mapID,BLACK,BLACK,GRAY,"NEXT>");
		taoButton(0,350,450,450,480,mapID,BLACK,BLACK,GRAY,"<BACK");
		
	    if(! dangnhaplieu){
	    	settextstyle(0,0,2);
			cb=First->data;
			clickchuyenbay(1,First->data);
		}		
		}	
	    bool kt=0;
	    char s[50];
	    int vitri=1;
    	int x,y;
    	int id;
    	char locmacb[MAXLENGHT_MACB+1],locngay[3],locthang[3],locnam[5],locdiemden[MAXLENGHT_SANBAYDEN+1];
    	locmacb[0]='\0';
    	locngay[0]='\0';
    	locthang[0]='\0';
    	locnam[0]='\0';
    	locdiemden[0]='\0';
    	nodechay=dautrang[1];
    	char chartemp;
    	
	while(true){
		
		  id=0;
		if(ismouseclick(WM_LBUTTONDOWN)){
			getmouseclick(WM_LBUTTONDOWN, x, y);
			id = mapID[y][x];
			clearmouseclick(WM_LBUTTONDOWN);
		}
cocb:		switch(id){
	        case NEXT_PAGECB:   // Next Trang
				tranghientai++;
	        	setfillstyle(1,WHITE);
				bar(300,130,1350,430);
				rectangle(300,130,1350,430);
	        	nodechay= dautrang[tranghientai];
	        	setbkcolor(WHITE);
		     	for(int i=1; nodechay != NULL && i<=10 ; ){
			       if((strlen(locmacb)==0 || strcmp(locmacb,nodechay->data.MaCB)==0)&&(strlen(locngay)==0 || ChangeCharToNum(locngay)==nodechay->data.mytime.ngay)
					  && (strlen(locthang)==0 || ChangeCharToNum(locthang)==nodechay->data.mytime.thang) && (strlen(locnam)==0 || ChangeCharToNum(locnam)==nodechay->data.mytime.nam) 
					  && (strlen(locdiemden)==0 || strcmp(locdiemden,nodechay->data.Sanbayden)==0)){
							check_hoantat(nodechay,dsmb);
				     		taodongdscb(i+(tranghientai-1)*10,300,100+i*30,1350,130+i*30,nodechay->data);
			     		   i++;
				  	 }
	     			nodechay=nodechay->CBnext;
		         }
		         Save_file_MB(dsmb);
		         Save_file_chuyen_bay(First);
		        if(tranghientai< trangcuoi )
					taoButton(NEXT_PAGECB,1200,450,1300,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT>");
				else{
						taoButton(0,1200,450,1300,480,mapID,BLACK,BLACK,GRAY,"NEXT>");
						if(slcb % 10 != 0)
					     	setID(0,300,130+(slcb % 10)*30,1350,430,mapID);
				   } 
				taoButton(BACK_PAGECB,350,450,450,480,mapID,BLACK,BLACK,LIGHTGREEN,"<BACK");
					
				if(! dangnhaplieu){
					cb=dautrang[tranghientai]->data;
					vitri=1;
					clickchuyenbay(vitri+(tranghientai-1)*10,cb);	
				}
				
				break;
				
			case BACK_PAGECB:   // Back Trang
				tranghientai--;
	        	nodechay= dautrang[tranghientai];
	        	setfillstyle(1,WHITE);
				bar(300,130,1350,430);
				rectangle(300,130,1350,430);
				setbkcolor(WHITE);
		     	for(int i=1; nodechay != NULL && i<=10 ; ){
			     if((strlen(locmacb)==0 || strcmp(locmacb,nodechay->data.MaCB)==0)&&(strlen(locngay)==0 || ChangeCharToNum(locngay)==nodechay->data.mytime.ngay)
					  && (strlen(locthang)==0 || ChangeCharToNum(locthang)==nodechay->data.mytime.thang) && (strlen(locnam)==0 || ChangeCharToNum(locnam)==nodechay->data.mytime.nam) 
					  && (strlen(locdiemden)==0 || strcmp(locdiemden,nodechay->data.Sanbayden)==0)){
					  		check_hoantat(nodechay,dsmb);
						taodongdscb(i+(tranghientai-1)*10,300,100+i*30,1350,130+i*30,nodechay->data);
			     		setID(1000+i,300,100+i*30,1350,130+i*30,mapID);
			     		i++;
					}
					 nodechay=nodechay->CBnext;
		         }
		          Save_file_MB(dsmb);
		         Save_file_chuyen_bay(First);
		        if(tranghientai != 1 )
				     	taoButton(BACK_PAGECB,350,450,450,480,mapID,BLACK,BLACK,LIGHTGREEN,"<BACK");
					
				else 	taoButton(0,350,450,450,480,mapID,BLACK,BLACK,GRAY,"<BACK");
					taoButton(NEXT_PAGECB,1200,450,1300,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT>");
					
				if(! dangnhaplieu){
					cb=dautrang[tranghientai]->data;
					vitri=1;
					clickchuyenbay(vitri+(tranghientai-1)*10,cb);
				}
				break;
				
			case LOC_MACB:   // Loc theo Ma CB
				if(! dangnhaplieu){
					settextstyle(8, 0, 0);
					setusercharsize(1,2,1,2);
					Input(405,72,INHOA_VIETLIEN,locmacb,MAXLENGHT_MACB,id,mapID,kt);
					id=LOC;
					goto cocb;
			    }
				break;
				
		   case LOC_NGAY:	// Loc theo Ngay
		   		if(! dangnhaplieu){
				   		settextstyle(8, 0, 0);
						setusercharsize(1,2,1,2);
					   do{
					   	id=LOC_NGAY;
					   	Input(702,72,NUMBER,locngay,2,id,mapID,kt	);
						if(ChangeCharToNum(locngay)>31 || ChangeCharToNum(locngay) <= 0 && strlen(locngay) !=0)	
						MessageBox(NULL,"Ngay Khong Hop Le!! \n 1 <= Ngay <= 31 !","THONG BAO",MB_ICONWARNING|MB_OK); 
					
					   }
						 while(ChangeCharToNum(locngay)>31 || ChangeCharToNum(locngay)<=0 && strlen(locngay) !=0);
						 id=LOC;
						 goto cocb;
			    }
				 break;
				 
			case LOC_THANG:    //Loc Theo Thang
				if(! dangnhaplieu){	
						settextstyle(8, 0, 0);
						setusercharsize(1,2,1,2);
					   do{
					   	id=LOC_THANG;
					   	Input(752,72,NUMBER,locthang,2,id,mapID,kt	);
					   
						if(ChangeCharToNum(locthang)>12 || ChangeCharToNum(locthang)<=0 && strlen(locthang) !=0)	
						
						MessageBox(NULL,"Thang Khong Hop Le \n 1 <= Thang <= 12  !","THONG BAO",MB_ICONWARNING|MB_OK); 
					   }
						 while(ChangeCharToNum(locthang)>12 || ChangeCharToNum(locthang)<=0 && strlen(locthang) !=0);
						 id=LOC;
						 goto cocb;
				}
				 break;
				 
		    case LOC_NAM:   // Loc Theo nam
		    	if(! dangnhaplieu){
						settextstyle(8, 0, 0);
						setusercharsize(1,2,1,2);	
					   do{
					   	id=LOC_NAM;
					   	Input(802,72,NUMBER,locnam,4,id,mapID,kt	);
					   	if(ChangeCharToNum(locnam)>2200 || ChangeCharToNum(locnam)<2010  && strlen(locnam) != 0)	
						MessageBox(NULL,"Nam Khong Hop Le !","THONG BAO",MB_ICONWARNING|MB_OK); 
					   }
						 while(ChangeCharToNum(locnam)>2200 || ChangeCharToNum(locnam)<2010  && strlen(locnam) != 0);	
						 id=LOC;
						 goto cocb;
				}
				 break;
				 
			case LOC_DIEMDEN:    // Loc theo Diem Den
				if(! dangnhaplieu){
					settextstyle(8, 0, 0);
					setusercharsize(1,2,1,2);
					Input(1048,72,INHOA_VIETLIEN,locdiemden,MAXLENGHT_SANBAYDEN,id,mapID,kt);
					id=LOC;
					goto cocb;
				}
				break;
				
			case LOC:    // Thuc Hien Loc
				slcb=0;
				tranghientai=1;
				trangcuoi=0;
				setfillstyle(1,WHITE);
				bar(300,130,1350,430);
				rectangle(300,130,1350,430);
				setID(0,300,130,1350,430,mapID);
				setbkcolor(WHITE);
			   	 for(nodechay = First; nodechay != NULL; nodechay = nodechay -> CBnext ){
			   	  if((strlen(locmacb)==0 || strcmp(locmacb,nodechay->data.MaCB)==0)&&(strlen(locngay)==0 || ChangeCharToNum(locngay)==nodechay->data.mytime.ngay)
					  && (strlen(locthang)==0 || ChangeCharToNum(locthang)==nodechay->data.mytime.thang) && (strlen(locnam)==0 || ChangeCharToNum(locnam)==nodechay->data.mytime.nam) 
					  && (strlen(locdiemden)==0 || strcmp(locdiemden,nodechay->data.Sanbayden)==0))
					{
						slcb++;
						if(slcb <= 10){
							check_hoantat(nodechay,dsmb);
							taodongdscb(slcb,300,100+slcb*30,1350,130+slcb*30,nodechay->data);
					    	setID(1000+slcb,300,100+slcb*30,1350,130+slcb*30,mapID);
						}
						if (slcb % 10 ==1){	
					   trangcuoi++;
					   dautrang[trangcuoi]= nodechay;
					   }
					}
					
						}
				 	Save_file_MB(dsmb);
		         	Save_file_chuyen_bay(First);
					settextstyle(0,0,2);
					if(slcb > 10){
							taoButton(NEXT_PAGECB,1200,450,1300,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT>");
					}
					else{
							taoButton(0,1200,450,1300,480,mapID,BLACK,BLACK,GRAY,"NEXT>");
					}
						taoButton(0,350,450,450,480,mapID,BLACK,BLACK,GRAY,"<BACK");
		        if(!dangnhaplieu){
		        			if(slcb> 0){		
						    	taoButton(CANCEL_CB,775,510,875,540,mapID,BLACK,BLACK,LIGHTGREEN,"HuyCB");
								taoButton(EDIT_CB,900,510,1000,540,mapID,BLACK,BLACK,LIGHTGREEN,"Sua");	
								cb=dautrang[tranghientai]->data;
								vitri=1;
								clickchuyenbay(vitri,cb);
									}
							else{
								   
									outtextxy(825-strlen("! Khong co du lieu phu hop !")*8,135,"! Khong co du lieu phu hop !");
									taoButton(0,775,510,875,540,mapID,BLACK,BLACK,GRAY,"HuyCB");
									taoButton(0,900,510,1000,540,mapID,BLACK,BLACK,GRAY,"Sua");
									setfillstyle(1,DARKGRAY);
						        	bar(451,571,800,610);
									bar(951,571,1300,610);
									bar(471,631,900,670);
									bar(1151,631,1300,670);
									bar(461,691,515,730);       // NGAY
									bar(611,691,665,730);		//THANG
									bar(730,690,830,730);
									bar(940,690,995,730);
									bar(1021,691,1075,730);
								}	
				}
				
					break;
	     	
	 		case ADD_CB:  // Tao Chuyen Bay Moi
			 		dangnhaplieu= true;
	 		    	
	        	 if(slcb > 0 ){
					unclickchuyenbay(vitri+(tranghientai-1)*10,cb);
				}
				 resetcb(cb);
	        	 s[0]='\0';
	           	 resetthanhchucnang(mapID);
	           	 taoButton(LUU_ADDCB,730,510,800,540,mapID,BLACK,BLACK,LIGHTGREEN,"LUU");
	           	 taoButton(HUY_TTCB,850,510,920,540,mapID,BLACK,BLACK,LIGHTGREEN,"HUY");
	           	 
			    taoEditText(MACB,450,570,800,610,mapID,BLACK,WHITE);  // MACB
			   
			    taoEditText(SHMB,950,570,1230,610,mapID,BLACK,WHITE);//SHMB
				taoButton(FIND,1230,570,1300,610,mapID,BLACK,BLACK,LIGHTGREEN,"FIND");
			    taoEditText(DIEMDEN,470,630,975,670,mapID,BLACK,WHITE); //DEIMDEN
		        setbkcolor(DARKGRAY);
				outtextxy(1225-textwidth("CONVE")/2,640,"CONVE");
				taoEditText(NGAY,460,690,515,730,mapID,BLACK,WHITE);	//NGAY
			
				taoEditText(THANG,610,690,665,730,mapID,BLACK,WHITE); //THANG
			
				taoEditText(NAM,730,690,830,730,mapID,BLACK,WHITE); //NAM
			
				taoEditText(GIO,940,690,995,730,mapID,BLACK,WHITE);  //GIO
				taoEditText(PHUT,1020,690,1075,730,mapID,BLACK,WHITE); //PHUT
				setbkcolor(WHITE);
				
				outtextxy(465,700,toChars(cb.mytime.ngay));

				outtextxy(615,700,toChars(cb.mytime.thang));
			
				outtextxy(735,700,toChars(cb.mytime.nam));
				outtextxy(945,700,toChars(cb.mytime.gio));
				outtextxy(1025,700,toChars(cb.mytime.phut));
				locmacb[0]='\0';
		    	locngay[0]='\0';
		    	locthang[0]='\0';
		    	locnam[0]='\0';
		    	locdiemden[0]='\0';
		    	setfillstyle(1,WHITE);
				bar(401,71,560,90);
		    	bar(701,71,730,90);
				bar(751,71,780,90);
				bar(801,71,850,90);
		    	bar(1046,71,1330,90);
		    	id=120;
		    	goto cocb;
                break;
	      	case MACB://  Nhap Ma Chuyen Bay
	      	 	do{
			   	id=MACB;
			   	Input(455,580,INHOA_VIETLIEN,cb.MaCB,MAXLENGHT_MACB,id,mapID,kt);
			   	if(id==HUY_TTCB)
			   	break;
				if(timcb_MACB(First,cb.MaCB) != NULL)
				  		MessageBox(NULL,"Ma CB Da Ton Tai \n Vui Long Nhap Lai !","THONG BAO",MB_ICONWARNING|MB_OK); 
			    }
				 while(timcb_MACB(First,cb.MaCB) != NULL);
				 if(kt==1) goto cocb;
				 //break;
		  	
	     	case SHMB:      // Nhap So Hieu May Bay
	     	    do{
			   	id=SHMB;
				Input(955,580,INHOA_VIETLIEN,cb.SohieuMB,MAXLENGHT_SHMB,id,mapID,kt);
			   	if(id == HUY_TTCB || id==FIND) 
				   break;
				vitri= timkiem_mb(dsmb,cb.SohieuMB);
				  if( vitri == -1){
				  		MessageBox(NULL,"May Bay Khong Ton Tai !","THONG BAO",MB_ICONWARNING|MB_OK); 
				  }
			    }
				 while(vitri == -1);
				if(kt==1) goto cocb;
				break;
			case FIND:  // Find SHMB trong Danh Sach May Bay
				resetkhungds(mapID);
				setbkcolor(WHITE);
				outtextxy(825-textwidth("CHON MAY BAY THUC HIEN CHUYEN BAY")/2,50,"CHON MAY BAY THUC HIEN CHUYEN BAY");
				manhinhmaybay(First,dsmb,mapID,vitri,1);
				strcpy(cb.SohieuMB,dsmb.data[vitri]->sohieumaybay);
				setfillstyle(1,WHITE);
				bar(951,571,1230,610);//SHMB
				setbkcolor(WHITE);
				setcolor(BLACK);
				outtextxy(955,580,cb.SohieuMB);
				resetkhungds(mapID);
				vekhungdscb(mapID);
		    	id=LOC;
		    	goto cocb;
				break;
				
			case DIEMDEN:   // Nhap San Bay Den
				Input(475,640,INHOA_VIETLIEN,cb.Sanbayden,MAXLENGHT_SANBAYDEN,id,mapID,kt);
				 if(kt==1) goto cocb;
				 break;
				 
			case NGAY:    // Nhap Ngay Khoi Hanh
				strcpy(s,toChars(cb.mytime.ngay));	
			   do{
			   	id=NGAY;
			   	Input(465,700,NUMBER,s,2,id,mapID,kt	);
			   	if(id == HUY_TTCB) 
				   break;
				cb.mytime.ngay = ChangeCharToNum(s)	;
				if(cb.mytime.ngay>31 || cb.mytime.ngay<=0 || strlen(s)==0)	
				MessageBox(NULL,"Ngay Khong Hop Le \n 1<= Ngay <= 31 !","THONG BAO",MB_ICONWARNING|MB_OK); 
			   }
				 while(cb.mytime.ngay>31 || cb.mytime.ngay<=0 ||strlen(s)==0);
				 s[0]='\0';
				 if(kt==1) goto cocb;
				 //break;
				 
			case THANG:  // Nhap Thang Khoi Hanh
				strcpy(s,toChars(cb.mytime.thang));
			   do{
			   	id=THANG;
			   	Input(615,700,NUMBER,s,2,id,mapID,kt	);
			   	if(id == HUY_TTCB) 
				   break;
				cb.mytime.thang = ChangeCharToNum(s)	;
				if(cb.mytime.thang>12 || cb.mytime.thang<1)	
				MessageBox(NULL,"Thang Khong Hop Le \n 1<= Thang <= 12 !","THONG BAO",MB_ICONWARNING|MB_OK); 
			   }
				 while(cb.mytime.thang>12 || cb.mytime.thang<1);
				 s[0]='\0';
				 if(kt==1) goto cocb;
				 //break;
				 
			case NAM:   // Nhap Nam Khoi Hanh
				strcpy(s,toChars(cb.mytime.nam));
			   do{
			   	id=NAM;
			   	Input(735,700,NUMBER,s,4,id,mapID,kt	);
			   	if(id == HUY_TTCB) 
				   break;
				cb.mytime.nam = ChangeCharToNum(s)	;
				if(cb.mytime.nam > namhientai+2 || cb.mytime.nam < namhientai)	
				MessageBox(NULL,"Phan mem chi quan li chuyen bay trong vong 2 nam toi\n Vui long nhap lai nam!","THONG BAO",MB_ICONWARNING|MB_OK); 
			   }
				 while(cb.mytime.nam > namhientai+2 || cb.mytime.nam < namhientai);
			
				 s[0]='\0';
				 if(kt==1) goto cocb;
				 //break;
				 
			case GIO:   // Nhap Gio Khoi Hanh
				strcpy(s,toChars(cb.mytime.gio));
				
			   do{
			   	id=GIO;
			   	Input(945,700,NUMBER,s,2,id,mapID,kt	);
			   	if(id == HUY_TTCB) 
				   break;
				cb.mytime.gio = ChangeCharToNum(s)	;
				if(cb.mytime.gio > 23 || cb.mytime.gio<0)	
				MessageBox(NULL,"Gio Khong Hop Le \n 0<= Gio <= 23 !","THONG BAO",MB_ICONWARNING|MB_OK); 
			   }
				 while(cb.mytime.gio > 23 || cb.mytime.gio < 0);
				 s[0]='\0';
				 if(kt==1) goto cocb;
				 //break;
				 
			case PHUT: 	// Nhap Phut Khoi Hanh
				
				strcpy(s,toChars(cb.mytime.phut));
				
			   do{
			   	id=PHUT;
			   	Input(1025,700,NUMBER,s,2,id,mapID,kt);
			   if(id == HUY_TTCB) 
				   break;
				cb.mytime.phut = ChangeCharToNum(s)	;
				if(cb.mytime.phut > 59 || cb.mytime.phut < 0)	
				MessageBox(NULL,"Phut Khong Hop Le \n 0<= Phut <= 59 !","THONG BAO",MB_ICONWARNING|MB_OK); 
			   }
				 while(cb.mytime.phut > 59 || cb.mytime.phut < 0);
				 s[0]='\0';
				 if(kt==1) goto cocb;
				 break;
		
			case LUU_ADDCB:    // Luu Chuyen Bay Moi
			
//					if( ThoiGianCamThemCB(cb.mytime)){    //Chuyen Bay Moi Co It Nhat 5H De Dat Ve Cbi Bay
//					  		MessageBox(NULL,"Chuyen Bay Moi Phai Co Thoi Gian Cat Canh Sau Thoi Gian Hien Tai It Nhat 5H !","THONG BAO",MB_ICONWARNING);
//					 	}
//				else 
					if(checkcb(cb) && Check_MB_SanSangBay(First,cb) ) {   //Check_MB_SanSangBay - May Bay Duoc Su Dung Khong Co Lich Bay trong vong 3 Tieng
						  
					      	dangnhaplieu=false;
							khoitaodsve_trangthai(dsmb,cb);
							add_cb_vaods(First,cb);
							Save_file_chuyen_bay(First);
							MessageBox(NULL,"Chuyen Bay Da Duoc Them Thanh Cong !!!","THONG BAO",MB_ICONINFORMATION|MB_OK); 
							resetthanhchucnang(mapID);
							taoButton(ADD_CB,650,510,750,540,mapID,BLACK,BLACK,LIGHTGREEN,"Them");
							taoButton(CANCEL_CB,775,510,875,540,mapID,BLACK,BLACK,LIGHTGREEN,"HuyCB");
							taoButton(EDIT_CB,900,510,1000,540,mapID,BLACK,BLACK,LIGHTGREEN,"Sua");
							
						    taoEditText(0,450,570,800,610,mapID,BLACK,DARKGRAY);
						
						    taoEditText(0,950,570,1300,610,mapID,BLACK,DARKGRAY);
						    
						    taoEditText(0,470,630,975,670,mapID,BLACK,DARKGRAY); 
						    
						    taoLable(1150,630,1300,670,BLACK,BLACK,DARKGRAY,"");
						    
							taoEditText(0,460,690,515,730,mapID,BLACK,DARKGRAY);	
						
							taoEditText(0,610,690,665,730,mapID,BLACK,DARKGRAY); 
						
							taoEditText(0,730,690,830,730,mapID,BLACK,DARKGRAY);
						
							taoEditText(0,940,690,995,730,mapID,BLACK,DARKGRAY);
							taoEditText(0,1020,690,1075,730,mapID,BLACK,DARKGRAY);
			
							slcb++;
							 if((slcb % 10   == 1)) {
								trangcuoi++;
						        dautrang[trangcuoi] = new nodeCB;
								dautrang[trangcuoi]=timcb_MACB(First, cb.MaCB);
								if(slcb == 1){
									tranghientai=1;
								}
							  	if(trangcuoi-tranghientai ==1 )
						         	taoButton(NEXT_PAGECB,1200,450,1300,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT>");
						   }
						  if(tranghientai==trangcuoi ){
						
								vitri=slcb%10;
								if(vitri == 0)
								   vitri=10;
						       taodongdscb (vitri+(tranghientai-1)*10,300,100+vitri*30,1350,130+vitri*30,cb);
						       setID(1000+vitri,300,100+vitri*30,1350,130+vitri*30,mapID);
							  clickchuyenbay(vitri+(tranghientai-1)*10,cb);	
							}
						else{
							cb=dautrang[tranghientai]->data;
							vitri=(tranghientai-1)*10+1;
							clickchuyenbay(vitri,cb);	
						}	
					
				}
				break;
				
			case HUY_TTCB:   // Huy Them CHuyen Bay Moi
				dangnhaplieu= false;
				resetthanhchucnang(mapID);
				taoButton(ADD_CB,650,510,750,540,mapID,BLACK,BLACK,LIGHTGREEN,"Them");
				if( ! dsCBEmpty(First) ){
					taoButton(CANCEL_CB,775,510,875,540,mapID,BLACK,BLACK,LIGHTGREEN,"HuyCB");
					taoButton(EDIT_CB,900,510,1000,540,mapID,BLACK,BLACK,LIGHTGREEN,"Sua");
				}
				else{
					taoButton(0,775,510,875,540,mapID,BLACK,BLACK,GRAY,"HuyCB");
					taoButton(0,900,510,1000,540,mapID,BLACK,BLACK,GRAY,"Sua");
				}
				
				taoEditText(0,450,570,800,610,mapID,BLACK,DARKGRAY);
			    taoEditText(0,950,570,1300,610,mapID,BLACK,DARKGRAY);
			    
			    taoEditText(0,470,630,975,670,mapID,BLACK,DARKGRAY); 
			    
			    taoLable(1150,630,1300,670,BLACK,BLACK,DARKGRAY,"");
			    
				taoEditText(0,460,690,515,730,mapID,BLACK,DARKGRAY);	
			
				taoEditText(0,610,690,665,730,mapID,BLACK,DARKGRAY); 
			
				taoEditText(0,730,690,830,730,mapID,BLACK,DARKGRAY);
			
				taoEditText(0,940,690,995,730,mapID,BLACK,DARKGRAY);
				taoEditText(0,1020,690,1075,730,mapID,BLACK,DARKGRAY);
				if( ! dsCBEmpty(First)){
					cb=dautrang[tranghientai]->data;
					vitri=(tranghientai-1)*10+1;
					clickchuyenbay(vitri,cb);
			     }
			  	break;
		
			case CANCEL_CB:     // Huy Chuyen
			    nodechay = timcb_MACB(First,cb.MaCB);
				check_hoantat(nodechay,dsmb);
				Save_file_MB(dsmb);
	         	Save_file_chuyen_bay(First);	
	         	if(nodechay->data.trangthai == CONVE || nodechay->data.trangthai == HETVE){
					if(MessageBox(NULL,"\n           [XAC NHAN HUY CHUYEN] !           \n ","THONG BAO",MB_ICONWARNING|MB_OKCANCEL) == IDOK ){	
					  	if( huychuyen(nodechay)){
							  		Save_file_chuyen_bay(First);
							  		cb.trangthai=HUYCHUYEN;
							  		setbkcolor(RED);
				                    taodongdscb(vitri+(tranghientai-1)*10,300,100+vitri*30,1350,130+vitri*30,cb);
							 }
			  			}
			  		}
			   else	{
					  	MessageBox(NULL,"\n    Chuyen Bay Khong Con Hoat Dong \n     Khong The Huy Chuyen Bay Nay !     \n ","THONG BAO",MB_ICONERROR); 
					  	setbkcolor(RED);
					  	taodongdscb(vitri+(tranghientai-1)*10,300,100+vitri*30,1350,130+vitri*30,nodechay->data);
					  }
				break;
			
	        case EDIT_CB:     // Hieu Chinh Ngay Gio
					
	        	if(cb.trangthai == HOANTAT || cb.trangthai == HUYCHUYEN){
	        			MessageBox(NULL,"Khong The Hieu Chinh Ngay Gio  !!!","THONG BAO",MB_ICONINFORMATION); 		
				}
				else{
					dangnhaplieu= true;
					resetthanhchucnang(mapID);
			    	taoButton(LUU_EDITCB,730,510,800,540,mapID,BLACK,BLACK,LIGHTGREEN,"LUU");
		           	taoButton(HUY_EDITCB,850,510,920,540,mapID,BLACK,BLACK,LIGHTGREEN,"HUY");
					taoEditText(NGAY,460,690,515,730,mapID,BLACK,WHITE);	//NGAY
					taoEditText(THANG,610,690,665,730,mapID,BLACK,WHITE); //THANG
				
					taoEditText(NAM,730,690,830,730,mapID,BLACK,WHITE); //NAM
				
					taoEditText(GIO,940,690,995,730,mapID,BLACK,WHITE);  //GIO
					taoEditText(PHUT,1020,690,1075,730,mapID,BLACK,WHITE); //PHUT
					setbkcolor(WHITE);
					
					outtextxy(465,700,toChars(cb.mytime.ngay));
	
					outtextxy(615,700,toChars(cb.mytime.thang));
				
					outtextxy(735,700,toChars(cb.mytime.nam));
					outtextxy(945,700,toChars(cb.mytime.gio));
					outtextxy(1025,700,toChars(cb.mytime.phut));
				}
				break;
				
			case LUU_EDITCB:   // Luu Hieu CHinh Ngay Gio
						
					nodechay = timcb_MACB(First,cb.MaCB);
					check_hoantat(nodechay,dsmb);
					if(nodechay->data.trangthai == CONVE || nodechay->data.trangthai == HETVE){
						if(Check_MB_SanSangBay(First,cb) ){
							if( hieuchinhngayh(nodechay,cb.mytime)){
								dangnhaplieu= false;
								Save_file_chuyen_bay(First);
								MessageBox(NULL,"\n   [Thanh Cong]   \n ","THONG BAO",MB_ICONINFORMATION); 
								setbkcolor(RED);
			                    taodongdscb(vitri+(tranghientai-1)*10,300,100+vitri*30,1350,130+vitri*30,cb);
			                    resetthanhchucnang(mapID);
								taoButton(ADD_CB,650,510,750,540,mapID,BLACK,BLACK,LIGHTGREEN,"Them");
								taoButton(CANCEL_CB,775,510,875,540,mapID,BLACK,BLACK,LIGHTGREEN,"HuyCB");
								taoButton(EDIT_CB,900,510,1000,540,mapID,BLACK,BLACK,LIGHTGREEN,"Sua");
								taoEditText(0,460,690,515,730,mapID,BLACK,DARKGRAY);	//NGAY
								taoEditText(0,610,690,665,730,mapID,BLACK,DARKGRAY); //THANG
								taoEditText(0,730,690,830,730,mapID,BLACK,DARKGRAY); //NAM
								taoEditText(0,940,690,995,730,mapID,BLACK,DARKGRAY);  //GIO
								taoEditText(0,1020,690,1075,730,mapID,BLACK,DARKGRAY); //PHUT
								clickchuyenbay(vitri+(tranghientai-1)*10,cb);
							}
							else
								MessageBox(NULL,"Ngay Gio Khong Hop Le !!!","THONG BAO",MB_ICONWARNING); 
				        }
				   }
				else{
				    	Save_file_MB(dsmb);
			         	Save_file_chuyen_bay(First);
			         	MessageBox(NULL,"Chuyen Bay Khong Con Hoat Dong The Hieu CHinh!!!","THONG BAO",MB_ICONWARNING);
			         	id=HUY_EDITCB;
			         	goto cocb;
					} 
				
			 break;
			 
			case HUY_EDITCB:   // Huy Hieu Chinh Ngay H
				dangnhaplieu= false;
				cb=nodechay->data;
				resetthanhchucnang(mapID);
				taoButton(ADD_CB,650,510,750,540,mapID,BLACK,BLACK,LIGHTGREEN,"Them");
				taoButton(CANCEL_CB,775,510,875,540,mapID,BLACK,BLACK,LIGHTGREEN,"HuyCB");
				taoButton(EDIT_CB,900,510,1000,540,mapID,BLACK,BLACK,LIGHTGREEN,"Sua");
				taoEditText(0,460,690,515,730,mapID,BLACK,DARKGRAY);	//NGAY
				taoEditText(0,610,690,665,730,mapID,BLACK,DARKGRAY); //THANG
				taoEditText(0,730,690,830,730,mapID,BLACK,DARKGRAY); //NAM
				taoEditText(0,940,690,995,730,mapID,BLACK,DARKGRAY);  //GIO
				taoEditText(0,1020,690,1075,730,mapID,BLACK,DARKGRAY); //PHUT
				clickchuyenbay(vitri+(tranghientai-1)*10,cb);
				break;
					  
		case 1001:case  1002 :case 1003: case 1004 :case 1005: case 1006 :case 1007: case 1008: case 1009:case 1010:  // id cac dong trong danh sach
			if(! dangnhaplieu){
				unclickchuyenbay(vitri+(tranghientai-1)*10,cb);
			
				vitri=(id-1000);
				nodechay=dautrang[tranghientai];
				for(int i=1;  i < vitri ; ){	
				 nodechay=nodechay->CBnext;
				    if((strlen(locmacb)==0 || strcmp(locmacb,nodechay->data.MaCB)==0) &&  (strlen(locngay)==0 || ChangeCharToNum(locngay)==nodechay->data.mytime.ngay)
						  && (strlen(locthang)==0 || ChangeCharToNum(locthang)==nodechay->data.mytime.thang) && (strlen(locnam)==0 || ChangeCharToNum(locnam)==nodechay->data.mytime.nam) 
						  && (strlen(locdiemden)==0 || strcmp(locdiemden,nodechay->data.Sanbayden)==0))
				     		i++;
			         }
				cb=nodechay->data;
				clickchuyenbay(vitri+(tranghientai-1)*10,cb);
			 }
		
			break;
		 case ID_MAYBAY:case ID_VE:case ID_THONGKE:case ID_EXIT:  // Id menu
		 	idnext=id;
		     if(dangnhaplieu){
		     		if( MessageBox(NULL,"\n  Du Lieu Vua Nhap Chua Duoc Luu \n     Ban co muon thoat khong ??? ","THONG BAO",MB_ICONWARNING|MB_OKCANCEL) == IDOK)
	        					delete []dautrang;
								return;
			            }	
				else{
					delete []dautrang;
					return;
				}
	        			
	        	
			break;	
		default:
			 if (kbhit()){    // Bat Phim Khi Chua CLick Vao EdiitText
				chartemp=getch();
				break;
				}
		 }
	delay(100);
	}	
}

void vekhungve(unsigned short int ** mapID){
	settextstyle(10,0,3);
	setbkcolor(WHITE);
	outtextxy(825-textwidth("DANH SACH CHUYEN BAY CON VE")/2,20,"DANH SACH CHUYEN BAY CON VE");
	settextstyle(0,0,2);
	setcolor(BLACK);
		// LOC
	taoLable(310,70,390,90,BLACK,BLACK,GRAY,"MaCB");
	taoEditText(LOC_MACB,390,70,550,90,mapID,BLACK,WHITE);
	
	taoLable(580,70,650,90,BLACK,BLACK,GRAY,"DATE");
	taoEditText(LOC_NGAY,650,70,680,90,mapID,BLACK,WHITE);
	taoEditText(LOC_THANG,700,70,730,90,mapID,BLACK,WHITE);
	taoEditText(LOC_NAM,750,70,800,90,mapID,BLACK,WHITE);
	setbkcolor(WHITE);
	outtextxy(682,70,"/");
	outtextxy(732,70,"/");
	
	taoLable(830,70,950,90,BLACK,BLACK,GRAY,"DiemDen");
	taoEditText(LOC_DIEMDEN,950,70,1235,90,mapID,BLACK,WHITE);
	
	taoButton(BUTTON_CONVE,1255,70,1340,90,mapID,BLACK,BLACK,LIGHTGREEN,"ConVe");
	
	setbkcolor(BLACK);
	rectangle(300,500,1350,750);
	line(300,550,1350,550);
    // THANH CONG CU
	taoButton(DATVE,480,510,580,540,mapID,BLACK,BLACK,LIGHTGREEN,"Dat Ve");
	taoButton(HUYVE,605,510,705,540,mapID,BLACK,BLACK,LIGHTGREEN,"Huy Ve");
	taoButton(SUA_TTIN,730,510,880,540,mapID,BLACK,BLACK,LIGHTGREEN,"Sua T.Tin");
	taoButton(DS_HANHKHACH,905,510,1105,540,mapID,BLACK,BLACK,LIGHTGREEN,"DS HanhKhach");
	
	
	taoLable(350,570,425,610,BLACK,BLACK,GRAY,"MaCB");
    taoEditText(0,425,570,800,610,mapID,BLACK,DARKGRAY);
    
    taoLable(850,570,940,610,BLACK,BLACK,GRAY,"CMND");
    taoEditText(0,940,570,1300,610,mapID,BLACK,DARKGRAY);
    taoLable(350,630,450,670,BLACK,BLACK,GRAY,"Ho Ten");
    taoEditText(0,450,630,940,670,mapID,BLACK,DARKGRAY);
        
    taoLable(990,630,1050,670,BLACK,BLACK,GRAY,"Ten");
    taoEditText(0,1050,630,1300,670,mapID,BLACK,DARKGRAY);
    
   	taoLable(350,690,450,730,BLACK,BLACK,GRAY,"Phai");
	taoButton(0,450,690,510,730,mapID,BLACK,BLACK,DARKGRAY,"Nam");
	taoButton(0,510,690,560,730,mapID,BLACK,BLACK,DARKGRAY,"Nu"); 
		
	taoLable(660,690,760,730,BLACK,BLACK,GRAY,"So Ghe");
	taoEditText(0,760,690,860,730,mapID,BLACK,DARKGRAY);

	// ve bang
	setbkcolor(WHITE);
    rectangle(300,100,1350,430);
	line(300,130,1350,130);
	line(300+5*8 ,100,300+5*8,130);
	line(300+35*8,100,300+35*8,130);
	line(300+65*8,100,300+65*8,130);
	line(300+85*8,100,300+85*8,130);
	line(300+120*8,100,300+120*8,130);

	settextstyle(8, 0, 0);
	setusercharsize(1,2,1,2);
	outtextxy(300+5*4-strlen("STT")*4,110,"STT");
	outtextxy(300+20*8-strlen("MaCB")*4,110,"MaCB");
	outtextxy(300+50*8-strlen("SoHieuMB")*4,110,"SoHieuMB");
	outtextxy(300+75*8-strlen("ThoiGian")*4,110,"ThoiGian");
	outtextxy(300+102*8-strlen("DiemDen")*4,110,"DiemDen");
	outtextxy(300+125*8-strlen("VeTrong")*4,110,"VeTrong");
 
}

void taodongdscb_in_ve(int stt, int x, int y,int x1,int y1,chuyenbay &cb){
	setcolor(BLACK);
	settextstyle(8, 0, 0);
	setusercharsize(1,2,1,2);
    line(x,y1,x1,y1);
	line(x+5*8 ,y,300+5*8,y1);
	line(300+35*8,y,300+35*8,y1);
	line(300+65*8,y,300+65*8,y1);
	line(300+85*8,y,300+85*8,y1);
	line(300+120*8,y,300+120*8,y1);
	
	outtextxy(300+5*4-textwidth(toChars(stt))/2,y+10,toChars(stt));
	outtextxy(300+20*8-textwidth(cb.MaCB)/2,y+10,cb.MaCB);
	outtextxy(300+50*8-textwidth(cb.SohieuMB)/2,y+10,cb.SohieuMB);
	outtextxy(300+75*8-textwidth(tocharDate(cb.mytime))/2,y+10,tocharDate(cb.mytime));
	outtextxy(300+102.5*8-textwidth(cb.Sanbayden)/2,y+10,cb.Sanbayden);
	if(cb.trangthai == HUYCHUYEN)	    
		 outtextxy(300+125.5*8-textwidth("HUYCHUYEN")/2,y+10,"HUYCHUYEN");
    else if(cb.trangthai == CONVE)
	    
	      outtextxy(300+125.5*8-textwidth(toChars(sovechuaban(cb)))/2,y+10,toChars(sovechuaban(cb)));
	 else if(cb.trangthai == HETVE)
	     
	      outtextxy(300+125.5*8-textwidth("HETVE")/2,y+10,"HETVE");
	     
    else 
	      outtextxy(300+125.5*8-textwidth("HOANTAT")/2,y+10,"HOANTAT");

	settextstyle(0,0,2);
}

void clickcb(int vitri,chuyenbay &cb){
		setfillstyle(1,RED);
	    bar(300,130+(vitri-1)%10*30,1350,160+(vitri-1)%10*30);
	    rectangle(300,130+(vitri-1)%10*30,1350,160+(vitri-1)%10*30);
	    setbkcolor(RED);
	    taodongdscb_in_ve(vitri,300,130+(vitri-1)%10*30,1350,160+(vitri-1)%10*30,cb);
	    setbkcolor(DARKGRAY);
	    outtextxy(430,580,cb.MaCB);	            
}

void unclickcb(int vitri,chuyenbay &cb){
		setfillstyle(1,WHITE);
        bar(300,130+(vitri-1)%10*30,1350,160+(vitri-1)%10*30);
        rectangle(300,130+(vitri-1)%10*30,1350,160+(vitri-1)%10*30);
        setbkcolor(WHITE);
       taodongdscb_in_ve(vitri,300,130+(vitri-1)%10*30,1350,160+(vitri-1)%10*30,cb);
       taoLable(425,570,800,610,BLACK,BLACK,DARKGRAY," ");
}
	       
void clickghe(int soghe,int soday,int kichthuoc,int cantrai,unsigned short int **mapID){
	 settextstyle(8, 0, 0);
	 setusercharsize(1,3,1,2);
	 taoButton(2000+soghe,350+cantrai+((soghe-1)/soday)*(kichthuoc+5),75+(soghe-1)%soday*(kichthuoc+5),350+cantrai+((soghe-1)/soday)*(kichthuoc+5)+kichthuoc,75+(soghe-1)%soday*(kichthuoc+5)+kichthuoc,mapID,BLACK,BLACK,RED,toChars(soghe));
     settextstyle(0, 0, 2);  
}
    
void unclickghe(int soghe,int soday,int kichthuoc,int cantrai,unsigned short int **mapID,bool isdatve){
	
	int maunen;
	 settextstyle(8, 0, 0);
	setusercharsize(1,3,1,2);
	
	if(isdatve) maunen=LIGHTBLUE;
	else maunen= GRAY;
    taoButton(2000+soghe,350+cantrai+((soghe-1)/soday)*(kichthuoc+5),75+(soghe-1)%soday*(kichthuoc+5),350+cantrai+((soghe-1)/soday)*(kichthuoc+5)+kichthuoc,75+(soghe-1)%soday*(kichthuoc+5)+kichthuoc,mapID,BLACK,BLACK,maunen,toChars(soghe));
     settextstyle(0, 0, 2);  

}
    
void sodove(chuyenbay &cb,unsigned short int **mapID,int &soghe,int &soday,int &kichthuoc,int &cantrai,bool isdatve){

	setcolor(BLACK);
	setbkcolor(WHITE);
	char s[200]="";
    settextstyle(10,0,3);
	setbkcolor(WHITE);
	s[0]='\0';
	strcpy(s,"SO DO VE CHUYEN BAY ");
	strcat(s,cb.MaCB);
    outtextxy(250+(1350-250)/2- textwidth(s)/2,0,s);
    s[0]='\0';
    settextstyle(10,0,2);
    strcpy(s,"KHOI HANH:");
    strcat(s,tocharDate(cb.mytime));
    strcat(s," SAN BAY DEN:");
    strcat(s,cb.Sanbayden);
    outtextxy(250+(1350-250)/2- textwidth(s)/2,30,s);
	
	ellipse(400,250,90,-90,140,200);
	line(400,50,1300,50);
	line(400,450,1300,450);
	line(350,65,350,435);
	ellipse(1300,250,-90,90,50,200);
	setfillstyle(1,LIGHTBLUE);
	bar(655,465,675,485);
	setfillstyle(1,GRAY);
	bar(870,465,890,485);
	settextstyle(10,0,2);
	setbkcolor(WHITE);
	outtextxy(825,465,"|");
	outtextxy(675,465," GheTrong");
	outtextxy(890,465," DaDat");
	
	int sl=cb.sove;
	int left=350;
	int right=1300;
	int top=70;
	int button=430;
	int dientich=(right- left)*(button-top);
    soday = ceil((button-top)/(floor(sqrt(dientich/sl)))) ;
    
 	kichthuoc =floor((button-top)/(soday))-5;
	
	 cantrai=((right- left) -( ceil(sl*1.0/soday)) *(kichthuoc)-(ceil(sl*1.0/soday)-1)*5)/2; 
	
    int chiso=1;
	setfillstyle(1,2);
	settextstyle(8, 0, 0);
	setusercharsize(1,3,1,2);
	for(int i=left+cantrai;i< right ;i=i+kichthuoc+5){
	  for(int j=1;j<=soday;j++)
	  {
	  	if(strcmp(cb.dsve[chiso],"0") == 0)
	  		taoButton((2000+chiso)*isdatve,i,top+5+(j-1)*(kichthuoc+5),i+kichthuoc,top+5+(j-1)*(kichthuoc+5)+kichthuoc,mapID,BLACK,BLACK,LIGHTBLUE,toChars(chiso));
	  		
		else
			taoButton((2000+chiso)*(!isdatve),i,top+5+(j-1)*(kichthuoc+5),i+kichthuoc,top+5+(j-1)*(kichthuoc+5)+kichthuoc,mapID,BLACK,BLACK,GRAY,toChars(chiso));
			
		if(chiso==sl) {
			settextstyle(0, 0, 2);	
			return;
		 }
		 chiso++;
	   } 
	}
	  
}

void taodongdshk(int stt, int x, int y,int x1,int y1,int soghe,hanhkhach &hk){
	char s[100]="";
	settextstyle(8, 0, 0);
	setusercharsize(1,2,1,2);
    line(x,y1,x1,y1);
	
	line(x+5*8 ,y,x+5*8,y1);
	line(x+22*8,y,x+22*8,y1);
	line(x+55*8,y,x+55*8,y1);
	line(x+110*8,y,x+110*8,y1);

	outtextxy(x+5*4-strlen(toChars(stt))*4,y+10,toChars(stt));
	outtextxy(x+13.5*8-strlen(toChars(soghe))*4,y+10,toChars(soghe)); // so ghe
	outtextxy(x+38*8-strlen(hk.cmnd)*4,y+10,hk.cmnd); // cmnd
	strcat(s,hk.ho);
	strcat(s," ");
	strcat(s,hk.ten);
	outtextxy(x+82.5*8-strlen(s)*4,y+10,s); // ho + ten
	outtextxy(x+114*8-strlen(hk.phai)*4,y+10,hk.phai);// phai
	settextstyle(0,0,2);
}

void dsHKthuocCB(nodeCB *nodecb,node *root,unsigned short int ** mapID){

		char s[200]="";
	    settextstyle(10,0,3);
		setbkcolor(WHITE);
		s[0]='\0';
		strcpy(s,"DANH SACH KHACH HANG THUOC CHUYEN BAY ");
		strcat(s,nodecb->data.MaCB);
        outtextxy(250+(1350-250)/2- textwidth(s)/2,10,s);
        s[0]='\0';
        settextstyle(10,0,2);
        strcpy(s,"NGAY GIO KHOI HANH: ");
        strcat(s,tocharDate(nodecb->data.mytime));
        strcat(s,". NOI DEN: ");
        strcat(s,nodecb->data.Sanbayden);
        outtextxy(250+(1350-250)/2- textwidth(s)/2,40,s);
        taoButton(THOATDSHK,1300,10,1350,50,mapID,BLACK,BLACK,WHITE,"X");
        setbkcolor(WHITE);
	    rectangle(350,100,1300,730);
		line(350,130,1300,130);
		line(350+5*8 ,100,350+5*8,130);
		line(350+22*8,100,350+22*8,130);
		line(350+55*8,100,350+55*8,130);
		line(350+110*8,100,350+110*8,130);
		settextstyle(8, 0, 0);
		setusercharsize(1,2,1,2);
		outtextxy(350+2.5*8-strlen("STT")*4,110,"STT");
		outtextxy(350+13.5*8-strlen("So Ghe")*4,110,"So Ghe");
		outtextxy(350+38*8-strlen("So CMND/CCCD")*4,110,"So CMND/CCCD"); 
		outtextxy(350+82.5*8-strlen("Ho & Ten")*4,110,"Ho & Ten");
		outtextxy(350+114*8-strlen("Phai")*4,110,"Phai");
		int tranghientai=0;
		int trangcuoi=ceil((nodecb->data.sove - sovechuaban(nodecb->data))/20.0);
		int vitri;
		if(trangcuoi == 0){
		        outtextxy(825-strlen("! DANH SACH TRONG !")*4,135,"! DANH SACH TRONG !");
		}
		else{ 
	         tranghientai=1;
	         vitri=1;
			for(int i=1; vitri<=20 && i<= nodecb->data.sove;i++)
				  if(strcmp(nodecb->data.dsve[i], "0") != 0){
				  	  taodongdshk(vitri,350,100+vitri*30,1300,130+vitri*30,i,timkiem_HK(root,nodecb->data.dsve[i])->data);
				  	  vitri++;
				  	
				  }
				s[0]='\0';
				strcat(s,toChars(tranghientai));
				strcat(s,"/");
				strcat(s,toChars(trangcuoi));
				
				outtextxy(825-strlen(s)*6,75,s);
				if(tranghientai<trangcuoi)
			     	taoButton(NEXT,875,70,900,90,mapID,BLACK,BLACK,LIGHTGREEN,">");
			    else
			       	taoButton(0,875,70,900,90,mapID,BLACK,BLACK,GRAY,">");
				 taoButton(0,750,70,775,90,mapID,BLACK,BLACK,GRAY,"<");
				
			}
	 int id;
	 int x,y;
	
	while(true){

			 id=0;
			if(ismouseclick(WM_LBUTTONDOWN)){
				getmouseclick(WM_LBUTTONDOWN, x, y);
				id = mapID[y][x];
				clearmouseclick(WM_LBUTTONDOWN);
			}
	switch(id){
		case NEXT:    // Next
			tranghientai++;
			setfillstyle(1,WHITE);
			bar(350,130,1300,730);
			rectangle(350,130,1300,730);
             vitri=1;
             setbkcolor(WHITE);
			for(int i=1; vitri <= tranghientai *20 && i<= nodecb->data.sove;i++)
			   {
			   		if(strcmp(nodecb->data.dsve[i], "0") != 0){
			   			  if(vitri > (tranghientai-1)*20){
			   			  	  taodongdshk(vitri,350,130+(vitri-1)%20*30,1300,160+(vitri-1)%20*30,i,timkiem_HK(root,nodecb->data.dsve[i])->data);
				          	}
				    vitri++;
				  } 	
				}
				s[0]='\0';
				strcat(s,toChars(tranghientai));
				strcat(s,"/");
				strcat(s,toChars(trangcuoi));
				outtextxy(825-strlen(s)*6,75,s);
				if(tranghientai<trangcuoi)
			     	taoButton(NEXT,875,70,900,90,mapID,BLACK,BLACK,LIGHTGREEN,">");
			    else
			       	taoButton(0,875,70,900,90,mapID,BLACK,BLACK,GRAY,">");
				 taoButton(BACK,750,70,775,90,mapID,BLACK,BLACK,LIGHTGREEN,"<");
				break;
				
			case BACK:   // Back
				tranghientai--;
				setfillstyle(1,WHITE);
				bar(350,130,1300,730);
				rectangle(350,130,1300,730);
	             vitri=1;
	             setbkcolor(WHITE);
				for(int i=1; vitri <= tranghientai *20 && i<= nodecb->data.sove;i++)
				   {
				   		if(strcmp(nodecb->data.dsve[i], "0") != 0){
				   			  if(vitri > (tranghientai-1)*20){
				   			  	  taodongdshk(vitri,350,130+(vitri-1)%20*30,1300,160+(vitri-1)%20*30,i,timkiem_HK(root,nodecb->data.dsve[i])->data);
					          	}
					    vitri++;
					  } 	
					}
					s[0]='\0';
					strcat(s,toChars(tranghientai));
					strcat(s,"/");
					strcat(s,toChars(trangcuoi));
					outtextxy(825-strlen(s)*6,75,s);
					if(tranghientai != 1 )
						taoButton(BACK,750,70,775,90,mapID,BLACK,BLACK,LIGHTGREEN,"<");
				    else
				       	taoButton(0,750,70,775,90,mapID,BLACK,BLACK,GRAY,"<");
				       	taoButton(NEXT,875,70,900,90,mapID,BLACK,BLACK,LIGHTGREEN,">");
				    break;
			case THOATDSHK:    // Thoat
			    return; 
			    
					}
	delay(100);
	}
}

void manhinhve(node *&root,nodeCB *&First,danhsachmaybay &dsmb,unsigned short int **mapID,int &idnext){
	
		nodeCB *nodechay ;
		nodeCB *nodecb;
		int tranghientai;
		int trangcuoi = 0;
		int vitri=0;
		int slcb=0;
		char cm[50]="";
    	node *nodehk = NULL;
    	hanhkhach hk;
	    bool kt=0;
	    char s[50];
	    int vt=0;
    	int x,y;
    	char locmacb[MAXLENGHT_MACB+1],locngay[3],locthang[3],locnam[5],locdiemden[MAXLENGHT_SANBAYDEN];
    	bool conve=true;
    	int soday;
    	int kichthuoc;
    	int cantrai;
    	int inttmp;
		int id;
    	bool trangthai;
    	bool dangnhaplieu=false;
    	char chartemp;
		for(nodechay = First; nodechay != NULL; nodechay = nodechay -> CBnext )	
					slcb++;
		trangcuoi=ceil(slcb/10.0);
		nodeCB **dautrang= new nodeCB *[trangcuoi];
MHChonCB:	
		resetMH(mapID);
		vekhungve(mapID);
		cm[0]='\0';
		nodecb=NULL;
    	nodehk = NULL;
    	resethk(hk);
	    kt=false;
	    s[0]='\0';
	    vt=0;
    	locmacb[0]='\0';
		locngay[0]='\0';
    	locthang[0]='\0';
    	locnam[0]='\0';
    	locdiemden[0]='\0';
    	conve=true;
    	dangnhaplieu=false;	
		slcb=0;
		tranghientai=1;
		trangcuoi=0;
		for(nodechay = First; nodechay != NULL; nodechay = nodechay -> CBnext ){
			 if( nodechay->data.trangthai==CONVE){	
				slcb++;
				if(slcb<= 10){
					taodongdscb_in_ve(slcb,300,100+slcb*30,1350,130+slcb*30,nodechay->data);
		     		setID(1000+slcb,300,100+slcb*30,1350,130+slcb*30,mapID);
				}
				if (slcb % 10 ==1){	
				   trangcuoi++;
				   dautrang[trangcuoi]= nodechay;
					}
				}
			}
		settextstyle(0,0,2);
		if(slcb > 10)
				taoButton(NEXT_PAGECB,1200,450,1300,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT>");
		else
			taoButton(0,1200,450,1300,480,mapID,BLACK,BLACK,GRAY,"NEXT>");
			taoButton(0,350,450,450,480,mapID,BLACK,BLACK,GRAY,"<BACK");
		
		if(slcb >0){
			
			nodecb=dautrang[tranghientai];
	         vitri=1;
			clickcb(vitri,nodecb->data);
		}
		else{
			    setbkcolor(WHITE);
			 	outtextxy(825-textwidth("! KHONG CO CHUYEN BAY NAO CON VE !")/2,135,"! KHONG CO CHUYEN BAY NAO CON VE !");
			 	taoButton(0,480,510,580,540,mapID,BLACK,BLACK,GRAY,"Dat Ve");
				taoButton(0,605,510,705,540,mapID,BLACK,BLACK,GRAY,"Huy Ve");
				taoButton(0,730,510,880,540,mapID,BLACK,BLACK,GRAY,"Sua T.Tin");
				taoButton(0,905,510,1105,540,mapID,BLACK,BLACK,GRAY,"DS HanhKhach");
		}
    	
	while(true){
		id =0;
		if(ismouseclick(WM_LBUTTONDOWN)){
			getmouseclick(WM_LBUTTONDOWN, x, y);
			id = mapID[y][x];
			clearmouseclick(WM_LBUTTONDOWN);
		} 
CLghe: if(id>2000){       // Id ghe trong so do
			if(vt!= 0){
				unclickghe(vt,soday,kichthuoc,cantrai,mapID,trangthai);
			}
			vt=id-2000;
			clickghe(vt,soday,kichthuoc,cantrai,mapID);
			
			if(strcmp(nodecb->data.dsve[vt] ,"0")  != 0){       // Huy Ve Hoac Sua TT VE
				nodehk=timkiem_HK(root,nodecb->data.dsve[vt]);
				if(dangnhaplieu){   // dang sua tt
				 	hk=nodehk->data;
				 	taoEditText(HODEM,450,630,940,670,mapID,BLACK,WHITE);
					taoEditText(TEN,1050,630,1300,670,mapID,BLACK,WHITE); // ten
					setfillstyle(1,DARKGRAY);
					bar(761,691,860,730);
					taoButton(PHAI_NAM,450,690,510,730,mapID,BLACK,BLACK,DARKGRAY,"Nam");
					taoButton(PHAI_NU,510,690,560,730,mapID,BLACK,BLACK,DARKGRAY,"Nu");
				 }
				 else{    // Huy Ve
				 	setfillstyle(1,DARKGRAY);
    				bar(451,631,940,670);  
    				bar(1051,631,1300,670);
				 }
				 taoEditText(0,940,570,1300,610,mapID,BLACK,DARKGRAY);   // reset ED CMND
				 setbkcolor(DARKGRAY);
			     outtextxy(945,580,nodehk->data.cmnd);
				 outtextxy(765,700,toChars(vt));
				 if(dangnhaplieu)
				 		setbkcolor(WHITE);
			     outtextxy(455,640,nodehk->data.ho);
			     outtextxy(1055,640,nodehk->data.ten);
		        
		       if(! dangnhaplieu){
		       	 setfillstyle(1,WHITE);
		        bar(451,690,561,731);
			   }
		        if(strcmp(nodehk->data.phai,"Nam")==0)
	   		         taoLable(450,690,510,730,BLACK,BLACK,LIGHTGREEN,"Nam");
				else
				     taoLable(510,690,560,730,BLACK,BLACK,LIGHTGREEN,"Nu");
			    }
			else{		// Chon Ghe Khi Dat Ve
				setfillstyle(1,WHITE);
				bar(761,691,860,730);	
				setbkcolor(WHITE);
			    outtextxy(765,700,toChars(vt));
			}
		
			
		}
		else
cove:		switch(id){
	        case NEXT_PAGECB:   // Next
				tranghientai++;
	        	setfillstyle(1,WHITE);
				bar(300,130,1350,430);
				rectangle(300,130,1350,430);
	        
	        	nodechay= dautrang[tranghientai];
	        	setbkcolor(WHITE);
		     	for(int i=1; nodechay != NULL && i<=10 ; ){
			       if((strlen(locmacb)==0 || strcmp(locmacb,nodechay->data.MaCB)==0)  &&  (strlen(locngay)==0 || ChangeCharToNum(locngay)==nodechay->data.mytime.ngay) 
				   && (strlen(locthang)==0 || ChangeCharToNum(locthang)==nodechay->data.mytime.thang) && (strlen(locnam)==0 || ChangeCharToNum(locnam)==nodechay->data.mytime.nam) 
				   && (strlen(locdiemden)==0 || strcmp(locdiemden,nodechay->data.Sanbayden)==0)&& ((nodechay->data.trangthai==CONVE && conve== true) || (!conve)  )){
		     		taodongdscb_in_ve(i+(tranghientai-1)*10,300,100+i*30,1350,130+i*30,nodechay->data);
	     		    i++;
				   }
				   
	     		nodechay=nodechay->CBnext;
		         }
		        if(tranghientai< trangcuoi )
					taoButton(NEXT_PAGECB,1200,450,1300,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT>");
				else{
					taoButton(0,1200,450,1300,480,mapID,BLACK,BLACK,GRAY,"NEXT>");
					if(slcb % 10 != 0)
						setID(0,300,130+(slcb % 10)*30,1350,430,mapID);
				} 
				taoButton(BACK_PAGECB,350,450,450,480,mapID,BLACK,BLACK,LIGHTGREEN,"<BACK");
				nodecb=dautrang[tranghientai];
				vitri=1;
				clickcb(vitri+(tranghientai-1)*10,nodecb->data);	
				break;
			case BACK_PAGECB:    // Back
					tranghientai--;
	        	nodechay= dautrang[tranghientai];
	        	setfillstyle(1,WHITE);
				bar(300,130,1350,430);
				rectangle(300,130,1350,430);
				setbkcolor(WHITE);
		     	for(int i=1; nodechay != NULL && i<=10 ; ){
			       if((strlen(locmacb)==0 || strcmp(locmacb,nodechay->data.MaCB)==0)  &&  (strlen(locngay)==0 || ChangeCharToNum(locngay)==nodechay->data.mytime.ngay) 
				   && (strlen(locthang)==0 || ChangeCharToNum(locthang)==nodechay->data.mytime.thang) && (strlen(locnam)==0 || ChangeCharToNum(locnam)==nodechay->data.mytime.nam) 
				   && (strlen(locdiemden)==0 || strcmp(locdiemden,nodechay->data.Sanbayden)==0)&& ((nodechay->data.trangthai==CONVE && conve== true) || (!conve) )){
						taodongdscb_in_ve(i,300,100+i*30,1350,130+i*30,nodechay->data);
			     		setID(1000+i,300,100+i*30,1350,130+i*30,mapID);
			     		i++;
					}
					 nodechay=nodechay->CBnext;
		         }
		        if(tranghientai != 1 )
				    	taoButton(BACK_PAGECB,350,450,450,480,mapID,BLACK,BLACK,LIGHTGREEN,"<BACK");
					
				else
					 	taoButton(0,350,450,450,480,mapID,BLACK,BLACK,GRAY,"<BACK");
				taoButton(NEXT_PAGECB,1200,450,1300,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT>");
				
				nodecb=dautrang[tranghientai];
				vitri=1;
				clickcb(vitri+(tranghientai-1)*10,nodecb->data);
				break;
			case LOC_MACB:   // loc theo Ma chuyen Bay
					settextstyle(8, 0, 0);
					setusercharsize(1,2,1,2);
					Input(395,72,INHOA_VIETLIEN,locmacb,MAXLENGHT_MACB,id,mapID,kt);
					id=LOC;
					goto cove;
			    
				break;
		   case LOC_NGAY:	 // Loc Theo Ngay
				settextstyle(8, 0, 0);
				setusercharsize(1,2,1,2);
			   do{
			   	id=LOC_NGAY;
			   	Input(652,72,NUMBER,locngay,2,id,mapID,kt	);
				if(ChangeCharToNum(locngay)>31 || ChangeCharToNum(locngay)<= 0 && strlen(locngay) !=0)	
				MessageBox(NULL,"Ngay Khong Hop Le !","THONG BAO",MB_ICONWARNING|MB_OK); 
			   }
				 while(ChangeCharToNum(locngay)>31 || ChangeCharToNum(locngay)<=0 && strlen(locngay) !=0);
				 id=LOC;
				 goto cove;
				 break;
				 
			case LOC_THANG:  // Loc theo Thang
				settextstyle(8, 0, 0);
				setusercharsize(1,2,1,2);	
			   do{
			   	id=LOC_THANG;
			   	Input(702,72,NUMBER,locthang,2,id,mapID,kt	);
			   
				if(ChangeCharToNum(locthang)>12 || ChangeCharToNum(locthang)<=0 && strlen(locthang) !=0)	
				
				MessageBox(NULL,"Thang Khong Hop Le !","THONG BAO",MB_ICONWARNING|MB_OK); 
			   }
				 while(ChangeCharToNum(locthang)>12 || ChangeCharToNum(locthang)<=0 && strlen(locthang) !=0);
				  id=LOC;
				 goto cove;
				 break;
				 
		    case LOC_NAM:	  // Loc theo Nam
		    	settextstyle(8, 0, 0);
				setusercharsize(1,2,1,2);
			   do{
			   	id=LOC_NAM;
			   	Input(752,72,NUMBER,locnam,4,id,mapID,kt	);
			   	if(ChangeCharToNum(locnam)>2200 || ChangeCharToNum(locnam)<2010  && strlen(locnam) != 0)	
				MessageBox(NULL,"Nam Khong Hop Le !","THONG BAO",MB_ICONWARNING|MB_OK); 
			   }
				 while(ChangeCharToNum(locnam)>2200 || ChangeCharToNum(locnam)< 2010  && strlen(locnam) != 0);	
				 id=LOC;
				 goto cove;
				 break;
				 
			case LOC_DIEMDEN:   // Loc Theo San Bay Den
				settextstyle(8, 0, 0);
				setusercharsize(1,2,1,2);
				Input(955,72,INHOA_VIETLIEN,locdiemden,MAXLENGHT_SANBAYDEN,id,mapID,kt);
				id=LOC;
				goto cove;
				break;
				
			case BUTTON_CONVE:   // Loc Theo Con Ve 
				conve = !conve;
				if(conve){
					taoLable(1255,70,1340,90,BLACK,BLACK,LIGHTGREEN,"ConVe");
						settextstyle(10,0,3);
						setbkcolor(WHITE);
						outtextxy(825-textwidth("     DANH SACH CHUYEN BAY CON VE     ")/2,20,"     DANH SACH CHUYEN BAY CON VE     ");
						settextstyle(0,0,2);
						
				}
				else{
					taoLable(1255,70,1340,90,BLACK,BLACK,GRAY,"ConVe");
					settextstyle(10,0,3);
					setbkcolor(WHITE);
					outtextxy(825-textwidth("DANH SACH TAT CA CAC CHUYEN BAY")/2,20,"DANH SACH TAT CA CAC CHUYEN BAY");
					settextstyle(0,0,2);
				}
				 id=LOC;
				 goto cove;
				break;
				
			case LOC:   // Thuc Hien Loc
				slcb=0;
				tranghientai=1;
				trangcuoi=0;
				setfillstyle(1,WHITE);
				bar(300,130,1350,430);
				rectangle(300,130,1350,430);
				setID(0,300,130,1350,430,mapID);
				
			   	 for(nodechay = First; nodechay != NULL; nodechay = nodechay -> CBnext ){
			   	    if((strlen(locmacb)==0 || strcmp(locmacb,nodechay->data.MaCB)==0)  &&  (strlen(locngay)==0 || ChangeCharToNum(locngay)==nodechay->data.mytime.ngay) 
				   && (strlen(locthang)==0 || ChangeCharToNum(locthang)==nodechay->data.mytime.thang) && (strlen(locnam)==0 || ChangeCharToNum(locnam)==nodechay->data.mytime.nam) 
				   && (strlen(locdiemden)==0 || strcmp(locdiemden,nodechay->data.Sanbayden)==0)&& ((nodechay->data.trangthai==CONVE && conve== true) || (!conve) )){
						slcb++;
						if(slcb <= 10){
						setbkcolor(WHITE);
							taodongdscb_in_ve(slcb,300,100+slcb*30,1350,130+slcb*30,nodechay->data);
					    	setID(1000+slcb,300,100+slcb*30,1350,130+slcb*30,mapID);
						}
						if (slcb % 10 ==1){	
					   trangcuoi++;
					   dautrang[trangcuoi]= nodechay;
					   }
					}
					
						}
					settextstyle(0,0,2);
					if(slcb > 10)
						taoButton(NEXT_PAGECB,1200,450,1300,480,mapID,BLACK,BLACK,LIGHTGREEN,"NEXT>");
					else{
						taoButton(0,1200,450,1300,480,mapID,BLACK,BLACK,GRAY,"NEXT>");
					}
					
					taoButton(0,350,450,450,480,mapID,BLACK,BLACK,GRAY,"<BACK");
		      
				if(slcb> 0){		
				    taoButton(DATVE,480,510,580,540,mapID,BLACK,BLACK,LIGHTGREEN,"Dat Ve");
					taoButton(HUYVE,605,510,705,540,mapID,BLACK,BLACK,LIGHTGREEN,"Huy Ve");
					taoButton(SUA_TTIN,730,510,880,540,mapID,BLACK,BLACK,LIGHTGREEN,"Sua T.Tin");
					taoButton(DS_HANHKHACH,905,510,1105,540,mapID,BLACK,BLACK,LIGHTGREEN,"DS HanhKhach");
					nodecb=dautrang[tranghientai];
					vitri=1;
					clickcb(vitri,nodecb->data);
						}
				else{
					    setbkcolor(WHITE);
						outtextxy(825-strlen("! Khong co du lieu phu hop !")*8,135,"! Khong co du lieu phu hop !");
						nodecb=NULL;
						taoButton(0,480,510,580,540,mapID,BLACK,BLACK,GRAY,"Dat Ve");
						taoButton(0,605,510,705,540,mapID,BLACK,BLACK,GRAY,"Huy Ve");
						taoButton(0,730,510,880,540,mapID,BLACK,BLACK,GRAY,"Sua T.Tin");
						taoButton(0,905,510,1105,540,mapID,BLACK,BLACK,GRAY,"DS HanhKhach");
						setfillstyle(1,DARKGRAY);
						bar(426,571,800,610);
				}
					break;
					
		case 1001:case  1002 :case 1003: case 1004 :case 1005: case 1006 :case 1007: case 1008: case 1009:case 1010:// id cac chuyen bay trong ds
		
			unclickcb(vitri+(tranghientai-1)*10,nodecb->data);
			
			vitri=(id-1000);
			nodechay=dautrang[tranghientai];
			for(int i=1;  i < vitri ; ){	
			 nodechay=nodechay->CBnext;
			     if((strlen(locmacb)==0 || strcmp(locmacb,nodechay->data.MaCB)==0)  &&  (strlen(locngay)==0 || ChangeCharToNum(locngay)==nodechay->data.mytime.ngay) 
				   && (strlen(locthang)==0 || ChangeCharToNum(locthang)==nodechay->data.mytime.thang) && (strlen(locnam)==0 || ChangeCharToNum(locnam)==nodechay->data.mytime.nam) 
				   && (strlen(locdiemden)==0 || strcmp(locdiemden,nodechay->data.Sanbayden)==0)&& ((nodechay->data.trangthai==CONVE && conve== true) || (!conve) ))
			     		i++;
		         }
			nodecb=nodechay;
			clickcb(vitri+(tranghientai-1)*10,nodecb->data);
		
			break;
	        	
			break;	
	    case DATVE:    // Dat Ve  
	        check_hoantat(nodecb,dsmb);
            Save_file_MB(dsmb);
		    Save_file_chuyen_bay(First);
	       	if(nodecb->data.trangthai == CONVE){
		       		if(TG_30p_TruocBay(nodecb->data.mytime)){
		        			MessageBox(NULL,"CHUYEN BAY SE CAT CANH TRONG VONG 30P KHONG THE DAT VE !","THONG BAO",MB_ICONWARNING|MB_OK);
				    }
				    else{
						    dangnhaplieu=true;
				       		nodehk=NULL;
				       		trangthai=true;
				        	resetthanhchucnang(mapID);
				        	 taoButton(LUU_DATVE,730,510,800,540,mapID,BLACK,BLACK,LIGHTGREEN,"LUU");
				           	 taoButton(HUY_TTVE,850,510,920,540,mapID,BLACK,BLACK,LIGHTGREEN,"HUY");
				           	taoEditText(ED_CMND,940,570,1300,610,mapID,BLACK,WHITE); // cmnd
						   	taoEditText(GHE,760,690,860,730,mapID,BLACK,WHITE); // ghe
							resetkhungds(mapID);
							sodove(nodecb->data,mapID,vitri,soday,kichthuoc,cantrai,trangthai);
						   	 s[0]='\0';
						   	resethk(hk);
						    vt = 0;
					}
				}
			else{
				   	MessageBox(NULL,"CHUYEN BAY DA HET VE HOAC KHONG CON HOAT DONG !","THONG BAO",MB_ICONWARNING|MB_OK);
				   	if(conve) goto MHChonCB;
				}
			break;
				
        case HUYVE:    //Huy Ve
            check_hoantat(nodecb,dsmb);
            Save_file_MB(dsmb);
		    Save_file_chuyen_bay(First);
    
		    if(nodecb->data.trangthai == CONVE ||nodecb->data.trangthai == HETVE){
		    	trangthai=0;
	        	resetkhungds(mapID);
				sodove(nodecb->data,mapID,vitri,soday,kichthuoc,cantrai,trangthai);
	           	 resetthanhchucnang(mapID);
	           	 taoButton(LUU_HUYVE,700,510,800,540,mapID,BLACK,BLACK,LIGHTGREEN,"HUY VE");
	           	 taoButton(HUY_TTVE,850,510,950,540,mapID,BLACK,BLACK,LIGHTGREEN,"THOAT");
	           }
			else{
				   	MessageBox(NULL,"CHUYEN BAY KHONG CON HOAT DONG !","THONG BAO",MB_ICONWARNING|MB_OK);
				   	if(conve) goto MHChonCB;
				}
				break;

		case LUU_HUYVE:   // Xac Dinh Huy Ve
		    if(vt!=0){
		    	if(MessageBox(NULL,"  \n   [XAC NHAN HUY VE]   \n ","THONG BAO",MB_ICONWARNING|MB_OKCANCEL) == IDOK){
		    		strcpy(nodecb->data.dsve[vt],"0");
		    		if(nodecb->data.trangthai== HETVE){
		    			nodecb->data.trangthai=CONVE;
					}
		    		Save_file_chuyen_bay(First);
				    goto MHChonCB;
				}
			}
			else MessageBox(NULL,"VUI LONG CHON VE CAN HUY !","THONG BAO",MB_ICONWARNING|MB_OK);
			break;
			
		case SUA_TTIN:	// SUa Thong Tin Ve Da Dat
			check_hoantat(nodecb,dsmb);
            Save_file_MB(dsmb);
		    Save_file_chuyen_bay(First);
			if(nodecb->data.trangthai == CONVE ||nodecb->data.trangthai == HETVE){
		    	trangthai=0;
	        	resetkhungds(mapID);
				sodove(nodecb->data,mapID,vitri,soday,kichthuoc,cantrai,trangthai);
  		        dangnhaplieu=true;
  		        resetthanhchucnang(mapID);
    	         taoButton(LUU_DATVE,730,510,800,540,mapID,BLACK,BLACK,LIGHTGREEN,"LUU");
       			 taoButton(HUY_TTVE,850,510,920,540,mapID,BLACK,BLACK,LIGHTGREEN,"HUY"); 
	           }
			else{
				   	MessageBox(NULL,"CHUYEN BAY KHONG CON HOAT DONG !","THONG BAO",MB_ICONWARNING|MB_OK);
					if(conve) goto MHChonCB;
				}
		  	
			break;
	
		case ED_CMND:    // Nhap CMND
		        nhapcm:
			        id=ED_CMND;
             	     Input(945,580,NUMBER,cm,MAXLENGHT_CMND,id,mapID,kt);
				     if(id == HUY_TTVE)
				        {
				            goto cove;
							break;
						}
				           
				     if((strlen(cm) != 9) && (strlen(cm) != 12)) {
						     MessageBox(NULL,"CMND/CCCD Khong Hop Le !","THONG BAO",MB_ICONWARNING|MB_OK);
						     goto nhapcm;
					       }
					for(int i=1 ; i<= nodecb->data.sove ; i++ ){
				          if(strcmp(nodecb->data.dsve[i], cm)==0){
				   		     MessageBox(NULL,"CMND/CCCD Da Dat Ve !","THONG BAO",MB_ICONWARNING|MB_OK);
				   		     goto nhapcm;
					       }    
				          }
				  	if(!Check_HK_SanSangBay(First,nodecb->data,cm))
				   	  goto nhapcm;
					        
				        taoEditText(HODEM,450,630,940,670,mapID,BLACK,WHITE);
    					taoEditText(TEN,1050,630,1300,670,mapID,BLACK,WHITE); // ten
						taoButton(PHAI_NAM,450,690,510,730,mapID,BLACK,BLACK,DARKGRAY,"Nam");
						taoButton(PHAI_NU,510,690,560,730,mapID,BLACK,BLACK,DARKGRAY,"Nu"); 
					    setbkcolor(WHITE);
					    strcpy(hk.cmnd,cm);
					    nodehk = timkiem_HK(root,cm);
					    if (nodehk != NULL)
					      { 
					        hk=nodehk->data;
					        outtextxy(455,640,nodehk->data.ho);
				   		    outtextxy(1055,640,nodehk->data.ten);
				   		    if(strcmp(nodehk->data.phai,"Nam")==0)
				   		         taoLable(450,690,510,730,BLACK,BLACK,LIGHTGREEN,"Nam");
							else
							     taoLable(510,690,560,730,BLACK,BLACK,LIGHTGREEN,"Nu");
					      }
					        
					 if(kt==1) goto cove;
				     break;	
				     
		case HODEM:    // Nhap Ho Va Ten Dem
		    	 Input(455,640,CHUTHUONG,hk.ho,MAXLENGHT_HOTENDEM,id,mapID,kt);
		    	 if(kt==1) goto cove;
		    	 break;
		    	 
		case TEN:	// Nhap Ten
		    	  Input(1055,640,CHUTHUONG,hk.ten,MAXLENGHT_TEN,id,mapID,kt);
		    	   if(kt==1) goto cove;
		    	 break;
		    	 
		case PHAI_NAM:   // Chon Gioi Tinh La Nam
		    	  taoLable(450,690,510,730,BLACK,BLACK,LIGHTGREEN,"Nam");
		    	  taoLable(510,690,560,730,BLACK,BLACK,DARKGRAY,"Nu");
		    	  strcpy(hk.phai,"Nam");
		    	  break;
		    	  
		case PHAI_NU:	// Chon Gioi Tinh La Nu
		    	  taoLable(450,690,510,730,BLACK,BLACK,DARKGRAY,"Nam");
		    	  taoLable(510,690,560,730,BLACK,BLACK,LIGHTGREEN,"Nu");
		    	  strcpy(hk.phai,"Nu");
		    	  break;
		    	  
		case GHE:   // Nhap Vi tri Ghe
				if(vt == 0)
					s[0]='\0';
	     		else
		         strcpy(s,toChars(vt));
		    soghe:	
			     id=GHE;
				 Input(765,700,NUMBER,s,MAXLENGHT_SOCHO,id,mapID,kt);
				 
				  inttmp = ChangeCharToNum(s); 
				  if(id == HUY_TTVE || id > 2000)    //  id so do ghe > 2000
				        {
				            goto CLghe;
							break;
						}
				 if( inttmp > nodecb->data.sove ||  inttmp <=0){
				 	MessageBox(NULL," So Ghe Khong hop le !","THONG BAO",MB_ICONWARNING|MB_OK);
				 	goto soghe;
				 }	
                 else if(strcmp(nodecb->data.dsve[inttmp], "0")!= 0){
                 	MessageBox(NULL," So Ghe Khong hop le !","THONG BAO",MB_ICONWARNING|MB_OK);
                 	goto soghe;
			  	 }
				  else{
				  	if(vt!=0)
				     unclickghe(vt,soday,kichthuoc,cantrai,mapID,trangthai);
				     vt=inttmp;
				  	 clickghe(vt,soday,kichthuoc,cantrai,mapID);
				  }
				    
				    if(kt==1) goto cove;
					break;
					
		case LUU_DATVE:  // Luu Thog Tin
            
			    if(checkve(nodecb->data,vt, hk) )
			        {
			        	dangnhaplieu=false;
			          if(nodehk == NULL){
			          	strcpy(nodecb->data.dsve[vt],cm) ;
						add_HK_to_list(root, hk);
					  	}
				  	        
				  	  else 
				  	  {
				  	  	strcpy(nodecb->data.dsve[vt],hk.cmnd) ;
				  	  	strcpy(nodehk->data.ho,hk.ho);
				  	  	strcpy(nodehk->data.ten,hk.ten);
				  	  	strcpy(nodehk->data.phai,hk.phai);
				  	  	
					  }
					Save_file_hanh_khach(root);
				    Save_file_chuyen_bay(First);
					MessageBox(NULL," \n  Thanh Cong !!!  \n","THONG BAO",MB_ICONINFORMATION); 
					if(checkfull(nodecb)){ 
					    MessageBox(NULL,"CHUYEN BAY DA HET VE !!!","THONG BAO",MB_ICONINFORMATION); 
					    Save_file_chuyen_bay(First);
					}
				    goto MHChonCB;
				 }
				     break ;
				     
		case HUY_TTVE:   // Huy Dat VeI
			dangnhaplieu=false;
			goto MHChonCB;
			break;
			
		case DS_HANHKHACH:  // Danh Sach Hanh Khach
			resetMH(mapID);
		    dsHKthuocCB(nodecb,root,mapID);
			goto MHChonCB;
		    break;
		    
		 case ID_MAYBAY:case ID_CHUYENBAY:case ID_THONGKE:case ID_EXIT:  // id menu
		 	idnext=id;
		     if(dangnhaplieu){
		     		if( MessageBox(NULL,"  Du Lieu Vua Nhap Chua Duoc Luu \n    Ban co muon thoat khong ??? ","THONG BAO",MB_ICONWARNING|MB_OKCANCEL) == IDOK)
	        					delete []dautrang;
								return;
			            }	
				else
						{
							delete []dautrang;
							return;
						}
			default:
				 if (kbhit()){    // Bat Phim Khi Chua CLick Vao EdiitText
					chartemp=getch();
				}
	        		
		 }
	delay(100);
	}	
}

void Swap(int &A, int &B){
	
	int temp;
	temp = A;
    A = B;
    B = temp;
}

void QuickSortTK(danhsachmaybay &dsmb,int A[], int q,int r){ 
	int temp;
    int i=q;
    int j=r;
    int x = dsmb.data[A[(q+r)/2]]->soChuyenDaBay; 
    do{ 
	      while (dsmb.data[A[i]]->soChuyenDaBay > x)  i++; 
	      while (dsmb.data[A[j]]->soChuyenDaBay < x)  j--; 
	      if (i<=j ){
	      	
	        Swap(A[i],A[j]);
		    i++ ;  j--;
		   }
	   
	} while (i<=j);
	
	  if (q<j) 	
		QuickSortTK(dsmb,A,q,j);
	  if (i<r)  
		QuickSortTK(dsmb,A,i,r);
			
}

void BubbleSort(danhsachmaybay &dsmb,int A[]){
	for(int i=0; i<dsmb.soluong-1;i++)    
		     for(int j=0; j<dsmb.soluong-i-1;j++)
			    if(dsmb.data[A[j]]->soChuyenDaBay < dsmb.data[A[j+1]]->soChuyenDaBay)
			        {
			        	Swap(A[j],A[j+1]);
					}
}

void taodongtkcb(int stt,int x,int y,int x1,int y1,maybay &mb){
	setbkcolor(WHITE);
    rectangle(x,y,x1,y1);
	line(x,y+30,x1,y+30);
	line(x+5*8 ,y,x+5*8,y+30);
	line(x+45*8,y,x+45*8,y+30);
	settextstyle(8, 0, 0);
	setusercharsize(1,2,1,2);
	outtextxy(x+5*4-textwidth(toChars(stt))/2,y+10,toChars(stt));
	outtextxy(x+51*4-textwidth(mb.sohieumaybay)/2,y+10,mb.sohieumaybay);
	outtextxy(x+45*8+(x1-x-45*8)/2-textwidth(toChars(mb.soChuyenDaBay))/2,y+10,toChars(mb.soChuyenDaBay));
}

void manhinhthongke(danhsachmaybay &dsmb,unsigned short int **mapID,int &idnext){
		int trai=550,tren=100,phai=1100,duoi=730;
		int tranghientai=1;
		int trangcuoi= ceil(dsmb.soluong/20.0);
		setcolor(BLACK);
		setfillstyle(1,WHITE);
		bar(250,0,1400,750);
	    setbkcolor(WHITE);	
		settextstyle(10,0,3);	
		outtextxy(250+(1400-250)/2- textwidth("THONG KE SO LUOT THUC HIEN CHUYEN BAY CUA TUNG MAY BAY")/2,15,"THONG KE SO LUOT THUC HIEN CHUYEN BAY CUA TUNG MAY BAY");
		settextstyle(10,0,2);
		outtextxy(250+(1400-250)/2- textwidth("THEO THU TU GIAM DAN")/2,40,"THEO THU TU GIAM DAN");
		settextstyle(0,0,2);        
	    rectangle(trai,tren,phai,duoi);
		line(trai,tren+30,phai,tren+30);
		line(trai+5*8 ,tren,trai+5*8,tren+30);
		line(trai+45*8,tren,trai+45*8,tren+30);
		settextstyle(8, 0, 0);
		setusercharsize(1,2,1,2);
		outtextxy(trai+5*4-textwidth("STT")/2,tren+10,"STT");
		outtextxy(trai+51*4-textwidth("So Hieu May Bay")/2,tren+10,"So Hieu May Bay");
		outtextxy(trai+45*8+(phai-trai-45*8)/2-textwidth("So Chuyen Da Bay")/2,tren+10,"So Chuyen Da Bay");
		
		int sortvitri[dsmb.soluong];
		for(int i=0; i<dsmb.soluong;i++)
		        sortvitri[i]=i;
		
		//QuickSortTK(dsmb,sortvitri,0,dsmb.soluong-1);
		BubbleSort(dsmb,sortvitri);
					
		for(int i=0; i<20 && i<dsmb.soluong ; i++){
			taodongtkcb(i+1,trai,130+i*30,phai,160+i*30,*dsmb.data[sortvitri[i]]);
		}
		
	  	settextstyle(10,0,2);
		outtextxy(825-textwidth("/")/2-textwidth(toChars(tranghientai)),70,toChars(tranghientai));
		outtextxy(825-textwidth("/")/2,70,"/");
		outtextxy(825+textwidth("/")/2,70,toChars(trangcuoi));
		
		if(tranghientai < trangcuoi)
	     	taoButton(NEXT_PAGETK,875,70,900,95,mapID,BLACK,BLACK,LIGHTGREEN,">");
	    else
	       	taoButton(0,875,70,900,95,mapID,BLACK,BLACK,GRAY,">");
		 taoButton(0,750,70,775,95,mapID,BLACK,BLACK,GRAY,"<");
		 settextstyle(0, 0, 2);
		 
		int x,y;
		int id=0;
		char c;
		
		while(true){
			id=0;
			if(ismouseclick(WM_LBUTTONDOWN)){
				getmouseclick(WM_LBUTTONDOWN, x, y);
				id = mapID[y][x];
				clearmouseclick(WM_LBUTTONDOWN);
			}
			
		switch(id){
			
			case NEXT_PAGETK:
				tranghientai++;
				setfillstyle(1,WHITE);
				bar(trai,tren,phai,duoi);
				rectangle(trai,tren,phai,duoi);
			for(int i=(tranghientai-1)*20; i<tranghientai*20 && i<dsmb.soluong ; i++)
			  taodongtkcb(i+1,trai,130+i%20*30,phai,160+i%20*30,*dsmb.data[sortvitri[i]]);
			  	if(tranghientai < trangcuoi)
			     	taoButton(NEXT_PAGETK,875,70,900,95,mapID,BLACK,BLACK,LIGHTGREEN,">");
			    else
			       	taoButton(0,875,70,900,95,mapID,BLACK,BLACK,GRAY,">");
				 taoButton(BACK_PAGETK,750,70,775,95,mapID,BLACK,BLACK,LIGHTGREEN,"<");
				break;
				
			case BACK_PAGETK:
				tranghientai--;
				setfillstyle(1,WHITE);
				bar(trai,tren,phai,duoi);
				rectangle(trai,tren,phai,duoi);
				for(int i=(tranghientai-1)*20; i<tranghientai*20 && i<dsmb.soluong ; i++)
				  taodongtkcb(i+1,trai,130+i%20*30,phai,160+i%20*30,*dsmb.data[sortvitri[i]]);
			  	if(tranghientai != 1)
			  	    taoButton(BACK_PAGETK,750,70,775,95,mapID,BLACK,BLACK,LIGHTGREEN,"<");
			    else
			       	taoButton(0,750,70,775,95,mapID,BLACK,BLACK,GRAY,"<");
				 taoButton(NEXT_PAGETK,875,70,900,95,mapID,BLACK,BLACK,LIGHTGREEN,">");
				 break;
				 
	        case ID_MAYBAY: case ID_CHUYENBAY: case ID_VE :case ID_EXIT:
	        	idnext=id;
	        	return;
			}
		 
		delay(100);
	}
}

bool Check_MB_SanSangBay(nodeCB *First,chuyenbay &cb){
	
	nodeCB *nodechay;
	for(nodechay = First; nodechay != NULL; nodechay=nodechay->CBnext){
		   if(TrongVongBaGio(nodechay->data.mytime , cb.mytime) &&  (strcmp(nodechay->data.SohieuMB , cb.SohieuMB) == 0) && nodechay->data.trangthai != HUYCHUYEN && strcmp(nodechay->data.MaCB , cb.MaCB) != 0 )
		         {      char thongbao[200]="     May Bay Khong The Thuc Hien Bay Vao Thoi Gian Nay \n     Vi Dang Thuc Hien Chuyen Bay ";
		         		strcat(thongbao,nodechay->data.MaCB);
		         		strcat(thongbao,"\n     Khoi Hanh Luc: ");
		         		strcat(thongbao, tocharDate(nodechay->data.mytime));
		         		MessageBox(NULL,thongbao,"THONG BAO",MB_ICONWARNING|MB_OK);
		         		return false;
				 }
	}
	return true;
}

bool Check_HK_SanSangBay(nodeCB *First,chuyenbay &cb, char *cmnd){
	
	nodeCB *nodechay;
	for(nodechay = First; nodechay != NULL; nodechay=nodechay->CBnext){
		   if(TrongVongBaGio(nodechay->data.mytime , cb.mytime) && nodechay->data.trangthai != HUYCHUYEN)  // nodechay->data.MaCB != cb.MaCB Da Bat CMND trung
		       for(int i=1; i<= nodechay->data.sove;i++)
		              if(strcmp(nodechay->data.dsve[i], cmnd)==0)
				         {   
						    char thongbao[200]="     Hanh Khach Khong The Dat Ve \n     Do Da Dat Ve Chuyen Bay ";
				         		strcat(thongbao,nodechay->data.MaCB);
				         		strcat(thongbao,"\n     Khoi Hanh Luc: ");
				         		strcat(thongbao, tocharDate(nodechay->data.mytime));
				         		MessageBox(NULL,thongbao,"THONG BAO",MB_ICONWARNING|MB_OK);
				         		return false;
						 }
	}
	return true;
	
}
