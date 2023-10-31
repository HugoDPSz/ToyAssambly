#ifndef OPLOG_H
#define OPLOG_H

int fbeq(char comando[][30], int linha, int r[32]);
int fblt(char comando[][30], int linha, int r[32]);
int fjmp(char comando[][30], int linha);

#endif