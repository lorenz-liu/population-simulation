> Please make sure you have: **[Unreal Engine 5.3](https://www.unrealengine.com/en-US/)**

# Population Simulation

![Demo](README/demo.gif)

This project implements Conway's Game of Life, a cellular automaton conceptualized by John Conway, using Unreal Engine 5.3.2 with C++. The game serves as a zero-player simulation depicting the evolution of a population of cells, each classified as either alive or dead.

## Rules
The progression of the cell population adheres to the following rules:

1. Any living cell with fewer than two live neighbors dies, akin to underpopulation.
2. A living cell with two or three live neighbors persists into the next generation.
3. Any living cell with more than three live neighbors dies, as if facing overpopulation.
4. A dead cell with precisely three live neighbors becomes alive, resembling reproduction.

These rules result in intriguing patterns as successive generations unfold.

## Visualization
- Display of live and dead cells.
- Tracking of generation and population counts.

## Customization

### Instance
Modifiable settings for the cellular automaton instance (no code modification required):
- Color settings for live/dead cells.
- Adjustable board dimensions (grid of cells).
- Time intervals between generations (in Rate).
- Configurable input for each action (create, clear, stop/resume).

### Input
- Create or destroy cells by holding and dragging (Default: Left Mouse).
- Clear the entire board (Default: Space Bar).
- Halt/Resume the creation of new generations (Default: Enter Key).
