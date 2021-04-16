# Title - Contact Management System 

## Requirements

## Introduction
* Hospitals and clinics are the places where our body gets the required maintenance services like the car gets in the garage. If we go with the dictionary, hospital is a health care institution providing patient treatment with specialized medical and nursing staff and medical equipment. 

* Hospitals and clinics witness a lot of traffic in terms of the incoming and outgoing patients. The job of the management becomes a little easier if the contacts of the patients are well maintained in terms of records. The reason being, it saves a lot of time as the information about a particular patient is just a click away and it also results in saving a lot of paper as records are maintained in soft format rather than the hard format which demands a lot of paper.

## How Hospitals operate?
* A hospital contains one or more wards that house hospital beds for inpatients. It may also have acute services such as an emergency department, operating theatre, and intensive care unit, as well as a range of medical specialty departments. A well-equipped hospital may be classified as a trauma center. They may also have other services such a hospital pharmacy, radiology, pathology and medical laboratories. Some hospitals have outpatient departments such as behavioral health services, dentistry, and rehabilitation services.

<img src = "https://github.com/yashwanthabhilash/MiniProject_256287/blob/c7f30ff373519e31e3b72fbfffed01f59f854533/1_Requirements/System_Operations.jpg" />

## Scope for technology to bang in!
* In this project, one of the corners where technology can play a role will be discussed. As far as hospitals are concerned, maintaining records is a very important job as it holds a vital role to play. When the record of a patient is stored against his/her name or unique id it becomes very easy to track multiple required info. For example : previous visits could be traced, previous complications can be traced, and so on.

<img src =  "https://github.com/yashwanthabhilash/MiniProject_256287/blob/c7f30ff373519e31e3b72fbfffed01f59f854533/1_Requirements/Medical_Records.jpg" />

## About this project
* In this project, we will be storing following data of a patient: 
    1. Name
    2. Patient ID
    3. Doctor 
    4. Last visit
    5. Mobile Number
    6. Email ID
    7. Emergency contacts
    8. Address
    9. Remarks
* Following functions would be available :
    1. Add new contacts with above mentioned data.
    2. List all contacts.
    3. Search contacts based on Name and Patient ID.
    4. Edit contacts.
    5. Delete contacts.    

 ## Advantages
* Easy accessibility of the information as any required information is just a click away.
* As the information maybe accessed with Patient ID or Name, it saves a lot of time, unlike otherwise.   
* Supports Green Initiative as this would save a lot paper by being in the soft format.

## Challenges
* Chances of information getting leaked and getting into public domain, if precautions not taken.

## Cost and Features with Time 
| Time | Feature | Cost |
| ----- | ----- | ----- |
| 1991 | Contact Management System for Hospitals introduce in India| Cost effective |
| 2009 |  Health Information Technology for Economic and Clinical Health (HITECH)| Approx 2500/day for a medium hospital |
##### *above data according to International Journal of Medicine and Public Health - Jul-Sep 2014 - Vol 4 - Issue 3

## Defining the system
* When we consider hospital as a single unit there are several systems working together, each system contributes towards completion of any task that a hospital handles. One important system is the Contact Management System of the hospital. Why is it important? Because, a lot of time is saved as the data regarding any particular patient is just a click away thus easy to access. 

* The data collected by contact management system further serves several other systems as a information, for example: to name some, for accounts purpose, for research purpose, for analytics purpose, for crowd management purpose and so on.

<img src = "https://github.com/yashwanthabhilash/MiniProject_256287/blob/c7f30ff373519e31e3b72fbfffed01f59f854533/1_Requirements/System_Diagram.jpeg" />

## SWOT Analysis

<img src = "https://github.com/yashwanthabhilash/MiniProject_256287/blob/c7f30ff373519e31e3b72fbfffed01f59f854533/1_Requirements/SWOT_Analysis.jpg" />

## 4W's and 1H

### Who:
* Hospitals and clinics would be the beneficiaries of this system.
### What:
* Contacts and health records will be managed and maintained with the help of this system.
### When:
* During the patient intake, the process will be initiated.
### Where:
* Across the medical establishments.
### How:
* Data will be manually entered once the process is initiated.

## Detail requirements

### High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | Admin should be able to add new patient details | Techincal | IMPLEMENTED | 
| HR02 | Admin should be able to read a patient details| Techincal |  IMPLEMENTED  |
| HR03 | Admin should be able to update a patient details | Techincal |  IMPLEMENTED  |
| HR04 | Admin should be able to delete a patient details | Techincal |  IMPLEMENTED  |
| HR05 | Admin should be able to save records in a file | Techincal |  IMPLEMENTED  |
| HR06 | Admin should be able to read data from a file | Techincal |  IMPLEMENTED  |
| HR07 | Data should not be lost in case of failure | Scenario | FUTURE |
| HR08 | Data should always be stored when closing the system | Scenario |  IMPLEMENTED |
###  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | New record should be added by providing all the asked information, name should be unique and validated from existing file or else patient record should not be accepted. | HR01 |  IMPLEMENTED  |
| LR02 | Details of the patient can be read by name or by all contacts display. | HR02 |  IMPLEMENTED |
| LR03 | Search results display limit per page. | HR02 | FUTURE |
| LR04 | If admin searches for an invalid ID "No Record Found" message should be displayed. | HR02 |  IMPLEMENTED  |
| LR05 | Admin need to search by id for the pateint details to be updated, if no such record is available then "No Record Found" Message should be displayed | HR03 |  IMPLEMENTED  |
| LR06 | Admin need to search by id for the pateint details to be deleted, if no such record is available then "No Record Found" Message should be displayed | HR04 |  IMPLEMENTED  |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR05 |  IMPLEMENTED  |
| LR06 | When user Log off the system perform check and save data to file (1). If new data in inserted add it to file (2). If New data is not inserted do not add anything to file | HR08 |  IMPLEMENTED  |







