/** 
* @file LinkedListNode.hpp
* @description burada AVL'ye eleman ekleme, AVL denge, stack eleman ekleme, ve AVL silme işlemleri yaptım
* @course 1. ogretim A grubu
* @assignment 2. odev
* @date 13.12.2023-23.12.2023
* @author Veysel ARAS veysel.aras@ogr.sakarya.edu.tr
*/

#ifndef LINKEDLISTNODE_HPP
#define LINKEDLISTNODE_HPP
#include"AVL.hpp"
#include"Stack.hpp"
#include <iostream>
#include <cmath>

using namespace std;

class LinkedListNode{
private:
	AVL*avlElemanEkle(AVL*temp,int deger);
	
	AVL* solCocukDegistir(AVL*dugum);
	AVL* sagCocukDegistir(AVL*dugum);
	
	int Height(AVL*tmp);
	
	void stackElemanEkle(AVL*temp);
	void yokEt(AVL* temp);
public:
	AVL*root;
	LinkedListNode*next;
	Stack*yigitHead;
	Stack*top;
	Stack*top2;
	int sira;
	int avlToplam=0;
	LinkedListNode(int sira);
	void avlEkle(int deger);
	void temizle();
	void ascii();
	void stackEkle();
	void stackTemizle();
};
#endif