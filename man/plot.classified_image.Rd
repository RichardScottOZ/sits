% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/sits_plot.R
\name{plot.classified_image}
\alias{plot.classified_image}
\title{Generic interface for ploting classified images}
\usage{
\method{plot}{classified_image}(
  x,
  y,
  ...,
  map = NULL,
  time = 1,
  title = "Classified Image",
  colors = NULL
)
}
\arguments{
\item{x}{object of class "classified_image"}

\item{y}{ignored}

\item{...}{further specifications for \link{plot}.}

\item{map}{map to overlay (mapview object)}

\item{time}{temporal reference for plot.}

\item{title}{string.}

\item{colors}{color pallete.}
}
\description{
plots a classified raster using ggplot.
}
\examples{
\dontrun{
# Retrieve the samples for Mato Grosso
# select the bands for classification
samples_ndvi_evi <- sits_select(samples_mt_4bands, bands = c("EVI", "NDVI"))
# build the classification model
xgb_model <- sits_train(samples_ndvi_evi, ml_method = sits_xgboost())

# select the bands "ndvi", "evi" provided by the SITS package
ndvi_file <- c(system.file("extdata/raster/mod13q1/sinop-ndvi-2014.tif",
    package = "sits"
))
evi_file <- c(system.file("extdata/raster/mod13q1/sinop-evi-2014.tif",
    package = "sits"
))
# select the timeline
data("timeline_2013_2014")
# build a data cube from files

sinop_2014 <- sits_cube(
    type = "BRICK", name = "sinop-2014",
    timeline = timeline_2013_2014,
    satellite = "TERRA",
    sensor = "MODIS",
    bands = c("ndvi", "evi"),
    files = c(ndvi_file, evi_file)
)

# classify the raster image
sinop_probs <- sits_classify(sinop_2014, xgb_model,
    output_dir = tempdir(),
    memsize = 4, multicores = 2
)
# smooth the result with a bayesian filter

sinop_bayes <- sits_smooth(sinop_probs,
    output_dir = tempdir())

sinop_label <- sits_label_classification(sinop_bayes,
    output_dir = tempdir()
)

# plot the smoothened image
plot(sinop_label, title = "Sinop-Bayes")
}
}
\author{
Gilberto Camara, \email{gilberto.camara@inpe.br}
}
