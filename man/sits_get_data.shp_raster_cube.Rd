% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/sits_get_data.R
\name{sits_get_data.shp_raster_cube}
\alias{sits_get_data.shp_raster_cube}
\title{Obtain time series from brick based on SHP file}
\usage{
\method{sits_get_data}{shp_raster_cube}(
  cube,
  file,
  ...,
  start_date = NULL,
  end_date = NULL,
  bands = NULL,
  label = "NoClass",
  shp_attr = NULL,
  impute_fn = sits_impute_linear(),
  .n_shp_pol = 30
)
}
\arguments{
\item{cube}{Data cube from where data is to be retrieved.}

\item{file}{SHP File with information on the data to be retrieved.}

\item{...}{Other parameters to be passed for specific types.}

\item{start_date}{Start of the interval for the time series
in "YYYY-MM-DD" format (optional)}

\item{end_date}{End of the interval for the time series in
"YYYY-MM-DD" format (optional).}

\item{bands}{Bands to be retrieved (optional)}

\item{label}{Label to be assigned to the time series (optional)}

\item{shp_attr}{Attribute in the shapefile to be used
as a polygon label (for shapefiles only.}

\item{impute_fn}{Imputation function for NA values}

\item{.n_shp_pol}{Number of samples per polygon to be read
(for POLYGON or MULTIPOLYGON shapes).}
}
\value{
A tibble with time series data and metadata.
}
\description{
Obtain time series from brick based on SHP file
}
