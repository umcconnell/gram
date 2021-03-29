#define GRAM_SUPPORTED_LANGUAGES 4

typedef struct editorSyntax
{
    char *filetype;
    char **filematch;
    char **keywords;
    char *singleline_comment_start;
    char *multiline_comment_start;
    char *multiline_comment_end;
    int flags;
} editorSyntax;

extern struct editorSyntax HLDB[GRAM_SUPPORTED_LANGUAGES];

#define HLDB_ENTRIES (sizeof(HLDB) / sizeof(HLDB[0]))
#define HL_HIGHLIGHT_NUMBERS (1 << 0)
#define HL_HIGHLIGHT_STRINGS (1 << 1)
#define HL_AUTO_INDENT (1 << 2)
