In this final project, participants executed a comprehensive multi-stage exploit targeting the program "final" on IP "167.172.144.44" and port "9999".
Beginning with booting up QEMU to launch kernel exploitation, essential steps included identifying key addresses in the PLT and GOT, leaking information such as the canary value and snprintf@libc address, and calculating the system@libc address.
The payload assembly involved a stack overflow attack with a magic number of "112" characters, followed by a GOT overwrite attack to embed the system@libc address into the payload.
The final step incorporated the "libc_str" value to invoke the system() function, ultimately gaining access to the remote server and discovering the flag.
Despite some unnecessary steps, the project successfully demonstrated a comprehensive multi-stage exploit, offering valuable insights into real-world security vulnerabilities and exploitation strategies.
