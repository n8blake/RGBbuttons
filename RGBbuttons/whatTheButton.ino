void whatTheButton() {
  
  if (greenButtonStateReset != greenButtonState && greenButtonState == 1 && greenOn == false) {
      greenButtonStateReset = greenButtonState;
      greenOn = true;
  }
  
  if (greenButtonStateReset != greenButtonState && greenButtonState == 1 && greenOn == true) {
      greenButtonStateReset = greenButtonState;
      greenOn = false;
  }
  
  if (greenButtonStateReset != greenButtonState && greenButtonState == 0) {
     greenButtonStateReset = greenButtonState; 
  }
  
  if (yellowButtonStateReset != yellowButtonState && yellowButtonState == 1 && yellowOn == false) {
      yellowButtonStateReset = yellowButtonState;
      yellowOn = true;
  }
  
  if (yellowButtonStateReset != yellowButtonState && yellowButtonState == 1 && yellowOn == true) {
      yellowButtonStateReset = yellowButtonState;
      yellowOn = false;
  }
  
  if (yellowButtonStateReset != yellowButtonState && yellowButtonState == 0) {
     yellowButtonStateReset = yellowButtonState; 
  }
  
  if (redButtonStateReset != redButtonState && redButtonState == 1 && redOn == false) {
      redButtonStateReset = redButtonState;
      redOn = true;
  }
  
  if (redButtonStateReset != redButtonState && redButtonState == 1 && redOn == true) {
      redButtonStateReset = redButtonState;
      redOn = false;
  }
  
  if (redButtonStateReset != redButtonState && redButtonState == 0) {
     redButtonStateReset = redButtonState; 
  }
}
