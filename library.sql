CREATE DATABASE library;

USE library;

CREATE TABLE books (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100),
    author VARCHAR(100),
    status VARCHAR(20)
);

INSERT INTO books (name, author, status)
VALUES ('C++ Basics', 'Bjarne', 'Available');
