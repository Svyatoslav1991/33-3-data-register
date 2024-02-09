Task 3. Data register on templates

What should be done

Using templates, implement a simple registry class that stores arbitrary generic results for keys of a sequential type.
The keys may be repeated.

The registry must support the following operations: adding an element with a key, deleting an element with a given key, outputting all records with keys to the console, searching for elements by key.

To test the program, provide data input and command from the console:

add — add an element with a key;
remove—delete all elements with the given key;
print—print all elements with their keys on the screen;
find - find all elements by their key.
This dictionary must work with values and keys of the following types: int, double, std::string.

Recommendations

For implementation, you can use the standard std::vector template, which, in turn, will already store your key and result pairs.
The same pair of switches and values will be a class (or structure) templated by two types: a value type and a switch type.
If you wish, you can create a separate templated function with the input command and its data.
