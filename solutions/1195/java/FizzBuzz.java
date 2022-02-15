// 1195. Fizz Buzz Multithreaded
import java.util.concurrent.Semaphore;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.function.IntConsumer;

public class FizzBuzz
{
	private final Semaphore fizzSemaphore = new Semaphore(0);
	private final Semaphore buzzSemaphore = new Semaphore(0);
	private final Semaphore fizzBuzzSemaphore = new Semaphore(0);
	private final Semaphore numberSemaphore = new Semaphore(1);

	private final AtomicInteger currentN = new AtomicInteger();

	private int n;

	public FizzBuzz(int n)
	{
		this.n = n;
	}

	// printFizz.run() outputs "fizz".
	public void fizz(Runnable printFizz) throws InterruptedException
	{
		while (true)
		{
			fizzSemaphore.acquire();

			if (currentN.get() > n)
			{
				break;
			}

			printFizz.run();
			numberSemaphore.release();
		}

		// Allow other methods to complete (only works for this exercise).
		buzzSemaphore.release();
		fizzBuzzSemaphore.release();
		numberSemaphore.release();
	}

	// printBuzz.run() outputs "buzz".
	public void buzz(Runnable printBuzz) throws InterruptedException
	{
		while (true)
		{
			buzzSemaphore.acquire();

			if (currentN.get() > n)
			{
				break;
			}

			printBuzz.run();
			numberSemaphore.release();
		}

		// Allow other methods to complete (only works for this exercise).
		fizzSemaphore.release();
		fizzBuzzSemaphore.release();
		numberSemaphore.release();
	}

	// printFizzBuzz.run() outputs "fizzbuzz".
	public void fizzbuzz(Runnable printFizzBuzz) throws InterruptedException
	{
		while (true)
		{
			fizzBuzzSemaphore.acquire();

			if (currentN.get() > n)
			{
				break;
			}

			printFizzBuzz.run();
			numberSemaphore.release();
		}

		// Allow other methods to complete (only works for this exercise).
		fizzSemaphore.release();
		buzzSemaphore.release();
		numberSemaphore.release();
	}

	// printNumber.accept(x) outputs "x", where x is an integer.
	public void number(IntConsumer printNumber) throws InterruptedException
	{
		while (true)
		{
			numberSemaphore.acquire();

			if (currentN.incrementAndGet() > n)
			{
				break;
			}

			int currentNCache = currentN.get();

			if (currentNCache % 3 == 0)
			{
				if (currentNCache % 5 == 0)
				{
					fizzBuzzSemaphore.release();
				}
				else
				{
					fizzSemaphore.release();
				}
			}
			else if (currentNCache % 5 == 0)
			{
				buzzSemaphore.release();
			}
			else
			{
				printNumber.accept(currentNCache);
				numberSemaphore.release();
			}
		}

		// Allow other methods to complete (only works for this exercise).
		fizzSemaphore.release();
		buzzSemaphore.release();
		fizzBuzzSemaphore.release();
	}
}
