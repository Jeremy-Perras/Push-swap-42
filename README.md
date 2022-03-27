# Push-swap-42

## Table of content :
* [What is PS ?](#what-is-PS-)
* [What is in it ?](#what-is-in-it-)
* [How does is work ?](#how-does-is-work-)

### What is PS ?
 Push-swap (PS) is a individual project at 42.
 The goal? Write a program in C called push_swap which calculates and displays
 on the standard output the smallest program, made of Push swap language instructions,
 that sorts the integers received as arguments.
 ### Rules :
 
 >You have 2 stacks named a and b.
• At the beginning:
◦ The stack a contains a random amount of negative and/or positive numbers
which cannot be duplicated.
◦ The stack b is empty.
• The goal is to sort in ascending order numbers into stack a. To do so you have the
following operations at your disposal:
sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
ss : sa and sb at the same time.

>pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
>pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.

>ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.

>rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.
### What is in it ?
 We have two stacks we create a strucuture and put the final index of each number. Then we converting this numbers in binary, we start to see if unit is 0 or 1, if is 0 we pb and at the end we pa. And so one for tens, hundreds...The algorithm radix I used for.

### How does is work ?
The Makefile contain 4 rules : all clean fclean and re.
Create a program called push_swap.
<a href="https://zupimages.net/viewer.php?id=22/12/c0qs.png"><img src="https://zupimages.net/up/22/12/c0qs.png" alt="" /></a>
<a href="https://zupimages.net/viewer.php?id=22/12/f1cs.png"><img src="https://zupimages.net/up/22/12/f1cs.png" alt="" /></a>
