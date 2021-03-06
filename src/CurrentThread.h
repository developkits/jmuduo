#ifndef __CURRENTTHREAD_H
#define __CURRENTTHREAD_H


namespace jmuduo{

namespace CurrentThread{

	extern __thread int t_cachedTid;

	void cacheTid();

	inline int tid(){
		if(t_cachedTid==0){
			cacheTid();
		}
		return t_cachedTid;
	}
	
	bool isMainThread();

}

}


#endif