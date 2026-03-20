CREATE DATABASE library;
USE library;

CREATE TABLE users (
    id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(50),
    password VARCHAR(50)
);

CREATE TABLE books (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100),
    status VARCHAR(20)
);

INSERT INTO books(name, status)
VALUES ('C Programming', 'Available'),
       ('Data Structures', 'Available');
