#define MAX_NAME_LEN 40
typedef enum {EM, SS} Type;

struct pinball_machine {
    char name[MAX_NAME_LEN+1];
    int year;
    Type type;
    int players;
};

int main(void)
{
    struct pinball_machine pm;

    return 0;
}
