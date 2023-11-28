#!/bin/bash
cpp_wiki()
{ 
    read -p "example keyword ? : " word_k
    echo "   "
    if [ ${word_k} = "math" ]; then
      cat "/home/souad/Desktop/GitHub_/Embedded-Linux-/Bash-Scripting-Examples/task/wiki_bash/cppwiki/math.txt"   
      echo "   "
    elif [ ${word_k} = "hello" ]; then
      cat "/home/souad/Desktop/GitHub_/Embedded-Linux-/Bash-Scripting-Examples/task/wiki_bash/cppwiki/hello.txt"
      echo "   "
    fi   
}
python_wiki()
{
    read -p "example keyword ? : " word_k
    echo "   "
    if [ ${word_k} = "hello" ]; then
      cat "/home/souad/Desktop/GitHub_/Embedded-Linux-/Bash-Scripting-Examples/task/wiki_bash/pythonwiki/hello.txt"
      echo "   "
    elif [ ${word_k} = "forloop" ]; then
      cat "/home/souad/Desktop/GitHub_/Embedded-Linux-/Bash-Scripting-Examples/task/wiki_bash/pythonwiki/forloop.txt"
      echo "   "
    fi
}
linux_wiki()
{
    read -p "example keyword ? : " word_k
    echo "   "
    if [ ${word_k} = "ls" ]; then
     cat "/home/souad/Desktop/GitHub_/Embedded-Linux-/Bash-Scripting-Examples/task/wiki_bash/linuxcommand/ls_.txt"
     echo "   "
    elif [ ${word_k} = "cat" ]; then
      cat "/home/souad/Desktop/GitHub_/Embedded-Linux-/Bash-Scripting-Examples/task/wiki_bash/linuxcommand/cat_.txt"
      echo "   "
    elif [ ${word_k} = "touch" ]; then 
      cat "/home/souad/Desktop/GitHub_/Embedded-Linux-/Bash-Scripting-Examples/task/wiki_bash/linuxcommand/touch.txt"
      echo "   "
    elif [ ${word_k} = "mkdir" ]; then
      cat "/home/souad/Desktop/GitHub_/Embedded-Linux-/Bash-Scripting-Examples/task/wiki_bash/linuxcommand/mkdir.txt"
      echo "   "
    elif [ ${word_k} = "rm" ]; then 
      cat "/home/souad/Desktop/GitHub_/Embedded-Linux-/Bash-Scripting-Examples/task/wiki_bash/linuxcommand/rm.txt"
      echo "   "
    elif [ ${word_k} = "cp" ]; then 
      cat "/home/souad/Desktop/GitHub_/Embedded-Linux-/Bash-Scripting-Examples/task/wiki_bash/linuxcommand/cp.txt"
      echo "   "
    fi
}

read -p "choose c++ - python - linux : " choosed
if [ ${choosed} = "c++" ]; then
    cpp_wiki
    echo "   "
elif [ ${choosed} = "linux" ]; then
    linux_wiki
    echo "   "
elif [ ${choosed} = "python" ]; then 
    python_wiki
    echo "   "
fi  
