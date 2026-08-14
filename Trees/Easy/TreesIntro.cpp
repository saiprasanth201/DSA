Problem #168 : Introduction to Binary Trees

Technique

Binary Tree Fundamentals

━━━━━━━━━━━━━━━━━━

Observation

A Binary Tree is a tree

where each node can have

at most 2 children

↓

LEFT CHILD

+

RIGHT CHILD

━━━━━━━━━━━━━━━━━━

Types of Binary Trees

1️⃣ Full Binary Tree

Every node has either

0 children

OR

2 children

↓

No node has exactly

1 child

━━━━━━━━━━━━━━━━━━

2️⃣ Complete Binary Tree

All levels are completely filled

except possibly the last level

↓

The last level is filled

from LEFT → RIGHT

━━━━━━━━━━━━━━━━━━

3️⃣ Perfect Binary Tree

All internal nodes have

2 children

AND

all leaf nodes are

at the same level

━━━━━━━━━━━━━━━━━━

4️⃣ Balanced Binary Tree

The height of the tree is

approximately

O(log n)

where n = number of nodes

↓

For example:

n = 8

log₂(8) = 3

━━━━━━━━━━━━━━━━━━

5️⃣ Degenerate Tree

Every node has only

one child

↓

The tree behaves like

a Linked List

↓

Height can become

O(n)

━━━━━━━━━━━━━━━━━━

Balanced vs Degenerate

Balanced Tree

↓

Height ≈ O(log n)

↓

Efficient tree operations

Degenerate Tree

↓

Height = O(n)

↓

Worst-case height

━━━━━━━━━━━━━━━━━━

Memory Trigger

FULL

↓

0 or 2 children

━━━━━━━━━━━━━━━━━━

COMPLETE

↓

Last level filled

LEFT → RIGHT

━━━━━━━━━━━━━━━━━━

PERFECT

↓

All levels completely filled

━━━━━━━━━━━━━━━━━━

BALANCED

↓

Height ≈ O(log n)

━━━━━━━━━━━━━━━━━━

DEGENERATE

↓

One child per node

↓

Looks like Linked List

━━━━━━━━━━━━━━━━━━

Important

Do NOT confuse:

Full ≠ Complete ≠ Perfect ≠ Balanced

Each describes a different

property of a Binary Tree.

━━━━━━━━━━━━━━━━━━