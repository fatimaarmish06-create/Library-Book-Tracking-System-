Pseudocodes:
                                     (1)
FUNCTION addBook(title, author, genre):
    Generate unique book ID
    bookId = generateUniqueID()
    
     Create book object
    newBook = CREATE Book WITH:
        id = bookId
        title = title
        author = author
        genre = genre
        isAvailable = TRUE
    
    Add to books array (O(1))
    booksArray.append(newBook)
    
    Add to hash table (O(1) average)
    hashIndex = bookId MOD hashTableSize
    IF hashTable[hashIndex] is EMPTY:
        hashTable[hashIndex] = newBook
    ELSE:
         Handle collision: add to linked list
        ADD newBook TO linked list AT hashTable[hashIndex]
    
    Save to file
    SAVE book data TO books.txt
    
    RETURN "Book added successfully (ID: " + bookId + ")"
END FUNCTION
		
                                (2)
FUNCTION GetBook(bookID, userID):
     Step 1: Search for the book
    book = HashTable.get(bookID)
    
    IF book == NULL:
        PRINT "Book not found"
        RETURN NULL

     Step 2: Check if book is available
    IF book.status == "Available":
        Issue the book to user
        user = UserList.get(userID)
        book.status = "Issued"
        user.borrowedBooks.add(book)
        
         Log the transaction
        logTransaction(userID, bookID, "Issued", currentDate)
        
        PRINT "Book issued successfully to user"
        RETURN book

    ELSE:
         Book is already issued, add user to reservation queue
        ReservationQueue.enqueue(bookID, userID)
        PRINT "Book currently unavailable. Added to reservation queue."
        RETURN NULL
END FUNCTION

		(3)

FUNCTION searchBook(searchTerm):
     If search is numeric (book ID), use hash table
    IF searchTerm IS NUMERIC:
        bookId = INT(searchTerm)
Hash table search (FAST - O(1))
        hashIndex = bookId MOD hashTableSize
        current = hashTable[hashIndex]
        
        WHILE current ≠ NULL:
            IF current.id == bookId:
                RETURN current  
 Found using hash table
            current = current.next
        
         Fallback to linear search
        FOR i = 0 TO booksArray.length:
            IF booksArray[i].id == bookId:
                RETURN booksArray[i]
    
    ELSE:  Search by title or author
        results = []
        FOR i = 0 TO booksArray.length:
            IF booksArray[i].title CONTAINS searchTerm OR
               booksArray[i].author CONTAINS searchTerm:
                ADD booksArray[i] TO results
        
        IF results is EMPTY:
            RETURN "No books found"
        ELSE:
            RETURN results
    
    RETURN "Book not found"
END FUNCTION
FUNCTION SearchTask(id):
    RETURN HashMap.get(id)
END FUNCTION

                         (4)
FUNCTION deleteBook(bookId):
    Remove from hash table
    hashIndex = bookId MOD hashTableSize
    current = hashTable[hashIndex]
    previous = NULL
    
    WHILE current ≠ NULL:
        IF current.id == bookId:
             Found in hash table
            IF previous == NULL:
                hashTable[hashIndex] = current.next
            ELSE:
                previous.next = current.next
            
            BREAK
        previous = current
        current = current.next
    
     Remove from books array
    FOR i = 0 TO booksArray.length:
        IF booksArray[i].id == bookId:
            REMOVE booksArray[i] FROM booksArray
            BREAK
    
     Update file
    REWRITE books.txt WITH updated booksArray
    
    RETURN "Book deleted successfully"
END FUNCTION
FUNCTION DeleteTask(id):
    task = HashMap.get(id)
    IF task NOT NULL:
        LinkedList.remove(task)
        MaxHeap.remove(task)
        Queue.remove(task)
        HashMap.remove(id)
END FUNCTION

		(5)
FUNCTION displayAllBooks():
    IF booksArray IS EMPTY:
        RETURN "No books in library"
    
    PRINT " ALL BOOKS IN LIBRARY"
    
    FOR i = 0 TO booksArray.length:
        book = booksArray[i]
        status = " Available" IF book.isAvailable ELSE " Borrowed"
        
        PRINT "ID: " + book.id
        PRINT "Title: " + book.title
        PRINT "Author: " + book.author
        PRINT "Genre: " + book.genre
        PRINT "Status: " + status

    
    RETURN "Total books: " + booksArray.length
END FUNCTION
