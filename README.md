# HearthNet
A Hearthstone AI

## Components
- Rules Engine
- Board State Evaluation Network
- Monte Carlo Decision Tree
Mostly implemented in headers for optimization

## Build & Run
Prerequisite Libraries:
- <placehoder>

Compile:

```
# Default targets: train_model sim_game advisor
make
```

Train:

```
# Train Board State Evaluation network
./train_model net_structure.conf training_data.dat [-v validation_data.dat] [-o model.bin] num_epochs
```

Run:

```
# Evaluate a single simulated game and display the sequence of moves
./sim_game decklist1.txt decklist2.txt model1.bin [model2.bin]

# Hook into Heartstone API and advise a real game in in real time
./advisor [???]
```


