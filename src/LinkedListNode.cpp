/** 
* @file LinkedListNode.cpp
* @description burada AVL'ye eleman ekleme, AVL denge, stack eleman ekleme, ve AVL silme işlemleri yaptım
* @course 1. ogretim A grubu
* @assignment 2. odev
* @date 13.12.2023-23.12.2023
* @author Veysel ARAS veysel.aras@ogr.sakarya.edu.tr
*/

#include "LinkedListNode.hpp"

	AVL* LinkedListNode::avlElemanEkle(AVL*temp,int deger){
		if(temp==nullptr) 
			temp=new AVL(deger);
		else if(deger<temp->sayi){
			temp->sol=avlElemanEkle(temp->sol,deger);
			
			if((Height(temp->sol)-Height(temp->sag))==2)
			{
				if(deger<temp->sol->sayi)
					temp=solCocukDegistir(temp);
				else{
					temp->sol=sagCocukDegistir(temp->sol);
					temp=solCocukDegistir(temp);
				}
			}
		}
		else if(deger>temp->sayi){
			temp->sag=avlElemanEkle(temp->sag,deger);
			
			if((Height(temp->sag)-Height(temp->sol))==2){
				if(deger>temp->sag->sayi)
					temp=sagCocukDegistir(temp);
				else{
					temp->sag=solCocukDegistir(temp->sag);
					temp=sagCocukDegistir(temp);
				}
			}
		}else;
		temp->yukseklik=Height(temp);
		return temp;
	}
	
	AVL* LinkedListNode::solCocukDegistir(AVL*dugum){
		AVL*temp=dugum->sol;
		dugum->sol=temp->sag;
		temp->sag=dugum;

		dugum->yukseklik=Height(dugum);
		temp->yukseklik=max(Height(temp->sol),Height(temp->sag))+1;
		return temp;
	}
	
	AVL* LinkedListNode::sagCocukDegistir(AVL*dugum){
		AVL*temp=dugum->sag;
		dugum->sag=temp->sol;
		temp->sol=dugum;

		dugum->yukseklik=Height(dugum);
		temp->yukseklik=max(Height(temp->sol),Height(temp->sag))+1;
		return temp;
	}
	
	int LinkedListNode::Height(AVL*tmp){
		if(tmp == NULL) return -1;
		return 1+max(Height(tmp->sol),Height(tmp->sag));
	}
	
	void LinkedListNode::stackElemanEkle(AVL*temp){
		if(temp==nullptr)
			return;
		stackElemanEkle(temp->sol);
		stackElemanEkle(temp->sag);
		if(temp->sag==nullptr&&temp->sol==nullptr){
			if(yigitHead==nullptr){
				yigitHead=new Stack(temp->sayi);
				top=yigitHead;
			}else{
				top->next=new Stack(temp->sayi);
				top=top->next;
				top2=top;
			}
		}
		else
			avlToplam+=temp->sayi;
		
	}	
	void LinkedListNode::yokEt(AVL* temp)
	{
		if (temp){
			yokEt(temp->sol);
			yokEt(temp->sag);
			delete temp;
		}
	}

	LinkedListNode::LinkedListNode(int sira){
		this->sira=sira;
		root=nullptr;
		next=nullptr;
		yigitHead=nullptr;
		top=nullptr;
		top2=nullptr;
	}
	void LinkedListNode::avlEkle(int deger){
		root=avlElemanEkle(root,deger);
	}
	void LinkedListNode::temizle(){
		yokEt(root);
	}
	void LinkedListNode::ascii(){
		int ascii1=avlToplam%(90-65+1)+65;
		cout<<(char)ascii1;
		top=top2;
	}
	void LinkedListNode::stackEkle(){
		stackElemanEkle(root);
	}
	void LinkedListNode::stackTemizle(){
		Stack*temp=yigitHead;
		while(temp!=nullptr){
			temp=yigitHead->next;
			delete yigitHead;
			yigitHead=temp;
		}
	}