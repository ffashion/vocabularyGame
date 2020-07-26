int getWordInFile(FILE file);//读取文件,获取单词
int isMeanCorrect(const char *in , const char *correct); // 判断单词是否正确,若正确得分+1,若不正确则记录
int isSpeechCorrect(const char *in, const char *correct); //判断词性是否正确,若正确得分+1 若不正确则记录
int getGrade();//获取当前得分
int getGradeInfo(); //获取得分的详细信息,比如哪些单词错误等.
int	getTempWord(const char * word[], int repeat);//获取随机单词,获取单词不重复,repeat 定义重复程度

