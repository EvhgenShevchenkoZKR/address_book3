<h5>
  <?php print t('Title:'); ?>
  <?php print $title; ?>
</h5>
<ul>
  <?php foreach ($items as $item) : ?>
  <li><?php print $item; ?></li>
  <?php endforeach; ?>
</ul>
