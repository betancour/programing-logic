## Complete List of Data Types in C Programming Language
##          Formating Code 

|Type                   |Size        |Lower Limit               |Upper Limit                | Number  | Character | Characters | Octal   | Hexadecimal| Scientific Notation|
| --------              | --------   | --------                 | --------                  | ------  | --------- | ---------- | ------  | ---------- | ------------------ |
| bool                  |1 byte      |false / 0                 |true / 1                   |  %d     |           |            |%o       |%x          |                    |
| char                  |1 byte      |-128                      |127                        |  %d     |%c         |%s          |%o       |%x          |                    |
| unsigned char         |2 bytes     |0                         |255                        |  %d     |           |            |%o       |%x          |                    |
| short int             |2 bytes     |-32,768                   |32,767                     |  %d     |           |            |%o       |%x          |                    |
| unsigned short int    |4 bytes     |0                         |65,535                     |  %u     |           |            |%o       |%x          |                    |
| int                   |4 bytes     |-2,147,483,648            |2,147,483,6477             |  %d     |           |            |%o       |%x          |                    |
| unsigned int          |4 bytes     |0                         |4,294,967,295              |  %d     |           |            |%o       |%x          |                    |
| long int              |4 bytes     |-2,147,483,648            |2,147,483,647              |  %ld    |           |            |%o       |%x          |                    |
| unsigned long int     |8 bytes     |0                         |4,294,967,295              |  %lu    |           |            |%o       |%x          |                    |
| long long int         |8 bytes     |-9,223,372,036,854,775,808|9,223,372,036,854,775,807  |  %lld   |           |            |%o       |%x          |                    |
| unsigned long long int|8 bytes     |0                         |18,446,744,073,709,551,615 |  %llu   |           |            |%o       |%x          |                    |
| float                 |4 bytes     |+/- 3.4e-38               |+/- 3.4e38                 |  %f     |           |            |         |            |%e                  |
| double                |8 bytes     |+/- 1.7e-308              |+/- 1.7e308                |  %lf    |           |            |         |            |%l                  |
| long double           |8 bytes     |+/- 3.4e-4932             |+/- 3.4e4932               |  %Lf    |           |            |         |            |%Le                 |

### Note [^1] 

[^1]: that in 64-bit architecture, certain data types may occupy more space, resulting in higher lower and upper limits.