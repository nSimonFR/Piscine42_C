touch -A -000001 bomb.txt
echo $(stat -f %a bomb.txt)