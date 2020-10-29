#include "Observer.h"

void ConcreteObserver::UpDate(Subject* pSubject)
{
	if (NULL != pSubject) {
		m_nObserverState = pSubject->GetState();
		std::cout << "The ConcreteObserver State is "<< m_nObserverState <<std::endl;
	}
}
