#include "stdafx.h"
#include <conio.h>
#include <cstdio>
#include <iostream>

enum action
{
	UNLOCK,
	OPEN,
	CLOSE,
	LOCK
};

int m_nCurrentState;

class StateBase
{
public:
	virtual StateBase* GetNextState(action a) = 0;
	virtual    char* ToString() = 0;
};


class Opened : public StateBase
{
public:
	virtual StateBase* GetNextState(action a);
	virtual    char* ToString() {
		return "Opened";
	}
};


class Closed : public StateBase
{
public:
	virtual StateBase* GetNextState(action a);
	virtual    char* ToString() {
		return "Closed";
	}
};

//done la trang thai da duoc khoa
class Un_Locked : public StateBase
{
public:
	virtual StateBase* GetNextState(action a);
	virtual    char* ToString() {
		return "OK";
	}
};


StateBase* Opened::GetNextState(action a) {
	if (a == CLOSE) {
		printf("CLOSE DOOR\n");
		return new Closed();
	}
	else return new Opened(*this);
}

StateBase* Closed::GetNextState(action a) {
	if (a == OPEN) {
		printf("OPEN DOOR\n");
		return new Opened();
	}
	else if (a == LOCK) {
		printf("LOCK DOOR\n");
		return new Un_Locked();
	}
}

StateBase* Un_Locked::GetNextState(action a) {
	if (a == UNLOCK) {
		printf("UNLOCK DOOR\n");
	}
	else return new Closed();
}

class Door
{
public:
	Door() {}
	Door(StateBase* pContext) {
		m_pState = pContext;
	}
	~Door() {
		delete m_pState;
	}
	// Handles the next state
	void StateChanged(action a) {
		if (m_pState) {
			StateBase* pState = m_pState->GetNextState(a);
			delete m_pState;
			m_pState = pState;
		}
	}
	char* GetStateName() {
		return m_pState->ToString();
	}
protected:
	StateBase* m_pState;
};


void main()
{

	Door obj(new Opened);
	printf("Door %s\n", obj.GetStateName());
	obj.StateChanged(CLOSE);
	printf("Door %s\n", obj.GetStateName());
	obj.StateChanged(LOCK);
	printf("Door %s\n", obj.GetStateName());
	obj.StateChanged(OPEN);
	printf("Door %s\n", obj.GetStateName());
}