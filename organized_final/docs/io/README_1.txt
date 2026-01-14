What's really happening?
Run #1: When std::cin >> x; is encountered, the program will wait for input.
Enter the value 4. The input 4\n goes into the input buffer, 
and the value 4 is extracted to variable x.

When std::cin >> y; is encountered, the program will again wait for input.
Enter the value 5. The input 5\n goes into the input buffer, and 
the value 5 is extracted to variable y. 
Finally, the program will print You entered 4 and 5.

There should be nothing surprising about this run.

Run #2: When std::cin >> x is encountered, the program will wait for input.
Enter 4 5. The input 4 5\n goes into the input buffer, 
but only the 4 is extracted to variable x (extraction stops at the space).

Source = learncpp.com
