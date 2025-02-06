document.getElementById('themeToggle').addEventListener('click', function() {
    document.body.classList.toggle('dark-mode');
});

document.body.classList.add(localStorage.getItem('theme') || 'light-mode');

document.getElementById('themeToggle').addEventListener('click', function() {
    if (document.body.classList.contains('dark-mode')) {
        localStorage.setItem('theme', 'dark-mode');
    } else {
        localStorage.setItem('theme', 'light-mode');
    }
});

/* Smooth Scroll Effect */
document.querySelectorAll('nav ul li a').forEach(anchor => {
    anchor.addEventListener('click', function(e) {
        e.preventDefault();
        document.querySelector(this.getAttribute('href')).scrollIntoView({
            behavior: 'smooth'
        });
    });
});
