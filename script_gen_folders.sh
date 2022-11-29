#!/bin/bash
for i in {1..11}
do
  mkdir "Problem_$i" ;
  echo "created folder $i";
  cp template.cpp "Problem_$i/AC_solution.cpp";
  cp template.cpp "Problem_$i/TLE_solution.cpp";
  cp script_gen_tests.sh "Problem_$i/script_gen_tests.sh";
  cp script_gen_output.sh "Problem_$i/script_gen_output.sh";
  cp statement.md "Problem_$i/statement.md";
  echo "added files to folder $i";
done
