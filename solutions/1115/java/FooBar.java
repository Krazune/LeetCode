// 1115. Print FooBar Alternately
import java.util.concurrent.Semaphore;

public class FooBar
{
	private final Semaphore fooSemaphore;
	private final Semaphore barSemaphore;

	private int n;

	public FooBar(int n)
	{
		fooSemaphore = new Semaphore(1);
		barSemaphore = new Semaphore(0);

		this.n = n;
	}

	public void foo(Runnable printFoo) throws InterruptedException
	{
		for (int i = 0; i < n; i++)
		{
			fooSemaphore.acquire();

			// printFoo.run() outputs "foo". Do not change or remove this line.
			printFoo.run();
			barSemaphore.release();
		}
	}

	public void bar(Runnable printBar) throws InterruptedException
	{
		for (int i = 0; i < n; i++)
		{
			barSemaphore.acquire();

			// printBar.run() outputs "bar". Do not change or remove this line.
			printBar.run();
			fooSemaphore.release();
		}
	}
}
