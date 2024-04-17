#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Define anonymous struct for Date
struct Date {
    int day;
    int month;
    int year;
    struct {
        int hour;
        int minute;
    } time;
};

// Define struct for Participant
struct Participant {
    char first_name[20];
    char middle_name[20];
    char last_name[20];
    char email[50];
    char phone[15];
};

// Define struct for Response
struct Response {
    struct Participant participant;
    bool will_participate;
};

// Define struct for Cause
struct Cause {
    char title[50];
    char description[100];
    struct Date event_date;
    struct Response participants[100];
    int num_participants;
};

// Define typedef for Cause
typedef struct Cause Cause;

// Function to print date
void print_date(struct Date *date) {
    printf("%02d/%02d/%04d %02d:%02d\n", date->day, date->month, date->year, date->time.hour, date->time.minute);
}

// Function to print participant
void print_participant(struct Participant *participant) {
    printf("Name: %s %s %s\n", participant->first_name, participant->middle_name, participant->last_name);
    printf("Email: %s\n", participant->email);
    printf("Phone: %s\n", participant->phone);
}

// Function to print response
void print_response(struct Response *response) {
    print_participant(&response->participant);
    printf("Will participate: %s\n", response->will_participate? "Yes" : "No");
}

// Function to print cause
void print_cause(Cause *cause) {
    printf("Title: %s\n", cause->title);
    printf("Description: %s\n", cause->description);
    print_date(&cause->event_date);
    printf("Participants:\n");
    for (int i = 0; i < cause->num_participants; i++) {
        print_response(&cause->participants[i]);
    }
}

int main() {
    // Initialize first cause
    Cause cause1 = {
       .title = "Feed the Hungry",
       .description = "Help provide meals for the homeless and hungry in our community.",
       .event_date = {
           .day = 15,
           .month = 3,
           .year = 2023,
           .time = {
               .hour = 11,
               .minute = 0
            }
        },
       .num_participants = 2
    };
    strcpy(cause1.participants[0].participant.first_name, "John");
    strcpy(cause1.participants[0].participant.middle_name, "Doe");
    strcpy(cause1.participants[0].participant.last_name, "Jr.");
    strcpy(cause1.participants[0].participant.email, "johndoe@example.com");
    strcpy(cause1.participants[0].participant.phone, "555-1234");
    cause1.participants[0].will_participate = true;
    strcpy(cause1.participants[1].participant.first_name, "Jane");
    strcpy(cause1.participants[1].participant.middle_name, "Doe");
    strcpy(cause1.participants[1].participant.last_name, "Sr.");
    strcpy(cause1.participants[1].participant.email, "janedoe@example.com");
    strcpy(cause1.participants[1].participant.phone, "555-5678");
    cause1.participants[1].will_participate = false;

    // Initialize second cause
    Cause cause2 = {
       .title = "Clean Up the Park",
       .description = "Help clean up the local park and make it a safer and more enjoyable place for everyone.",
       .event_date = {
           .day = 22,
           .month = 3,
           .year = 2023,
           .time = {
               .hour = 9,
               .minute = 0
            }
        },
       .num_participants = 3
    };
    strcpy(cause2.participants[0].participant.first_name, "Alice");
    strcpy(cause2.participants[0].participant.middle_name, "Smith");
    strcpy(cause2.participants[0].participant.last_name, "Cooper");
    strcpy(cause2.participants[0].participant.email, "alicesmith@example.com");
    strcpy(cause2.participants[0].participant.phone, "555-9012");
    cause2.participants[0].will_participate = true;
    strcpy(cause2.participants[1].participant.first_name, "Bob");
    strcpy(cause2.participants[1].participant.middle_name, "Johnson");
    strcpy(cause2.participants[1].participant.last_name, "Eca");
    strcpy(cause2.participants[1].participant.email, "bjohnson@example.com");
    strcpy(cause2.participants[1].participant.phone, "555-3456");
    cause2.participants[1].will_participate = false;
    strcpy(cause2.participants[2].participant.first_name, "Charlie");
    strcpy(cause2.participants[2].participant.middle_name, "Brown");
    strcpy(cause2.participants[2].participant.last_name, "Nigger");
    strcpy(cause2.participants[2].participant.email, "charliebrown@example.com");
    strcpy(cause2.participants[2].participant.phone, "555-7890");
    cause2.participants[2].will_participate = true;

    // Print first cause
    print_cause(&cause1);

    // Print second cause
    print_cause(&cause2);

    return 0;
}