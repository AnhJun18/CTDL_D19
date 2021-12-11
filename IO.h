#include<conio.h>
#include<stdio.h>
#define file_may_bay "Data_may_bay"
#define file_chuyen_bay "Data_chuyen_bay"
#define file_hanh_khach "Data_hanh_khach"


//-----------------------------------------FILE MAY BAY ---------------------------------
void Save_file_MB(danhsachmaybay &dsmb) {
 		FILE * PTR;
 			
		 if ((PTR=fopen(file_may_bay,"wb"))==NULL)
		 {  
		 cout<<"ERROR! Khong The Mo File May Bay"<<endl;
		 return;
		 }
		 for (int i=0; i < dsmb.soluong; i++){
		 	
		   fwrite (dsmb.data[i], sizeof(maybay),1,PTR);
		 }
		 	fclose(PTR);
}

void Open_file_MB (danhsachmaybay &dsmb) {
	       FILE * PTR;
	       maybay temp;
		 if ((PTR=fopen(file_may_bay,"rb"))==NULL)
		 {  
		 	cout<<"ERROR! Khong The Mo File May Bay"<<endl;
		 	return;
		 }
		  dsmb.soluong=0;
		 while  (fread (&temp, sizeof (maybay), 1, PTR)!=0) {
		 	
		add_newmb_vaods(dsmb,temp);
	 }
	 	fclose(PTR);
	}

////-----------------------FILE CHUYEN BAY--------------------------------------
void Save_file_chuyen_bay(nodeCB *first){

		 FILE * PTR1;
		 if ((PTR1=fopen(file_chuyen_bay,"wb"))==NULL)
		 {  	cout<<"ERROR! Khong The Mo File Chuyen Bay"<<endl;
		 		 return ;
		 }
		 
		 nodeCB *temp= first;
		 while(temp != NULL){
		 	fwrite(&(temp->data), sizeof(chuyenbay), 1, PTR1);
		 	
		 	for(int i=1 ;i <= temp->data.sove ; i++){
		 		fwrite(&(*temp->data.dsve[i]), sizeof(char[MAXLENGHT_CMND+1]), 1, PTR1);
			 }
		 	temp= temp->CBnext;
		 }
		 fclose(PTR1);
		}

void Open_file_chuyen_bay(nodeCB *&first ){
	 FILE * PTR1;
	 chuyenbay cb;
	 if ((PTR1=fopen(file_chuyen_bay,"rb"))==NULL)
	 {  cout<<"ERROR! Khong The Mo File Chuyen Bay"<<endl;
	 	return ;
	 }	 
 
	 while(fread (&cb, sizeof (chuyenbay), 1, PTR1) != 0) {

			cb.dsve= new char *[cb.sove+1];
			for(int i=1 ; i<= cb.sove ; i++){
		  	cb.dsve[i]= new char[MAXLENGHT_CMND+1];
		  
	       }

		 	for(int i=1 ;i <= cb.sove ; i++){
		 		fread(&(*cb.dsve[i]), sizeof(char[MAXLENGHT_CMND+1]), 1, PTR1);
			 }
 	   
			add_cb_vaods(first,cb);
	}	
 fclose(PTR1);
}
//
//
////==========================HANH KHACH ============================
////save file theo hinh thuc NLR
 void luu_data_hk(node *nodetemp, FILE *f){
	if(nodetemp != NULL){
	fwrite (&nodetemp->data, sizeof (hanhkhach), 1, f);
 	luu_data_hk(nodetemp->left,f);
 	luu_data_hk(nodetemp->right,f);
 	}
}

void Save_file_hanh_khach(node *root){

	FILE *f;
 if ((f=fopen(file_hanh_khach,"wb"))==NULL)
 {  	cout<<"ERROR! Khong The Mo Hanh Khach"<<endl;
 		 return ;
 }
     luu_data_hk(root,f);
fclose(f);
}



void Open_file_hanh_khach(node *&root){
	
		FILE * PTR; 
		hanhkhach hk;
		
	 if ((PTR=fopen(file_hanh_khach,"rb"))==NULL)
	 {  cout<<"ERROR! Khong The Mo File Hanh Khach"<<endl;
	 	return;
	 }
	while(fread (&hk, sizeof (hanhkhach), 1, PTR)!=0){
		add_HK_to_list(root, hk);
	} 
	fclose(PTR);
}
