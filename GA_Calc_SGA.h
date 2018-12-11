#include <default_gui_model.h>

class GA_Calc_SGA : public DefaultGUIModel
{
	
	public:
	
		GA_Calc_SGA(void);
		virtual~GA_Calc_SGA(void);
	
		void execute(void);
	
	protected:
	
		void update(DefaultGUIModel::update_flags_t);
	
	private:
	
		void derivs(double *, double *, double);
		void solve(double, double *, double);
		void initParameters();
	
		double y[2];
		double period;
		int steps;
		double a;
		double V;
		double V0;
		double Cm;
		double IA_Scale;
		double Specific_GA;
		double EA;
		double GA;
		double rate;
		double taua;
		double taub;
		double thetaa;
		double thetab;
		double sigmaa;
		double sigmab;
		double cm;
		double IA;
		double IACell;
		int onToggle;
};
