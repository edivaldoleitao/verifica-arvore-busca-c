// Função recebe uma raiz da árvore binária e
// verifica se é de busca devolve
// devolve 1 caso seja verdade e 0 para falso.
int testa_arv_bin(noh raiz) {
 if(raiz->esq != NULL ){
 if(raiz->chave >= raiz->esq->chave)
 if (!testa_arv_bin(raiz->esq))
 return 0;
 }
 else {
if(raiz->esq == NULL) {
 return 1;
 }
else {
 return 0;
}
 if(raiz->dir !=NULL )
if(raiz->chave <= raiz->dir->chave)
 if(!testa_arv_bin(raiz->dir))
 return 0;
 else {
 if(raiz->dir == NULL)
 return 1;
else
 return 0;
 }
 }
