var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Instadeep' });
});
router.post('/create', function(req, res, next) {
  res.render('index', { title: 'challenge' });

});

module.exports = router;
