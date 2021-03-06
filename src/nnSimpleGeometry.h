/*
 * nnSimpleGeometry.h
 *
 * Copyright (c) 2011 Carl Andersson
 * Copyright (c) 2011 Sebastian �rleryd
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef CINNAMON_SIMPLE_GEOMETRY_H
#define CINNAMON_SIMPLE_GEOMETRY_H

#define ELLIPSE_NUMBER_OF_VERITCES (40)

/*
 * nnDrawSquare(const float x1, const float y1,const  float width, const float height)
 * Draw square with center at (x1,y1) with width and height
 */
void nnDrawSquare(const float, const float,const float,const float);

/*
 * nnDrawSquare(const float x1, const float y1,const  float width, const float height,const float rotation)
 * Draw square with center at (x1,y1) with width and height rotated rotation degrees
 */
void nnDrawSquare(const float, const float,const float,const float,const float);

/*
 * nnDrawEllipse(const float x1 ,const float y1,const float hRadius,const float vRadius)
 * Draw ellipse with center at (x1,y1) with horsisontal radius hRadius and vertical radius vRadius
 */
void nnDrawEllipse(const float, const float,const float,const float);

/*
 * nnDrawEllipse(const float x1 ,const float y1,const float hRadius, const float vRadius,const float rotation)
 * Draw ellipse with center at (x1,y1) with horsisontal radius hRadius and vertical radius vRadius
 * rotated rotation degrees
 */
void nnDrawEllipse(const float, const float,const float,const float,const float);

#endif //CINNAMON_SIMPLE_GEOMETRY_H
