# 42_libft

### ft_atoi
конвертирует начальную часть строки в целое число  
converts the initial portion of the string to int     
```int		ft_atoi(const char *s);```

### ft_bzero
устанавливает первые n байтов области, начинающейся с s в нули (пустые байты).    
Эта функция устарела, поэтому замените ее функцией memset в новых программах.   
writes n zeroed bytes to the string s.  
```void	ft_bzero(void *s, size_t n);```

### ft_calloc
распределяет память для массива размером count, каждый элемент которого равен size байтов,   
и возвращает указатель на распределенную память.   
Память при этом "очищается" =Все биты распределенной памяти инициализируются нулями.    
allocates enough space for count objects (size bytes of memory each) 
and returns a pointer to the allocated memory.  
The allocated memory is filled with bytes of value zero.  
```void	*ft_calloc(size_t count, size_t size);```

### ft_isalnum
проверяет символ на принадлежность к текстовым символам; вызов эквивалентен isalpha(c) || isdigit(c)  
tests for any character for which isalpha(3) or isdigit(3) is true.  
```int		ft_isalnum(int c);```

### ft_isalpha
проверяет символ (который должен иметь значение unsigned char или EOF) 
на принадлежность к алфавитным символам  
alphabetic character test  
```int		ft_isalpha(int c);```

### ft_isascii
проверяет, является ли c 7-битным unsigned char, значение которого попадает в таблицу символов ASCII  
tests for an ASCII character  
```int		ft_isascii(int c);```

### ft_isdigit
проверяет, является ли символ цифрой (от нуля до 9-и)  
tests for a decimal digit character  
```int		ft_isdigit(int c);```

### ft_isprint
проверяет, является ли символ печатаемым (включая пробел)  
tests for any printing character  
```int		ft_isprint(int c);```

### ft_itoa
Выделяет (с помощью malloc) и возвращает строку, представляющую целое число, 
полученное в качестве аргумента. Отрицательные числа нужно обрабатывать  
Allocates (with malloc(3)) and returns a string 
representing the integer received as an argument  
```char	*ft_itoa(int n);```

### ft_memchr
ищет символ c в первых n байтах той области памяти, на которую указывает s. 
Совпадение первого байта с c (представленным как беззнаковый символ) останавливает выполнение операции.
Возвращает указатель на совпадающий байт или NULL, если символ не найден в данной области памяти.  
locates the first occurrence of c in string s.
returns a pointer to the byte located or NULL   
```void    *ft_memchr(const void *s, int c, size_t n);```

### ft_memcmp
сравнивает первые n байтов областей памяти s1 и s2. 
Возвращается целое число, меньшее, большее нуля или равное ему, если определено, 
что s1 меньше, больше, чем s2, или равно ему.   
compares byte string s1 against byte string s2.  
Both strings are assumed to be n bytes long.
returns the difference between the first two differing bytes   
```int		ft_memcmp(const void *s1, const void *s2, size_t n);```

### ft_memcpy
копирует n байтов из области памяти src в область памяти dst. 
возвращает указатель на dst.
Области памяти не могут пересекаться. Используйте memmove(3), если области памяти перекрываются.
copies n bytes from memory area src to memory area dst.  
If dst and src overlap, behavior is undefined.(use memmove).
returns the original value of dst.  
```void	*ft_memcpy(void *dst, const void *src, size_t n);```

### ft_memmove
копирует n байтов из области памяти src в облать памяти dst. 
Области памяти могут перекрываться, возвращает указатель на dst.  
copies n bytes from string src to string dst.  
The two strings may overlap; returns the original value of dst.  
```void	*ft_memmove(void *dst, const void *src, size_t n);```

### ft_memset
заполняет первые n байтов той области памяти, на которую указывает s, постоянным байтом c.  
возвращает указатель на область памяти s.   
writes n bytes of value c to the string s  
```void	*ft_memset(void *s, int c, size_t n)```

### ft_putchar_fd
Выводит символ c в указанный файловым дескриптором поток.  
Outputs the character ’c’ to the given file descriptor  
```void	ft_putchar_fd(char c, int fd);```

### ft_putendl_fd
Выводит строку s в указанный файловым дескриптором поток, за которой следует новая строка.  
Outputs the string ’s’ to the given file descriptor followed by a newline.  
```void	ft_putendl_fd(char *s, int fd);```

### ft_putnbr_fd
Выводит целое число n в указанный файловым дескриптором поток.  
Outputs the integer ’n’ to the given file descriptor.  
```void	ft_putnbr_fd(int n, int fd);```

### ft_putstr_fd
Выводит строку s в указанный файловым дескриптором поток.  
Outputs the string ’s’ to the given file descriptor followed by a newline.  
```void	ft_putstr_fd(char *s, int fd);```

### ft_split
Выделяет (с помощью malloc) и возвращает массив строк, полученных путем разделения s с использованием 
символа c в качестве разделителя. Массив должен заканчиваться указателем NULL.  
Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ 
using the character ’c’ as a delimiter. The array must end with a NULL pointer.  
```char	**ft_split(char const*s, char c);```

