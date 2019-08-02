# Connecting to Genuse Servers (MacOS)
This is a tutorial on how to connect to the Lyle general purpose machines so that you can have a consistent environment to compile and run your programs. 

## Prerequisites
1. Make sure you have a Lyle account and password setup for the Genuse Lyle Servers. Your username will likely be the first part of your email. For instance if your email is jsmith@smu.edu your username would be `jsmith`.
2. Download `FUSE for macOS` and `sshfs` from https://osxfuse.github.io

## Connecting to Lyle Servers (ssh)
SSH (secure shell) is a way to establish a secured connection over an unsecure network. Practically every Unix / Linux System comes with ssh configured and installed. SSH allows users and programmers like yourself to safely connect to and gain access to remote computers or servers. Following these steps will walk you through how to use ssh to connect to the Lyle Genuse Servers.
1. First open up the Terminal app by going to `Applications/Utilities/Terminal` or by searching for it in the spotlight (shortcut: command + space). 
2. In your terminal window, type the following: 
```
ssh <username>@genuse26.lyle.smu.edu
```
where `<username>` is your Lyle account username. for example `jsmith` would type `ssh jsmith@genuse26.lyle.smu.edu`.

3. Enter your password (Note: Your password will not appear as you type for security purposes) then Press `Enter`
4. Type `ls` to list all the files in your current directory. 
5. You are now connected to a Genuse Server. You may run any Unix command in the terminal shell to communicate with that server. For example, lets create a folder for your class material: 
    - Type `mkdir cs1342` then press enter
    - Now type `ls` and you shoul see the newly created directory called `cs1342`
    - Type `cd cs1342` to enter that directory. 
    - You may now create files inside this directory and access them later through connection to Genuse. 
6. When complete, type `exit` to exit the Genuse Server shell and return to your local terminal shell.

## Connecting to Lyle Servers (sshfs)
SSHFS (SSH Filesystem) allows users to mount a remote filesystem using SFTP to their computer. This enables programmers to make edits to a file on a remote server / computer using any software available on their local machine as that file is now directly mounted (shared) between the 2 file systems. 

Using SSHFS is similar to using SSH. You will use it by opening a terminal window and running the following commands to mount a remote filesystem to your computer's filesystem.

#### Pre-requisites
In order to mount a remote filesystem, you must know a specific directory or folder on the remote server that you will mount. You must also create a folder on your local machine on which to mount that directory to.

#### SSHFS Walkthrough
In the following walkthrough, we will be mounting your remote `cs1342` directory previously created in the SSH section to a local directory on your Desktop called `cs1342Local`.

1. First lets create the local directory that we will mount to. Open a terminal window and type the following: 
```
cd ~/Desktop/
mkdir cs1342Local
```
2. You should now see a directory called `cs1342Local` on your Desktop. Next we will mount the remote directory `cs1342` to the local directory we just created. 

3. Enter the following to mount the remote directory to your machine replacing `<username>` with your username (the same one you used for ssh).
```
sshfs <username>@genuse50.lyle.smu.edu:cs1342 cs1342Local/
```
4. Enter the same password you used for SSH. Then press `Enter`
5. Now you have successfully mounted the remote directory `cs1342` onto your local machine. Lets create a file and see that it is both reflected on our local directory and on genuse!
6. Create a new directory and add a program file to `cs1342Local`:
```
cd cs1342Local/
mkdir exampleProgram/
cd exampleProgram/
touch main.cpp
```
7. We have now created a new .cpp file in our mounted directory under a new folder called `exampleProgram`. 
8. Now ssh into genuse to ensure that those changes are reflected in the remote genuse machine
```
ssh <username>@genuse50.lyle.smu.edu
(enter password)
cd cs1342/
ls
```
9. After `ls` you should see the new directory called `exampleProgram` and you can also `cd` into that directory to see the `main.cpp` file we created. Now type `exit` to return to your local terminal shell
10. After you are done modifying files on the remote server, it is important to unmount the mounted directory and end the connection between your computer and the remote server. To do so return to your desktop directory and use the `umount` command to unmount that directory. 
```
cd ~/Desktop/
umount cs1342Local/
```
Now your cs1342Local directory should appear empty as there is no longer a connection between your computer and the remote genuse server.
