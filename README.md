# iot-fleet-mgmt
IoT Fleet Management System with Docker, RPM, and NGINX

🎯 Goal

Build a lightweight, secure, and professional-grade IoT fleet status agent for rpm-based Linux devices. Each device runs an agent that monitors system and container metrics and exposes the status over HTTP via NGINX.


🧱 System Architecture

[ IoT Device (Agent) ]
  ├── Agent (C++) collects:
  │     ├── CPU & memory usage
  │     └── Docker container statuses
  ├── JSON status output → /var/lib/iot-agent/status.json
  └── NGINX serves /status over HTTP

[ Manager (Client) ]
  └── Python CLI tool fetches and prints status from agent via HTTP

📦 Deliverables
On Agent (IoT Device)
iot-agent C++ binary (RPM packaged)

iot-agent.service systemd unit

Configured nginx to serve /status

Status data: JSON file with system + Docker container state

On Manager (Fleet Controller)
fetch_status.py Python CLI to fetch /status via HTTP


✅ Project coverage:

Experience with RPM-based Linux
    - You're working on Fedora/RHEL-like systems, building and installing .rpm packages, using dnf, rpm-build, and systemd.

Solid C/C++/Python/OOP knowledge
    - Writing the agent in modern C++, optionally modularized into classes; writing Python client tools; practicing structured code design.

Shell scripting knowledge
    - You’ll use Bash for deployment, logging, system queries (e.g., Docker ps, df, free), and managing services.

Experience with Linux software package management systems
    - Using dnf, rpm, .spec files, repos`, and building local packages for deployment.

Understanding of cloud and container technologies
    - Agent gathers metrics on running containers (Docker), and could be extended to monitor Kubernetes or container health.

Open-source development experience
    - You’ll be creating a cleanly structured, CMake-based open source project, with README, spec, service files, etc. — the kind of real-world repo found on GitHub.


