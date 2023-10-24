#ifndef OPART_H
#define OPART_H

void fmov(char comando[][30], int linha, int r[32]);
void fadd(char comando[][30], int linha, int r[32]);
void fsub(char comando[][30], int linha, int r[32]);
void fmul(char comando[][30], int linha, int r[32]);
void fdiv(char comando[][30], int linha, int r[32]);
void fmodz(char comando[][30], int linha, int r[32]);

#endif