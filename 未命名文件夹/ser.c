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
	printf("11\n");   
    key_t shm_key = ftok("tmp", 7); 
    if(shm_key == -1){
        perror("ftok shm");
        return -1; 
    }
	printf("%d\n",shm_key);   
    int shmid = shmget(shm_key, 1024, IPC_CREAT | IPC_EXCL | 0755);
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
    int semid = semget(sem_key, 2, IPC_CREAT | IPC_EXCL | 0755); //申请2个共享资源
    if(semid == -1){
        perror("semget");
        shmdt(ch);
        shmctl(shmid, IPC_RMID, 0);
        return -1;
    }

    union semun init;
    init.val = 0;
    semctl(semid, 0, SETVAL, init);  //初始化信号量，下标为0的初始化为0个
    semctl(semid, 1, SETVAL, init);  //下标为1的初始化为0个 
    struct sembuf p = {0, -1, 0};
    struct sembuf v = {1, 1, 0};

    while(1){
        printf("Ser :>");
        scanf("%s", ch);
        if(strncmp(ch, "quit", 4) == 0){
            shmdt(ch);   
           break;
        }
        semop(semid, &v, 1);

        semop(semid, &p, 1);
        printf("Cli :>%s\n", ch);
    }

    int res = shmctl(shmid, IPC_RMID, 0);
    if(res == -1){
        printf("Remove shm Fail\n");
        return -1;
    }
    printf("Remove shm OK\n");

    return 0;

}
