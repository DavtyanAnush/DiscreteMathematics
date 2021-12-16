#pragma once

using namespace System::Windows::Forms;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;

#include <iostream>		        	// NULL
#include <fstream>                  // ���������� � �������� ����� �� �����          
#include <string>

struct link
{
	int data;   // ����� �������
	link* next;   //��������� �� ��������� �������
};

class linklist // ������ ������� ������
{
private:
	link* first;             // ��������� �� 1-� ������� ������
public:
	bool e;                  // ������� ������������� ��� ���������� ������
	linklist()
	{
		first = NULL; e = false;
	}

	void additem(int d); // ���������� ��������
	void delver(int d); // ���������� ��������
	int display(int *m);              // ����� ������
	void save();              // ���������� ������
	bool exist(int x);     // �������� ��������� �������� � ������
	void makenull();   // ����������� ������;

};
	void linklist::additem(int d) // ���������� ��������
	{
		link* newlink = new link;
		newlink->data = d;
		newlink->next = first;
		first = newlink;
	}

	void linklist::delver(int d) // �������� ��������
	{
		link* current = first;           // �������� � ������� ��������
		link* a = NULL;
		while (current)                 // ���� �� ��������� ��������� �������
		{

			if (current->data == d)
			{
				current->data = NULL;
				if (current->next != NULL && a != NULL) a->next = current->next;  // ���� ����� � �� ���������� �������� ���� ������� �������� ����� ����������� �� ���������
				if (current->next == NULL && a != NULL) a->next = NULL;				//���� ����� ���������� �������� ���� ��� �������(����� ��� ���) �������� ����������� ��� �� ���������
				if (a == NULL) first = current->next;							//���� ����� ��������� ��������� ��� ���������, ������ ��������� ������� ������
				break;
			}
			else a = current;									//���������� ����� ����������� �������� ��� �������� ������

			current = current->next;// ��������� � ���������� ��������

		}
		if (current == NULL && a == NULL) first = NULL; //���� ���������! ������� ��� �� ������ ���� ��������� ������� � ������ ���� ����. �� ��� �����//���������

	}

	int linklist::display(int *m)    //���������� ��� �����
	{
		for (int i = 0; i < 9; i++) m[i] = 0;
		int i = 0;
		link* current = first;
		while (current)
		{
			m[i] = current->data;
			i++;
			current = current->next;
		}
		
		return 0;
	}
	 

	void linklist::save() 
	{
		std::ofstream out("D:\\ASS.txt", std::ios::app); // �������� ���� ��� ������
		if (out.is_open())
		{
			link* current = first;

			while (current)
			{
				out << current->data << ' ';
				current = current->next;
			}
			out <<"\n";
		}
	}

	void linklist::makenull()
	{
		link* current = first;
		link* deleted;
		while (current)
		{
			deleted = current;
			current = current->next;
			delete deleted;
		}
		first = NULL;
		//cout << "������ ���������";
	}

	bool linklist::exist(int x)       // ������� �������� ������� �������� � ������
	{
		link* current = first;
		if (!current) return 0;
		while (current)
		{
			if (current->data == x)
			{
				return 1;
				break;
			}
			current = current->next;
			if (current == NULL)
				return 0;
		}
	}

class Graph
{
private:
	linklist adj[9];   // ������ ������
public:
	Graph()
	{  }
	bool addedge(int x, int y); // ���������� ����� � ����
	bool deledge(int x, int y); // �������� ����� � ����
	bool addvertex(int x);       // ���������� ������� � ����
	bool delvertex(int x);       // �������� ������� �����
	int display(int i, int *m);          // ����� ������ ��������� �����
	void D(); // ����� �������� ���� ������ �����
	void paint(); // 
	void isfull();   //  ������ �� �������;
	void loadG();   //  �������� � ������ ���������;
	void saveG();   //  ���������� � ������ ���������;
};

bool Graph::addvertex(int x)
{
	if (adj[x].e == false) { adj[x].e = true; return 1; }
	else  return 0;
}

bool Graph::delvertex(int x) 
{
	if (adj[x].e == true)
	{
		adj[x].e = false;
		adj[x].makenull();

		for (int i = 1; i < 9; i++)						//�������� �� ���������� �� ������ ������� ������
			if (adj[i].e == true) adj[i].delver(x);
		return 1;
	}
	else return 0;
}

bool Graph::addedge(int x, int y)
{
	if (adj[x].e == true && adj[y].e == true && adj[x].exist(y) == false && adj[y].exist(x) == false && (x != y))
	{
		adj[x].additem(y);
		adj[y].additem(x);
		return 1;
	}
	else return 0; 
}

bool Graph::deledge(int x, int y)
{
	if (adj[x].e == true && adj[y].e == true && adj[x].exist(y) == true && adj[y].exist(x) == true)
	{
		adj[x].delver(y);
		adj[y].delver(x);
		return 1;
	}
	else return 0; 
}


int Graph::display(int i, int* m)
{
	if (adj[i].e == true)
	{
		adj[i].display(m);
		return i;
	}else return 0;
}

void Graph::isfull()  //�����
{
	int flag = 1;
	for (int i = 1; i < 9; i++)
	{
		if (adj[i].e == true && flag == 1)
			for (int j = 0; j < 9; j++)
			{
				if (adj[j].e == true && flag == 1 && j!=i)
					if (adj[i].exist(j) == 1) flag = 1;
					else flag = 0;
			}
	}
	if (flag == 1)  MessageBox::Show("���� ������");
	else MessageBox::Show("���� ��������");
}

void Graph::D()
{
	int x = 0;
	for (int i = 0; i < 9; i++)
		if (adj[i].e == true)
			for (int j = 0; j < 9; j++)
				if (adj[j].e == true && j != i)
					if (adj[i].exist(j) == 1) x++;
	MessageBox::Show("����� �������� ���� ������ ����� -" + x + ".");
}

void Graph::paint()
{
	//Graphics g = e.Graphics;

}
void clear()			//������� ������� �����
{
	std::ofstream out("D:\\ASS.txt", std::ios::trunc);
	out.close();
}
void Graph::saveG()
{
	clear();

	std::ofstream out("C:\\Users\\davty\\Desktop\\ASS.txt", std::ios::app); // �������� ���� ��� ������
	if (out.is_open())
	{
		for (int i = 1; i < 9; i++)
		{
			if (adj[i].e == true)
			{
				out << i << std::endl;
				adj[i].save();
			}
		}
	}
	out.close();
}
void Graph::loadG()
{
	int k, s;

	for (int i = 1; i < 9; i++)
	{
		if (adj[i].e == true)
		{
			adj[i].e = false;
			adj[i].makenull();

		}
	}
		std::string str;
		std::string ss;

		std::ifstream in("C:\\Users\\davty\\Desktop\\ASS.txt"); // �������� ���� ��� ������
		if (in.is_open())
		{
			while (getline(in, str))
			{
				k = atoi(str.c_str());    //���� ���-�� ��������� ������ ������ � �
				adj[k].e = true;
				getline(in, str);				//� ����� ������ ������ ��������� � ����� � ������ 
				if (str != "" && str != " ")
				for (int i = 0; i < strlen(str.c_str()); i++)
				{
					if (str[i] != ' ')
					{
						ss = str[i];
						s = atoi(ss.c_str());				//����������� ����� � ������ ������� ������
						adj[k].additem(s);					//���������
					
					}					//
				}
			}	
		}
		in.close();

}

Graph G;