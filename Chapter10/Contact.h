// #pragma once
#ifndef _CONTACT_123457576
#define _CONTACT_123457576

enum gender { MAN, WOMAN };
typedef enum gender Egender;

struct contact
{
	char name[24];
	char phone[24];
	Egender gender;
	int year;
};

typedef struct contact Contact;


#endif //_CONTACT_123457576

int isEContact(Contact a, Contact b);
void printContact(Contact ct);
int isEContactPtr(Contact* a, Contact* b);
void printContactPtr(Contact* ct);