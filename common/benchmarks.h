#ifndef IPC_BENCH_BENCHMARKS_H
#define IPC_BENCH_BENCHMARKS_H

struct Arguments;

typedef unsigned long bench_t;

struct Benchmarks {

	// Start of the total benchmarking
	bench_t total_start;

	// Start of single benchmark
	bench_t single_start;

	// Minimum time
	bench_t minimum;

	// Maximum time
	bench_t maximum;

	// Sum (for averaging)
	bench_t sum;

	// Squared sum (for standard deviation)
	bench_t squared_sum;
};

bench_t now();

void setup_benchmarks(struct Benchmarks *bench);

void benchmark(struct Benchmarks *bench);

void evaluate(struct Benchmarks *bench, struct Arguments *args);

#endif /* IPC_BENCH_BENCHMARKS_H */
