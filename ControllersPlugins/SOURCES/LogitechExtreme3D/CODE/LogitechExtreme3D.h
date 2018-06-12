#ifndef LOGITECH_EXTREME_3D
#define LOGITECH_EXTREME_3D


#include "RealJoystick.h"
class QGameController;
class QGameControllerButtonEvent;
class QGameControllerAxisEvent;

#define INSIDE_PLUGIN
#include "../../../INCLUDES/LogitechExtreme3D.h"


class LogitechExtreme3D : public RealJoystick
{
	Q_OBJECT
	
	
	public:
		LogitechExtreme3D(QGameController *c);
		LogitechExtreme3D(const LogitechExtreme3D &other) = delete;
		LogitechExtreme3D(LogitechExtreme3D &&other) = delete;
		LogitechExtreme3D& operator=(const LogitechExtreme3D &other) = delete;
		LogitechExtreme3D& operator=(LogitechExtreme3D &&other) = delete;
		~LogitechExtreme3D() = default;
		
		QString description() const override final;
		
		uint buttonsCount() const override final;
		QString buttonName(uint button) const override final;
		QStringList buttonsNames() const override final;
		
		uint axesCount() const override final;
		float axisValue(uint axis) const override final;
		QString axisName(uint axis) const override final;
		QStringList axesNames() const override final;
		
		uint povsCount() const override final;
		QString povName(uint pov) const override final;
		QStringList povsNames() const override final;
		
		
	private slots:
		void slotGameControllerAxisEvent(QGameControllerAxisEvent *event) override final;
		
		
	private:
		QStringList m_buttonsNames;
		QStringList m_axesNames;
		QStringList m_povsNames;
};

#endif
