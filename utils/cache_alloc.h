#ifndef _cache_alloc_h_
#define _cache_alloc_h_

#ifdef __cplusplus
extern "C" {
#endif
	struct cache_allocer* create_cache_allocer(int capacity, int elem_size);
	void destroy_cache_allocer(struct cache_allocer* allocer);

	void* cache_alloc(struct cache_allocer* allocer, int elem_size);
	void cache_free(struct cache_allocer* allocer, void* mem);

#ifdef __cplusplus
}
#endif

#endif // !_cache_alloc_h_