### ft_strchr
возвращает указатель на местонахождение первого совпадения с символом c в строке s.
Возвращает указатель на совпадения с соответствующим символом, а если символ не найден, то возвращают NULL.  
locates the first occurrence of c in the string s. 
return a pointer to the located character or NULL   
```char	*ft_strchr(const char *s, int c);```

### ft_strdup
возвращает указатель на новую строку, являющуюся дубликатом строки s. 
Память под новую строку выделятся с помощью malloc(3) и может быть высвобождены с помощью free(3).  
allocates sufficient memory for a copy of the string s1, 
does the copy, and returns a pointer to it.  
```char	*ft_strdup(const char *src);```

### ft_striteri
Применяет функцию f к каждому символу строки s   
Applies the function ’f’ on each character of the string passed as argument, 
passing its index as first argument.   
```void ft_striteri(char *s, void (*f)(unsigned int, char*));```

### ft_strjoin
Выделяет (с помощью malloc) и возвращает новую строку, которая является результатом объединения s1 и s2.
Возвращаемое значение - Новая строка. NULL, если выделение не удалось.  
Allocates (with malloc(3)) and returns a new string, 
which is the result of the concatenation of ’s1’ and ’s2’.  
```char	*ft_strjoin(char const *s1, char const *s2);```

### ft_strlcat
Функция strlcpy копирует из строки src в буфер dst не более чем size - 1 символов и гарантированно 
устанавливает в конец строки нулевой символ. strlcat делает то же самое, однако копирование ведётся 
не в начало dst, а таким образом, чтобы продолжить строку, на которую указывает dst. 
В случае, когда dst указывает на нуль-символ, поведение функций эквивалентно.
strlcpy возвращает размер строки по адресу src. strlcat возвращает суммарную длину строк по адресам src 
и dst. Возвращаемое значение не зависит от того, удалось скопировать строку полностью или нет; 
это позволяет легко определить что буфер назначения слишком мал для копируемой строки.
appends string src to the end of dst.    
It will append at most dstsize - strlen(dst) - 1 characters.  
return the total length of the string they tried to create.    
```size_t	ft_strlcat(char *dst, const char *src, size_t size);```

### ft_strlcpy
copies up to dstsize - 1 characters from the string src to dst
return length of src  
```size_t	ft_strlcpy(char *dst, const char *src, size_t size);```

### ft_strlen
вычисляет длину строки s. Завершающий символ `\0'не учитывается.    
Return the length of the string s  
```size_t	ft_strlen(const char *s);```

### ft_strmapi
Применяет функцию f к каждому символу строки s для создания новой строки (с помощью malloc) 
в результате последовательных применений f.
Возвращаемое значение - Строка, созданная последовательным применением 'f'. 
Возвращает NULL, если выделение не удалось.  
Applies the function ’f’ to each character of the string ’s’, 
and passing its index as first argument to create a new string (with malloc)  
```char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));```

### ft_strncmp
Функция strcmp() сравнивает две строки: s1 и s2. Она возвращает целое число, которое меньше, 
больше нуля или равно ему, если s1 соответственно меньше, больше или равно s2.
Функция strncmp() работает аналогичным образом, но сравнивает только первые n символов строки s1.  
Compares the null-terminated strings s1 and s2 (not more than n characters).  
return an integer=difference between s1 and s2.    
```int		ft_strncmp(const char *s1, const char *s2, size_t n);```

### ft_strnstr
Locates the first occurrence of string to_find in the string str, 
where not more than len characters are searched.    
```char    *ft_strnstr(const char *str, const char *to_find, size_t len);```

### ft_strrchr
Функция strchr() возвращает указатель на местонахождение первого совпадения с символом c в строке s.
Функция strrchr() возвращает указатель на местонахождение последнего совпадения с символом c в строке s.  
locates the last occurrence of c (converted to a char) in the string s. 
return a pointer to the located character or NULL   
```char    *ft_strrchr(const char *s, int c);```

### ft_strtrim
Выделяет (с помощью malloc) и возвращает копию s1 с символами, указанными в set, 
удаленными из начала и конца строки.  
Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
specified in ’set’ removed from the beginning and the end of the string.  
```char    *ft_strtrim(char const *s1, char const *set);```

### ft_substr
Выделяет(с помощью malloc) и возвращает подстроку из строки s. 
Подстрока начинается с индекса start и имеет максимальный размер len.
Возвращаемое значение -	Подстрока. NULL, если выделение не удалось.  
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.  
```char    *ft_substr(char const *s, unsigned int start, size_t len);```

### ft_tolower
toupper() преобразует символ c в заглавный, если это возможно.
tolower() преобразует символ c в строчной, если это возможно.
Если c - это не unsigned char или равен EOF, поведение упомянутых функций непредсказуемо.  
Возвращается преобразованный символ или c, если преобразование невозможно.  
converts an upper-case letter to the corresponding lower-case letter.   
```int     ft_tolower(int c);```

### ft_toupper
converts a lower-case letter to the corresponding upper-case letter.   
```int     ft_toupper(int c);```


### CHECK: (clone in a folder near your libft)
git clone https://github.com/alelievr/libft-unit-test.git   make f  
git clone https://github.com/Othello42/Othello42-libft-tester.git  make  

! https://github.com/xicodomingues/francinette
