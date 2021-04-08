#ifndef PHYSICS2D_TESTBED_WINDOW_H
#define PHYSICS2D_TESTBED_WINDOW_H
#include <QPainter>
#include <QWindow>
#include <QWidget>
#include <QPen>
#include <QTimer>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QPaintEvent>
#include <QPainterPath>
#include <include/physics2d.h>
#include <include/render/impl/renderer_qt.h>

namespace Physics2D
{
	class Window : public QWidget
	{
		Q_OBJECT

	public:
		Window(QWidget* parent = nullptr);
		~Window();
	public slots:
	
	protected:
		void paintEvent(QPaintEvent*) override;
		void resizeEvent(QResizeEvent* e) override;
		void mousePressEvent(QMouseEvent*) override;
		void mouseReleaseEvent(QMouseEvent* e) override;
		void mouseMoveEvent(QMouseEvent* e) override;
		void keyPressEvent(QKeyEvent* event) override;
		void keyReleaseEvent(QKeyEvent* event) override;
	
	private:
		void testShape(QPainter* painter);
		
		World* m_world;
		Rectangle m_rectShape;
		Polygon m_polygon;
		Circle m_circle;
		Ellipse m_ellipse;
		Edge m_edge;
		Curve m_curve;
	};
}
#endif