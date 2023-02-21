#pragma once
#include "Tools.h"
#include "Node.h"

Node* retainValidNode(Node head)
{
	if (head.leftNode == nullptr && head.rightNode == nullptr)
	{
		return nullptr;
	}
	head.leftNode = retainValidNode(*head.leftNode);
	head.rightNode = retainValidNode(*head.rightNode);
}