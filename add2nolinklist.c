/*
struct ListNode temp;
    temp.val = 0; temp.next = NULL;
    struct ListNode* curr = &temp;
    int remainder = 0, sum;
    while (l1 != NULL || l2 != NULL || remainder != 0) {
        sum = remainder + (l1 == 0 ? 0 : l1->val) + (l2 == 0 ? 0: l2->val);
        remainder = sum/10;
        sum %= 10;
        curr->next = malloc(sizeof(struct ListNode));
        curr->next->next = NULL;
        curr->next->val = sum;
        curr = curr->next;
        l1 = (l1 == 0 ? 0 : l1->next);
        l2 = (l2 == 0 ? 0 : l2->next);
    }
    return temp.next;
}

*/

/*

struct ListNode *head = NULL, *tail = NULL;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;
        sum %= 10;

        struct ListNode *node = malloc(sizeof(struct ListNode));
        node->val = sum;
        node->next = NULL;

        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }

        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;
    }

    return head;
}

*/