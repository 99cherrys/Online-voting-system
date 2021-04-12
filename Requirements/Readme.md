# Requirements
## Introduction
 * Due to COVID-19 Pandemics, all the systems are continuing their processes via online mode, from e-learning to work at home corona changed all our major systems. This would have been impossible without enhancements of Smart Technologies and thanks to the Internet. If elections commence during these pandemic situation it is best to opt online voting system which is secured, fast, accurate and safe. 
 * This topic was chosen because it is simple and easy to implement also provides me to achieve the main aim of this project to gain flexibilty, efficiency and understand multiple C- programming concepts on Applied Project Based Learning approach.

## Research
### Traditional Ballot Voting System
Prior to the introduction of electronic voting, India used paper ballots and manual counting. A ballot is a simple scrap of paper on which each voter writes in the name of a candidate, but governmental elections use preprinted ballots to protect the secrecy of the votes. The voter casts their ballot in a box at a polling station. This system becomes more tedious and difficult to mannually count millions of votes. Also this system is not very secure, not confidential and there is lots of chance to caste multiple false votes.

### Trending Electronic Voting Machine System (EVM
The control unit is with the presiding officer or a polling officer and the balloting Unit is placed inside the voting compartment. The balloting unit presents the voter with blue buttons (momentary switch) horizontally labeled with corresponding party symbol and candidate names. The Control Unit, on the other hand, provides the officer-in-charge with a "Ballot" marked button to proceed to the next voter, instead of issuing a ballot paper to them. This activates the ballot unit for a single vote from the next voter in the queue. The voter has to cast his vote by once pressing the blue button on the balloting unit against the candidate and symbol of his choice.

As soon as the last voter has voted, the Polling Officer-in-charge of the Control Unit will press the 'Close' Button. Thereafter, the EVM will not accept any votes. Further, after the close of the poll, the Balloting Unit is disconnected from the Control Unit and kept separately. Votes can be recorded only through the Balloting Unit. Again the Presiding officer, at the close of the poll, will hand over to each polling agent present an account of votes recorded. At the time of counting of votes, the total will be tallied with this account and if there is any discrepancy, this will be pointed out by the Counting Agents. During the counting of votes, the results are displayed by pressing the 'Result' button. There are two safeguards to prevent the 'Result' button from being pressed before the counting of votes officially begins. (a) This button cannot be pressed till the 'Close' button is pressed by the Polling Officer-in-charge at the end of the voting process in the polling booth. (b) This button is hidden and sealed; this can be broken only at the counting center in the presence of a designated office.

### Benefits of adopting Online Voting System (OVS)
* Although EVMs are accurate and fast, proxy vote castings are possible because of manual verification of voters. These systems must also include automated authentication like finger print match check or face recognition check through Artificial Intelligence and Machine Learning.
* Online voting system is too fast, very acurate, secure, confidential.
* Voters can cast their votes wherever they are and also new voter-id can be created easily via Unique id like Adhar card number.
* Voter registered on his/her unique id Adhar number and also having unique voter-id can caste only one vote for a particular election.
* Election Commission admin can release the list of canditates in the portal for people to cast their vote of choice.
* Admin of Election Commission admin can only view the total vote counts and announce the result.

### Best Online Voting system
Authenting voters via finger print match or face recognition check makes this system perfectly equipped for online voting system. This can be implemented using AI and ML concepts 

### Ease burden on Election Commision
* Safe guarding EVMs by sealing it at every stage is a tedious task but OVS need not to be protected like EVMs.
* Vote Counts of each constituency polling can be fetched by the admins and announce the result immediately without any delays.

### Very beneficial for Voters
* Voters can cast their very easily in less time sitting anywhere irrespective of being in their native constituencies.
* The votes casted by each individual are confidential, even admins are denied of that. 
* Providing booth slips for each voter can be avoided completely.

## Cost and Features with Time 
| Time | Feature | Cost |
| ----- | ----- | ----- |
| 10 days | Online Voting System | Nil

## Defining Our System
### Certain assumptions: This Project is just a prototype of Online Voting System   
* All the voters of each constituencies can atleast afford an android sytem or PC and have enough knowledge to cast online votes.
* In this project only 3 constituencies consisting 50,000 people each are considered for an State Legislative Assembly election Scenario.
* All the voters have Adhar card mandatorily.
* Only 4 candidates are mentioned in the list for each constituency.
* Voter details only contain voter-id, Adhar number, Name, Age, Father name, Spouse name, Constituency, Date of birth.

