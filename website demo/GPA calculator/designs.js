const objects = document.querySelectorAll("#sizePicker div");
const objectsValue = document.querySelectorAll("#sizePicker div input[type=number]");
const GPAs = document.querySelectorAll("#sizePicker div span");
const Result = document.querySelector("#Result span");
const msg = document.querySelector("#msg");
const hours = {
    ScientificWriting: 1,
    English1: 2,
    English2: 2,
    Math1: 3,
    Math2: 3,
    Physics1: 3,
    Physics2: 3,
    Electronics: 3,
    Programming1: 3,
    Programming2: 3,
    HumanRights: 1,
    ProblemSolving: 1,
    LogicDesign: 3,
    ComputingEconomics: 2,
    ComputerScience: 3
}

objectsValue.forEach( value => {
    value.addEventListener("input", updateText)
})

function updateText(e) {
    let target = e.target;
    let Result = calcObjectGPA(target.value);
    target.nextElementSibling.innerText = Result; 
    calcTotalGPA();
}

const calcObjectGPA = (value) => {
    if(value>=90&&value<=100){
        return 4;
    }
    else if(value>=85&&value<90){
        return 3.6;
    }
    else if(value>=80&&value<85){
        return 3.3;
    }
    else if(value>=75&&value<80){
        return 3.0;
    }
    else if(value>=70&&value<75){
        return 2.6;
    }
    else if(value>=65&&value<70){
        return 2.4;
    }
    else if(value>=60&&value<65){
        return 2.2;
    }
    else if(value>=50&&value<60){
        return 2;
    }
    else {
        return 0;
    }
}

const calcTotalGPA = () => {
    let gpa = 0;
    GPAs.forEach( g => {
        let name = g.parentNode.querySelector("input").name;
        gpa += g.innerText * hours[name];
    })

    gpa /= 36;

    if(gpa>=3.7){
        msg.innerText = "Mh|kar  EL  mwad";
    }
    else if(gpa>=3&&gpa<3.7){
        msg.innerText = "GOOD  JOB!";
    }
    else if(gpa>=2&&gpa<3){
        msg.innerHTML = "You  can  do  Better";
    }
    else{
        msg.innerHTML = "Try harder  next  time";
    }

    Result.innerText = gpa;
}

