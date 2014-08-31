# Caesar Cipher: if/else, for loops, while loops, nested loops

#Objectives

Throughout this exercise the students will practice:

* if/else
* for loops
* while lops
* nested loops
* Function Calling


## Concepts

Cryptography is one of most interesting branches of programming. Studying its algorithms is usually started with this simple method named after famous Roman imperor Julius Caesar who used it for communicating his military secrets[1].The Caesar Cipher is one of the simplest monoalphabetic substitutions one may use, and it’s also one of the easiest to break. It is said that Julius Caesar wrote using a simple substitution cipher, where the plaintext letter was replaced by the ciphertext three places down the alphabet, so that the letter M is replaced by P and so on.[2]

In this laboratory you can make it so that the shift in letters happens three places down or four places down or just one place down, we are not limiting ourselves to just shifting three letters. 


## Key Functions
For this laboratory the student will have to use the next functions to make the work easier:

	isalpha() // is a function that returns true if a character is a letter, otherwise it returns false.

Also you should know that if you add +1 to a letter, it gives you the next letter that follows it, e.g.(a + 1 = b)

## Exercise 1

The Qt project at *HERE???* contains the caesar cipher application you'll be working on.

For this exercise you'll be implementing the cipher function. You should start by checking if the current character is a letter, if this is true, then you will have to shift the letter in the alphabet by the amount of the shiftright. One of the key things you have to look out for is the fact that if the letter + shift is more than 'z' you don't start again at 'a' e.g.(z + 1 = { ),so you will have to find another way to reach 'a' again. Also remember that you have to do the same for the uppercase letters.

## Exercise 2

For this exercise you'll be implementing the decipher function. If you managed to implement the cipher function in the first exercise then this should be a piece of cake. The decipher is pretty much the same as the cipher function only you have to things backwards now. For example in places where you used 'a' now you will have 'z' and so on.

### Deliverables

In the following text box, copy the code that you developed for the program. Remember to properly comment the code and use good indentation and variable naming practices.

### References
[1] Rodion Gorkovenko, http://www.codeabbey.com/index/task_view/caesar-shift-cipher
[2] Murk, http://www.murky.org/2004/09/the-caesar-shift/
