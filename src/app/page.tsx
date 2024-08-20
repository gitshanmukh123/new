import Image from "next/image";

export default function Home() {
  return (
    <div className='nav flex justify-between items-center md:flex 17'>
  

        
       
    
    <ul className=" navmenu ease-in duration-300 flex justify-center items-center gap-[60px] text-xl">
    
      <li> <p className="cursor-pointer hover:scale-105 transition duration-300 " >home</p></li>
      <li>  <p className="cursor-pointer hover:scale-105 transition duration-300 ">about me</p></li>
      <li> <p className="cursor-pointer hover:scale-105 transition duration-300 ">services</p></li>
      <li>  <p className="cursor-pointer hover:scale-105 transition duration-300 " >portfolio</p></li>
      <li>  <p className="cursor-pointer hover:scale-105 transition duration-300 ">contact</p></li>
    </ul>
  
    <button className="font-cedarville  px-[20px] py-[2px] hover:text-[25px] bg-gradient-to-r from-blue-500 to-pink-500   rounded-[50px] text-xl cursor-pointer"> 
      login
    </button>
    <button className="font-cedarville  px-[20px] py-[2px] hover:text-[25px] bg-gradient-to-r from-blue-500 to-pink-500   rounded-[50px] text-xl cursor-pointer"> 
      signup
    </button>
  </div>
  
  );
}
