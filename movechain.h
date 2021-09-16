

typedef struct movechain_linkedelement_s
{
	int	index;
	prvm_edict_t *ent;
	struct movechain_linkedelement_s *next;
} movechain_linkedelement_t;

void movechain_destroy(prvm_prog_t *prog, movechain_linkedelement_t *list);
void SV_Physics_MoveChain(prvm_edict_t *ent, movechain_linkedelement_t *movechain_list, float *initial_origin, float *initial_angle);








