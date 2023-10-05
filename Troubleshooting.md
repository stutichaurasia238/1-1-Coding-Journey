# Troubleshooting C++ Program Execution in Visual Studio Code

## Issue Description

**Symptoms:** Describe the issue you encountered when trying to compile and run a C++ program in Visual Studio Code (VSCode). Include any error messages and context that can help others understand the problem.

## Resolution Methods

### Way 1: Without Using the Run Button

**Step 1:** Open the terminal in VSCode.

**Step 2:** Compile your C++ program using the following command:

```bash
g++ your_program.cpp -o your_program
```

**Step 3:** Execute your program by entering the following command:

```bash
./your_program
```

**Step 4:** You can now provide the required input to your program through the terminal.

**Step 5:** Observe the output from your program.

### Way 2: With Using the Run Button

**Step 1:** Configure Input Redirection in VSCode:

- Open your VSCode settings (File > Preferences > Settings).
- Search for "code runner" in the search bar.
- Find the "Code-runner: Executor Map" setting and click "Edit in settings.json."
- Add a custom execution command with input redirection:

```json
"code-runner.executorMap": {
    "cpp": "g++ $fullFileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt.exe"
}
```

- Also, add the following setting to your `settings.json` file:

```json
{
    // ...
    "code-runner.runInTerminal": true
    // ...
}
```

**Step 2:** Open your C++ source code file (`your_program.cpp`) in VSCode.

**Step 3:** Use the "Run Code" button or the Code Runner extension to execute your C++ program.

**Step 4:** The program will run in the integrated terminal, allowing you to provide input interactively and view the output.

## Conclusion

In this documentation, we have addressed an issue related to running C++ programs in Visual Studio Code. Two resolution methods were provided: one for running programs without using the run button and another for running programs with input redirection using the run button.

By following these steps, you should be able to compile, run, and interactively provide input to your C++ programs in Visual Studio Code.

---

**Note:** Please ensure that your C++ source code file (`your_program.cpp`) is saved in the same directory as the input file (`input.txt`) if used.
```

You can replace `your_program.cpp` and `input.txt` with the actual filenames you used in your scenario. Additionally, customize the content as needed to reflect your specific issue and resolution.