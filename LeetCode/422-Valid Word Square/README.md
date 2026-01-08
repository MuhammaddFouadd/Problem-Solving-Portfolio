<h2><a href="https://leetcode.com/problems/valid-word-square">Valid Word Square</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given an array of strings <code>words</code>, return <code>true</code> <em>if it forms a valid <strong>word square</strong></em>.</p>

<p>A sequence of strings forms a valid <strong>word square</strong> if the <code>k<sup>th</sup></code> row and column read the same string, where <code>0 &lt;= k &lt; max(numRows, numColumns)</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> words = ["abcd","bnrt","crmy","dtye"]
<strong>Output:</strong> true
<strong>Explanation:</strong>
The 1<sup>st</sup> row and 1<sup>st</sup> column both read "abcd".
The 2<sup>nd</sup> row and 2<sup>nd</sup> column both read "bnrt".
The 3<sup>rd</sup> row and 3<sup>rd</sup> column both read "crmy".
The 4<sup>th</sup> row and 4<sup>th</sup> column both read "dtye".
Therefore, it is a valid word square.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> words = ["abcd","bnrt","crm","dt"]
<strong>Output:</strong> true
<strong>Explanation:</strong>
The 1<sup>st</sup> row and 1<sup>st</sup> column both read "abcd".
The 2<sup>nd</sup> row and 2<sup>nd</sup> column both read "bnrt".
The 3<sup>rd</sup> row and 3<sup>rd</sup> column both read "crm".
The 4<sup>th</sup> row and 4<sup>th</sup> column both read "dt".
Therefore, it is a valid word square.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> words = ["ball","area","read","lady"]
<strong>Output:</strong> false
<strong>Explanation:</strong>
The 3<sup>rd</sup> row reads "read" while the 3<sup>rd</sup> column reads "lead".
Therefore, it is NOT a valid word square.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= words.length &lt;= 500</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 500</code></li>
	<li><code>words[i]</code> consists of only lowercase English letters.</li>
</ul>
