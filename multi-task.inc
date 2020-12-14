/*
	Multi Task Timers - BrunoBM16
*/

#define Create_MultiTask:%0("%1"); \
    stock multitask_id_%0; \
    forward multitask_%0(); \
    public multitask_%0() \
    { \
        %1; \
    }
	
#define Create_MultiTaskEx:%0("%1","%2"); \
    stock multitask_id_%0; \
    forward multitask_%0(%2); \
    public multitask_%0(%2) \
    { \
        %1; \
    }

#define Start_MultiTask:%0(%1,%2) \
    multitask_id_%0 = SetTimer("multitask_"#%0"",%1,%2)
	
#define Start_MultiTaskEx:%0(%1,%2,%3,%4) \
    multitask_id_%0 = SetTimerEx("multitask_"#%0"",%1,%2,(%3),%4)

#define Stop_MultiTask:%0 \
    KillTimer(multitask_id_%0)

#define GetID_MultiTask(%0) multitask_id_%0
