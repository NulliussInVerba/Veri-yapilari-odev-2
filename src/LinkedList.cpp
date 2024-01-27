/** 
* @file LinkedList.hpp
* @description burası yığıt işlemlerini yaptığım ve 500 düğümü tutan bağlı liste sınıfım
* @course 1. ogretim A grubu
* @assignment 2. odev
* @date 13.12.2023-23.12.2023
* @author Veysel ARAS veysel.aras@ogr.sakarya.edu.tr
*/

#include"LinkedList.hpp"
#include"LinkedList.hpp"


	void LinkedList::linkedListNodeOlustur(int sayi){
		if(linkedListHead!=nullptr){
			linkedListOlusturma=new LinkedListNode(sayi);
			linkedListLast->next=linkedListOlusturma;
			linkedListLast=linkedListOlusturma;
		}
		else{
			linkedListHead=new LinkedListNode(sayi);
			linkedListLast=linkedListHead;
		}
		
	}
	void LinkedList::yigitIslemleri(){
		LinkedListNode*temp=linkedListHead;
		linkedListLast=linkedListHead;
		LinkedListNode*onceki=nullptr;
		LinkedListNode*onceki2=nullptr;
		Stack*temp2=nullptr;
		while(linkedListLast!=nullptr){
			linkedListLast->ascii();
			linkedListLast=linkedListLast->next;
		}
		linkedListLast=linkedListHead;
		while(linkedListHead->next!=nullptr){
			temp2=nullptr;
			onceki=nullptr;
			onceki2=nullptr;
			temp=linkedListHead;
			linkedListLast=linkedListHead;
			while(linkedListLast!=nullptr){
				if(linkedListLast->top->sayi<temp->top->sayi){
					onceki2=onceki;
					temp=linkedListLast;
				}
				onceki=linkedListLast;
				linkedListLast=linkedListLast->next;
			}
			if(temp->yigitHead==temp->top){
				if(onceki2==nullptr){
					linkedListHead=linkedListHead->next;
				}
				else{
					onceki2->next=temp->next;
				}
				temp->stackTemizle();
				temp->temizle();
				delete temp;
				linkedListLast=linkedListHead;
				system("CLS");
				while(linkedListLast!=nullptr){
					linkedListLast->ascii();
					linkedListLast=linkedListLast->next;
				}
				continue;
			}
			else{
				temp2=temp->yigitHead;
				while(temp2->next!=temp->top){
					temp2=temp2->next;
				}
				temp->top=temp2;
			}
			temp2=nullptr;
			onceki=nullptr;
			onceki2=nullptr;
			temp=linkedListHead;
			linkedListLast=linkedListHead;
			
			if(linkedListHead->next==nullptr){
				break;
			}
			while(linkedListLast!=nullptr){
				if(linkedListLast->top->sayi>temp->top->sayi){
					onceki2=onceki;
					temp=linkedListLast;
				}
				onceki=linkedListLast;
				linkedListLast=linkedListLast->next;
			}
			if(temp->yigitHead==temp->top){
				if(onceki2==nullptr){
					linkedListHead=linkedListHead->next;
				}
				else{
					onceki2->next=temp->next;
				}
				temp->stackTemizle();
				temp->temizle();
				delete temp;
				linkedListLast=linkedListHead;
				system("CLS");
				while(linkedListLast!=nullptr){
					linkedListLast->ascii();
					linkedListLast=linkedListLast->next;
				}
			}
			else{
				temp2=temp->yigitHead;
				while(temp2->next!=temp->top){
					temp2=temp2->next;
				}
				temp->top=temp2;
			}
		}
		system("CLS");
		sonucGoster();
	}
	void LinkedList::sonucGoster(){
		cout<<"=============================="<<endl;
		cout<<"|"<<setw(29)<<"|"<<endl;
		cout<<"|"<<setw(20)<<"Son Karakter: ";
		linkedListHead->ascii();
		cout<<setw(8)<<"|"<<endl;
		cout<<"|"<<setw(12)<<"AVL No"<<setw(8)<<": ";
		cout<<setw(8)<<left<<linkedListHead->sira<<"|"<<endl;
		cout<<"|"<<right<<setw(29)<<"|"<<endl;
		cout<<"=============================="<<endl;
		linkedListHead->stackTemizle();
		linkedListHead->temizle();
		delete linkedListHead;
	}