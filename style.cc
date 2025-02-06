/* General Styles */
body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    background: #f4f4f4;
    color: #333;
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

.logo {
    font-size: 24px;
    font-weight: bold;
}

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

nav ul li a:hover, .tab-link.active {
    color: #ffcc00;
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

.tab-content {
    display: none;
    animation: fadeIn 0.5s ease-in-out;
}

.tab-content.active {
    display: block;
}

/* Project Section */
.project-list {
    display: flex;
    justify-content: center;
    gap: 20px;
    margin-top: 20px;
}

.project {
    background: white;
    padding: 20px;
    box-shadow: 0px 5px 10px rgba(0,0,0,0.1);
    border-radius: 10px;
    width: 250px;
}

.project i {
    font-size: 40px;
    color: #007bff;
}

.project h3 {
    margin-top: 10px;
}

.project p {
    color: #555;
}

/* Contact */
.social-links {
    display: flex;
    justify-content: center;
    gap: 15px;
    margin-top: 15px;
}

.social-links a {
    text-decoration: none;
    font-size: 18px;
    color: #007bff;
}

/* Animations */
@keyframes fadeIn {
    from { opacity: 0; }
    to { opacity: 1; }
}

/* Dark Mode */
.dark-mode {
    background: #222;
    color: white;
}
