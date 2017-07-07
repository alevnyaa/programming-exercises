var SETTINGS = {
  GRID_X: 10,
  GRID_Y: 10,
  CANVAS_X: 400,
  CANVAS_Y: 400,
  CELL_SIZE: function(){
    return SETTINGS.CANVAS_X / SETTINGS.GRID_X;
  },
  DRAW_PER: 0.9,
  DRAW_SIZE: function(){
    return SETTINGS.CELL_SIZE() * SETTINGS.DRAW_PER;
  },
  MINE_PER: 0.15
};

var PALETTE = {
  DARKEST: "#272323",
  DARKER: "#38332c",
  MIDDLE: "#451717",
  LIGHTER: "#5a2525",
  LIGHTEST: "#a94646"
};

var BOARD = (function() {
  //initialize empty 2d grid array
  this.grid = new Array(SETTINGS.GRID_X);
  for(i = 0; i < SETTINGS.GRID_X; i++){
    this.grid[i] = new Array(SETTINGS.GRID_Y);
  }
  
  //randomize whole grid and start over
  this.randomize = function(){
    for(i = 0; i < SETTINGS.GRID_X; i++){
      for(j = 0; j < SETTINGS.GRID_Y; j++){
        inside = 0;
        if(Math.random() < SETTINGS.MINE_PER){
          inside = -1;
        }
        this.grid[i][j] = new cell(i, j, inside);
      }
    }
  };

  //counts number of mines adjacent to cells 
  this.count = function(){
    //check for all 8 adjacent
    //if cells is mine, skip
    for(i = 0; i < SETTINGS.GRID_X; i++){
      for(j = 0; j < SETTINGS.GRID_Y; j++){
        //if is not a mine
        if(this.grid[i][j].inside > -1){
          //start count
          this.grid[i][j].inside = 0;
          //n j-1
          if(j > 0){
            if(this.grid[i][j-1].inside === -1){
              this.grid[i][j].inside++;
            }
          }
          //s j+1
          if(j < SETTINGS.GRID_Y - 2){
            if(this.grid[i][j+1].inside === -1){
              this.grid[i][j].inside++;
            }
          }
          //w i-1
          if(i > 0){
            if(this.grid[i-1][j].inside === -1){
              this.grid[i][j].inside++;
            }
          }
          //e i+1
          if(i < SETTINGS.GRID_X - 2){
            if(this.grid[i+1][j].inside === -1){
              this.grid[i][j].inside++;
            }
          }
          //ne i+1 j-1
          if(i < SETTINGS.GRID_X - 2 && j > 0){
            if(this.grid[i+1][j-1].inside === -1){
              this.grid[i][j].inside++;
            }
          }
          //sw i-1 j+1
          if(i > 0 && j < SETTINGS.GRID_Y - 2){
            if(this.grid[i-1][j+1].inside === -1){
              this.grid[i][j].inside++;
            }
          }
          //nw i-1 j-1
          if(i > 0 && j > 0){
            if(this.grid[i-1][j-1].inside === -1){
              this.grid[i][j].inside++;
            }
          }
          //se i+1 j+1
          if(i < SETTINGS.GRID_X - 2 && j < SETTINGS.GRID_Y - 2){
            if(this.grid[i+1][j+1].inside === -1){
              this.grid[i][j].inside++;
            }
          }
        }else{
          this.grid[i][j].inside = -1; 
        }
      }
    }
  };
  
  return {
    "grid": this.grid,
    "randomize": this.randomize,
    "count": this.count,
  };
})();

function cell(x, y, inside) {
  this.inside = inside;
  //0 is hidden, 1 is revealed, 2 is flagged
  this.state = 0;
  this.position = {
    x: x,
    y: y
  };
  this.center = {
    x: (0.5 + x) * SETTINGS.CELL_SIZE(),
    y: (0.5 + y) * SETTINGS.CELL_SIZE()
  };
}

function setup(){
  createCanvas(SETTINGS.CANVAS_X+1, SETTINGS.CANVAS_Y+1);
  background(PALETTE.DARKER);
  BOARD.randomize();
  BOARD.count();
}

function mousePressed(){
  //handle input
  //set to 1 on click
  //set to 2 on right click
  cell_size = SETTINGS.CELL_SIZE();
  outline_size = (cell_size - SETTINGS.DRAW_SIZE()) / 2;
  on_button = false;
  if(mouseX % cell_size < cell_size - outline_size
      && mouseX % cell_size > outline_size
      && mouseY % cell_size < cell_size - outline_size
      && mouseY % cell_size > outline_size){
    on_button = true;
    pos_x = Math.floor(mouseX / SETTINGS.CELL_SIZE());
    pos_y = Math.floor(mouseY / SETTINGS.CELL_SIZE());
    BOARD.grid[pos_x][pos_y].state = 1;
  }
}

function draw(){
  rectMode(CENTER);
  for(i = 0; i < SETTINGS.GRID_X; i++){
    for(j = 0; j < SETTINGS.GRID_Y; j++){
      rect(
        BOARD.grid[i][j].center.x,
        BOARD.grid[i][j].center.y,
        SETTINGS.DRAW_SIZE(),
        SETTINGS.DRAW_SIZE()
      );
    }
  }
}
