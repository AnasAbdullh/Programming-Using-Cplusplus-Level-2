#include <algorithm> // لإضافة find
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> text = {"hello", "world", "how", "are", "you"};

    // إضافة عنصر جديد
    // text.push_back("!");
    cout << "Last element: " << text[text.size() - 1] << endl;

    // عرض العناصر باستخدام for-each
    for (string &word : text)
        cout << word << " ";

    // حذف آخر عنصر
    // text.pop_back();
    cout << endl;
    for (string &word : text)
        cout << word << " ";

    // قراءة اسم من المستخدم وحذف العنصر إذا وُجد
    cout << "\n\nEnter a name to remove: ";
    string name;
    cin >> name;

    // البحث عن الاسم وحذفه
    auto it = find(text.begin(), text.end(), name);
    if (it != text.end())
    {
        text.erase(it); // حذف الاسم
        cout << "\nAfter removing \"" << name << "\": ";
    }
    else
    {
        cout << "\n\"" << name << "\" not found!";
    }

    // عرض العناصر المتبقية
    for (string &word : text)
        cout << word << " ";

    return 0;
}
