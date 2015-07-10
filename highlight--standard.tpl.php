<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print render($content['field_highlight_media']); ?>
    <div class="highlight-standard-field-wrapper">
      <h2<?php print $title_attributes; ?>>
        <?php if ($url): ?>
          <a href="<?php print $url; ?>"><?php print $title; ?></a>
        <?php else: ?>
          <?php print $title; ?>
        <?php endif; ?>
      </h2>
      <?php print render($content); ?>
    </div>
  </div>
</div>
