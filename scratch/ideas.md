I need a cpp project to remember/relearn my cpp skills, so I thought
making a multiplayer final fantasy tactics game might be a good way to
refine these skills. Here I'm going to break down the idea into
components.

# Game Breakdown

## Entities
    - The game needs to have a system which tracks all the entities of
        the game. This means all characters, monsters, environment

## Map/coliders?
    - The game needs to have a map to store where all entities on that
        map are. The map also needs to store tile properties (walkable,
        tile height, etc.) as well as generate itself

### Procedural Map Generation:
    - I want to have a way that generates a map on a 2d plane with 
        height values. 
        - For this we are gonna use perlin noise maps and from that
            noise map we will map the values to different tiles and
            tile heights.
        - We also wanna generate structures on the map, these would
            be predefined and we probably would have to pick where
            they could generate on the map.
    - I want to also have a map editor where players and myself could
        make a map they would want to play on (AOE 2).

## Network
    - If the game is going to be multiplayer it needs to have a
        connection between players. Ideally it would be peer to peer,
        but long form if the game does well it would have to be a
        server side game to avoid cheats.

## Graphics
    - For the first iteration, command line stuff should be okay but
        I would like for the game to have some sort of graphics
        rendering. Even if it is simple

## Controls
    - How will the players control the game? Ideally through mouse and
        keyboard but maybe also controller inputs?

## Game Loop
    - How do we determine the start and end of a match?
