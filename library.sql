CREATE DATABASE library_db;

USE library_db;

-- Users Table
CREATE TABLE users (
    user_id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(50) NOT NULL,
    password VARCHAR(50) NOT NULL,
    role ENUM('admin','student') NOT NULL
);

-- Books Table
CREATE TABLE books (
    book_id INT AUTO_INCREMENT PRIMARY KEY,
    title VARCHAR(100),
    author VARCHAR(100),
    status VARCHAR(20) DEFAULT 'available'
);

-- Transactions Table
CREATE TABLE transactions (
    trans_id INT AUTO_INCREMENT PRIMARY KEY,
    user_id INT,
    book_id INT,
    issue_date DATE,
    return_date DATE,
    FOREIGN KEY (user_id) REFERENCES users(user_id),
    FOREIGN KEY (book_id) REFERENCES books(book_id)
);

-- Sample Data
INSERT INTO users (username, password, role)
VALUES ('admin', '1234', 'admin'),
       ('student1', '1234', 'student');

INSERT INTO books (title, author)
VALUES ('C Programming', 'Dennis Ritchie'),
       ('Database Systems', 'Elmasri'),
       ('Web Development', 'MDN');
