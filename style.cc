/* General Styles */
body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    background-color: #f4f4f4;
    transition: background 0.3s, color 0.3s;
}

/* Header */
header {
    display: flex;
    justify-content: space-between;
    align-items: center;
    background: #222;
    color: white;
    padding: 15px 50px;
}

header .logo {
    font-size: 24px;
    font-weight: bold;
}

header nav ul {
    list-style: none;
    display: flex;
    gap: 20px;
}

header nav ul li a {
    color: white;
    text-decoration: none;
    font-size: 18px;
    transition: color 0.3s;
}

header nav ul li a:hover {
    color: #ffcc00;
}

/* Theme Toggle Button */
#themeToggle {
    background: none;
    border: none;
    color: white;
    font-size: 20px;
    cursor: pointer;
}

/* Hero Section */
.hero {
    text-align: center;
    padding: 100px 20px;
    background: linear-gradient(to right, #007bff, #00c6ff);
    color: white;
}

.hero h1 {
    font-size: 40px;
}

.hero p {
    font-size: 20px;
    margin-top: 10px;
}

.cta-button {
    background: #ffcc00;
    border: none;
    padding: 15px 30px;
    font-size: 18px;
    cursor: pointer;
    margin-top: 20px;
}

.cta-button:hover {
    background: #ffaa00;
}

/* Features Section */
.features {
    display: flex;
    justify-content: center;
    gap: 30px;
    padding: 50px;
    text-align: center;
}

.feature {
    background: white;
    padding: 20px;
    box-shadow: 0px 5px 10px rgba(0,0,0,0.1);
    border-radius: 10px;
    width: 250px;
}

.feature i {
    font-size: 40px;
    color: #007bff;
}

.feature h3 {
    margin-top: 15px;
}

.feature p {
    color: #555;
}

/* Footer */
footer {
    text-align: center;
    padding: 20px;
    background: #222;
    color: white;
}
