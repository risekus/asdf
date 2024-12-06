문제의 풀이 과정을 차근차근 설명드리겠습니다.

---

### 문제 3 풀이:

**주어진 식**:  
\[
\frac{(n-1)S^2}{\sigma^2}
\]

1. **이 식의 확률분포**를 알아내기 위해 먼저 \((n-1)S^2\)의 분포를 살펴봅니다. 여기서 \(S^2\)는 샘플 분산(sample variance)을 의미하며, 다음과 같이 정의됩니다:
   \[
   S^2 = \frac{1}{n-1} \sum_{i=1}^n (X_i - \bar{X})^2
   \]

2. \(X_i \sim N(\mu, \sigma^2)\)인 독립 동일 분포(i.i.d.)일 경우, \((n-1)S^2 / \sigma^2\)는 **카이제곱 분포**를 따릅니다.  
   \[
   \frac{(n-1)S^2}{\sigma^2} \sim \chi^2_{n-1}
   \]
   따라서, **분포는 카이제곱 분포**입니다.

3. 기대값 \(E\left[\frac{(n-1)S^2}{\sigma^2}\right]\)를 구하면, 카이제곱 분포의 성질에 의해:
   \[
   E\left[\frac{(n-1)S^2}{\sigma^2}\right] = n-1
   \]

---

### 문제 4 풀이:

**주어진 식**:  
\[
\sum_{i=1}^n \left(\frac{X_i - \mu}{\sigma}\right)^2
\]

1. \(\frac{X_i - \mu}{\sigma}\)는 표준 정규 분포를 따릅니다. 즉:
   \[
   Z_i = \frac{X_i - \mu}{\sigma} \sim N(0, 1)
   \]

2. 따라서, \(\sum_{i=1}^n Z_i^2\)는 독립 표준 정규 분포 변수의 제곱합으로 이루어져 있으며, 이는 **카이제곱 분포**를 따릅니다:
   \[
   \sum_{i=1}^n \left(\frac{X_i - \mu}{\sigma}\right)^2 \sim \chi^2_n
   \]

3. 이 식의 기대값은 카이제곱 분포의 성질에 의해:
   \[
   E\left[\sum_{i=1}^n \left(\frac{X_i - \mu}{\sigma}\right)^2\right] = n
   \]

---

### 최종 답변:
- **문제 3**: \(\frac{(n-1)S^2}{\sigma^2} \sim \chi^2_{n-1}\), \(E\left[\frac{(n-1)S^2}{\sigma^2}\right] = n-1\)
- **문제 4**: \(\sum_{i=1}^n \left(\frac{X_i - \mu}{\sigma}\right)^2 \sim \chi^2_n\), \(E\left[\sum_{i=1}^n \left(\frac{X_i - \mu}{\sigma}\right)^2\right] = n\)
