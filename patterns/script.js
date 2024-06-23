<script>
    document.addEventListener("DOMContentLoaded", function() {
        const sections = document.querySelectorAll(".pattern");

        // Function to handle scroll animation
        function handleScrollAnimation() {
            sections.forEach(section => {
                const sectionTop = section.getBoundingClientRect().top;
                const windowHeight = window.innerHeight;

                if (sectionTop < windowHeight - 150) {
                    section.style.opacity = 1;
                    section.style.transform = "translateY(0)";
                }
            });
        }

        // Initial call
        handleScrollAnimation();

        // Scroll event listener
        window.addEventListener("scroll", handleScrollAnimation);

        // Copy to clipboard functionality
        const codeBlocks = document.querySelectorAll(".pattern pre code");
        codeBlocks.forEach((codeBlock, index) => {
            // Create copy icon
            const copyIcon = document.createElement("span");
            copyIcon.classList.add("copy-icon");
            copyIcon.innerHTML = "&#128203;"; // Unicode for copy icon
            codeBlock.parentElement.appendChild(copyIcon);

            // Copy code on icon click
            copyIcon.addEventListener("click", () => {
                const text = codeBlock.innerText;
                navigator.clipboard.writeText(text)
                    .then(() => {
                        copyIcon.textContent = "Copied!";
                        setTimeout(() => {
                            copyIcon.textContent = "&#128203;";
                        }, 1500);
                    })
                    .catch(err => {
                        console.error("Failed to copy: ", err);
                    });
            });
        });
    });
</script>
