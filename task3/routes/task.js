const express = require('express');
const task = require('../public/javascripts/task'); 

const router = express.Router();

router.get('/', async (req, res) => {
    const tasks = await task.getAlltasks();
    res.json(tasks);
  });

router.post('/create',  (req, res) => {
    //const id   = req.params.id;
     
        const {id_task, Title, description, priority, category, due_date, comp_status } = req.body;
  try
    {   const task =  task.create(id_task, Title, description, priority, category, due_date, comp_status);
        res.json(task);
    }
    catch( error )
    
    {
        console.error(error);  // Log the error for debugging
        res.status(500).json({ message: 'Internal Server Error' });
    }

   
  });
  
  
  router.post('/:idi',  (req, res) => {
    const id   = req.params.id;
    try{
        const task =  task.Retrieve(id);
        res.json(task);
    }
    catch( error )
    
    {
        console.error(error);  // Log the error for debugging
        res.status(500).json({ message: 'Internal Server Error' });
        }
    
    });
    
module.exports = router;
