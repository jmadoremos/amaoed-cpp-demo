# Week 003 - Problem Solving through Flowcharts 2

## Problem Statement

Write a program that accepts an integer input from the user and display the least number of combinations of 10s, 5s, and 1s.

## Phase 1

```mermaid
---
title: Phase 1 Flowchart
---
flowchart TD
  %% Node definition:
  start1((START)):::terminal
  declare{{DECLARE userValue,\nremainingValue, temp}}
  input[/INPUT userValue/]
  set_value[remainingValue = userValue]
  next1((1)):::connector

  %% Flow definition:
  start1 --> declare --> input --> set_value --> next1

  %% Class definition:
  classDef default padding:10px,stroke-width:2px
  classDef terminal stroke-width:4px,padding:20px
  classDef connector padding:20px
```

## Phase 2

```mermaid
---
title: Phase 2 Flowchart
---
flowchart TD
  %% Node definition:
  next1((1)):::connector
  is_remaining{remainingValue >= 10}
  set_temp[temp = remainingValue / 10]
  set_remaining[remainingValue = remainingValue % 10]
  output[OUTPUT 'There are ' + temp + ' 10s.']
  next2((2)):::connector

  %% Flow definition:
  next1 --> is_remaining
  is_remaining -->|Yes| set_temp --> set_remaining --> output --> next2
  is_remaining -->|No| next2

  %% Class definition:
  classDef default padding:10px,stroke-width:2px
  classDef connector padding:20px
```

## Phase 3

```mermaid
---
title: Phase 3 Flowchart
---
flowchart TD
  %% Node definition:
  next2((2)):::connector
  is_remaining{remainingValue >= 5}
  set_temp[temp = remainingValue / 5]
  set_remaining[remainingValue = remainingValue % 5]
  output5[OUTPUT 'There are ' + temp + ' 5s.']
  output1[OUTPUT 'There are ' + remainingValue + ' 1s.']
  end1((END)):::terminal

  %% Flow definition:
  next2 --> is_remaining
  is_remaining -->|Yes| set_temp --> set_remaining --> output5 --> output1
  is_remaining -->|No| output1
  output1 --> end1

  %% Class definition:
  classDef default padding:10px,stroke-width:2px
  classDef terminal stroke-width:4px,padding:20px
  classDef connector padding:20px
```
