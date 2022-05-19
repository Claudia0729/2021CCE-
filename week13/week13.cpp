function setup() {
    initializeFields();
    // 大小
    createCanvas(300, 300);
    fill(color(0xA2, 0xFF, 0x7E));
    textSize(50);
    // 自顯示時 對齊正中間
    textAlign(CENTER, CENTER);
}

// 沒選 ,0,1,2有選
var choice;

function draw() {
    // 清背景
    background(color(0xFF, 0xFF, 0xFF));
    text("Dinner 1", 150, 50);
    text("Dinner 2", 150, 150);
    text("Dinner 3", 150, 250);
    // 任一圓/橢圓
    if (choice == 0)
        ellipse(30, 50, 50, 50);
    if (choice == 1)
        ellipse(30, 150, 50, 50);
    if (choice == 2)
        ellipse(30, 250, 50, 50);
// 圓形/橢圓 x  y   w   h
}

function mousePressed() {
    // 取出整數0,1,2
    choice = int(random(3));
}

function initializeFields() {
    choice = -1;
}
