const pool = require('../db');

const task = {
    getAlltasks: async () => {
        try {
            const result = await pool.query('SELECT * FROM task');
            return result.rows;
        } catch (error) {
            console.error('Error fetching all tasks:', error);
            throw error;
        }
    },

    Retrieve  : async (category) => {
        try {
            const result = await pool.query('SELECT id_task, "Title", description, priority, category, due_date, "comp-status"FROM public.task;where	category = $1', [category]);
            
            return result.rows;
        } catch (error) {
            console.error(`Error finding task by user ID ${category}:`, error);
            throw error;
        }
    },

    create: async (id_task, Title, description, priority, category, due_date, comp_status) => {
        try {
            const result = await pool.query(
                'INSERT INTO public.task(	id_task, "Title", description, priority, category, due_date, "comp-status")	VALUES ($1, $2, $3, $4, $5, $6, $7);',
                [id_task, Title, description, priority, category, due_date, comp_status]
            );
            return result.rows[0];
        } catch (error) {
            console.error('Error creating task:', error);
            throw error;
        }
    },

    delete: async (id) => {
        try {
            const result = await pool.query('DELETE FROM task WHERE id = $1 RETURNING *', [id]);
            return result.rows[0]; // Renvoie le task supprimé (facultatif)
        } catch (error) {
            console.error(`Error deleting task with ID ${id}:`, error);
            throw error;
        }
    },
};

module.exports = task;
