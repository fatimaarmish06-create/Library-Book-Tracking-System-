C. Kaizen Improvement Review – Library Book Path-Finding System
Feature Built	Problem / Limitation Found	Improvement Idea	Will Fix (Team Member)	Expected Impact
Book Management (Linked List)	Adding/deleting books not synchronized → stale references	Implement robust add/delete with pointer checks	Armish	Eliminates dangling nodes, ensures list consistency
User Management (Array/List)	Searching users slow when many records	Use HashMap for ID-based lookups	Taha	O(1) user search → faster operations
Book Issue & Return (Transaction Array)	Overdue detection not accurate, no fine calculation	Add proper date difference & fine computation	Mohid	Accurate fine calculation, better library management
Reservation Queue (Queue)	Waiting list allows duplicate reservations	Add duplicate check before enqueue	Khizra	Prevents repeated reservations, fair allocation
Book Categorization (Tree)	Categories not properly linked → wrong traversal	Build balanced tree & validate insertion	Haris	Faster category search, proper organization
Graph Path-Finding (Graph for library layout)	Path algorithm slow for large graphs	Implement BFS/DFS + adjacency list optimization	Armish	Efficient shortest path finding, scalable
Error Handling	Program crashes on invalid inputs	Add input validation, try/catch for numeric and string inputs	Zahra	Prevents runtime crashes, smoother usage
Display Functions	Outputs raw data, not formatted	Add structured printing with headers & labels	Mohid	Better readability for librarians and users
Performance Issues	Searching book in Linked List O(n)	Add HashMap index for books	Khizra	O(1) book search → huge speed improvement
Code Structure	All functions in main → messy	Split into classes: Book, User, Transaction, LibraryGraph	Taha	Cleaner code, easier debugging, scalable project

