////////////////////////////////////////////////////////////////////////
//Title:	Hash.h
//Author:	Kristina Klinkner
//Date:		March 20, 2002
//Description:	Header file for Hash.cpp
//
////////////////////////////////////////////////////////////////////////

#ifndef	__HASH_H
#define	__HASH_H
#define HASHSIZE  359

#include "Common.h"
#include "States.h"

//Forward declarations
class StringElem;
class State;

class HashTable {
 private:

  struct HashTableEntry {
    StringElem* m_stringPtr;
    State* m_statePtr; 
    HashTableEntry* m_nextPtr;
  };

  HashTableEntry* m_data[HASHSIZE];
  int Hash(ulong key);
  ulong CreateKey(const char* string);

 public:

  HashTable();
  ~HashTable();
  void Insert(StringElem* elem, State* state);
  State* WhichState(const char* string);
  int WhichStateNumber(const char* string);
  void Print();
  void RemoveString(const char* string);
};

#endif
