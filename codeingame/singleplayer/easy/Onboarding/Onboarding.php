<?php
/**
 * CodinGame planet is being attacked by slimy insectoid aliens.
 * <---
 * Hint:To protect the planet, you can implement the pseudo-code provided in the statement, below the player.
 **/

function createEnemy($name, $dist){
    return ['name'=>$name, 'dist'=>$dist];
}

function cmp($a, $b)
{
    return ($a['dist'] > $b['dist']) ? -1 : 1;
}

$targetList = [];

// game loop
while (TRUE)
{
    fscanf(STDIN, "%s",
        $enemy1 // name of enemy 1
    );
    fscanf(STDIN, "%d",
        $dist1 // distance to enemy 1
    );
    fscanf(STDIN, "%s",
        $enemy2 // name of enemy 2
    );
    fscanf(STDIN, "%d",
        $dist2 // distance to enemy 2
    );
    
    
    $targetList[] = createEnemy($enemy1, $dist1);
    $targetList[] = createEnemy($enemy2, $dist2);

    usort($targetList, "cmp");

    $target = array_pop ($targetList);

    // You have to output a correct ship name to shoot ("Buzz", enemy1, enemy2, ...)
    echo ($target['name'] . "\n");
}
?>