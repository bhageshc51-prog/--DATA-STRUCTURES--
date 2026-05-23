# Tower of Hanoi

## Definition

The Tower of Hanoi is a famous recursive problem in Data Structures and Algorithms.

It consists of:
- 3 rods (Source, Auxiliary, Destination)
- n disks of different sizes

The goal is to move all disks from Source to Destination following rules.

---

## Rules

1. Move only one disk at a time.
2. A bigger disk cannot be placed on a smaller disk.
3. Only the top disk can be moved.

---

## Algorithm

1. Move n-1 disks from Source to Auxiliary.
2. Move the largest disk to Destination.
3. Move n-1 disks from Auxiliary to Destination.

---

## Example

If n = 3

Steps:
- Move Disk 1 → C
- Move Disk 2 → B
- Move Disk 1 → B
- Move Disk 3 → C
- Move Disk 1 → A
- Move Disk 2 → C
- Move Disk 1 → C

Total Moves = 7

---

## Formula

Minimum Moves = (2^n) - 1

For n = 3

Minimum Moves = (2^3) - 1 = 7

---

## Applications

- Recursion Learning
- Backtracking Problems
- Puzzle Solving
- Algorithm Design

---

## Conclusion

Tower of Hanoi is used to understand recursion, divide-and-conquer strategy, and problem-solving techniques.
