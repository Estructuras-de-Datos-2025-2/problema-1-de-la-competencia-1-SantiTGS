#!/usr/bin/env python3
import random, os; random.seed(42)
def write_case(name, n, arr):
    os.makedirs("tests", exist_ok=True)
    open(f"tests/input_{name}.txt","w").write(str(n)+"\n"+" ".join(map(str,arr))+"\n")
    s=sum(arr); avg=s/max(1,n)
    open(f"tests/output_{name}.txt","w").write(f"Suma: {s}\nPromedio: {avg:.2f}\n")
def main():
    write_case("min", 1, [5])
    n=10**5; arr=[i%100 for i in range(n)]; write_case("max", n, arr)
    n=1234; arr=[random.randint(-1000,1000) for _ in range(n)]; write_case("rnd", n, arr)
if __name__=="__main__": main()