![Description]()
### Explanation:
* features:
    * Fetch details of voters from database of election commission. 
    * Add a new voter who are above 18. 
    * Delete a voter if expired.
    * Fetch details/status of voter via adhar number/voter 
    * Update a voter details if required
    * While casting vote ask voters for date of birth as password for verification
    * Admin release the list of candidates participate in election and can check only the count of votes.
    * Each voter can caste only one vote for a particular election.
    
 

## SWOT ANALYSIS
![Swot](https://github.com/99cherrys/Online-voting-system/blob/main/Requirements/Online%20Voting%20System/SWOT.jpg)

# 4W&#39;s and 1&#39;H

## Who:
* Election Voting Commission and Voters

## What:
* EVMs need more maintenance so as to safe guard and seal it very carefully, After polling all the EVMs to be bought to the main centre and carefully remove the seal and check for the count.

## When:
* Any State Legislative Assembly Elections or Lok Sabha Elections
* 
## Where:
* No need of going to native constituency and respective booths
* Just caste vote wherever we are.

## How:
*  This system provides Easy, Speedy, Accurate, Confidential voting system. OVS does'nt need any maintanance as that of EVMs and it doesn't need physical apperance at the respective booths hence, issue of booth slips to each people can be avoided.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | Create files to store details of all the voters | Techincal | TBD | 
| HR02 | New Users shall be able to add his details | Techincal | TBD | 
| HR03 | User shall be able to view his/her voter-id status | Techincal | TBD |
| HR04 | User shall be able to update his/her details | Techincal | TBD |
| HR05 | Admin shall be able to delete a voter from the list if he/she is no more | Techincal | TBD |
| HR06 | User shall be able to save records to the Text file created by the admin | Techincal | TBD |
| HR07 | Data should not be lost in case of faliure | Scenario | FUTURE |
| HR08 | Admin must provide the list of canditates participating in election | Technical | TBD |
| HR09 | While casting vote authenticate the user | Technical | TBD |
| HR10 | Admin can view only the count of total number of votes | TBD |
| HR11 | Issue of voter-id card for new voters | Technical | FUTURE |

##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | create text files for each constituencies and fetch the details into the text files from election commission database. The data provied by the election commission must consist of adhar card, name, age, DOB, Father name, gender and spouse name. voter-id number and constituency (if the person has registered)  | HR01 | TBD |
| LR02 | New voters must have adhar card with date of birth (DD:MM:YYYY format) on it. While registering for new voter-id adhar card is taken as valid proof also date of birth as mentioned on the adhar card for password.| HR02 | TBD |
| LR03 | Voters must be allowed to check their voting details. Either by Adhar card or by voter-id along with his DOB as password his details can be fetched | HR03 | TBD |
| LR04 | User must be allowed to change only his marital status, spouse name and constituency | HR04 | TBD |
| LR05 | If a voter is expired after verifying from a valid death certicate only the admins can remove him from the voting list | HR05 | TBD |
| LR06 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR05 | TBD-S1 |
| LR07 | When user Log off the system, message shall be prompted asking the user to save new records to file before exiting or not | HR06 | TBD |
| LR08 | The admin must release the list of candidates on the day of election along with their party name for the voters to cast their vote of choice. (Adding symbols of their respective party to be done in future) | HR07 | TBD |
| LR09 | while casting vote verify adhar number, voter-id and validate using date of birth as mentioned in the adhar card. If all these three do not match the voter is not allowed to vote. So it is responsible of voters to keep their voter-id and adhar card safely such that his details wont be used by third parties and cause to vote proxy vote | HR08 | TBD |
| LR10 | Voting system must be confidential such that the votes casted by each voter is not visible to anyone, not even to the admin. Admin must be able to read only the count of votes for each candidates to announce the final result of each constituency | HR09 | TBD |
| LR11 | New voters' details must be sent to database of election commission and Voter-id card must be issued to them | HR10 | TBD |

## References
[Election system wikipedia](https://en.wikipedia.org/wiki/Elections_in_India#:~:text=Members%20of%20Lok%20Sabha%20(House,stand%20in%20their%20respective%20constituencies.&text=Elections%20take%20place%20once%20in,Lok%20Sabha%20(Lower%20house)))


