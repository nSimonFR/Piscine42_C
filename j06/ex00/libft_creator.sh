gcc -c ft_*.c
ar rc libft.a ft_*.o
ranlib libft.a
find . -name "ft_*.o" -delete
