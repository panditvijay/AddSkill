1. Cpp Cheet sheet : https://www.hoomanb.com/cs/quickref/CppQuickRef.pdf
2. how source code build and execute in c++ : https://www.hackerearth.com/practice/notes/build-process-cc/
3. External Merge Sort 
   
   - We have created 6 files out of one big file namely "temp_words1.txt", "temp_words2.txt", ... "temp_words6.txt"
   - Sorted those files as "sorted_words1.txt", "sorted_words2.txt", ... "sorted_words6.txt"
   - Created 6 vectors v1, v2, ... v6 and added 50% of words from the respective sorted files.
   - Created another vector "result" size same as previous vector to store sorted file at the and.
   - Created Min-Heap of size 6 and added one value(word) from each vector (v1, v2, ... v6). 
   - For each "Pop" word will get added to "result" vector and when it gets full we write it back to disk as "result1.txt", "result2.txt"      and so on. 
   
