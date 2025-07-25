from flask import Flask
app = Flask(__name__)

@app.route('/')
def func():
	return "<h1> Ulgurdizlarmi <h1>"



if __name__ == "__main__":
	app.run(debug=True)
