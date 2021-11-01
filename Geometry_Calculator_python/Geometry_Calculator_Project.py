import math
def start_mode_select():
    menu_select = {1: 'Triangle', 2: 'square', 3: 'Circle', 4: 'Trigonometry'}
    print('These are all the calculator mode we have', menu_select)
    user_select = input("select geometry mode: ")
    if user_select == '1':
        triangle_mode()
    elif user_select == '2':
        square_mode()
    elif user_select == '3':
        circle_mode()
    elif user_select == '4':
        trigonometry_calculator()
    else:
        print("Error! Try again")
        start_mode_select()


def triangle_mode():
    print("in this mode you can use to calculate 2 thing[area, perimeter]")
    user_select_mode = str(input('Mode: '))
    if user_select_mode == 'area':
        triangle_area_calculator()
    elif user_select_mode == 'perimeter':
        triangle_perimeter_calculator()
    else:
        print("Error! Try again")
        triangle_mode()


def triangle_area_calculator():
    triangle_type = {'anytriangle': 'สามเหลี่ยมใดๆ', 'equilateral triangle': 'สามเหลี่ยมด้านเท่า',
                     'scalene triangle': 'สามเหลี่ยมด้านไม่เท่า'}
    print(triangle_type)
    user_select_triangle = str(input('Triangle type: '))
    if user_select_triangle == 'anytriangle':
        base = int(input('Base: '))
        hight = int(input('hight: '))
        area = 1 / 2 * base * hight
        print('Area is', area)
    elif user_select_triangle == 'equilateral triangle':
        side = int(input('side: '))
        area = (math.sqrt(3)) / 4 * (side ** 2)
        print('Area is', area)
    elif user_select_triangle == 'scalene triangle':
        print('s = [side(a) + side(b) + side(c)] / 2')
        side_a = int(input('side(a): '))
        side_b = int(input('side(b): '))
        side_c = int(input('side(c): '))
        s = (side_a + side_b + side_c) / 2
        area = math.sqrt(s * (s - side_a) * (s - side_b) * (s - side_c))
        print('Area is', area,)
    else:
        print("Error! Try again")
        triangle_area_calculator()


def triangle_perimeter_calculator():
    solution_type = {'p': 'รู้ด้านทั้ง 3', 'pythagorus': 'สามเหลี่ยมมุมฉาก',
                     'cos_law': 'รู้ด้านทั้ง 2 เเละมุมระหว่างด้านทั้ง2', '3-side': 'รู้ทั้ง 3 ด้าน'}
    print(solution_type)
    solution_way = str(input('>>'))
    if solution_way == 'p':
        side = int(input('side: '))
        perimeter = side * 3
        print('Perimeter is', perimeter)
    elif solution_way == 'pythagorus':
        print('pythagorean theorem is >> a^2 + b^2 = c2')
        print('c is the hypotenuse. (Longest side)')
        side_x = int(input('side(1): '))
        side_y = int(input('side(2): '))
        perimeter = math.sqrt((side_x ** 2) + (side_y ** 2))
        print('Perimeter is', perimeter)
    elif solution_way == 'cos_law':
        print('cos law is c^2 = a^2 + b^2 - 2abcos(c)')
        side_a = int(input('side(1): '))
        side_b = int(input('side(2): '))
        angle_c = int(input('angle(C): '))
        perimeter = (side_a ** 2) + (side_b ** 2) - (2 * (side_a * side_b) * math.cos(angle_c))
        print('Perimeter is', perimeter)
    elif solution_way == '3-side':
        side_a = int(input('side(a): '))
        side_b = int(input('side(b): '))
        side_c = int(input('side(c): '))
        perimeter = side_a + side_b + side_c
        print('Perimeter is', perimeter)
    else:
        print("Error! Try again")
        triangle_perimeter_calculator()


def square_mode():
    print("in this mode you can use to calculate 2 thing[area, perimeter")
    user_select_mode = str(input('Mode: '))
    if user_select_mode == 'area':
        square_area_calculator()
    elif user_select_mode == 'perimeter':
        square_perimeter_calculator()
    else:
        print("Error! Try again")
        square_mode()


