jwchoi
=====

Link
--------
 - ���α׷��� ö��
    - http://nuguri.tistory.com/ 
 - �� Open Source(redis ����)�� Windows�� �������� �ʴ���?
    - http://blog.hazard.kr/71

Redis
--------
 - Redis �Ұ�
    - http://bcho.tistory.com/654
 - DB Engine Ranking
    - http://db-engines.com/en/ranking
 - Redis�� ���� ���� ����
[Redis] ���� ���� ������?

Redis ���ٰ� �ϴµ�, ������ �������缭 ���°ͺ��� ���� ��� �������� �˾ƾ� ȿ�������� ����� �� ������ ����.

���� �������ڸ�
1. Redis ���ٰ� ������ ���� DB ���� ���� �ʿ����.
2. ���� DB�� �ذ��ϱ� ����� ������ Redis�� ������ ������ �ȴ�. ���� "just adding it to your stack" �̶�� ǥ���� ���
3. ������ ���
 - �ֱ� TOP elements(���) ��ȸ
 - ��ŷ
 - ...

������, Redis�� �޸𸮸� main storage�� ����ϱ� ������ memory ���� ū �����͸� �ٷ�� ��� �������� �ʴٴ� ���� ���!!

References
http://oldblog.antirez.com/post/take-advantage-of-redis-adding-it-to-your-stack.html


[Redis] Redis?
It is also referred to as the data-structure stored as the keys and hold different data-structure as their value.

Redis�� �����ϴ� ������ ���� ã�� �� �ִµ�, memcached�� �������̱⵵ �� ���� ������ ���� �� ��´�.
memcached ���� in-memory key value store�̱� ������ value�� string�ۿ� ������ ���ϳ�,
redis�� set, list, hash ���� �ڷᱸ���� value�� ���� �� �ִ�.

�� �ܿ��� Redis�� ���� ����ؾ� ������ ���� ������ �� �����ִ�.

Redis�� ���鼭 ���� ��� ������, ������ �кζ� �ڷᱸ�������ð� �����Բ��� ���̴ּ� ������ ����� ����.
'� �ڷᱸ���� ������� ���� �߿��� ���� � ������ ������ �������� ���� �ڷᱸ���� �����϶�' ��� ���̴�.
������ ���� ȿ�������� ������ �� �ִ� �ڷᱸ���� ������ �ʿ䰡 �ִٴ� ���̴�.

Redis ���� �ƹ����Գ� ����ϴ� ���� �ƴ϶�, ���ø����̼ǿ��� ���� �䱸������ �ִ��� �� �ľ��� �� �̰��� Redis�� �����ϴ� ������� ���� �ذ�ȴٸ� �����ϸ� �� ���̴�.

References
http://ttltheory.wordpress.com/tag/redis-examples/
