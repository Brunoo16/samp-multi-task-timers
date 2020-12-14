# Multi Task Timers

Note: I was just playing around, you obviously shouldn't use this!

Call more than one function with a single timer, play around with arguments, there is no limit. You can call any function, and public keyword is not a requirement.

## Macros:
```pawn
Create_MultiTask:TaskName("Func1(), Func2(), Func3()");
Create_MultiTaskEx:TaskName("WithParams(a), WithParams2(b, c, a)", "a,b,c");

Start_MultiTask:TaskName(Time_In_MS, repeat = true / false);
Start_MultiTaskEx:TaskName(Time_In_MS, repeat = true / false, "iii", 1, 2, 3);

Stop_MultiTask:TaskName;
GetID_MultiTask(TaskName);
```
# Example Usage - No Params:
```pawn

Create_MultiTask:example("func1(), func2(), func3(), func4()");

public OnGameModeInit()
{
     Start_MultiTask:example(1000, false);
     return 1;
}

func1() return print("function 1");
func2() return print("function 2");
func3() return print("function 3");
func4() return print("function 4");
```

# Example Usage - With Params:
```pawn

Create_MultiTaskEx:example("teste(a,c,b,d)", "a,b,c,Float:d");

public OnGameModeInit()
{
    Start_MultiTaskEx:example(1000, false, "iiif", 1,2,3,3.5);
    return 1;
}

teste(v, s, m, Float:l) return printf("%i %i %i %f",v, s, m, l); //output: 1 3 2 3.500000
```
