{\rtf1\ansi\ansicpg1252\cocoartf2639
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww25100\viewh15700\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 class Solution \{\
public:\
    vector<vector<int>> generate(int numRows) \{\
        vector<vector<int>>ans;\
        for(int i=0;i<numRows;i++)\{\
            vector<int>row(i+1,1);\
            for(int j=1;j<i;j++)\{\
                row[j]=ans[i-1][j]+ans[i-1][j-1];\
            \}\
            ans.push_back(row);\
        \}\
       return ans; \
    \}\
\};}