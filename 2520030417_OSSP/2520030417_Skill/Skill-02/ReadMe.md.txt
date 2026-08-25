# SKILL 2

## TITLE

Interactive Command Input Loop and Keyboard Handling

## OBJECTIVE

To implement an interactive main loop that displays a prompt, captures keyboard input, handles exit conditions, processes Backspace and Enter keys, manages an input buffer, supports multi-character commands, and tests user interaction.

## PROGRAM

Program.c

## FEATURES

1. Main interactive loop.
2. Prompt display.
3. Character-by-character keyboard input.
4. Input buffer management.
5. Backspace handling.
6. Enter key processing.
7. Multi-character command support.
8. Exit and quit conditions.
9. Repeated user interaction.

## SYSTEM CALLS

- `read()` – Reads one character from standard input.
- `write()` – Writes characters to standard output.


## TESTING

The program was tested using normal input, multi-character commands, Backspace handling, Enter key processing, and exit conditions.

## RESULT

The interactive loop successfully captured keyboard input, handled Backspace and Enter keys, maintained the input buffer, supported multi-character commands, and terminated when an exit command was entered.

## CONCLUSION

The Skill 2 implementation demonstrates how an interactive command-line input loop manages keyboard input using C and low-level `read()` and `write()` system calls.