// 1117. Building H2O
import java.util.concurrent.BrokenBarrierException;
import java.util.concurrent.CyclicBarrier;
import java.util.concurrent.Semaphore;

public class H2O
{
	private final Semaphore hydrogenSemaphore = new Semaphore(2);
	private final Semaphore oxygenSemaphore = new Semaphore(1);

	private final CyclicBarrier barrier = new CyclicBarrier(3);

	public H2O()
	{
	}

	public void hydrogen(Runnable releaseHydrogen) throws InterruptedException
	{
		hydrogenSemaphore.acquire();

		try
		{
			barrier.await();
		}
		catch (BrokenBarrierException e)
		{
		}

		// releaseHydrogen.run() outputs "H". Do not change or remove this line.
		releaseHydrogen.run();
		hydrogenSemaphore.release();
	}

	public void oxygen(Runnable releaseOxygen) throws InterruptedException
	{
		oxygenSemaphore.acquire();

		try
		{
			barrier.await();
		}
		catch (BrokenBarrierException e)
		{
		}

		// releaseOxygen.run() outputs "O". Do not change or remove this line.
		releaseOxygen.run();
		oxygenSemaphore.release();
	}
}
