# 🔑 Password Strength Checker  
### 🧩 Beta Version  

**Password Strength Checker (PSC)** is a simple and efficient C program that evaluates the strength of a user-entered password based on key security criteria.  
It analyzes factors such as **length**, **use of uppercase and lowercase letters**, **digits**, and **special characters** to determine whether the password is **Weak**, **Moderate**, or **Strong**.

---

## 🧠 Features  

*  **Real-time Password Evaluation** – Analyzes the password as it is entered.  
*  **Character Type Detection** – Checks for uppercase, lowercase, digits, and special characters.  
*  **Length Verification** – Ensures passwords meet minimum security length requirements.  
*  **Strength Classification** – Categorizes passwords as *Very Weak*, *Weak*, *Moderate*, *Strong*, or *Very Strong*.  
*  **User-Friendly Output** – Displays clear feedback to help users create stronger passwords.  
*  **Lightweight & Efficient** – Built using simple and portable C constructs for clarity and performance.  

---

## 🧩 Password Strength Criteria  

| Criteria | Description | Points |
|-----------|--------------|--------|
| Length ≥ 8 characters | Ensures basic security length | +1 |
| Contains uppercase letters (A–Z) | Improves complexity | +1 |
| Contains lowercase letters (a–z) | Improves diversity | +1 |
| Contains digits (0–9) | Adds numerical strength | +1 |
| Contains special characters (!, @, #, etc.) | Adds unpredictability | +1 |

**Score Classification**  

| Score | Classification |
|--------|----------------|
| 1 | 🔴 Very Weak |
| 2 | 🟠 Weak |
| 3 | 🟡 Moderate |
| 4 | 🟢 Strong |
| 5 | 🟣 Very Strong |

---

## >_  How to Compile and Run  

### 🖥️ Using GCC (Linux)
```bash
gcc password_strength_checker.c -o password_checker
./password_checker
```
## **🧑🏻‍💻** Using GCC (MAC)
```bash
gcc password_strength_checker.c
./a.out
```
## **🖥️** Using GCC (Windows)
```bash
gcc password_strength_checker.c
a or ./a 
