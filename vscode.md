# **c语言配置帮助**

## task配置

task.json配置

* ${workspaceRoot}在VS代码中打开的文件夹的路径
* ${workspaceRootFolderName}在VS代码中打开的文件夹名称，不带斜杠（/）
* ${file}当前打开的文件
* ${relativeFile}当前打开的文件相对于workspaceRoot
* ${fileBasename}当前打开的文件的basename
* ${fileBasenameNoExtension}当前打开的文件的基本名称，没有扩展名
* ${fileDirname}当前打开的文件的dirname
${fileExtname}当前打开的文件的扩展名
${cwd}启动时任务运行器的当前工作目录`

## 微软帮助文档

   [微软帮助文档](https://code.visualstudio.com/docs/languages/cpp)
   *******************

# **Markdown学习笔记**


1. 标题设置（让字体变大，和word的标题意思一样）
在Markdown当中设置标题，有两种方式：
第一种：通过在文字下方添加“=”和“-”，他们分别表示一级标题和二级标题。
第二种：在文字开头加上 “#”，通过“#”数量表示几级标题。（一共只有1~6级标题，1级标题字体最大）

2. 块注释（blockquote）
通过在文字开头添加“>”表示块注释。（当>和文字之间添加五个blank时，块注释的文字会有变化。）

3. 斜体
将需要设置为斜体的文字两端使用1个“*”或者“_”夹起来

4. 粗体
将需要设置为斜体的文字两端使用2个“*”或者“_”夹起来

5. 无序列表
在文字开头添加(*, +, and -)实现无序列表。但是要注意在(*, +, and -)和文字之间需要添加空格。（建议：一个文档中只是用一种无序列表的表示方式）

6. 有序列表
使用数字后面跟上句号。（还要有空格）

7. 链接（Links）
Markdown中有两种方式，实现链接，分别为内联方式和引用方式。
内联方式：This is an [example link](http://example.com/).
引用方式：
I get 10 times more traffic from [Google][1] than from [Yahoo][2] or [MSN][3].  

[1]: http://google.com/        "Google" 
[2]: http://search.yahoo.com/  "Yahoo Search" 
[3]: http://search.msn.com/    "MSN Search"
 

8. 图片（Images）
图片的处理方式和链接的处理方式，非常的类似。
内联方式：![alt text](path "Title")
引用方式：
![alt text][id] 

[id]: path "Title"

9. 代码（HTML中所谓的Code）
实现方式有两种：
第一种：简单文字出现一个代码框。使用`<blockquote>`。（`不是单引号而是左上角的ESC下面~中的`）
第二种：大片文字需要实现代码框。使用Tab和四个空格。

10. 脚注（footnote）
实现方式如下：
hello[^hello]


[^hello]: hi

11. 下划线
在空白行下方添加三条“-”横线。（前面讲过在文字下方添加“-”，实现的2级标题）

 插入图片的地址需要图床，这里推荐围脖图床修复计划 与 CloudApp 的服务，生成URL地址即可。

 [参考文档](https://github.com/othree/markdown-syntax-zhtw/blob/master/syntax.md)
 ***********************************************************************************

# GIT学习笔记

[简单参考文档](rogerdudler.github.io/git-guide/index.zh.html)
[参考文档2](http://marklodato.github.io/visual-git-guide/index-zh-cn.html)




