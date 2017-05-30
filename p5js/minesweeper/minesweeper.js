var SETTINGS = {
  GRID_X: 10,
  GRID_Y: 10,
  CANVAS_X: 400,
  CANVAS_Y: 400,
  CELL_SIZE: this.CANVAS_X/this.GRID_X,
  DRAW_PER: 0.9,
  MINE_PER: 0.15
};

var PALETTE = {
  DARKEST: "#272323",
  DARKER: "#38332c",
  MIDDLE: "#451717",
  LIGHTER: "#5a2525",
  LIGHTEST: "#a94646"
};

var CELLTYPES = {
  EMPTY: 0,
  MINE: -1
};

var BOARD = (function() {
  //initialize empty 2d grid array
  this.grid = new Array(SETTINGS.GRID_X);
  for(i = 0; i < SETTINGS.GRID_X; i++){
    this.grid[i] = new Array(SETTINGS.GRID_Y);
  }
  
  //call every cycle to iterate and draw cells
  //rectmode should be set to center before this
  this.draw = function(){
    rect(50, 50, 50, 50);
    alert("HEY I'M THE BOARD"); 
    //iterate grid and call draw
    for(i = 0; i < SETTINGS.GRID_X; i++){
      for(j = 0; j < SETTINGS.GRID_Y; j++){
	//set position
	//x = 
	//y =
	drawSize = SETTINGS.CELL_SIZE * SETTINGS.DRAW_PER;
	//rect(x, y, drawSize, drawSize);
      }
    }
  };

  //randomize whole grid and start over
  this.randomize = function(){
    for(i = 0; i < SETTINGS.GRID_X; i++){
      for(j = 0; j < SETTINGS.GRID_Y; j++){
	this.grid[i][j] = new cell(1,1,0);
      }
    }
  };

  return {
    "grid": this.grid,
    "randomize": this.randomize()
  };
})();

function cell(x, y, inside) {
  this.pos = {
    x: x,
    y: y
  };

  this.inside = inside;

  this.revealed = false;

  this.drawVal = function(){
    return{
    
    }
  };
}

function setup(){
  createCanvas(SETTINGS.CANVAS_X, SETTINGS.CANVAS_Y);
  background(PALETTE.DARKER);
}

function mousePressed(){
  // handle input
}

function draw(){
  rect(30, 30, 30, 30);
  for(c in BOARD.drawVal()){
     
  }
  //rectMode(CENTER);
  //BOARD.draw();
}
