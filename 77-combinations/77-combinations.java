class Solution {
    public List<List<Integer>> combine(int n, int k) {
        
        List<List<Integer>> res = new ArrayList<>();
	 
		if (n <= 0 || n < k)
			return res;
	 
		List<Integer> item = new ArrayList<Integer>();
        
        //start from 1 to n
		dfs(n, k, 1, item, res);
	 
		return res;
    }
     
	private void dfs(int n, int k, int start, List<Integer> item, List<List<Integer>> res) {
		if (item.size() == k) 
        {
			res.add(new ArrayList<Integer>(item));
			return;
		}
	 
		for (int i = start; i <= n; i++)
        {
			item.add(i);
			dfs(n, k, i + 1, item, res);
            
            // remove the last added element
			item.remove(item.size() - 1); 
		}
	}
}