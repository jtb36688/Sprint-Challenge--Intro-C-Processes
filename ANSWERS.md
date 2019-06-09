**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

Running - Process has started its lifecycle and is selected for execution by the CPU, is either running or able to be run
Waiting - Process is waiting for another event to finish occuring before running
Terminated - Process has exited and was dropped from the process table by calling wait() on its parent.
Zombie - process that exited but its state change wasn't yet acknowledge by the parent. 


**2. What is a zombie process?**

A zombie process is a process that exited but its state change wasn't yet acknowledge by the parent. 


**3. How does a zombie process get created? How does one get destroyed?**

This occurs when the parent doesnt't call wait(), and happens because the parent may need to check the resources used by the exited child process before calling wait().


**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

When compiling code you have more explicit control over how your program is run by the computer. You can make certain specifications of how things are stored in memory and how they are retrieved, which can improve performance and reliability.