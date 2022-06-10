# EZSQL

An very simple and eazy sql written in the course of the Principle of Compiler.

## Requirements

flex, bison, make and gcc (at least support c++14).
You can check the installation of which by

```bash
lex --version
yacc --version
make --version
gcc --version
```

## Build

You should build this with make.

```bash
make
```

If you don't mess around with ezsql.y, y.tab.c or y.tab.h, you should be fine.

But if you did for some reason, however, there is something you might need to do to fix in the following.

If you find yourself with error like when compiling the y.tab.o into main :

```bash
ezsql.y:21:5: error: unknown type name 'tableheader'
ezsql.y:22:27: error: expected expression
...
```

There is something that you need to fix manually. You need to put the following lines into y.tab.h right after macro
`# define YY_YY_Y_TAB_H_INCLUDED`, then make again.

```c++
#include <list>
#include "database.h"
#include "table.h"
#include "condition.h"
#include "utils.h"
```

## Syntax Supported

There are only 2 types supported: INT and CHAR(1~255).
CHAR(x) is only allow in one format: '[VALUES]' (always wrap with single quotes)
Supports recursive math calculations like +, -, *, /, -(Unary minus).
Supports recursive compare calculations like <, >, >=, <=, !=, <>, =.
Supports recursive logic calculations like AND, OR, NOT.

```sql
#Database
CREATE DATABASE [ID];
SHOW DATABASES;
DROP DATABASE [ID];
USE [ID];
#Table
CREATE TABLE [ID]([ID] [TYPE], ...);
DROP TABLE [ID];
SHOW TABLES;
#Inserts
INSERT INTO [ID]([ID], ...) VALUES ([VALUE], ...);
INSERT INTO [ID] VALUES ([VALUE], ...);
#Selects
SELECT * FROM [ID];
SELECT [ID], ... FROM [ID];
SELECT ... FROM [ID] WHERE [CONDITION];
SELECT ... FROM (SELECT ...) ...;
```
## Notes

This project is composed in a rush, so there are likely some potential bugs I have not tested. Feel free to submit them in issue. I will fix them if I am avalible.

I may improve some functions in the future.

