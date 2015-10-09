====================================
=====README-LABASS3-DICTIONARY======
====================================

1. Compiling

To compile the application, simply
run "make" from the program's
working directory in a terminal.
Program will compile with no issues.

If you wish to remove any additional
unnecessary files, type "make clean"
to remove the executable and any
.o files generated with the build
process.

2. Running

Simply type "./dictionary < testfile.txt"
in a terminal to run the application.
The application will scan the text file
for words that it can pick out, then
display them to you, as well as how
often they occur in the file. Words
are not sorted, however, it is case
sensitive (That is, "Can" and "can"
will be detected as seperate words).

Try editing the testfile.txt with
different words and see how many
times it can pick up your different
words!

Additionally, by default the application
only supports a maximum word length
of 20 characters, and up to 255 words at
any given time. You can adjust this by
editing the values of lines 16 and 17
of main.cpp to change these restrictions,
respectively.

3. Credit
- Franco Carlacci
	Initial program code

Written by Jordan Karpan (5041823)