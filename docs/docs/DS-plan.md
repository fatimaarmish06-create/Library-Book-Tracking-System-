Operation	Data Structure Used	Why this DS is Suitable
Add a new book	Linked List + Hash Table	Linked List allows easy insertion/removal; Hash Table enables fast search by ID
Register a new user	Array / List	Easy storage and traversal of user records
Issue a book to a user	Hash Table + Queue	Hash Table for instant book lookup; Queue manages waiting users for popular books
Return a book	Hash Table + Array/List	Hash Table to quickly find book; Array/List to update user borrowed books
Search book by ID	Hash Table	Instant O (1) lookup for book ID
Delete a book	Linked List + Hash Table	Easy removal from Linked List; Hash Table ensures ID is also removed
Display all books in the system	Array / List	Simple traversal to show all books to the user
