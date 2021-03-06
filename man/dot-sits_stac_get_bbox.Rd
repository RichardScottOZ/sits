% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/sits_stac.R
\name{.sits_stac_get_bbox}
\alias{.sits_stac_get_bbox}
\title{Get the STAC information corresponding to a bbox extent}
\usage{
.sits_stac_get_bbox(items, collection)
}
\arguments{
\item{items}{a \code{STACItemCollection} object returned by rstac.}

\item{collection}{a \code{STACCollection} object returned by rstac.}
}
\value{
a \code{bbox} object from the sf package representing the tile bbox.
}
\description{
Get the STAC information corresponding to a bbox extent
}
\keyword{internal}
