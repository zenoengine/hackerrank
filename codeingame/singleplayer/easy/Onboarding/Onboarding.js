/**
 * CodinGame planet is being attacked by slimy insectoid aliens.
 * <---
 * Hint:To protect the planet, you can implement the pseudo-code provided in the statement, below the player.
 **/

function Enemy (name, dist) {
    this.name = name;
    this.dist = dist;
}

var targetList = [];

// game loop
while (true) {
    var enemy1 = readline(); // name of enemy 1
    var dist1 = parseInt(readline()); // distance to enemy 1
    var enemy2 = readline(); // name of enemy 2
    var dist2 = parseInt(readline()); // distance to enemy 2

    // Write an action using print()
    // To debug: printErr('Debug messages...');
    
    var target1 = new Enemy(enemy1, dist1);
    var target2 = new Enemy(enemy2, dist2);
    
    targetList.push(target1);
    targetList.push(target2);
    
    targetList.sort(function(a, b){
        return a.dist < b.dist;
    });
    
    var targetEnemy = targetList.pop();
    
    print(targetEnemy.name);
}