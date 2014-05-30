<?php

/**
 * @file
 * Contains CRUD functions for address_book entities.
 */

/**
 * Create address_book entity.
 *
 * @param $values
 * @return bool
 */
function address_book_create($values) {
  return entity_create('address_book', $values);
}

/**
 * Save address_book entity.
 *
 * @param $address_book
 * @return bool
 */
function address_book_save($address_book) {
  return entity_save('address_book', $address_book);
}

/**
 * Load multiple entities.
 *
 *
 * @param bool $ids
 * @param array $conditions
 * @return mixed
 */
function address_book_load_multiple($ids = FALSE, $conditions = array()) {
  return entity_load('address_book', $ids, $conditions);
}

/**
 * Laod single address_book by its id.
 *
 * @param $id
 * @return mixed
 */
function address_book_load($id) {
  return current(address_book_load_multiple((array) $id));
}

/**
 * Delete multiple address_book at once.
 *
 * @param $ids
 * @return bool
 */
function address_book_delete_multiple($ids) {
  return entity_delete_multiple('address_book', $ids);
}

/**
 * Delete single address_book its id.
 *
 * @param $id
 * @return bool
 */
function address_book_delete($id) {
  return entity_delete('address_book', $id);
}

/**
 * View address_book entity.
 *
 * @param $address_book
 * @param string $view_mode
 * @param null $langcode
 * @return bool
 */
function address_book_view($address_book, $view_mode = 'full', $langcode = NULL) {
  return entity_view('address_book', array($address_book), $view_mode, $langcode);
}
