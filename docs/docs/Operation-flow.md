Operation 1: Add New Book:
What it does:
Adds a new book into the library system with details like title, author, and status.
Data Structure:
•	Linked List (for easy insertion and deletion)
•	Hash Table (for fast search by book ID)
Why:
•	Linked List allows quick addition/removal of books.
•	Hash Table enables instant lookup by ID, making searches extremely fast.
User Interaction:
User enters book title, author, and category → system stores it in the Linked List and Hash Table.



Operation 2: Get Highest-Priority Book:
What it does:
Finds the requested book in the library and issues it to the user. If the book is already issued, it manages the waiting queue for that book.
Data Structure:

o	Hash Table — to locate the book instantly by ID
o	Queue — to manage waiting users for popular books
Why:
•	Hash Table gives O (1) lookup to find the book quickly.
•	Queue ensures first-come-first-served issuance for users waiting on the same book.
User Interaction:
User requests a book → system checks availability → if available, issues it → if not, adds user to reservation queue.

Operation 3: Search Book by ID:
What it does:
Finds a book quickly in the library system using its unique ID.
Data Structure:
•	Hash Table — stores book records for instant access
Why:
•	Hash Table provides O (1) lookup time, making book searches extremely fast.
User Interaction:
User enters the book ID → system instantly retrieves book details (title, author, availability, category).
