using namespace std;
unsigned short int **PT_MapID;
maybay **PT_MB;
nodeCB *PT_CB;
node *PT_HK;

void Delete_dsmb(){
	for(int i=0;i<MAXMAYBAY;i++){
		if(PT_MB[i] == NULL)
	      return;
		delete PT_MB[i];
	}
}

void Delete_dscb(){
	nodeCB *nodetemp;
	while(PT_CB!= NULL){
		nodetemp= PT_CB;
		PT_CB = PT_CB->CBnext;
		for(int i=1;i<=nodetemp->data.sove;i++){
			delete [] nodetemp->data.dsve[i];
		}
		delete [] nodetemp->data.dsve;
		delete nodetemp;
	}
}

void Deletedequi(node *root){
	if(root != NULL){
		Deletedequi(root->left);
		Deletedequi(root->right);
	    delete root;
	}
}

void	DeleteTree(){
	Deletedequi(PT_HK);
}

void	DeleteMapID(){
	for(int i=0;i<= WD_HEIGHT;i++)
		   delete [] PT_MapID[i];
	delete [] PT_MapID;
}

void DeleteMemory(){
		DeleteMapID();
		Delete_dsmb();
		DeleteTree();
		Delete_dscb();
}
