#ifndef _OBSTACLE_
#define _OBSTACLE_


class Obstacle {
 protected:
    bool _orphan = true;
    bool _hasPalet = false;
public:
    virtual void receive_puck() = 0;
    void set_orphan(bool) ;
    bool get_orphan();
    virtual ~Obstacle();

};
#endif