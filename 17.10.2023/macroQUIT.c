#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command

#define DEFINE_COMMAND(NAME, TYPE) \
    void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(quit, internal) {
    printf("Internal quit command\n");
}

DEFINE_COMMAND(quit, external) {
    printf("External quit command\n");
}

int main() {
    internal_quit_command();
    external_quit_command();

    return 0;
}
