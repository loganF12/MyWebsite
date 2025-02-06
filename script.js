// Dark Mode Toggle
document.getElementById('themeToggle').addEventListener('click', function() {
    document.body.classList.toggle('dark-mode');
});

// Smooth Horizontal Scrolling for Navbar Links
const sections = document.querySelectorAll('.section');
const container = document.querySelector('.horizontal-container');
const links = document.querySelectorAll('.nav-link');

links.forEach((link, index) => {
    link.addEventListener('click', function(e) {
        e.preventDefault();
        container.style.transform = `translateX(-${index * 100}vw)`;
    });
});
