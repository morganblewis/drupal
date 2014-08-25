<?php
/**
 * @file
 * drupal_views.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupal_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
