const text = document.getElementById("text");

const firstAdd = document.querySelector("div.add > span");
const end = document.querySelector("button[type=button]");
const reset = document.querySelector("button[type=reset]");

const body = document.getElementById("body");

const draw = (e) => {
    let target = e.target;
    let parent = target.parentNode;
    let grandParent = parent.parentNode;

    let selectedShape = document.querySelector("input[type=radio]:checked");

    parent.classList.remove("add");
    parent.dataset.type = selectedShape.value;
    target.innerText = "";

    target.classList.add("shape");
    target.classList.add(selectedShape.value);

    if (selectedShape.value === "rectangle" || selectedShape.value === "parallelogram")
        target.classList.add("normal-rect");
    else
        target.classList.add("normal-box");

    parent.querySelector("p").innerText = text.value;


    let div = divForAdd();

    if (selectedShape.value === "diamond") {
        let box1 = document.createElement("div");
        box1.dataset.is = "container";
        box1.classList.add("half");

        let div1 = divForAdd();

        box1.appendChild(div1);

        let box2 = document.createElement("div");
        box2.dataset.is = "container";
        box2.classList.add("half");

        let div2 = divForAdd();

        box2.appendChild(div2);

        grandParent.appendChild(box1);
        grandParent.appendChild(box2);
    }

    grandParent.appendChild(div);
}

firstAdd.addEventListener("click", draw);


const r = (e) => {
    body.innerHTML = `
    <div>
        <span class="center-abs normal-box shape circle"></span>
        <p>
            Start
        </p>
    </div>`

    let div = divForAdd();
    body.appendChild(div);
}

reset.addEventListener("click", r);

const e = () => {
    const divs = document.querySelectorAll(".add");

    divs.forEach(div => {
        div.remove();
    })

    const containers = document.querySelectorAll(".half");

    containers.forEach(container => {
        if(container.innerHTML === "")
            container.remove();
    })

    body.innerHTML += `
    <div data-is="End">
        <span class="center-abs normal-box shape circle"></span>
        <p>
            End
        </p>
    </div>`;
}

end.addEventListener("click", e);

const divForAdd = () => {
    let el = document.createElement("div");
    el.classList.add("add");

    let btn = document.createElement("span");
    btn.classList.add("center-abs");
    btn.innerText = "+";
    btn.addEventListener("click", draw);
    el.appendChild(btn);

    let txt = document.createElement("p");
    el.appendChild(txt);

    return el;
}