def square_area_calculator():
    square_type_select = {'square': 'สี่เหลี่ยมจัตุรัส', 'rectangle': 'สี่เหลี่ยมผืนผ้า',
                          'rhombus': 'สี่เหลี่ยมขนมเปียกปูน', 'parallelogram': 'สี่เหลี่ยมด้านขนาน',
                          'kite': 'สี่เหลี่ยมรูปว่าว', 'trapezium': 'สี่เหลี่ยมด้านไม่เท่า/สี่เหลี่ยมคางหมู'}
    print(square_type_select)
    square_type = str(input('Square Type: '))
    if square_type == 'square':
        print('2 method [have only diagonal] or [have only side]')
        method = str(input('method: '))
        if method == 'have only diagonal':
            diagonal_1 = int(input('Diagonal_1: '))
            diagonal_2 = int(input('Diagonal_2: '))
            area = 1 / 2 * (diagonal_1 * diagonal_2)
            print('Area is', area)
        elif method == 'have only side':
            side = int(input('side_1: '))
            area = side * side
            print('Area is', area)
        else:
            print("Error! Try again")
            square_area_calculator()
    elif square_type == 'rectangle':
        wide = int(input('wide: '))
        long = int(input('long: '))
        area = wide * long
        print('Area is', area)
    elif square_type == 'rhombus':
        print('2 method [have only diagonal] or [have base and hight]')
        method = str(input('method: '))
        if method == 'have only diagonal':
            diagonal_1 = int(input('Diagonal_1: '))
            diagonal_2 = int(input('Diagonal_2: '))
            area = 1 / 2 * (diagonal_1 * diagonal_2)
            print('Area is', area)
        elif method == 'have base and hight':
            base = int(input('Base: '))
            hight = int(input('Hight: '))
            area = base * hight
            print('Area is', area)
        else:
            print("Error! Try again")
            square_area_calculator()
    elif square_type == 'parallelogram':
        base = int(input('Base: '))
        hight = int(input('Hight: '))
        area = base * hight
        print('Area is', area)
    elif square_type == 'kite':
        diagonal_1 = int(input('Diagonal(1): '))
        diagonal_2 = int(input('Diagonal(2): '))
        area = 1 / 2 * (diagonal_1 * diagonal_2)
        print('Area is', area)
    elif square_type == 'trapezium':
        diagonal = int(input('Diagonal: '))
        branch_line_1 = int(input('Branch_line(1): '))
        branch_line_2 = int(input('Branch_line(2): '))
        area = 1 / 2 * diagonal * (branch_line_1 + branch_line_2)
        print('Area is', area)
    else:
        print("Error! Try again")
        square_area_calculator()


def square_perimeter_calculator():
    square_type_select = {'square': 'สี่เหลี่ยมจัตุรัส', 'rectangle': 'สี่เหลี่ยมผืนผ้า', 'rhombus': 'สี่เหลี่ยมขนมเปียกปูน',
                   'parallelogram': 'สี่เหลี่ยมด้านขนาน', }
    print(square_type_select)
    square_type = str(input('>>'))
    if square_type == 'square':
        side = int(input('side: '))
        perimeter = 4 * side
        print('Perimeter is', perimeter)
    elif square_type == 'rhombus':
        side = int(input('side: '))
        perimeter = 4 * side
        print('Perimeter is', perimeter)
    elif square_type == 'rectangle':
        wide = int(input('Wide: '))
        hight = int(input('Hight: '))
        perimeter = 2 * (wide + hight)
        print('Perimeter is', perimeter)
    elif square_type == 'parallelogram':
        wide = int(input('Wide: '))
        hight = int(input('Hight: '))
        perimeter = 2 * (wide + hight)
        print('Perimeter is', perimeter)
    else:
        print("Error! Try again")
        square_perimeter_calculator()


def circle_mode():
    print("in this mode you can use to calculate 2 thing[area, perimeter")
    user_select_mode = str(input('Mode: '))
    if user_select_mode == 'area':
        return circle_area_calculator()
    elif user_select_mode == 'perimeter':
        return circle_perimeter_calculator()
    else:
        print("Error! Try again")
        circle_mode()


def circle_area_calculator():
    radius = int(input('Radius: '))
    area = math.pi * (radius ** 2)
    print('Area is', area)


def circle_perimeter_calculator():
    radius = int(input('Radius: '))
    perimeter = ((2 * math.pi) * radius)
    print('Perimeter is', perimeter)


def trigonometry_calculator():
    print("sin // cos // tan // csc // sec // cot ")
    user_select = str(input('choose: '))
    if user_select == 'sin':
        value = int(input('value: '))
        sin_value = math.sin(value)
        print('sin', value, 'is', ':', sin_value)
    elif user_select == 'cos':
        value = int(input('value: '))
        cos_value = math.cos(value)
        print('cos', value, 'is', ':', cos_value)
    elif user_select == 'tan':
        value = int(input('value: '))
        tan_value = math.tan(value)
        print('tan', value, 'is', ':', tan_value)
    elif user_select == 'csc':
        value = int(input('value: '))
        csc_value = math.sin(1 / value)
        print('csc', value, 'is', ':', csc_value)
    elif user_select == 'sec':
        value = int(input('value: '))
        sec_value = math.cos(1 / value)
        print('sec', value, 'is', ':', sec_value)
    elif user_select == 'cot':
        value = int(input('value: '))
        cot_value = math.tan(1 / value)
        print('cot', value, 'is', ':', cot_value)
    else:
        print("Error! Try again")
        trigonometry_calculator()

start_mode_select()
