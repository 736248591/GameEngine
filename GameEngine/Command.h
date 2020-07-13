#pragma once
#include "Actor.h"
class Command
{
public:
	virtual ~Command(){}
	virtual void execute(Actor& actor) = 0;
};

