d=$(ifconfig | grep "inet " | cut -d" " -f2 | grep -v "127.0.0.1")
if [ -f "${d}" ]
then echo "Je suis perdu!"
else echo "$d"
fi