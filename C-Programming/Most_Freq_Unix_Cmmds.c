/*
 Author: C-Kuzy
 Description: Command bank of the Most Frequent Unix Commands
 Course: COP 3514 --- Program Design
*/

// unix_cmds.c — CD's cheat sheet of Unix moves, C-style
#include <stdio.h>    // used for printf, perror
#include <stdlib.h>   // used for system, exit
#include <unistd.h>   // used for chdir, getcwd

int main() { // main function
    // list files, plain and simple
    system("ls -la");

    // show current directory, no fluff
    system("pwd");

    // who’s logged in, just the facts
    system("who");

    // print env vars, because context matters
    system("printenv");

    // make a new folder, no drama
    system("mkdir demo_dir");

    // jump into it, like you mean it
    chdir("demo_dir");

    // create a file, touch and go
    system("touch sample.txt");

    // write something in it, quick and dirty
    system("echo 'Hello, CD' > sample.txt");

    // read it back, verify
    system("cat sample.txt");

    // move it, because structure matters
    system("mv sample.txt ../sample_moved.txt");

    // delete the folder, clean exit
    chdir("..");
    system("rmdir demo_dir");

    // remove the file, no trace
    system("rm sample_moved.txt");

    // check disk usage, keep it lean
    system("df -h");

    // memory stats, because you care
    system("free -h");

    // process snapshot, top-down view
    system("ps aux");

    // network check, ping once
    system("ping -c 1 google.com");

    // done. no errors, no noise.
    return 0;
}
