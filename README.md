# P2
 implement the following programs using recursion.
 
 1) We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies (1, 3, ..) have the normal
    2 ears. The even bunnies (2, 4, ..) have 3 ears, because they each have a raised foot. Recursively
    return the number of “ears” in the bunny line 1, 2, ... n (without loops or multiplication).
    Example:
           Please enter the number of lines (n=): 2
           bunnyEars2(0) → 0
           bunnyEars2(1) → 2
           bunnyEars2(2) → 5
    
    

2) In this question, you will write a program to find super digit of a number X using the following
   rules:
   If X has only 1 digit, then its super digit is X.
   If X has more than 1 digit, then its super digit is equal to the super digit of the digit-sum of X
   
   Example:
          superDigit(1245) = superDigit(1+2+4+5)
                           = superDigit(12)
                           = superDigit(1+2)
                           = superDigit(3)
                           = 3.

   
   
  3) In this question, you will print identical triangles nested each other recursively. You will construct
     the triangles by using two digits ‘_’(underscore) and ‘1’. There will be number of iterations given
     as an input to your program.
