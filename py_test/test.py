import family

parent = family.parent()

child = family.child(10)

parent.add_child(child)

print(parent.get_children()[0].get_size_of_head())
