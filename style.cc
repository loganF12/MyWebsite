/* General Styles */
body {
    font-family: 'Arial', sans-serif;
    margin: 0;
    padding: 0;
    background: #012A12; /* Dark Green */
    color: white;
    scroll-snap-type: y mandatory;
    overflow-y: scroll;
    scroll-behavior: smooth;
}

/* Fixed Navigation Bar */
header {
    display: flex;
    justify-content: space-between;
    align-items: center;
    position: fixed;
    width: 100%;
    top: 0;
    background: #004d00;
    color: white;
    padding: 15px 50px;
    z-index: 1000;
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

nav ul li a:hover {
    color: #ffcc00;
}

/* Full-Screen Sections */
.section {
    height: 100vh;
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
    text-align: center;
    scroll-snap-align: start;
}

/* Button */
.cta-button {
    background: #ffcc00;
    padding: 15px 30px;
    font-size: 18px;
    border: none;
    cursor: pointer;
    transition: transform 0.3s ease, background 0.3s ease;
}

.cta-button:hover {
    background: #ffaa00;
    transform: scale(1.1);
}

/* Images */
.profile-img, .about-img, .project img {
    width: 250px;
    height: auto;
    margin-top: 20px;
    border-radius: 10px;
    box-shadow: 0px 5px 15px rgba(255, 255, 255, 0.2);
}

/* Projects */
.project-list {
    display: flex;
    justify-content: center;
    gap: 20px;
    margin-top: 20px;
}
