// Smooth Horizontal Scroll Effect
const sections = document.querySelectorAll('.section');
const container = document.querySelector('.horizontal-container');
const links = document.querySelectorAll('.nav-link');

links.forEach((link, index) => {
    link.addEventListener('click', function (e) {
        e.preventDefault();
        container.style.transform = `translateX(-${index * 100}vw)`;
    });
});

// Active Navbar Link Indicator
window.addEventListener("scroll", () => {
    let currentSection = "";
    sections.forEach((section) => {
        const sectionTop = section.offsetLeft;
        if (scrollX >= sectionTop - 200) {
            currentSection = section.getAttribute("id");
        }
    });

    links.forEach((link) => {
        link.classList.remove("active");
        if (link.getAttribute("href").includes(currentSection)) {
            link.classList.add("active");
        }
    });
});

// Smooth Fade-in Animation on Load
document.addEventListener("DOMContentLoaded", () => {
    document.querySelectorAll(".fade-in").forEach((el) => {
        el.style.animation = "fadeIn 1s ease-in-out forwards";
    });
});
