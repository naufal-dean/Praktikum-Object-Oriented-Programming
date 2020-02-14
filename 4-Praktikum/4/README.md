Diberikan empat buah class Expression, UnaryExpression, BinaryExpression, dan TerminalExpression. UnaryExpression merupakan ekspresi matematika yang menerima 1 parameter, BinaryExpression menerima 2 parameter, dan TerminalExpression merepresentasikan sebuah angka. Berikut file Expression.hpp dan Expression.cpp (untuk memudahkan, semua definisi dan implementasi digabung ke file yang sama, tapi jangan ditiru ya!).

kelas diagram expression

Anda diminta untuk membuat class AddExpression dan SubtractExpression yang diturunkan dari BinaryExpression, serta class NegativeExpression yang diturunkan dari UnaryExpression.

| Contoh Main | Contoh Output |
| ------ | ------ |
|<pre>e = new AddExpression(<br>  new TerminalExpression(4),<br>  new TerminalExpression(6)<br>);<br>e->solve()</pre>|10|
|<pre>e = new SubstractExpression(<br>  new TerminalExpression(4),<br>  new TerminalExpression(6)<br>);<br>e->solve()</pre>|-2|
|<pre>e = new NegativeExpression(<br>  new TerminalExpression(1)<br>);<br>e->solve()</pre>|-1|

Kumpulkan dalam Expression.zip berisi AddExpression.hpp, AddExpression.cpp, SubstractExpression.hpp, SubstractExpression.cpp, NegativeExpression.hpp, dan NegativeExpressio.cpp!