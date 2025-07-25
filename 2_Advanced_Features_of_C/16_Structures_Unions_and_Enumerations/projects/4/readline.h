#ifndef READLINE_H
#define READLINE_H

/**********************************************************
 * read_line: Skips leading white-space characters, then  *
 *            reads the reminder of the input line and    *
 *            stores it in str. Truncates the line if its *
 *            length exceeds. Returns the number of       *
 *            characters stored.                          *
 **********************************************************/
int read_line(char str[], int n);

#endif
