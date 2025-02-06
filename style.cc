/* General Styles */
body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    background: #023020; /* Dark Green */
    color: white;
    transition: background 0.3s, color 0.3s;
}

/* Header */
header {
    display: flex;
    justify-content: space-between;
    align-items: center;
    background: #1b5e20;
    color: white;
    padding: 15px 50px;
    transition: background 0.3s;
}

header:hover {
    background: #146414;
}

.logo {
    font-size: 24px;
    font-weight: bold;
}

/* Navigation */
nav ul {
    list-style: none;
    display: flex;
    gap: 20px;
}

nav ul li a {
    color: white;
    text-decoration: none;
    font-size: 18px;
    transition: color 0.3s;
}

nav ul li a:hover {
    color: #ffcc00;
    transform: scale(1.1);
}

/* Theme Toggle */
#themeToggle {
    background: none;
    border: none;
    color: white;
    font-size: 20px;
    cursor: pointer;
}

/* Sections */
main {
    text-align: center;
    padding: 50px 20px;
}

/* Button */
.cta-button {
    background: #ffcc00;
    padding: 15px 30px;
    font-size: 18px;
    border: none;
    cursor: pointer;
    transition: transform 0.3s ease, background 0.3s ease;
    position: relative;
}

.cta-button:hover {
    background: #ffaa00;
    transform: scale(1.1);
}

/* 3D Effect */
.project {
    background: white;
    padding: 20px;
    box-shadow: 0px 5px 10px rgba(0,0,0,0.1);
    border-radius: 10px;
    width: 250px;
    text-align: center;
    color: black;
    transition: transform 0.3s ease;
}

.project:hover {
    transform: rotateY(10deg);
}

/* Contact */
.social-links a {
    text-decoration: none;
    font-size: 18px;
    color: #ffcc00;
    transition: color 0.3s ease;
}

.social-links a:hover {
    color: #ffaa00;
}

/* Dark Mode */
.dark-mode {
    background: #111;
    color: white;
}
