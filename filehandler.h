//---- FILE IO objects------
#define ASMFILE "asmcode.txt"
#define HEXFILE "asm2hex.txt"

int openFiles(FILE** r,FILE** w)
{
  *r = fopen(ASMFILE, "r");
  if(*r==NULL)
  {
    printf("Error while opening %s\n", ASMFILE);
    return -1;
  }
  *w=fopen(HEXFILE, "w");
  if(*w==NULL)
  {
    printf("Error while opening %s\n", HEXFILE);
    return -1;
  }
  return 0;
}

void closeFiles(FILE** r,FILE** w)
{
  fclose(*r);
  fclose(*w);
}