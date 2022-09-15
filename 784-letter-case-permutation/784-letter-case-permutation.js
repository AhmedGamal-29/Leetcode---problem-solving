var letterCasePermutation = function(S) {
    
    let answer = [];
    let arr = S.toLowerCase().split('');
    
    function run(currentArr){
                                    
            for(let i=0; i<currentArr.length; i++){
                if (currentArr[i] != currentArr[i].toUpperCase()) {
                    newArray = new Array(...currentArr);
                    newArray[i] = newArray[i].toUpperCase();
                   if ( answer.includes(newArray.join('')) != true){
                        answer.push(newArray.join(''));                    
                        run(newArray);   
                    }
                }
            };  
    }
    
    answer.push(arr.join(''));
    run(arr);
    return answer;       
};