LIB_META_INC = -I$(META_DIR)/include
LIB_META_SRC = $(wildcard $(META_DIR)/src/*.cpp)

LIB_META_OBJ = $(patsubst %.cpp,%.o, $(LIB_META_SRC))


define log =
$(info ======================================)
$(info $1)
$(info ======================================)
endef

$(call log, Compiling meta...)

%.o: %.cpp
	$(CXX) $(CXXFLAGS)  -c $< $(LIB_META_INC)


BIN = 



all: $(BIN) $(LIB_META)
	$(call log, meta is successfully compiled...)


$(LIB_META): $(LIB_META_OBJ)
	$(AR) $(CR) $(LIB_META) $(LIB_META_OBJ)

clean:
	rm -rf $(LIB_META) $(LIB_META_OBJ)