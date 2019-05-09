﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rack
{
    private bool[] rack;
    private GameObject[] tiles;

    public Rack()
    {
        rack = new bool[7];
        tiles = new GameObject[7];
        for (int i = 0; i < 7; i++)
            // false means that the rack slot is empty , true means that there is a tile
            rack[i] = false;
    }
    public void clear_rack ()
    {
        tiles = new GameObject[7];
        rack = new bool[7];
        for (int i = 0; i < 7; i++)
            // true means that the rack slot is empty , false means that there is a tile
            rack[i] = false;

    }
    public void setRack(int index, GameObject tile, bool value)
    {
        rack[index] = value;
        tiles[index] = tile;
    }

    public void setRackValue(bool value,int index)
    {
        rack[index] = value;
    }

    public bool getRack(int index)
    {
        return rack[index];
    }

    public GameObject getTileOnRack(int index)
    {
        return tiles[index];
    }

    public GameObject[] getAllTiles()
    {
        return tiles;
    }
}