# SingularVoidPtrFoobar
It's running FooBar(Divisible by 3? Print Foo. By 5? Print Bar. By 15? Itll print FooBar) but uses specifically a single void pointer for variables and NO temp variables. This includes the string "FooBar" but not  any other strings "Hello World" Because it's time consuming. 


```void *programData;``` is calloced to 8 bytes.

```
(programData) = (void *)calloc(8, sizeof(unsigned char *));
```

<hr>

```(* ((unsigned char*)(programData) + 0 ) )``` is the main loop counter


```
do
{
    //...
}
//While our programs counter is less than 100
while(++((*((unsigned char *)(programData)+0))) < 100);
```

<hr>

```(* ((unsigned char*)(programData) + 1 ) )``` up to ```(* ((unsigned char*)(programData) +  6) )``` is the string "FooBar"

```
//Store the display string
(* ((unsigned char*)(programData) + 1) )  = 'F';
(* ((unsigned char*)(programData) + 2 ) ) = 'o';
(* ((unsigned char*)(programData) + 3 ) ) = 'o';
(* ((unsigned char*)(programData) + 4 ) ) = 'B';
(* ((unsigned char*)(programData) + 5 ) ) = 'a';
(* ((unsigned char*)(programData) + 6 ) ) = 'r';
```

<hr>


```(* ((unsigned char*)(programData) + 7 ) )``` is for a secondary counter


```

for
(
    (* ((unsigned char*)(programData) + 7 ) ) = 0;
    (* ((unsigned char*)(programData) + 7 ) ) < 3;
    (* ((unsigned char*)(programData) + 7 ) ) ++
)
{
  //...
}
```
<hr>
