# petal Alpha 0.0 :tulip:
basic ia library


- tested in linux |:x:|
- Compiled and the code works |:x:|
- tested in windows 10 |:x:|
- finished |:x:|
- It work in other machines? |:x:|

A mini library of ia for C++

regist the text , then with the posiblity  home many times you use that text return the text in the data base + random num. (a poor explication sorry)

Now for only have the prototype. when the prototype is complete i will create the version using templates y vectors

Prototype expected example: 

 ``` 
 #include <iostream>
 #include "petal/base.h"
 using namespace petal;
 using namespace std;
 ia iaa;
 
 
 int main() {
  char text[] = "text";
  iaa.cpuleer(text); // regrist the text in de database
  string returntext = iaa.cpureturn(); // returns a text from the database 
  iaa.cpuregistro(text) // another void for register
  cout << returntext;
  }
```
**Note:** this version its in alpha can be big changed (include the sintax)

More info of the sintax in the wiki
