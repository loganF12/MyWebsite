// Dark Mode Toggle
document.getElementById('themeToggle').addEventListener('click', function() {
    document.body.classList.toggle('dark-mode');
});

// Tab Navigation
document.querySelectorAll('.tab-link').forEach(tab => {
    tab.addEventListener('click', function(e) {
        e.preventDefault();
        document.querySelectorAll('.tab-link').forEach(link => link.classList.remove('active'));
        document.querySelectorAll('.tab-content').forEach(section => section.classList.remove('active'));
        document.getElementById(this.dataset.tab).classList.add('active');
        this.classList.add('active');
    });
});

// Button Hover Effect (Mouse Position Tilt)
document.querySelectorAll('.cta-button, .project').forEach(item => {
    item.addEventListener('mousemove', function(e) {
        let x = (window.innerWidth / 2 - e.pageX) / 25;
        let y = (window.innerHeight / 2 - e.pageY) / 25;
        this.style.transform = `rotateX(${y}deg) rotateY(${x}deg)`;
    });

    item.addEventListener('mouseleave', function() {
        this.style.transform = "rotateX(0) rotateY(0)";
    });
});
