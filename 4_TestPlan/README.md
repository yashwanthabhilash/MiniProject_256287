# TEST PLAN

## High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Linked List is created or not                        | (1). NULL Pointer and other details asked in menu.| Pointer to head node | PASS | Requirement based|
|  H_02   |Check Insertion of new data in list| (1). Head Pointer and other details. | SUCCESS |SUCCESS|Requirement based |
| H_03 | Check if details displayed properly | (1). Head Pointer | SUCCESS | SUCCESS | Requirement based |
| H_04 | Check if search by name is working correct | (1). Head pointer (2). Id (3). Result Pointer (4). Flag | SUCCESS | SUCCESS | Requirement based |
| H_05 | Check if record is updated properly | (1). Head pointer (2). Id (3). Field to be updated (4). Flag | SUCCESS | SUCCESS | Requirement based |
| H_06 | Deleting Record | (1). Head pointer (2). Id | Pointer to Head node| PASS| Requirement based |
| H_07 | When required list can be stored in file | (1). File pointers (2). Head Pointer (3). Flag| SUCCESS | SUCCESS | Requirement based |
| H_08 | When program shuts down records should be saved in File | (1). File pointers (2). Head Pointer| SUCCESS | SUCCESS | Requirement based |

## Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |H_02|During insertion check if details are unique in INDEX.DAT file| (1). File Pointer (2). ID| SUCCESS | SUCCESS |Requirement based |
|  L_02    |H_02|If during insertion name already exists, do not allow insertion|  (1). File Pointer (2). ID| ID_ALREADY_EXISTS|ID_ALREADY_EXISTS|Scenario based|
|  L_03       |H_02,H_01,H_06,H_07|Check file properly opened during program execution| (1). File Name (2). File Mode (3). File Pointer|SUCCESS | SUCCESS |Technical|
|  L_04       |H_07,H_08|When data loaded from file during startup, writing of file should begin from the start of file |(1). File pointers (2). Head Pointer (3). Flag |SUCCESS | SUCCESS |Technical|


