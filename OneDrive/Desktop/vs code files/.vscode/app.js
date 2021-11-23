const hamburger = document.querySelector(".hamburger");
const navLinks = document.querySelector(".navlinks");
const links = document.querySelectorAll(".navlinks li");

hamburger.addEventListener("click", () => {
  navLinks.classList.toggle("open");
  links.forEach(link => {
    link.classList.toggle("fade");
  });
});