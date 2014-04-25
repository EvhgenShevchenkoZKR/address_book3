<?php

/**
 * Theme callback.
 */
function theme_ordered_list($vars) {
  $output = "<h5>" . $vars['title'] . "</h5>";

  $output .= '<ul>';
  foreach ($vars['items'] as $item) {
    $output .= '<li>' . $item . '</li>';
  }
  $output .= '</ul>';

  return $output;
}
