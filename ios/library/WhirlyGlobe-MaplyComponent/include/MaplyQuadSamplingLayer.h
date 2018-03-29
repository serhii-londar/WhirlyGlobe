/*
 *  MaplyQuadSamplingLayer.h
 *  WhirlyGlobe-MaplyComponent
 *
 *  Created by Steve Gifford on 3/27/18.
 *  Copyright 2011-2018 Saildrone Inc
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */

#import "MaplyViewControllerLayer.h"
#import "MaplyCoordinateSystem.h"
#import "MaplyTileSource.h"
#import "MaplyRenderController.h"

/** The Quad Sampling Layer runs a quad tree which determines what
    tiles to load.  We hook up other things to this to actually do
    the loading.
  */
@interface MaplyQuadSamplingLayer : MaplyViewControllerLayer

/// Initialize with a coordinate system
- (nullable instancetype)initWithCoordSystem:(MaplyCoordinateSystem *__nonnull)coordSys;

/// Set the zoom levels and importance cutoff
- (void)setMinZoom:(int)minZoom maxZoom:(int)maxZoom importance:(float)import;

@end