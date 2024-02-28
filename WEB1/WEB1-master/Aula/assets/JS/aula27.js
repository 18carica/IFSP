var meuInput = document.getElementById("meuInput");
function handleKeyPress(event){
    document.getElementById("saida").innerHTML += event.key;
}
meuInput.addEventListener("keydown", handleKeyPress);
setTimeout(
    function(){
        meuInput.removeEventListener("keydown", handleKeyPress);
    }
    ,5000);
