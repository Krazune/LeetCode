// 1116. Print Zero Even Odd
import java.util.concurrent.Semaphore;
import java.util.function.IntConsumer;

public class ZeroEvenOdd
{
	private final Semaphore zeroSemaphore = new Semaphore(1);
	private final Semaphore evenSemaphore = new Semaphore(0);
	private final Semaphore oddSemaphore = new Semaphore(0);

	private final int n;

	public ZeroEvenOdd(int n)
	{
		this.n = n;
	}

	// printNumber.accept(x) outputs "x", where x is an integer.
	public void zero(IntConsumer printNumber) throws InterruptedException
	{
		for (int i = 0; i < n; ++i)
		{
			zeroSemaphore.acquire();
			printNumber.accept(0);

			if (i % 2 == 0)
			{
				oddSemaphore.release();
			}
			else
			{
				evenSemaphore.release();
			}
		}
	}

	public void even(IntConsumer printNumber) throws InterruptedException
	{
		for (int i = 2; i <= n; i += 2)
		{
			evenSemaphore.acquire();
			printNumber.accept(i);
			zeroSemaphore.release();
		}
	}

	public void odd(IntConsumer printNumber) throws InterruptedException
	{
		for (int i = 1; i <= n; i += 2)
		{
			oddSemaphore.acquire();
			printNumber.accept(i);
			zeroSemaphore.release();
		}
	}
}
