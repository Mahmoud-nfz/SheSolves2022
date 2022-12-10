#!/bin/bash

# if not installed markdown-pdf
# sudo npm install -g markdown-pdf
for i in {01..11}
do
  markdown-pdf "Problem_$i/statement.md" -o "./pdf_statements/Problem_$i.pdf" ;
  echo "generated pdf $i";
done

for i in {01..02}
do
  markdown-pdf "Precontest_Problem_$i/statement.md" -o "./pdf_statements/Precontest_Problem_$i.pdf" ;
  echo "generated pdf $i precontest";
done
