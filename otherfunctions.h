int write_register(char desti[10], FILE** hexfile)
{
  
   if(strcmp(desti, "R0")==0) fprintf(*hexfile, "0\n"); 
  else if (strcmp(desti, "R1")==0) fprintf(*hexfile, "1\n"); 
    else if (strcmp(desti, "R2")==0) fprintf(*hexfile, "2\n");
    ///complete remaining statements......////
    
  return 0;
}

