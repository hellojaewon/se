jwchoi
=====

Link
--------
 - 프로그래머 철학
    - http://nuguri.tistory.com/ 
 - 왜 Open Source(redis 포함)는 Windows를 지원하지 않는지?
    - http://blog.hazard.kr/71

Redis
--------
 - Redis 소개
    - http://bcho.tistory.com/654
 - DB Engine Ranking
    - http://db-engines.com/en/ranking
 - Redis에 대한 나의 생각
[Redis] 언제 쓰면 좋을지?

Redis 좋다고 하는데, 무조건 끼워맞춰서 쓰는것보다 언제 어떨때 유용한지 알아야 효율적으로 사용할 수 있을것 같다.

대충 정리하자면
1. Redis 쓴다고 무조건 현재 DB 갈아 엎을 필요없다.
2. 기존 DB로 해결하기 어려운 문제를 Redis로 보완해 나가면 된다. 따라서 "just adding it to your stack" 이라는 표현을 사용
3. 유용한 사례
 - 최근 TOP elements(댓글) 조회
 - 랭킹
 - ...

하지만, Redis는 메모리를 main storage로 사용하기 때문에 memory 보다 큰 데이터를 다루는 경우 적합하지 않다는 것을 명심!!

References
http://oldblog.antirez.com/post/take-advantage-of-redis-adding-it-to-your-stack.html


[Redis] Redis?
It is also referred to as the data-structure stored as the keys and hold different data-structure as their value.

Redis를 정의하는 문장은 쉽게 찾을 수 있는데, memcached와 차이점이기도 한 위의 문장이 가장 와 닿는다.
memcached 역시 in-memory key value store이긴 하지만 value로 string밖에 가지지 못하나,
redis는 set, list, hash 등의 자료구조를 value로 가질 수 있다.

그 외에도 Redis를 언제 사용해야 할지에 대한 설명이 잘 나와있다.

Redis를 보면서 문득 드는 생각이, 예전에 학부때 자료구조수업시간 교수님께서 해주셨던 말씀이 기억이 난다.
'어떤 자료구조를 사용할지 고를때 중요한 것은 어떤 연산을 수행할 것인지에 따라 자료구조를 선택하라' 라는 것이다.
연산을 가장 효율적으로 수행할 수 있는 자료구조를 선택할 필요가 있다는 것이다.

Redis 역시 아무렇게나 사용하는 것이 아니라, 어플리케이션에서 무슨 요구사항이 있는지 잘 파악한 후 이것을 Redis가 제공하는 방법으로 쉽게 해결된다면 선택하면 될 것이다.

References
http://ttltheory.wordpress.com/tag/redis-examples/
