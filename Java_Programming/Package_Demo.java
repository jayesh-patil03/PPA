import Marvellous.LB;
import Marvellous.PPA;
import Marvellous.infosystem.Python;

class Package_Demo 
{
    public static void main(String[] A)
    {
        PPA pobj = new PPA();

        LB lobj = new LB();

        Python pyobj = new Python();


        pobj.PPA_Fun();
        lobj.LB_Fun();
        pyobj.Python_Fun();
    }
}
