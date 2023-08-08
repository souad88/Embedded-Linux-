#test whether a passed letter is vowel or not
import re
#define function to find specific letters in a string through re liberary
def check_vowel(word,vowel):
    wordvowel=re.findall(f'[{vowel}]',word,re.I)

    return wordvowel
#define word 
word=str(input("Enter word"))
#define vowel letters
vowel='aieou'
print(check_vowel(word,vowel))    