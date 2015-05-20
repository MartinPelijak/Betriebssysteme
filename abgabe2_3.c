#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main() {
	int i, pid, n = 3;
	pid = fork();

	for (i = 0; i < n; i++) {

		if (pid == 0) {
			printf("Kind %2d: %d von %d\n", i, getpid(), getppid());
			sleep(2);
		}
		else
			printf("Vater %2d: %d von %d\n", i, getpid(), getppid());
		if (i > 0){
			pid = fork();
			sleep(2);
		}
	}

}