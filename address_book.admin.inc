<?php

/**
 * @file
 * Contains address_book entity add/edit form.
 */

/**
 * Add/edit form callback for address_book entities.
 *
 * @param $form
 * @param $form_state
 * @param $address_book
 * @param string $op
 */
//$address_book,
function address_book_form($form, &$form_state, $address_book, $op = 'edit') {
  if ($op == 'add') {
    $path = drupal_get_path('module', 'address_book');
    drupal_add_js($path . '/js/address_book.js');
  }
  field_attach_form('address_book', $address_book, $form, $form_state);

  $node_wrapper = entity_metadata_wrapper('address_book', $address_book);

  //creating title field for administration page
  $form['title'] = array(
    '#type' => 'hidden',
    '#title' => t('Title'),
    '#default_value' => $node_wrapper->field_first_name->value() . ' ' . $node_wrapper->field_last_name->value(),
  );

  $form['actions'] = array(
    '#type' => 'actions',
    'submit' => array(
      '#type' => 'submit',
      '#value' => t('Save'),
    ),
  );

  return $form;
}

/**
 * Submit callback for "address_book_form".
 *
 * @param $form
 * @param $form_state
 */
function address_book_form_submit($form, &$form_state) {
  $address_book = entity_ui_form_submit_build_entity($form, $form_state);

  $address_book->save();

  $form_state['redirect'] = 'address-book';
}


