<h2><a href="https://www.geeksforgeeks.org/problems/circular-linked-list/1?page=1&company=SAP%20Labs&sortBy=submissions">Check If Circular Linked List</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given the <strong>head</strong>, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it is not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered circular.</span></p>
<p><span style="font-size: 14pt;"><strong>Note:</strong> The linked list does not contain any inner loop.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<p><span style="font-size: 14pt;"><strong>Note: </strong>In the input format, k = 1 indicates the presence of a cycle; otherwise, k = 0, followed by the linked list values on a new line.</span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>k=1,<strong> </strong>LinkedList: 2-&gt;4-&gt;6-&gt;7-&gt;5<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700172/Web/Other/blobid2_1720504073.png" width="400" height="140"><br><strong>Output: </strong>true<br><strong>Explanation: </strong>As shown in figure the first and last node is connected, i.e. 5 --&gt; 2<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>k=0, LinkedList: 2-&gt;4-&gt;6-&gt;7-&gt;5-&gt;1<br></span><span style="font-size: 14pt;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700172/Web/Other/blobid3_1720504109.png" width="400" height="90"> <br><strong>Output: </strong>false<br><strong>Explanation: </strong>As shown in figure this is not a circular linked list.</span></pre>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:&nbsp;</strong>O(n)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>0 &lt;= number of nodes &lt;= 100<br>1 &lt;= node -&gt; data &lt;= 10<sup>4</sup><br></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<code>MAQ Software</code>&nbsp;<code>SAP Labs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>circular-linked-list</code>&nbsp;<code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;