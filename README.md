# DQueue

| Operation           | Return  | Queue      |
|---------------------|---------|------------|
| create()            | ***dq** | `[]`       |  
| enqueue(**dq**, 8)  |         | `[8]`      |
| enqueue(**dq**, 4)  |         | `[8,4]`    |
| dequeue(**dq**)     | 8       | `[4]`      |
| enqueue(**dq**, 7)  |         | `[4,7]`    |
| enqueue(**dq**, 16) |         | `[4,7,16]` |
| size(**dq**)        | 3       | `[4,7,16]` |
| dequeue(**dq**)     | 4       | `[7,16]`   |
| peek(**dq**)        | 7       | `[7,16]`   |
| dequeue(**dq**)     | 7       | `[16]`     |
| dequeue(**dq**)     | 16      | `[]`       |
| dequeue(**dq**)     | ERROR   | `[]`       |
| empty(**dq**)       | true    | `[]`       |
