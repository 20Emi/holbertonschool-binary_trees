<h1>Binary tree</h1>

<h2>which is</h2>
<p>It is a hierarchical data structure in the form of a tree in which each node has at most two children, called left child and right child. The nodes of the tree are organized in such a way that each node can have zero, one or two children.
There are three ways to traverse a tree:</p>
<li>Traverse in order</li>
<li>Pre-order Traversal</li>
<li>Post-order traversal</li>

<h3>In-order Traversal</h3>

<p>In this traversal method, first the left subtree is explored, then the root and finally the right subtree. furthermore, taking into account that each node can represent a complete subtree by itself.

If you traverse a binary tree in order, you will get an output of the key values in ascending order.
<img width="328" alt="orden transversal" src="https://github.com/20Emi/holbertonschool-binary_trees/assets/124268926/21a033dd-40f3-4920-9fe4-3dedc6f82e9f">

In the in-order traversal, we start at node A and, following the in-order traversal, move towards its left subtree B. Then, the subtree of B is also explored in order. This process is repeated until all nodes are visited. The resulting output of the in-order traversal of this tree will be:
</p>
<h5>D → B → E → A → F → C → G</h5>

<h3>Pre-order Traversal</h3>

<p>In this walkthrough method, we start by visiting the root node, then explore the left subtree and finally the right subtree.
<img width="325" alt="reservar_transversal" src="https://github.com/20Emi/holbertonschool-binary_trees/assets/124268926/3d659fa6-5914-414f-9592-ae78ddfde171">

In the preorder path, we start at node A and, following the established order, we first visit node A itself. Then, it moves to the left subtree B and also explores that subtree in preorder. This process is repeated until all nodes are visited. The resulting output of the preorder traversal of this tree will be:
</p>
<h5>A → B → D → E → C → F → G</h5>

<h3>Post-order Traversal</h3>
<p></p>
