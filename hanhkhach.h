#pragma once
#include "Define.h"

struct hanhkhach{
	char cmnd[MAXLENGHT_CMND +1];
	char ho[MAXLENGHT_HOTENDEM +1];
	char ten[MAXLENGHT_TEN +1];
	char phai[MAXLENGHT_PHAI +1];
};

struct node{
	hanhkhach data;
	node *left = NULL;
	node *right= NULL;
};

node *new_hanhkhach(hanhkhach &hk){
	node *temp = new node();
	temp->data = hk;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void add_HK_to_list(node *&root, hanhkhach &hk){
	
	node *nodeTemp = new_hanhkhach(hk);
	
	if(root==NULL){
		root = nodeTemp;
	}
	else{
		node *nodeRun = root;
		node *nodeTruoc = root;
		while(nodeRun!=NULL){
			nodeTruoc=nodeRun;
			if(  strcmpNumber(hk.cmnd,nodeRun->data.cmnd) < 0){
				nodeRun=nodeRun->left;
			}
			else if(  strcmpNumber(hk.cmnd,nodeRun->data.cmnd) > 0){   
				nodeRun=nodeRun->right;
			}
		}
		
		if(  strcmpNumber(hk.cmnd,nodeTruoc->data.cmnd)  > 0 ){
				nodeTruoc->right = nodeTemp;
		}
		else 	nodeTruoc->left  = nodeTemp;		
	}
}

node *timkiem_HK(node *root,char *CMND){
	node* nodeRun = root;
	while(nodeRun != NULL && strcmpNumber(CMND,nodeRun->data.cmnd) != 0){
		if( strcmpNumber(CMND,nodeRun->data.cmnd)  > 0)     
		   nodeRun = nodeRun->right;
		else //if(strcmpNumber(CMND,nodeRun->data.cmnd) < 0 )
		    nodeRun = nodeRun->left;
	}
	return nodeRun;
}


void edit_data_HK(node *temp, hanhkhach &hk){
	temp->data = hk;
}

//void xoaNutGoc(node *root){
//	//--------xoa goc ko con------------
//	if(root->right==NULL && root->left==NULL){
//		delete root;
//		root=NULL;
//	}
//	//---------xoa goc co 1 con------
//	else if(root->right==NULL || root->left==NULL){
//		node *node_delete = root;
//		
//		if(root->left==NULL)	       root=root->right;
//		else if(root->right==NULL)	   root=root->left;
//		
//		delete node_delete;
//	}
//       	//---------xoa goc hai con--------
//	else {                                          //if(root->left!=NULL && root->right!=NULL)
//		node *nodeThayThe = root->right;
//		node *nodeTruocThayThe = root;
//		
//		while(nodeThayThe->left!=NULL){
//			nodeTruocThayThe=nodeThayThe;
//			nodeThayThe=nodeThayThe->left;
//		}
//		
//		hanhkhach tmp = root->data;
//		root->data=nodeThayThe->data;
//		nodeThayThe->data=tmp;
//		
//		if(nodeTruocThayThe==root){
//			if(nodeThayThe->right!=NULL){
//				nodeTruocThayThe->right=nodeThayThe->right;
//			}
//			else{
//				nodeTruocThayThe->right=NULL;
//			}
//		}
//		else{
//			if(nodeThayThe->right!=NULL){
//				nodeTruocThayThe->left=nodeThayThe->right;
//			}
//			else{
//				nodeTruocThayThe->left=NULL;
//			}
//		}
//		
//		delete nodeThayThe;
//	}
//}
//void xoaNodeKhongPhaiGoc(node *root,int CMND){
//	node* nodeCanXoa = root;
//	node* nodeTruocXoa = NULL;
//	while(nodeCanXoa!=NULL){
//		//tim node Truoc Xoa va node Can Xoa
//		nodeTruocXoa=nodeCanXoa;
//		if(nodeCanXoa->data.cmnd < CMND){
//			nodeCanXoa=nodeCanXoa->right;
//		}
//		else if(nodeCanXoa->data.cmnd > CMND){
//			nodeCanXoa=nodeCanXoa->left;
//		}
//		//tim xong nodeTruocXoa va nodeCanXoa
//	   else	{      //if(nodeCanXoa->data.cmnd == CMND)
//			//=======THUC HIEN XOA==========
//			//xoa node khong con
//			if(nodeCanXoa->right==NULL && nodeCanXoa->left==NULL){
//				if(nodeCanXoa->data.cmnd < nodeTruocXoa->data.cmnd ){
//					nodeTruocXoa->left=NULL;
//				}
//				else if(nodeCanXoa->data.cmnd > nodeTruocXoa->data.cmnd){
//					nodeTruocXoa->right = NULL;
//				}
//				delete nodeCanXoa;
//				return;
//			 }
//			//xoa node 1 con
//			else if(nodeCanXoa->right==NULL || nodeCanXoa->left==NULL){
//				//nodeCanXoa nam ben trai nodeTruocXoa
//				if(nodeCanXoa->data.cmnd < nodeTruocXoa->data.cmnd){
//					if(nodeCanXoa->left==NULL){
//						nodeTruocXoa->left = nodeCanXoa->right;
//					}
//					else if(nodeCanXoa->right==NULL){
//						nodeTruocXoa->left = nodeCanXoa->right;
//					}
//				}
//				//nodeCanXoa nam ben phai nodeTruocXoa
//				else if(nodeCanXoa->data.cmnd > nodeTruocXoa->data.cmnd){
//					if(nodeCanXoa->left==NULL){
//						nodeTruocXoa->right = nodeCanXoa->right;
//					}
//					else if(nodeCanXoa->right==NULL){
//						nodeTruocXoa->right = nodeCanXoa->left;
//					}
//				}
//				delete nodeCanXoa;
//				return;
//			}
//			//xoa node 2 con
//			else if(nodeCanXoa->right!=NULL && nodeCanXoa->left!=NULL){
//				node *nodeThayThe = nodeCanXoa->right;
//				node *nodeTruocThayThe = nodeCanXoa;
//				
//				while(nodeThayThe->left != NULL){
//					nodeTruocThayThe=nodeThayThe;
//					nodeThayThe=nodeThayThe->left;
//				}
//				
//				hanhkhach tmp = nodeCanXoa->data;
//				nodeCanXoa->data=nodeThayThe->data;
//				nodeThayThe->data=tmp;
//				
//				
//				if(nodeTruocThayThe==nodeCanXoa){
//					if(nodeThayThe->right!=NULL){
//						nodeTruocThayThe->right=nodeThayThe->right;
//					}
//					else{
//						nodeTruocThayThe->right=NULL;
//					}
//				}
//				else{
//					if(nodeThayThe->right!=NULL){
//						nodeTruocThayThe->left=nodeThayThe->left;
//					}
//					else{
//						nodeTruocThayThe->left=NULL;
//					}
//				}
//				
//				delete nodeThayThe;
//				return;
//			}
//		}
//		
//	}
//	cout<<"Khong tim thay de xoa";
//}
//
//void delete_HK_to_list(node *root,int CMND){
//	if(root!=NULL){
//		if(root->data.cmnd == CMND){
//			xoaNutGoc(root);
//		}
//		else{
//			xoaNodeKhongPhaiGoc(root,CMND);
//		}
//	}
//}
//void xuatdanhsach(node *root){
//	if(root!=NULL){
//		xuatdanhsach(root->left);
//		cout<<"CMND: "<<root->data.cmnd<<" Ho: "<<root->data.ho<<"      Ten "<<root->data.ten<<"      "<<root->data.phai<<endl;
//		xuatdanhsach(root->right);
//	}
//}
