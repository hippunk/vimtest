set nocompatible
set tabstop=4
set softtabstop=4
set shiftwidth=4
set expandtab
set smartindent
set autoindent
set backspace=indent,eol,start
set background=dark 
set shiftround
set ignorecase
set showmode
set ruler
set showcmd
set mouse=a
nnoremap <F2>  :NERDTreeToggle<cr> 
nnoremap <F3>  :UndotreeToggle<cr> 
nnoremap <F4>  :TagbarToggle<cr> 


let g:airline_powerline_fonts = 1
set laststatus=2


filetype plugin on
let g:ycm_global_ycm_extra_conf = "~/.vim/.ycm_extra_conf.py"

au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif

colorscheme badwolf
syn on

set nu
