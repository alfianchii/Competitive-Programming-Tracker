# Basic go commands
GOCMD=go
GOBUILD=$(GOCMD) build
GOCLEAN=$(GOCMD) clean
GOTEST=$(GOCMD) test
GOGET=$(GOCMD) get
GOFMT=$(GOCMD) fmt

s0002:
	@echo "🚀 Starting unit test..."
	${GOTEST} ./problems/s0002_add_two_numbers/ -v

s0001:
	@echo "🚀 Starting unit test..."
	${GOTEST} ./problems/s0001_two_sum/ -v

learn:
	@echo "🚀 Starting unit test..."
	${GOTEST} ./practice/ -v

test:
	@echo "🚀 Starting unit test..."
	$(GOTEST) ./...

clean:
	@echo "🚀 Cleaning test cache..."
	${GOCLEAN} -testcache

fmt:
	@echo "🚀 Start code formatting..."
	${GOFMT} ./...

race:
	@echo "🚀 Start race detector..."
	${GOTEST} ./... -race -v