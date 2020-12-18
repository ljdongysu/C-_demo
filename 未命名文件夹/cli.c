#include<stdio.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<sys/shm.h>

union semun{
    int val;
    struct semid_ds *buf;
    unsigned short *array;
    struct seminfo *__buf;
};

int main(void){
    key_t shm_key = ftok("tmp", 7);
    if(shm_key == -1){
        perror("ftok shm");
        return -1;
    }
    int shmid = shmget(shm_key, 0, 0);  //获取已有的共享内存id；
    if(shmid == -1){
        perror("shmget");
        return -1;
    }
    char *ch = (char *)shmat(shmid, NULL, 0);
    if(ch == (void *)-1){
        perror("shmat");
        return -1;
    }

    key_t sem_key;
    sem_key = ftok("tmp", 2);
    int semid = semget(sem_key, 0, 0);  //获取已有的信号量id；
    if(semid == -1){
        perror("semget");
        shmdt(ch);
        return -1;
    }

    union semun init;
    struct sembuf p = {1, -1, 0};
    struct sembuf v = {0, 1, 0};

    while(1){
        semop(semid, &p, 1);
        printf("Ser :>%s\n", ch);
        printf("Cli :>");
        scanf("%s", ch);
        if(strncmp(ch, "quit", 4) == 0){
            shmdt(ch);
            break;    
        }
        semop(semid, &v, 1);

    }

    return 0;
}
