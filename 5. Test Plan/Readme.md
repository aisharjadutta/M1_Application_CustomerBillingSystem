**Test Plan**


**High Level Test Plan**


| TestID | Description                                                                                                                                  | Exp I/P | Exp O/P                       | Actual O/P                    | Type of Test      |
| ------ | -------------------------------------------------------------------------------------------------------------------------------------------- | ------- | ----------------------------- | ----------------------------- | ----------------- |
| H_01   | Calculating Total Bill i.e deducting 10% discount from bill and adding 18% to bill and then return the Total amount of bill                  | 140     | 165.2                         | 165.2                         | Requirement Based |
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
