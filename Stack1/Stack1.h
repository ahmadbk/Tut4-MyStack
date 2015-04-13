// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the STACK1_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// STACK1_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef STACK1_EXPORTS
#define STACK1_API __declspec(dllexport)
#else
#define STACK1_API __declspec(dllimport)
#endif

#include<iostream>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *link;
}NODE;


// This class is exported from the Stack1.dll
class STACK1_API CStack1 {

	int maxS;
	int currS;
	NODE *head;

public:
	//CStack1(void);
	CStack1(int m = 0){ maxS = m; currS = 0; head = NULL; };
	~CStack1();

	bool push(int val);
	bool pop(int &val);
	bool peek(int &val);
	bool isEmpty();
	bool isFull();

	// TODO: add your methods here.
};

extern STACK1_API int nStack1;

STACK1_API int fnStack1(void);
