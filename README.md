<h1>Simple Shell</h1>
<h2>Description</h2>
<p>This shell project done by Ivy and Anna will demonstrate how a simple UNIX command interpreter was created.</p>
<h2>Compiling requirements:</h2>
<p>gcc -Wall -Werror -Wextra -pedantic -std=gnu89</p>
<h2>Output requirements:</h2>
<p>The program must have the exact same output as sh (/bin/sh) as well as the exact same error output.</p>
<h2>How the program should work in interactive mode:</h2>
<p>$ ./hsh<br>
($) /bin/ls<br>
hsh main.c shell.c<br>
($)<br>
($) exit<br>
$<br>
</p>
<h2>How the program should work in non-interactive mode:</h2>
<p>$ echo "/bin/ls" | ./hsh<br>
hsh main.c shell.c test_ls_2<br>
$<br>
$ cat test_ls_2<br>
/bin/ls<br>
/bin/ls<br>
$<br>
$ cat test_ls_2 | ./hsh<br>
hsh main.c shell.c test_ls_2<br>
hsh main.c shell.c test_ls_2<br>
$<br>
</p>
<h2>Allowed functions:</h2>
<ol>
<li>access</li>
<li>chdir</li>
<li>close</li>
<li>closedir</li>
<li>execve</li>
<li>exit</li>
<li>fflush</li>
<li>fork</li>
<li>free</li>
<li>getcwd</li>
<li>getline</li>
<li>getpid</li>
<li>isatty</li>
<li>kill</li>
<li>malloc</li>
<li>open</li>
<li>opendir</li>
<li>perror</li>
<li>read</li>
<li>readdir</li>
<li>signal</li>
<li>stat</li>
<li>lstat</li>
<li>fstat</li>
<li>strtok</li>
<li>wait</li>
<li>waitpid</li>
<li>wait3</li>
<li>wait4</li>
<li>write</li>
<ol>
<h2>The program requirements:</h2>
<ol>
<li>Write a UNIX command line interpreter.</li>
</ol>
<h2>How the program should work in interactive mode:</h2>
<h2>How the program should work in non-interactive mode:</h2>
