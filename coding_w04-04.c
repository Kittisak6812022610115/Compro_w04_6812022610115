// ผลลัพธ์ต่างกันอย่างไร
  // กรณีที่ 1 ใช้ int // code error เพราะ 90.5 เป็นทศนิยม แต่ int ไม่สามารถเก็บค่าทศนิยมได้
  // กรณีที่ 2 ใช้ float // code ทำงานได้ปกติ เพราะ 90.5 เป็นค่า double และใส่ F ด้านหลัง 90.5 เพื่อระบุว่าเป็น Float
  
//ทำไมต้องเลือก Data Type ให้ถูกต้อง?
  // จะทำให้โปรแกรมไม่ผิดพลาดทำงานได้อย่างมีประสิทธิภาพ และ สามารถจัดเรียงข้อมูลได้ถูกต้อง

//อภิปราย และสรุปผลที่ได้จากการทดลอง
  // int ไม่รองรับทศนิยม เพราะทำให้เกิด error
  // float รองรับทศนิยมทำให้โปรแกรมสามารถทำงานได้ปกติ