﻿using System;
using System.Collections.Generic;
using System.Text;

namespace House
{
    class Wall:IPart
    {
        private string name;

        public Wall(string name)
        {
            this.name = name;
        }

        public string GetName//читання.
        {
            get
            {
                return name;
            }
        }
    }
}
