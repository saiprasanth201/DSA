Problem #75: Subarrays with K Different Integers

Optimal: O(N)

- problem asks

  exactly k
  distinct integers

- use formula

  Exactly K

  =

  At Most K

  -

  At Most (K-1)

- create helper
  function

  atMostK()

- maintain

  left

  frequency array

  distinct count

- move right
  pointer

- increase
  frequency

- if frequency
  becomes 1

  distinct++

- while

  distinct > k

- decrease
  frequency of
  left element

- if frequency
  becomes 0

  distinct--

- move left

- after window
  becomes valid

  add

  right-left+1

  to answer

- return

  atMostK(k)

  -

  atMostK(k-1)

TC = O(N)

SC = O(N)

Memory Trigger:

Exactly K

↓

At Most K

-

At Most (K-1)

↓

Expand

↓

Shrink

↓

right-left+1