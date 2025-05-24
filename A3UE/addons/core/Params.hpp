class Params
{
    class ExtenderParams;
    class TitleTestExtender: ExtenderParams
    {
        title = "Text Extender Params Section";
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class AParamThatDoesSomething: ExtenderParams
    {
        title = "Some param that does something or other";
        values[] = {1,2,3,4};
        texts[] = {"Option 1", "Option 2", "Option 3", "Option 4"};
        default = 1;
    };
};
