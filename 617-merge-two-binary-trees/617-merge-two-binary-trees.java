public class Solution {
 

  public TreeNode mergeTrees(TreeNode t1, TreeNode t2)
  {
    TreeNode mergedNode = null;
    if((t1 == null) && (t2 == null)) {
      return mergedNode;
    } else if(t2 == null) {
      mergedNode = new TreeNode(t1.val);
      mergedNode.left = mergeTrees(t1.left, t2);
      mergedNode.right = mergeTrees(t1.right, t2);
    } else if(t1 == null) {
      mergedNode = new TreeNode(t2.val);
      mergedNode.left = mergeTrees(t1, t2.left);
      mergedNode.right = mergeTrees(t1, t2.right);
    } else {
      mergedNode = new TreeNode(t1.val + t2.val);
      mergedNode.left = mergeTrees(t1.left, t2.left);
      mergedNode.right = mergeTrees(t1.right, t2.right);
    }
    return mergedNode;
  }

}