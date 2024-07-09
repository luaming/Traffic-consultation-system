import sys
from crawler import get_price  # 替换成你的模块名

if __name__ == '__main__':
    if len(sys.argv) != 4:
        sys.exit(1)
    
    date = sys.argv[1]
    from_station = sys.argv[2]
    to_station = sys.argv[3]

    get_price(date, from_station, to_station)
