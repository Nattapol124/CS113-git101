// git clone <git-url> การdowload มาจาก github
// git branch <name> การสร้างbranch
// git branch เป็นการcheckว่ามีอะไรบ้าง
// git checkout <branch name > เป็นการย้ายbranch
// git merge <branch name> เป็นการรวมbranchเข้าไปรวมด้วยกัน
// git pull <branch name> (เป็นการดึงความเปลี่ยนแปลงในbranch)
// การmergeกันของbranchที่มีไฟล์เหมือนกันจะเกิดการให้เลือกว่าจะเอาไฟล์ของbrachไหนหรือเอาทั้งสองแบบมารวมกัน
// การ Merge แบบมี ConflictConflict หรือความขัดแย้ง เกิดจากการปรับแก้ไขข้อมูลในไฟล์เดิม บรรทัดเดิม ที่อยู่ต่าง Branch กันเมื่อ merge แล้ว git ตัดสินใจไม่ได้ว่าจะใช้ข้อมูลจาก branch ใด
// เมื่อmergeเสร็จแล้วไฟล์ในbranchก็จะเข้าไปอยูที่branchที่เข้าไปรวมกัน
// git pull ใช้เมื่อมี2คนแล้วเมื่ออีกคนต้องการดึงความเปลี่ยนแปลงมาจาก git repo 
// clone git repository มาไว้อีกเครื่องหนึ่ง หรือ directory ใหม่ เช่น git102
// git clone <git-url> git102
// สร้าง Branch name และสลับไป Branch นั้นเลย ด้วยคำสั่ง
// 	git checkout -b branch name
