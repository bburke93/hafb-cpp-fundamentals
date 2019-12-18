#pragma once

// Create your first class
class Carton
{
    private:
        double length_;     // '_' denotes private
        double width_;
        double height_;

    public:
        // Constructor: build/create your object
        Carton();
        // Getters
        double length()
        {
            return length_;
        }
        double width()
        {
            return width_;
        }
        double height()
        {
            return height_;
        }

};  // Must have a semicolon