// Smooth Scroll Effect
const sections = document.querySelectorAll('.section');
const container = document.querySelector('.horizontal-container');
const links = document.querySelectorAll('.nav-link');

links.forEach((link, index) => {
    link.addEventListener('click', function(e) {
        e.preventDefault();
        container.style.transform = `translateX(-${index * 100}vw)`;
    });
});

// Reveal Elements on Scroll
document.addEventListener("scroll", function() {
    document.querySelectorAll(".fade-in, .slide-in").forEach(el => {
        let rect = el.getBoundingClientRect();
        if (rect.top < window.innerHeight * 0.85) {
            el.style.animationPlayState = "running";
        }
    });
});
