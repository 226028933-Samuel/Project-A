#include <stdio.h>
#include <string.h>

#define MAX_ASSETS 100   // maximum number of assets

// Define a struct for assets
typedef struct {
    int assetId;
    char assetName[50];
    char assetType[50];
    float purchaseValue;
    char department[20];
    char condition[20];
} Asset;

int main() {
    Asset assets[MAX_ASSETS];
    int count = 0;   // number of assets stored
    int choice;

    do {
        printf("\n//////////////////ASSET MANAGEMENT//////////////////\n");
        printf("1. Add Asset\n");
        printf("2. Search Asset by ID\n");
        printf("3. Search Asset by Name\n");
        printf("4. Exit\n");
        printf("5. Display All Assets\n");   // new option
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < MAX_ASSETS) {
                printf("Input asset id: ");
                scanf("%d", &assets[count].assetId);

                printf("Enter asset name: ");
                scanf("%49s", assets[count].assetName);

                printf("Enter asset type: ");
                scanf("%49s", assets[count].assetType);

                printf("Enter purchase value: ");
                scanf("%f", &assets[count].purchaseValue);

                printf("Enter Department: ");
                scanf("%19s", assets[count].department);

                printf("Enter condition (good/bad): ");
                scanf("%19s", assets[count].condition);

                count++;
                printf("Asset added successfully!\n");
            } else {
                printf("Asset storage full!\n");
            }
        } 
        else if (choice == 2) {
            int searchId;
            printf("Enter asset ID to search: ");
            scanf("%d", &searchId);

            int found = 0;
            for (int i = 0; i < count; i++) {
                if (assets[i].assetId == searchId) {
                    printf("\nAsset Found:\n");
                    printf("ID: %d\n", assets[i].assetId);
                    printf("Name: %s\n", assets[i].assetName);
                    printf("Type: %s\n", assets[i].assetType);
                    printf("Value: %.2f\n", assets[i].purchaseValue);
                    printf("Department: %s\n", assets[i].department);
                    printf("Condition: %s\n", assets[i].condition);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Asset not found.\n");
        } 
        else if (choice == 3) {
            char searchName[50];
            printf("Enter asset name to search: ");
            scanf("%49s", searchName);

            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(assets[i].assetName, searchName) == 0) {
                    printf("\nAsset Found:\n");
                    printf("ID: %d\n", assets[i].assetId);
                    printf("Name: %s\n", assets[i].assetName);
                    printf("Type: %s\n", assets[i].assetType);
                    printf("Value: %.2f\n", assets[i].purchaseValue);
                    printf("Department: %s\n", assets[i].department);
                    printf("Condition: %s\n", assets[i].condition);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Asset not found.\n");
        }
        else if (choice == 5) {
            if (count == 0) {
                printf("No assets to display.\n");
            } else {
                printf("\nAll Assets:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Type: %s | Value: %.2f | Dept: %s | Condition: %s\n",
                           assets[i].assetId, assets[i].assetName, assets[i].assetType,
                           assets[i].purchaseValue, assets[i].department, assets[i].condition);
                }
            }
        }

    } while (choice != 4);

    printf("//////////////////////////END///////////////////////////////\n");
    return 0;
}
