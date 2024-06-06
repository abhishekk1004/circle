const signUpBotton=document.getElementById('SignUp');
const signInButton=document.getElementById('SignIn');
const container=document.getElementById('container');

signUpBotton.addEventListener('click', () => {
    container.classList.remove("right-panel-active");
})