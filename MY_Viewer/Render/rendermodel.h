#ifndef RENDERMODEL_H
#define RENDERMODEL_H

#include <QVector3D>
#include <QVector>


class RenderModel
{
public:
    explicit RenderModel();
    ~RenderModel();

    QVector<QVector3D> GetVertices() const {return vertices;}

private:
    QVector<QVector3D> vertices;
};

#endif // RENDERMODEL_H