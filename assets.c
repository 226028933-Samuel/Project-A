#include <stdio.h>
#include "assets.h"



void assetMenu() {
    struct Asset assets[MAX_ASSETS];
    int asset_count = 0;   // number of assets stored
    int asset_choice;

    do {
        printf("\n//////////////////ASSET MANAGEMENT//////////////////\n");
        printf("1. Add Asset\n");
        printf("2. Search Asset by ID\n");
        printf("3. Search Asset by Name\n");
        printf("4. Display All Assets\n");   // new option
        printf("5. Exit\n");
        printf("Enter asset_choice: ");
        scanf("%d", &asset_choice);

        if (asset_choice == 1) {
            if (asset_count < MAX_ASSETS) {
                printf("Input asset id: ");
                scanf("%d", &assets[asset_count].assetId);

                printf("Enter asset name: ");
                scanf("%49s", assets[asset_count].assetName);

                printf("Enter asset type: ");
                scanf("%49s", assets[asset_count].assetType);

                printf("Enter purchase value: ");
                scanf("%f", &assets[asset_count].purchaseValue);

                printf("Enter Department: ");
                scanf("%19s", assets[asset_count].department);

                printf("Enter condition (good/bad): ");
                scanf("%19s", assets[asset_count].condition);

                asset_count++;
                printf("Asset added successfully!\n");
            } else {
                printf("Asset storage full!\n");
            }
        } 
        else if (asset_choice == 2) {
            int searchId;
            printf("Enter asset ID to search: ");
            scanf("%d", &searchId);

            int found = 0;
            for (int i = 0; i < asset_count; i++) {
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
        else if (asset_choice == 3) {
            char searchName[50];
            printf("Enter asset name to search: ");
            scanf("%49s", searchName);

            int found = 0;
            for (int i = 0; i < asset_count; i++) {
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
        else if (asset_choice == 4) {
            if (asset_count == 0) {
                printf("No assets to display.\n");
            } else {
                printf("\nAll Assets:\n");
                for (int i = 0; i < asset_count; i++) {
                    printf("ID: %d | Name: %s | Type: %s | Value: %.2f | Dept: %s | Condition: %s\n",
                           assets[i].assetId, assets[i].assetName, assets[i].assetType,
                           assets[i].purchaseValue, assets[i].department, assets[i].condition);
                }
            }
        }

    } while (asset_choice != 5);

    printf("//////////////////////////END///////////////////////////////\n");
    return 0;
}
