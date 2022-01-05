-- phpMyAdmin SQL Dump
-- version 4.9.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 12, 2019 at 02:55 PM
-- Server version: 10.4.8-MariaDB
-- PHP Version: 7.3.11

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `bus_ticket_reservation_system`
--

-- --------------------------------------------------------

--
-- Table structure for table `bus`
--

CREATE TABLE `bus` (
  `bus_no` int(15) NOT NULL,
  `source` varchar(25) NOT NULL,
  `destination` varchar(25) NOT NULL,
  `departure_time` datetime(6) NOT NULL,
  `arrival_time` datetime(6) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `bus`
--

INSERT INTO `bus` (`bus_no`, `source`, `destination`, `departure_time`, `arrival_time`) VALUES
(1, 'Dhaka', 'Chittagong', '2019-12-05 15:00:00.000000', '2019-12-05 18:00:00.000000'),
(2, 'Chittagong', 'Dhaka', '2019-12-06 10:00:00.000000', '2019-12-06 12:00:00.000000'),
(3, 'Dhaka', 'Mymensingh', '2019-12-06 12:00:00.000000', '2019-12-06 14:00:00.000000'),
(4, 'Noakhali', 'Dhaka', '2019-12-06 10:00:00.000000', '2019-12-06 12:00:00.000000'),
(5, 'Rangpur', 'Dhaka', '2019-12-06 07:00:00.000000', '2019-12-06 16:00:00.000000');

-- --------------------------------------------------------

--
-- Table structure for table `driver_info`
--

CREATE TABLE `driver_info` (
  `licence_no` int(15) NOT NULL,
  `driver_name` varchar(25) NOT NULL,
  `driver_address` varchar(25) NOT NULL,
  `bus_no` int(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `driver_info`
--

INSERT INTO `driver_info` (`licence_no`, `driver_name`, `driver_address`, `bus_no`) VALUES
(1205, 'Zabbar', 'Narinda', 1),
(1238, 'Karim', 'Bosila', 2),
(1975, 'Akram', 'Narinda', 3),
(1982, 'Anayet', 'Thakurgaon', 4),
(2205, 'Sofik', 'Narshindi', 5);

-- --------------------------------------------------------

--
-- Table structure for table `login`
--

CREATE TABLE `login` (
  `id` int(15) NOT NULL,
  `username` varchar(25) NOT NULL,
  `password` varchar(100) NOT NULL,
  `type` enum('Admin','User') NOT NULL DEFAULT 'User'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `login`
--

INSERT INTO `login` (`id`, `username`, `password`, `type`) VALUES
(3, 'Rahimuzzaman', '1234', 'Admin'),
(7, 'Kaiyum', '5678', 'Admin'),
(1, 'Sumit', '1100', 'User'),
(2, 'Aman', '2200', 'User'),
(4, 'Abdus Salam', '4400', 'User'),
(5, 'Arowny', '5500', 'User'),
(6, 'Apu', '6600', 'User'),
(3, 'Rahimuzzaman', '1234', 'Admin'),
(7, 'Kaiyum', '5678', 'Admin'),
(1, 'Sumit', '1100', 'User'),
(2, 'Aman', '2200', 'User'),
(4, 'Abdus Salam', '4400', 'User'),
(5, 'Arowny', '5500', 'User'),
(6, 'Apu', '6600', 'User');

-- --------------------------------------------------------

--
-- Table structure for table `passenger`
--

CREATE TABLE `passenger` (
  `p_id` int(15) NOT NULL,
  `p_phone` int(20) NOT NULL,
  `p_email` varchar(30) NOT NULL,
  `user_id` int(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `passenger`
--

INSERT INTO `passenger` (`p_id`, `p_phone`, `p_email`, `user_id`) VALUES
(1, 1718506567, 'salam@gmail.com', 4),
(2, 1890471717, 'zaman@gmail.com', 5),
(3, 1956789456, 'apu@gmail.com', 6),
(4, 1748377571, 'aman@gmail.com', 2),
(5, 1756344323, 'sumit@gmail.com', 1);

-- --------------------------------------------------------

--
-- Table structure for table `ticket`
--

CREATE TABLE `ticket` (
  `t_id` int(15) NOT NULL,
  `pnr` int(15) NOT NULL,
  `source` varchar(25) NOT NULL,
  `destination` varchar(25) NOT NULL,
  `arrival_time` datetime(6) NOT NULL,
  `departure_time` datetime(6) NOT NULL,
  `seat_n0` varchar(15) NOT NULL,
  `fare` int(50) NOT NULL,
  `bus_no` int(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `ticket`
--

INSERT INTO `ticket` (`t_id`, `pnr`, `source`, `destination`, `arrival_time`, `departure_time`, `seat_n0`, `fare`, `bus_no`) VALUES
(1, 1, 'Dhaka', 'Chittagong', '2019-12-05 15:00:00.000000', '2019-12-05 18:00:00.000000', 'A3', 490, 1),
(2, 2, 'Noakhali', 'Dhaka', '2019-12-06 10:00:00.000000', '2019-12-06 12:00:00.000000', 'B4', 400, 4),
(3, 3, 'Rangpur', 'Dhaka', '2019-12-06 07:00:00.000000', '2019-12-05 16:00:00.000000', 'C3', 500, 5),
(4, 5, 'Dhaka', 'Mymensingh', '2019-12-06 12:00:00.000000', '2019-12-06 14:00:00.000000', 'F3', 220, 3),
(5, 4, 'Chittagong', 'Dhaka', '2019-12-06 10:00:00.000000', '2019-12-06 12:00:00.000000', 'D3', 490, 2);

-- --------------------------------------------------------

--
-- Table structure for table `transaction`
--

CREATE TABLE `transaction` (
  `Trans_id` int(15) NOT NULL,
  `Bus_No` int(15) NOT NULL,
  `Seat_No` varchar(15) NOT NULL,
  `price` int(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `transaction`
--

INSERT INTO `transaction` (`Trans_id`, `Bus_No`, `Seat_No`, `price`) VALUES
(1, 1, 'A3', 220),
(2, 2, 'D3', 490),
(3, 4, 'B4', 400),
(4, 5, 'C3', 500),
(5, 4, 'B4', 400),
(6, 4, 'B4', 400),
(7, 5, 'C3', 500),
(8, 1, 'A3', 220),
(9, 3, 'A3', 490),
(10, 2, 'D3', 490);

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE `user` (
  `user_id` int(15) NOT NULL,
  `f_name` varchar(25) NOT NULL,
  `l_name` varchar(25) NOT NULL,
  `age` int(15) NOT NULL,
  `e_mail` varchar(25) NOT NULL,
  `gender` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`user_id`, `f_name`, `l_name`, `age`, `e_mail`, `gender`) VALUES
(1, 'Sumit', 'Chakraborty', 25, 'sumit@gmail.com', 'Male'),
(2, 'Aman', 'Ullah', 23, 'aman@gmail.com', 'Male'),
(3, 'Rahimuzzaman', 'Bhuiyan', 24, 'mukut@gmail.com', 'Male'),
(4, 'Abdus', 'Salam', 50, 'salam@gmail.com', 'Male'),
(5, 'Arowny', 'Zaman', 45, 'zaman@gmail.com', 'Female'),
(6, 'Apu', 'Shikder', 78, 'apu@gmail.com', 'Male'),
(7, 'Kaiyum', 'Azad', 45, 'azad@gmail.com', 'Male');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `bus`
--
ALTER TABLE `bus`
  ADD PRIMARY KEY (`bus_no`);

--
-- Indexes for table `driver_info`
--
ALTER TABLE `driver_info`
  ADD PRIMARY KEY (`licence_no`),
  ADD KEY `bus_no` (`bus_no`);

--
-- Indexes for table `passenger`
--
ALTER TABLE `passenger`
  ADD PRIMARY KEY (`p_id`),
  ADD KEY `user_id` (`user_id`);

--
-- Indexes for table `ticket`
--
ALTER TABLE `ticket`
  ADD PRIMARY KEY (`t_id`),
  ADD KEY `bus_no` (`bus_no`),
  ADD KEY `pnr` (`pnr`),
  ADD KEY `fare` (`fare`),
  ADD KEY `seat_n0` (`seat_n0`);

--
-- Indexes for table `transaction`
--
ALTER TABLE `transaction`
  ADD PRIMARY KEY (`Trans_id`),
  ADD KEY `trans_ibfk_1` (`Bus_No`),
  ADD KEY `price` (`price`),
  ADD KEY `S_no` (`Seat_No`);

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`user_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `ticket`
--
ALTER TABLE `ticket`
  MODIFY `t_id` int(15) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `transaction`
--
ALTER TABLE `transaction`
  MODIFY `Trans_id` int(15) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `driver_info`
--
ALTER TABLE `driver_info`
  ADD CONSTRAINT `driver_info_ibfk_1` FOREIGN KEY (`bus_no`) REFERENCES `bus` (`bus_no`) ON UPDATE CASCADE;

--
-- Constraints for table `passenger`
--
ALTER TABLE `passenger`
  ADD CONSTRAINT `passenger_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `user` (`user_id`) ON UPDATE CASCADE;

--
-- Constraints for table `ticket`
--
ALTER TABLE `ticket`
  ADD CONSTRAINT `ticket_ibfk_1` FOREIGN KEY (`bus_no`) REFERENCES `bus` (`bus_no`) ON UPDATE CASCADE,
  ADD CONSTRAINT `ticket_ibfk_2` FOREIGN KEY (`pnr`) REFERENCES `passenger` (`p_id`);

--
-- Constraints for table `transaction`
--
ALTER TABLE `transaction`
  ADD CONSTRAINT `transaction_ibfk_1` FOREIGN KEY (`Bus_No`) REFERENCES `ticket` (`bus_no`) ON UPDATE CASCADE,
  ADD CONSTRAINT `transaction_ibfk_2` FOREIGN KEY (`price`) REFERENCES `ticket` (`fare`) ON UPDATE CASCADE,
  ADD CONSTRAINT `transaction_ibfk_3` FOREIGN KEY (`Seat_No`) REFERENCES `ticket` (`seat_n0`) ON UPDATE CASCADE;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
