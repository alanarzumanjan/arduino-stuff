from flask import Flask, request, jsonify

app = Flask(__name__)


@app.route("/message", methods=["POST"])
def message():
    data = request.json
    print("📨 От ESP32:", data)

    text = data.get("msg", "")
    return jsonify({"reply": f"ESP32, text: {text}"})


if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)
