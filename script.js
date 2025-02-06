// Smooth Scroll for Navigation Links
document.querySelectorAll('.nav-link').forEach(link => {
    link.addEventListener('click', function (e) {
        e.preventDefault();
        const targetSection = document.querySelector(this.getAttribute('href'));
        targetSection.scrollIntoView({
            behavior: 'smooth'
        });
    });
});

// Active Navbar Link Indicator
window.addEventListener("scroll", () => {
    let currentSection = "";
    document.querySelectorAll(".section").forEach(section => {
        const sectionTop = section.offsetTop - 100;
        if (window.scrollY >= sectionTop) {
            currentSection = section.getAttribute("id");
        }
    });

    document.querySelectorAll(".nav-link").forEach(link => {
        link.classList.remove("active");
        if (link.getAttribute("href").includes(currentSection)) {
            link.classList.add("active");
        }
    });
});

// Fade-in Animation on Load
document.addEventListener("DOMContentLoaded", () => {
    document.querySelectorAll(".fade-in").forEach(el => {
        el.style.opacity = 0;
        el.style.transform = "translateY(20px)";
        el.style.transition = "opacity 1s ease-out, transform 1s ease-out";
        setTimeout(() => {
            el.style.opacity = 1;
            el.style.transform = "translateY(0)";
        }, 300);
    });
});
