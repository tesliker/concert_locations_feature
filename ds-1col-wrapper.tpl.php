<?php

/**
 * @file
 * Display Suite 1 column template with layout wrapper.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="ds-1col <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
<?php
  if ($content['field_location_type']['#items']['0']['tid'] == '25') {
  print render($content['advisor_rewrite']);
  }
  else {
  print render($content['field_image']);
  print render($content['body']);
  print render($content['field_locations']);
  }
  ?>