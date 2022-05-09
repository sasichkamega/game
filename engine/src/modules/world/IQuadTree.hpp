#pragma once
#include <vector>
#include <flecs.h>
#include <memory>
#include <engine/components/world/query.hpp>
#include <engine/components/world/transform.hpp>


namespace engine::module_impl::world {

class IQuadTree {
public:
  static std::shared_ptr<IQuadTree> create_quad_tree();
  
  virtual void update(const flecs::entity&, const components::world::BBox&);
  virtual void remove(const flecs::entity&);
  virtual void query_intersects(std::vector<flecs::entity>& out, const components::world::BBox&, const flecs::world&);
  virtual void query_inside(std::vector<flecs::entity>& out, const components::world::BBox&, const flecs::world&);
  virtual void query_contains(std::vector<flecs::entity>& out, const components::world::BBox&, const flecs::world&);
  virtual ~IQuadTree() = default;
};

}