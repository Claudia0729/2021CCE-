function setup() {
    initializeFields();
    // �j�p
    createCanvas(300, 300);
    fill(color(0xA2, 0xFF, 0x7E));
    textSize(50);
    // ����ܮ� ���������
    textAlign(CENTER, CENTER);
}

// �S�� ,0,1,2����
var choice;

function draw() {
    // �M�I��
    background(color(0xFF, 0xFF, 0xFF));
    text("Dinner 1", 150, 50);
    text("Dinner 2", 150, 150);
    text("Dinner 3", 150, 250);
    // ���@��/���
    if (choice == 0)
        ellipse(30, 50, 50, 50);
    if (choice == 1)
        ellipse(30, 150, 50, 50);
    if (choice == 2)
        ellipse(30, 250, 50, 50);
// ���/��� x  y   w   h
}

function mousePressed() {
    // ���X���0,1,2
    choice = int(random(3));
}

function initializeFields() {
    choice = -1;
}
