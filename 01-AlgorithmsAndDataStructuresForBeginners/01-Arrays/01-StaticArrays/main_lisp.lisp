; To run, in the terminal, type:
;    sbcl --script main_lisp.lisp

(defparameter my-list (list 1 3 5))

(format t "~a~%" (first my-list))
(format t "~a~%" (second my-list))
(format t "~a~%" (third my-list))
