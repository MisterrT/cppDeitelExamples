#ifndef INTERFACE_H
#define INTERFACE_H

/*La seguente costituisce una 

        DICHIARAZIONE DEL NOME DEL TIPO

  Essa però non costituisce una definizione, quindi l'entità
  Implementation potrà essere utilizzata solo se è definita altrove (cfr. Stroustrup pag. 142 * )
  (In questo caso Implementation è definita in Implementation.h) 
  
  *( in tale pagina si fa riferimento alle struct, che altro non sono, PER DEFINIZIONE, 
     delle 'Class' con tutti i membri public, cfr. Stroustrup pag. 414 )

  NOTA: la seguente è altresì detta "DICHIARAZIONE ANTICIPATA" (cfr. D&D pag. 546)*/
  
class Implementation;

class Interface{
    public:
        Interface(int v);
        void setValue(int v);
        int getValue() const;
        ~Interface();
    private:
        Implementation* ptr;
};

#endif