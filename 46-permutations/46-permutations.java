class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> allPermutations = new ArrayList<>();
        Set<List<Integer>> uniqPermutations = new HashSet<>();
        computeAllPermutations(uniqPermutations, allPermutations, 0, nums);
        return allPermutations;
    }
    
    public void computeAllPermutations(Set<List<Integer>> set, List<List<Integer>> allPermutations, int idx, int [] nums) {
        if (idx < nums.length) {
            List<Integer> list = new ArrayList<>();
            for (int i = 0; i < nums.length; ++i) {
                list.add(nums[i]);
                swap(idx, i, nums);
                computeAllPermutations(set, allPermutations, idx+1, nums);
                swap(idx, i, nums);
            }
            if (!set.contains(list)) {
                allPermutations.add(list);
                set.add(list);
            }
        }
    }
    
    public void swap (int i, int j, int [] nums) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}