#!/bin/bash
for i in {01..11}
do
  markdown-pdf "Problem_$i/statement.md" -o "./pdf_statements/Problem_$i.pdf" ;
  echo "generated pdf $i";
done
