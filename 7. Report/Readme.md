## CUSTOMER BILLING SYSTEM C PROJECT ##
---------------------------------------------------------------

Customer Billing System Project is a simple console application designed to demonstrate the practical use of C programming language and its features as wells as to generate an application which can be used in any departmental store, shops, cafes etc. for billing to the customer. You can use this application to keep the records such as name, address, mobile number, paid amount, payment date etc. of your regular customer. Moreover, if you have a new customer, you can add and edit the account at any time.

--------

**Modules**

- Main Menu

used for managing the menu of the software.

* Generate Invoice

Used for billing purpose in restaurant or cafe

* View Invoice

Display all the invoice

- Search Invoice

Search particular invoice

- Calculate Bill

Used to generate the bill and its perform all operation

- Add items

Used for Add the products

- Edit items

Used for edit the products and changes.

- Display the items

Used for display the items and easy to access.

- Search the items

Used for search the products and It has filter type based on price, quantity.

- Delete the items

Used for delete the records.

- Quit

Used to exit form the software menu.

## Identify Features: ##

It can store cutomer name.

It can hold order quanity.

It can hold item name and unit price.

It can calculate bill and generate invoice.

4W AND 1H

4W1H (what, where, when, why, how) is a method of asking questions about a process or a problem taken up for improvement. Four of the W’s (what, where, when, why) and the one H is used to comprehend for details, analyze inferences and judgment to get to the fundamental facts and guide statements to get to the abstraction.

WHAT – What is all about this?

Customer Billing System Project is a simple console application designed to demonstrate the practical use of C programming language. CBSS gathers, sorts, and verifies customer account information, including usage data, payment information, adjustment information, monthly and one-time service charge information, and applies taxes.

WHERE – Where is it used?

Its features as wells as to generate an application which can be used in any departmental store, shops, cafes etc. for billing to the customer.

WHEN – When it is needed?

A billing system is a combination of software and hardware that receives call detail and service usage information, groups this information for specific accounts or customers, produces invoices, creates reports for management, and records (posts) payments made to customer accounts.

WHY – Why are you making it?

Customers might pay you with cash, credit cards or, if you offer it, an installment plan. Regardless of how they pay, you'll need a billing system to invoice and track customer orders. Billing systems often are designed to handle everything from computing charges to providing statements.

HOW – How feature implemented in it?

A billing software aims at reducing manual work of generating professional-looking, tax-compliant invoices. It is designed to handle time and billing tracking as well as invoicing customers for services and products.


## SWOT ANALYSIS ##

- Strengths

Saves Time

Automatic Calculations

No chance of errors in calculations of inputs are right

Feature to add GST or give Discount

- Weaknesses

Cannot came back, once forward to next step

- Opportunities

Can be implemented in any type of store or shops

- Threats

Other Similar Applications.

**High Level Requirements**

|    HLR   | Description |
| ---------|------------ |
|  HLR_1   | Do calculations |   
|  HLR_2   | GST or Discount option |
|  HLR_3   | Generate Invoice |

**Low Level Requirements**

| LLR HLR_1 | Description |
|-----------|-------------|
| LLR_1 HLR_1 | Get data from standard input |
| LLR_2 HLR_1 | Compute the data by doing appropriate operation |
| LLR_3 HLR_1 | Return the amount |


| LLR HLR_2 | Description |
|-----------|-------------|
| LLR_1 HLR_2 | Check if user want add GST or give discount |
| LLR_2 HLR_2 | Do the operation on total amount according to input |
| LLR_3 HLR_2 | Return the final amount |

DFD

![LEVEL 0](https://user-images.githubusercontent.com/72429535/143390939-46bbbdb8-f63a-46cf-aa92-215349f66eef.jpg)
![Level 1](https://user-images.githubusercontent.com/72429535/143390943-125c76d0-94b2-4130-8956-3ea7153092bd.jpg)
![Level 2](https://user-images.githubusercontent.com/72429535/143390944-19c267fa-bcc9-4c1f-9222-6b385adb040e.jpg)

ACTIVITY DIAGRAM

![Activity](https://user-images.githubusercontent.com/72429535/143390984-2a44974d-48de-4217-951f-0c4c71227dba.jpg)

CLASS DIAGRAM

![image](https://user-images.githubusercontent.com/72429535/143391040-dc318cbe-a5f7-4dce-9135-a861f28062fd.png)

COMMUNICATION DIAGRAM

![image](https://user-images.githubusercontent.com/72429535/143391091-778808fd-326b-4fa4-8dc5-9da938178b1d.png)

Implementation

Setup to run Project

Installing Visual Studio Code).

GCC compiler to compile the project.

"make" to run the Makefile smoothly.

Steps To run Project

First clone the repository from the Github.

Open the repository in Visual Studio Code.

The next step is to build the project with the help of make command :

make all

Next step is to run the project with help of make command :

make run

If you want to run the test cases then run the following command :

make test

Clean all executable files by following command :

make clean

**Test Plan**


**High Level Test Plan**


| TestID | Description                                                                                                                                  | Exp I/P | Exp O/P                       | Actual O/P                    | Type of Test      |
| ------ | -------------------------------------------------------------------------------------------------------------------------------------------- | ------- | ----------------------------- | ----------------------------- | ----------------- |
| H_01   | Calculating Total Bill i.e deducting 10% discount from bill and adding 18% to bill and then return the Total amount of bill                  | 200    | 212.4                        | 212.4                         | Requirement Based |
| H_02   | Generating Invoice with Customer name                                                                                                        | ----    | SUCCESS                       | SUCCESS                       | Requirement Based |
| H_03   | When user enter option which is not listed                                                                                                   | ----    | Give message "Invalid option" | Give message "Invalid option" | Scenario Based    |
| H_04   | When no saved invoices to show                                                                                                               | ----    | Show no invoice message       | Show no invoice message       | Boundary based    |
| H_05   | Saving the generated invoice in file with cutomer name                                                                                       | ----    | SUCCESS                       | SUCCESS                       | Requirement Based |
| H_06   | Handeled Negative values, when user accidently give negative values of item quntity or item price , then app simply return '0' as total bill | ----    | SUCCESS                       | SUCCESS                       | Requirement Based |



**Low Level Test Plan**


| TestID | Description                                         | Exp I/P       | Exp O/P                  | Actual O/P               | Type of Test      |
| ------ | --------------------------------------------------- | ------------- | ------------------------ | ------------------------ | ----------------- |
| L_01   | Calculating Particular Item Bill                    | 5 , 20       | 100                      | 100                     | Requirement Based |
| L_02   | Calculating Bill with 10% Discount                  | 100           | 90                  | 90                    | Requirement Based |
| L_03   | Calculating Bill with 18% GST                       | 90         | 106.2                   | 106.2                   | Requirement Based |
| L_04   | Search Invoice                                      | Customer Name | Customer Invoice         | Customer Invoice         | Requirement Based |
| L_05   | Search Invoice (Multiple Invoices of same Customer) | Customer Name | All Invoices of Customer | All Invoices of Customer | Scenario Based    |







