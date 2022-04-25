/* Generated code for Python module 'hikari.internal.routes'
 * created by Nuitka version 0.7.3
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_hikari$internal$routes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_hikari$internal$routes;
PyDictObject *moduledict_hikari$internal$routes;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[465];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[465];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("hikari.internal.routes"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 465; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_hikari$internal$routes(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 465; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c37586c9e54b9f6b25fb29f6452d4bb4;
static PyCodeObject *codeobj_76ead0ffe57fdbb301d2249755604775;
static PyCodeObject *codeobj_c2ee43738e2db875c2e5510c9925d69f;
static PyCodeObject *codeobj_ae612d0c6686694309d430c5a61b01f4;
static PyCodeObject *codeobj_f5922838a4f0653fa5958e504875fd9a;
static PyCodeObject *codeobj_7ffb9ee975a9c366c81dd56c676c91d1;
static PyCodeObject *codeobj_6fbb625b93c2a247cac1bc40df677204;
static PyCodeObject *codeobj_faf54919fa4cef04c4d743559d6323a8;
static PyCodeObject *codeobj_c851127fc6bdcefe838e4ca30fd07227;
static PyCodeObject *codeobj_988c245a6140893a1a80056191d071d7;
static PyCodeObject *codeobj_6ff8f950d26ceb18ad5b648b7e7b146e;
static PyCodeObject *codeobj_a615e3d9b239f7e5d96da947a528c9d1;
static PyCodeObject *codeobj_3720a6009ceaee9f73781821db0be21a;
static PyCodeObject *codeobj_cd5e26aedf8078091175ed17edfb082f;
static PyCodeObject *codeobj_7d028adc706cd137a2f26b18bb5362ad;
static PyCodeObject *codeobj_e7b51c9be27662a9351a4d8d8a8cb33a;
static PyCodeObject *codeobj_53086d3a18fe1634bbda423eabe5beb3;
static PyCodeObject *codeobj_bd2ce5919d226da065e4ff1f46a8d822;
static PyCodeObject *codeobj_59a20b37952a6973e61c17d84f7ba2b3;
static PyCodeObject *codeobj_a70613ded4629fe2338b98d48918133c;
static PyCodeObject *codeobj_2675cfb544cf39b3b352031f7b1868df;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[449]); CHECK_OBJECT(module_filename_obj);
    codeobj_c37586c9e54b9f6b25fb29f6452d4bb4 = MAKE_CODEOBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[450], mod_consts[451], NULL, 1, 0, 0);
    codeobj_76ead0ffe57fdbb301d2249755604775 = MAKE_CODEOBJECT(module_filename_obj, 182, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[34], mod_consts[452], NULL, 1, 0, 0);
    codeobj_c2ee43738e2db875c2e5510c9925d69f = MAKE_CODEOBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[97], mod_consts[453], NULL, 1, 0, 0);
    codeobj_ae612d0c6686694309d430c5a61b01f4 = MAKE_CODEOBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[97], mod_consts[453], NULL, 1, 0, 0);
    codeobj_f5922838a4f0653fa5958e504875fd9a = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[97], mod_consts[453], NULL, 1, 0, 0);
    codeobj_7ffb9ee975a9c366c81dd56c676c91d1 = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[97], mod_consts[453], NULL, 1, 0, 0);
    codeobj_6fbb625b93c2a247cac1bc40df677204 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[454], NULL, NULL, 0, 0, 0);
    codeobj_faf54919fa4cef04c4d743559d6323a8 = MAKE_CODEOBJECT(module_filename_obj, 188, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[150], mod_consts[455], NULL, 0, 0, 0);
    codeobj_c851127fc6bdcefe838e4ca30fd07227 = MAKE_CODEOBJECT(module_filename_obj, 55, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[28], mod_consts[455], NULL, 0, 0, 0);
    codeobj_988c245a6140893a1a80056191d071d7 = MAKE_CODEOBJECT(module_filename_obj, 118, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[121], mod_consts[455], NULL, 0, 0, 0);
    codeobj_6ff8f950d26ceb18ad5b648b7e7b146e = MAKE_CODEOBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[155], mod_consts[456], NULL, 3, 0, 0);
    codeobj_a615e3d9b239f7e5d96da947a528c9d1 = MAKE_CODEOBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[141], mod_consts[457], NULL, 3, 0, 0);
    codeobj_3720a6009ceaee9f73781821db0be21a = MAKE_CODEOBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[131], mod_consts[458], NULL, 1, 0, 0);
    codeobj_cd5e26aedf8078091175ed17edfb082f = MAKE_CODEOBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[131], mod_consts[458], NULL, 1, 0, 0);
    codeobj_7d028adc706cd137a2f26b18bb5362ad = MAKE_CODEOBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[147], mod_consts[459], NULL, 1, 0, 0);
    codeobj_e7b51c9be27662a9351a4d8d8a8cb33a = MAKE_CODEOBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[67], mod_consts[460], NULL, 2, 2, 0);
    codeobj_53086d3a18fe1634bbda423eabe5beb3 = MAKE_CODEOBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[67], mod_consts[461], NULL, 1, 0, 0);
    codeobj_bd2ce5919d226da065e4ff1f46a8d822 = MAKE_CODEOBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[164], mod_consts[462], NULL, 2, 2, 0);
    codeobj_59a20b37952a6973e61c17d84f7ba2b3 = MAKE_CODEOBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[129], mod_consts[463], NULL, 2, 0, 0);
    codeobj_a70613ded4629fe2338b98d48918133c = MAKE_CODEOBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[126], mod_consts[464], NULL, 2, 0, 0);
    codeobj_2675cfb544cf39b3b352031f7b1868df = MAKE_CODEOBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[6], mod_consts[458], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_hikari$internal$routes$$$function__12__cdn_valid_formats_converter$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__12__unpack_set(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__10_compile(PyObject *annotations);


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__11___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__12__cdn_valid_formats_converter(PyObject *annotations);


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__13__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__14_compile(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__15_compile_to_file(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__3_lambda();


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__4_lambda();


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__5_method(PyObject *annotations);


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__6_create_url(PyObject *annotations);


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__7_create_real_bucket_hash(PyObject *annotations);


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__8___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__9___init__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_hikari$internal$routes$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[0];
    struct Nuitka_FrameObject *frame_c2ee43738e2db875c2e5510c9925d69f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c2ee43738e2db875c2e5510c9925d69f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c2ee43738e2db875c2e5510c9925d69f)) {
        Py_XDECREF(cache_frame_c2ee43738e2db875c2e5510c9925d69f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c2ee43738e2db875c2e5510c9925d69f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c2ee43738e2db875c2e5510c9925d69f = MAKE_FUNCTION_FRAME(codeobj_c2ee43738e2db875c2e5510c9925d69f, module_hikari$internal$routes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c2ee43738e2db875c2e5510c9925d69f->m_type_description == NULL);
    frame_c2ee43738e2db875c2e5510c9925d69f = cache_frame_c2ee43738e2db875c2e5510c9925d69f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c2ee43738e2db875c2e5510c9925d69f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c2ee43738e2db875c2e5510c9925d69f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_d);
        tmp_expression_value_1 = par_d;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c2ee43738e2db875c2e5510c9925d69f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c2ee43738e2db875c2e5510c9925d69f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c2ee43738e2db875c2e5510c9925d69f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c2ee43738e2db875c2e5510c9925d69f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2ee43738e2db875c2e5510c9925d69f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2ee43738e2db875c2e5510c9925d69f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c2ee43738e2db875c2e5510c9925d69f,
        type_description_1,
        par_d
    );


    // Release cached frame if used for exception.
    if (frame_c2ee43738e2db875c2e5510c9925d69f == cache_frame_c2ee43738e2db875c2e5510c9925d69f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c2ee43738e2db875c2e5510c9925d69f);
        cache_frame_c2ee43738e2db875c2e5510c9925d69f = NULL;
    }

    assertFrameObject(frame_c2ee43738e2db875c2e5510c9925d69f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[0];
    struct Nuitka_FrameObject *frame_ae612d0c6686694309d430c5a61b01f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae612d0c6686694309d430c5a61b01f4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae612d0c6686694309d430c5a61b01f4)) {
        Py_XDECREF(cache_frame_ae612d0c6686694309d430c5a61b01f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae612d0c6686694309d430c5a61b01f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae612d0c6686694309d430c5a61b01f4 = MAKE_FUNCTION_FRAME(codeobj_ae612d0c6686694309d430c5a61b01f4, module_hikari$internal$routes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ae612d0c6686694309d430c5a61b01f4->m_type_description == NULL);
    frame_ae612d0c6686694309d430c5a61b01f4 = cache_frame_ae612d0c6686694309d430c5a61b01f4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ae612d0c6686694309d430c5a61b01f4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ae612d0c6686694309d430c5a61b01f4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_d);
        tmp_expression_value_1 = par_d;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae612d0c6686694309d430c5a61b01f4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae612d0c6686694309d430c5a61b01f4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae612d0c6686694309d430c5a61b01f4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae612d0c6686694309d430c5a61b01f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae612d0c6686694309d430c5a61b01f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae612d0c6686694309d430c5a61b01f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae612d0c6686694309d430c5a61b01f4,
        type_description_1,
        par_d
    );


    // Release cached frame if used for exception.
    if (frame_ae612d0c6686694309d430c5a61b01f4 == cache_frame_ae612d0c6686694309d430c5a61b01f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ae612d0c6686694309d430c5a61b01f4);
        cache_frame_ae612d0c6686694309d430c5a61b01f4 = NULL;
    }

    assertFrameObject(frame_ae612d0c6686694309d430c5a61b01f4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__3_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[0];
    struct Nuitka_FrameObject *frame_f5922838a4f0653fa5958e504875fd9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f5922838a4f0653fa5958e504875fd9a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f5922838a4f0653fa5958e504875fd9a)) {
        Py_XDECREF(cache_frame_f5922838a4f0653fa5958e504875fd9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f5922838a4f0653fa5958e504875fd9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f5922838a4f0653fa5958e504875fd9a = MAKE_FUNCTION_FRAME(codeobj_f5922838a4f0653fa5958e504875fd9a, module_hikari$internal$routes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f5922838a4f0653fa5958e504875fd9a->m_type_description == NULL);
    frame_f5922838a4f0653fa5958e504875fd9a = cache_frame_f5922838a4f0653fa5958e504875fd9a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f5922838a4f0653fa5958e504875fd9a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f5922838a4f0653fa5958e504875fd9a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_right_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_d);
        tmp_expression_value_1 = par_d;
        tmp_subscript_value_1 = mod_consts[2];
        tmp_left_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = mod_consts[3];
        tmp_left_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_value_2, tmp_right_value_1);
        Py_DECREF(tmp_left_value_2);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_d);
        tmp_expression_value_2 = par_d;
        tmp_subscript_value_2 = mod_consts[4];
        tmp_right_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_2);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5922838a4f0653fa5958e504875fd9a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5922838a4f0653fa5958e504875fd9a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5922838a4f0653fa5958e504875fd9a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f5922838a4f0653fa5958e504875fd9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f5922838a4f0653fa5958e504875fd9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5922838a4f0653fa5958e504875fd9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f5922838a4f0653fa5958e504875fd9a,
        type_description_1,
        par_d
    );


    // Release cached frame if used for exception.
    if (frame_f5922838a4f0653fa5958e504875fd9a == cache_frame_f5922838a4f0653fa5958e504875fd9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f5922838a4f0653fa5958e504875fd9a);
        cache_frame_f5922838a4f0653fa5958e504875fd9a = NULL;
    }

    assertFrameObject(frame_f5922838a4f0653fa5958e504875fd9a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__4_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[0];
    struct Nuitka_FrameObject *frame_7ffb9ee975a9c366c81dd56c676c91d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ffb9ee975a9c366c81dd56c676c91d1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ffb9ee975a9c366c81dd56c676c91d1)) {
        Py_XDECREF(cache_frame_7ffb9ee975a9c366c81dd56c676c91d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ffb9ee975a9c366c81dd56c676c91d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ffb9ee975a9c366c81dd56c676c91d1 = MAKE_FUNCTION_FRAME(codeobj_7ffb9ee975a9c366c81dd56c676c91d1, module_hikari$internal$routes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7ffb9ee975a9c366c81dd56c676c91d1->m_type_description == NULL);
    frame_7ffb9ee975a9c366c81dd56c676c91d1 = cache_frame_7ffb9ee975a9c366c81dd56c676c91d1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7ffb9ee975a9c366c81dd56c676c91d1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7ffb9ee975a9c366c81dd56c676c91d1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_d);
        tmp_expression_value_1 = par_d;
        tmp_subscript_value_1 = mod_consts[2];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ffb9ee975a9c366c81dd56c676c91d1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ffb9ee975a9c366c81dd56c676c91d1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ffb9ee975a9c366c81dd56c676c91d1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ffb9ee975a9c366c81dd56c676c91d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ffb9ee975a9c366c81dd56c676c91d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ffb9ee975a9c366c81dd56c676c91d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ffb9ee975a9c366c81dd56c676c91d1,
        type_description_1,
        par_d
    );


    // Release cached frame if used for exception.
    if (frame_7ffb9ee975a9c366c81dd56c676c91d1 == cache_frame_7ffb9ee975a9c366c81dd56c676c91d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7ffb9ee975a9c366c81dd56c676c91d1);
        cache_frame_7ffb9ee975a9c366c81dd56c676c91d1 = NULL;
    }

    assertFrameObject(frame_7ffb9ee975a9c366c81dd56c676c91d1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__5_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2675cfb544cf39b3b352031f7b1868df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2675cfb544cf39b3b352031f7b1868df = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2675cfb544cf39b3b352031f7b1868df)) {
        Py_XDECREF(cache_frame_2675cfb544cf39b3b352031f7b1868df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2675cfb544cf39b3b352031f7b1868df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2675cfb544cf39b3b352031f7b1868df = MAKE_FUNCTION_FRAME(codeobj_2675cfb544cf39b3b352031f7b1868df, module_hikari$internal$routes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2675cfb544cf39b3b352031f7b1868df->m_type_description == NULL);
    frame_2675cfb544cf39b3b352031f7b1868df = cache_frame_2675cfb544cf39b3b352031f7b1868df;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2675cfb544cf39b3b352031f7b1868df);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2675cfb544cf39b3b352031f7b1868df) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2675cfb544cf39b3b352031f7b1868df);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2675cfb544cf39b3b352031f7b1868df);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2675cfb544cf39b3b352031f7b1868df);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2675cfb544cf39b3b352031f7b1868df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2675cfb544cf39b3b352031f7b1868df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2675cfb544cf39b3b352031f7b1868df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2675cfb544cf39b3b352031f7b1868df,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2675cfb544cf39b3b352031f7b1868df == cache_frame_2675cfb544cf39b3b352031f7b1868df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2675cfb544cf39b3b352031f7b1868df);
        cache_frame_2675cfb544cf39b3b352031f7b1868df = NULL;
    }

    assertFrameObject(frame_2675cfb544cf39b3b352031f7b1868df);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__6_create_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_base_url = python_pars[1];
    struct Nuitka_FrameObject *frame_a70613ded4629fe2338b98d48918133c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a70613ded4629fe2338b98d48918133c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a70613ded4629fe2338b98d48918133c)) {
        Py_XDECREF(cache_frame_a70613ded4629fe2338b98d48918133c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a70613ded4629fe2338b98d48918133c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a70613ded4629fe2338b98d48918133c = MAKE_FUNCTION_FRAME(codeobj_a70613ded4629fe2338b98d48918133c, module_hikari$internal$routes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a70613ded4629fe2338b98d48918133c->m_type_description == NULL);
    frame_a70613ded4629fe2338b98d48918133c = cache_frame_a70613ded4629fe2338b98d48918133c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a70613ded4629fe2338b98d48918133c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a70613ded4629fe2338b98d48918133c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_base_url);
        tmp_left_value_1 = par_base_url;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a70613ded4629fe2338b98d48918133c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a70613ded4629fe2338b98d48918133c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a70613ded4629fe2338b98d48918133c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a70613ded4629fe2338b98d48918133c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a70613ded4629fe2338b98d48918133c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a70613ded4629fe2338b98d48918133c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a70613ded4629fe2338b98d48918133c,
        type_description_1,
        par_self,
        par_base_url
    );


    // Release cached frame if used for exception.
    if (frame_a70613ded4629fe2338b98d48918133c == cache_frame_a70613ded4629fe2338b98d48918133c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a70613ded4629fe2338b98d48918133c);
        cache_frame_a70613ded4629fe2338b98d48918133c = NULL;
    }

    assertFrameObject(frame_a70613ded4629fe2338b98d48918133c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_base_url);
    Py_DECREF(par_base_url);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_base_url);
    Py_DECREF(par_base_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__7_create_real_bucket_hash(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_initial_bucket_hash = python_pars[1];
    struct Nuitka_FrameObject *frame_59a20b37952a6973e61c17d84f7ba2b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_59a20b37952a6973e61c17d84f7ba2b3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_59a20b37952a6973e61c17d84f7ba2b3)) {
        Py_XDECREF(cache_frame_59a20b37952a6973e61c17d84f7ba2b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_59a20b37952a6973e61c17d84f7ba2b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_59a20b37952a6973e61c17d84f7ba2b3 = MAKE_FUNCTION_FRAME(codeobj_59a20b37952a6973e61c17d84f7ba2b3, module_hikari$internal$routes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_59a20b37952a6973e61c17d84f7ba2b3->m_type_description == NULL);
    frame_59a20b37952a6973e61c17d84f7ba2b3 = cache_frame_59a20b37952a6973e61c17d84f7ba2b3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_59a20b37952a6973e61c17d84f7ba2b3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_59a20b37952a6973e61c17d84f7ba2b3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_1;
        PyObject *tmp_right_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_initial_bucket_hash);
        tmp_left_value_2 = par_initial_bucket_hash;
        tmp_right_value_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_right_value_1 == NULL)) {
            tmp_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_right_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_2);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_59a20b37952a6973e61c17d84f7ba2b3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_59a20b37952a6973e61c17d84f7ba2b3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_59a20b37952a6973e61c17d84f7ba2b3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_59a20b37952a6973e61c17d84f7ba2b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_59a20b37952a6973e61c17d84f7ba2b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_59a20b37952a6973e61c17d84f7ba2b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_59a20b37952a6973e61c17d84f7ba2b3,
        type_description_1,
        par_self,
        par_initial_bucket_hash
    );


    // Release cached frame if used for exception.
    if (frame_59a20b37952a6973e61c17d84f7ba2b3 == cache_frame_59a20b37952a6973e61c17d84f7ba2b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_59a20b37952a6973e61c17d84f7ba2b3);
        cache_frame_59a20b37952a6973e61c17d84f7ba2b3 = NULL;
    }

    assertFrameObject(frame_59a20b37952a6973e61c17d84f7ba2b3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_initial_bucket_hash);
    Py_DECREF(par_initial_bucket_hash);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_initial_bucket_hash);
    Py_DECREF(par_initial_bucket_hash);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__8___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3720a6009ceaee9f73781821db0be21a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3720a6009ceaee9f73781821db0be21a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3720a6009ceaee9f73781821db0be21a)) {
        Py_XDECREF(cache_frame_3720a6009ceaee9f73781821db0be21a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3720a6009ceaee9f73781821db0be21a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3720a6009ceaee9f73781821db0be21a = MAKE_FUNCTION_FRAME(codeobj_3720a6009ceaee9f73781821db0be21a, module_hikari$internal$routes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3720a6009ceaee9f73781821db0be21a->m_type_description == NULL);
    frame_3720a6009ceaee9f73781821db0be21a = cache_frame_3720a6009ceaee9f73781821db0be21a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3720a6009ceaee9f73781821db0be21a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3720a6009ceaee9f73781821db0be21a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[13];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[14];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[13];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3720a6009ceaee9f73781821db0be21a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3720a6009ceaee9f73781821db0be21a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3720a6009ceaee9f73781821db0be21a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3720a6009ceaee9f73781821db0be21a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3720a6009ceaee9f73781821db0be21a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3720a6009ceaee9f73781821db0be21a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3720a6009ceaee9f73781821db0be21a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3720a6009ceaee9f73781821db0be21a == cache_frame_3720a6009ceaee9f73781821db0be21a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3720a6009ceaee9f73781821db0be21a);
        cache_frame_3720a6009ceaee9f73781821db0be21a = NULL;
    }

    assertFrameObject(frame_3720a6009ceaee9f73781821db0be21a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__9___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_path_template = python_pars[2];
    PyObject *var_match = NULL;
    PyObject *var_major_param_combo = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a615e3d9b239f7e5d96da947a528c9d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a615e3d9b239f7e5d96da947a528c9d1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a615e3d9b239f7e5d96da947a528c9d1)) {
        Py_XDECREF(cache_frame_a615e3d9b239f7e5d96da947a528c9d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a615e3d9b239f7e5d96da947a528c9d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a615e3d9b239f7e5d96da947a528c9d1 = MAKE_FUNCTION_FRAME(codeobj_a615e3d9b239f7e5d96da947a528c9d1, module_hikari$internal$routes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a615e3d9b239f7e5d96da947a528c9d1->m_type_description == NULL);
    frame_a615e3d9b239f7e5d96da947a528c9d1 = cache_frame_a615e3d9b239f7e5d96da947a528c9d1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a615e3d9b239f7e5d96da947a528c9d1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a615e3d9b239f7e5d96da947a528c9d1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_method);
        tmp_assattr_value_1 = par_method;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_path_template);
        tmp_assattr_value_2 = par_path_template;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[15], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[16], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path_template);
        tmp_args_element_value_1 = par_path_template;
        frame_a615e3d9b239f7e5d96da947a528c9d1->m_frame.f_lineno = 146;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[18], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_match == NULL);
        var_match = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a615e3d9b239f7e5d96da947a528c9d1->m_frame.f_lineno = 147;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 147;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_major_param_combo;
            var_major_param_combo = tmp_assign_source_4;
            Py_INCREF(var_major_param_combo);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_major_param_combo);
        tmp_expression_value_2 = var_major_param_combo;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (var_match == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 148;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = var_match;
        frame_a615e3d9b239f7e5d96da947a528c9d1->m_frame.f_lineno = 148;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 148;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_major_param_combo);
        tmp_assattr_value_4 = var_major_param_combo;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[16], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    goto loop_end_1;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 147;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a615e3d9b239f7e5d96da947a528c9d1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a615e3d9b239f7e5d96da947a528c9d1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a615e3d9b239f7e5d96da947a528c9d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a615e3d9b239f7e5d96da947a528c9d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a615e3d9b239f7e5d96da947a528c9d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a615e3d9b239f7e5d96da947a528c9d1,
        type_description_1,
        par_self,
        par_method,
        par_path_template,
        var_match,
        var_major_param_combo
    );


    // Release cached frame if used for exception.
    if (frame_a615e3d9b239f7e5d96da947a528c9d1 == cache_frame_a615e3d9b239f7e5d96da947a528c9d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a615e3d9b239f7e5d96da947a528c9d1);
        cache_frame_a615e3d9b239f7e5d96da947a528c9d1 = NULL;
    }

    assertFrameObject(frame_a615e3d9b239f7e5d96da947a528c9d1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_match);
    var_match = NULL;
    Py_XDECREF(var_major_param_combo);
    var_major_param_combo = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_match);
    var_match = NULL;
    Py_XDECREF(var_major_param_combo);
    var_major_param_combo = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_path_template);
    Py_DECREF(par_path_template);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_path_template);
    Py_DECREF(par_path_template);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__10_compile(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_data = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_53086d3a18fe1634bbda423eabe5beb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_53086d3a18fe1634bbda423eabe5beb3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_53086d3a18fe1634bbda423eabe5beb3)) {
        Py_XDECREF(cache_frame_53086d3a18fe1634bbda423eabe5beb3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53086d3a18fe1634bbda423eabe5beb3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53086d3a18fe1634bbda423eabe5beb3 = MAKE_FUNCTION_FRAME(codeobj_53086d3a18fe1634bbda423eabe5beb3, module_hikari$internal$routes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_53086d3a18fe1634bbda423eabe5beb3->m_type_description == NULL);
    frame_53086d3a18fe1634bbda423eabe5beb3 = cache_frame_53086d3a18fe1634bbda423eabe5beb3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_53086d3a18fe1634bbda423eabe5beb3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_53086d3a18fe1634bbda423eabe5beb3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_53086d3a18fe1634bbda423eabe5beb3->m_frame.f_lineno = 167;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dict_arg_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_1 = par_kwargs;
        tmp_iter_arg_1 = DICT_ITERITEMS(tmp_dict_arg_1);
        assert(!(tmp_iter_arg_1 == NULL));
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 168;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 168;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 168;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 168;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[25];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 168;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_7;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_8;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (var_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_data;
        CHECK_OBJECT(var_k);
        tmp_args_element_value_1 = var_k;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_2 = var_v;
        frame_53086d3a18fe1634bbda423eabe5beb3->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 168;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kw_call_value_2_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_1 = par_self;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_data == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = var_data;
        frame_53086d3a18fe1634bbda423eabe5beb3->m_frame.f_lineno = 173;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[16]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[16]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_data == NULL) {
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = var_data;
        frame_53086d3a18fe1634bbda423eabe5beb3->m_frame.f_lineno = 174;
        tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_kw_call_value_2_1 = mod_consts[30];
        Py_INCREF(tmp_kw_call_value_2_1);
        condexpr_end_1:;
        frame_53086d3a18fe1634bbda423eabe5beb3->m_frame.f_lineno = 171;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[31]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_53086d3a18fe1634bbda423eabe5beb3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_53086d3a18fe1634bbda423eabe5beb3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_53086d3a18fe1634bbda423eabe5beb3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53086d3a18fe1634bbda423eabe5beb3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53086d3a18fe1634bbda423eabe5beb3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53086d3a18fe1634bbda423eabe5beb3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53086d3a18fe1634bbda423eabe5beb3,
        type_description_1,
        par_self,
        par_kwargs,
        var_data,
        var_k,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_53086d3a18fe1634bbda423eabe5beb3 == cache_frame_53086d3a18fe1634bbda423eabe5beb3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_53086d3a18fe1634bbda423eabe5beb3);
        cache_frame_53086d3a18fe1634bbda423eabe5beb3 = NULL;
    }

    assertFrameObject(frame_53086d3a18fe1634bbda423eabe5beb3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__11___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cd5e26aedf8078091175ed17edfb082f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cd5e26aedf8078091175ed17edfb082f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cd5e26aedf8078091175ed17edfb082f)) {
        Py_XDECREF(cache_frame_cd5e26aedf8078091175ed17edfb082f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cd5e26aedf8078091175ed17edfb082f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cd5e26aedf8078091175ed17edfb082f = MAKE_FUNCTION_FRAME(codeobj_cd5e26aedf8078091175ed17edfb082f, module_hikari$internal$routes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cd5e26aedf8078091175ed17edfb082f->m_type_description == NULL);
    frame_cd5e26aedf8078091175ed17edfb082f = cache_frame_cd5e26aedf8078091175ed17edfb082f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cd5e26aedf8078091175ed17edfb082f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cd5e26aedf8078091175ed17edfb082f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cd5e26aedf8078091175ed17edfb082f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cd5e26aedf8078091175ed17edfb082f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cd5e26aedf8078091175ed17edfb082f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cd5e26aedf8078091175ed17edfb082f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd5e26aedf8078091175ed17edfb082f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd5e26aedf8078091175ed17edfb082f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cd5e26aedf8078091175ed17edfb082f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cd5e26aedf8078091175ed17edfb082f == cache_frame_cd5e26aedf8078091175ed17edfb082f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cd5e26aedf8078091175ed17edfb082f);
        cache_frame_cd5e26aedf8078091175ed17edfb082f = NULL;
    }

    assertFrameObject(frame_cd5e26aedf8078091175ed17edfb082f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__12__cdn_valid_formats_converter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_7d028adc706cd137a2f26b18bb5362ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d028adc706cd137a2f26b18bb5362ad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d028adc706cd137a2f26b18bb5362ad)) {
        Py_XDECREF(cache_frame_7d028adc706cd137a2f26b18bb5362ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d028adc706cd137a2f26b18bb5362ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d028adc706cd137a2f26b18bb5362ad = MAKE_FUNCTION_FRAME(codeobj_7d028adc706cd137a2f26b18bb5362ad, module_hikari$internal$routes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7d028adc706cd137a2f26b18bb5362ad->m_type_description == NULL);
    frame_7d028adc706cd137a2f26b18bb5362ad = cache_frame_7d028adc706cd137a2f26b18bb5362ad;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7d028adc706cd137a2f26b18bb5362ad);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7d028adc706cd137a2f26b18bb5362ad) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_frozenset_arg_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_values);
            tmp_iter_arg_1 = par_values;
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_frozenset_arg_1 = MAKE_GENERATOR_hikari$internal$routes$$$function__12__cdn_valid_formats_converter$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = PyFrozenSet_New(tmp_frozenset_arg_1);
        Py_DECREF(tmp_frozenset_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d028adc706cd137a2f26b18bb5362ad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d028adc706cd137a2f26b18bb5362ad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d028adc706cd137a2f26b18bb5362ad);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d028adc706cd137a2f26b18bb5362ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d028adc706cd137a2f26b18bb5362ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d028adc706cd137a2f26b18bb5362ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d028adc706cd137a2f26b18bb5362ad,
        type_description_1,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_7d028adc706cd137a2f26b18bb5362ad == cache_frame_7d028adc706cd137a2f26b18bb5362ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7d028adc706cd137a2f26b18bb5362ad);
        cache_frame_7d028adc706cd137a2f26b18bb5362ad = NULL;
    }

    assertFrameObject(frame_7d028adc706cd137a2f26b18bb5362ad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct hikari$internal$routes$$$function__12__cdn_valid_formats_converter$$$genexpr__1_genexpr_locals {
    PyObject *var_v;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *hikari$internal$routes$$$function__12__cdn_valid_formats_converter$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct hikari$internal$routes$$$function__12__cdn_valid_formats_converter$$$genexpr__1_genexpr_locals *generator_heap = (struct hikari$internal$routes$$$function__12__cdn_valid_formats_converter$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_v = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_76ead0ffe57fdbb301d2249755604775, module_hikari$internal$routes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 182;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_v);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_expression_value_2 = generator_heap->var_v;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 182;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 182;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 182;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 182;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 182;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_v
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_hikari$internal$routes$$$function__12__cdn_valid_formats_converter$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        hikari$internal$routes$$$function__12__cdn_valid_formats_converter$$$genexpr__1_genexpr_context,
        module_hikari$internal$routes,
        mod_consts[34],
#if PYTHON_VERSION >= 0x350
        mod_consts[35],
#endif
        codeobj_76ead0ffe57fdbb301d2249755604775,
        closure,
        1,
        sizeof(struct hikari$internal$routes$$$function__12__cdn_valid_formats_converter$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_hikari$internal$routes$$$function__13__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par__ = python_pars[1];
    PyObject *par_values = python_pars[2];
    struct Nuitka_FrameObject *frame_6ff8f950d26ceb18ad5b648b7e7b146e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6ff8f950d26ceb18ad5b648b7e7b146e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6ff8f950d26ceb18ad5b648b7e7b146e)) {
        Py_XDECREF(cache_frame_6ff8f950d26ceb18ad5b648b7e7b146e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6ff8f950d26ceb18ad5b648b7e7b146e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6ff8f950d26ceb18ad5b648b7e7b146e = MAKE_FUNCTION_FRAME(codeobj_6ff8f950d26ceb18ad5b648b7e7b146e, module_hikari$internal$routes, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6ff8f950d26ceb18ad5b648b7e7b146e->m_type_description == NULL);
    frame_6ff8f950d26ceb18ad5b648b7e7b146e = cache_frame_6ff8f950d26ceb18ad5b648b7e7b146e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6ff8f950d26ceb18ad5b648b7e7b146e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6ff8f950d26ceb18ad5b648b7e7b146e) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_values);
        tmp_operand_value_1 = par_values;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[13];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[36];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6ff8f950d26ceb18ad5b648b7e7b146e->m_frame.f_lineno = 205;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 205;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6ff8f950d26ceb18ad5b648b7e7b146e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6ff8f950d26ceb18ad5b648b7e7b146e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6ff8f950d26ceb18ad5b648b7e7b146e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6ff8f950d26ceb18ad5b648b7e7b146e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6ff8f950d26ceb18ad5b648b7e7b146e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6ff8f950d26ceb18ad5b648b7e7b146e,
        type_description_1,
        par_self,
        par__,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_6ff8f950d26ceb18ad5b648b7e7b146e == cache_frame_6ff8f950d26ceb18ad5b648b7e7b146e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6ff8f950d26ceb18ad5b648b7e7b146e);
        cache_frame_6ff8f950d26ceb18ad5b648b7e7b146e = NULL;
    }

    assertFrameObject(frame_6ff8f950d26ceb18ad5b648b7e7b146e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par__);
    Py_DECREF(par__);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par__);
    Py_DECREF(par__);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__14_compile(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_base_url = python_pars[1];
    PyObject *par_file_format = python_pars[2];
    PyObject *par_size = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    PyObject *var_url = NULL;
    PyObject *var_size_power = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_e7b51c9be27662a9351a4d8d8a8cb33a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_c37586c9e54b9f6b25fb29f6452d4bb4_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_c37586c9e54b9f6b25fb29f6452d4bb4_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e7b51c9be27662a9351a4d8d8a8cb33a = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e7b51c9be27662a9351a4d8d8a8cb33a)) {
        Py_XDECREF(cache_frame_e7b51c9be27662a9351a4d8d8a8cb33a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e7b51c9be27662a9351a4d8d8a8cb33a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e7b51c9be27662a9351a4d8d8a8cb33a = MAKE_FUNCTION_FRAME(codeobj_e7b51c9be27662a9351a4d8d8a8cb33a, module_hikari$internal$routes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e7b51c9be27662a9351a4d8d8a8cb33a->m_type_description == NULL);
    frame_e7b51c9be27662a9351a4d8d8a8cb33a = cache_frame_e7b51c9be27662a9351a4d8d8a8cb33a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e7b51c9be27662a9351a4d8d8a8cb33a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e7b51c9be27662a9351a4d8d8a8cb33a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_file_format);
        tmp_expression_value_1 = par_file_format;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e7b51c9be27662a9351a4d8d8a8cb33a->m_frame.f_lineno = 249;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_file_format;
            assert(old != NULL);
            par_file_format = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_file_format);
        tmp_cmp_expr_left_1 = par_file_format;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[37]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_file_format);
        tmp_format_value_1 = par_file_format;
        tmp_format_spec_1 = mod_consts[13];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[38];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_left_value_1 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_str_arg_value_1 = mod_consts[39];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[37]);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_1);
        assert(!(tmp_make_exception_arg_1 == NULL));
        frame_e7b51c9be27662a9351a4d8d8a8cb33a->m_frame.f_lineno = 252;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 252;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_key_value_1 = mod_consts[40];
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_2 = par_kwargs;
        tmp_key_value_2 = mod_consts[40];
        tmp_expression_value_4 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[41]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e7b51c9be27662a9351a4d8d8a8cb33a->m_frame.f_lineno = 257;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[42]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_file_format);
        tmp_cmp_expr_left_2 = par_file_format;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[44];
        frame_e7b51c9be27662a9351a4d8d8a8cb33a->m_frame.f_lineno = 258;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 258;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_dict_arg_1;
            CHECK_OBJECT(par_kwargs);
            tmp_dict_arg_1 = par_kwargs;
            tmp_iter_arg_1 = DICT_ITERITEMS(tmp_dict_arg_1);
            assert(!(tmp_iter_arg_1 == NULL));
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = PyDict_New();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_c37586c9e54b9f6b25fb29f6452d4bb4_2)) {
            Py_XDECREF(cache_frame_c37586c9e54b9f6b25fb29f6452d4bb4_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c37586c9e54b9f6b25fb29f6452d4bb4_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c37586c9e54b9f6b25fb29f6452d4bb4_2 = MAKE_FUNCTION_FRAME(codeobj_c37586c9e54b9f6b25fb29f6452d4bb4, module_hikari$internal$routes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c37586c9e54b9f6b25fb29f6452d4bb4_2->m_type_description == NULL);
        frame_c37586c9e54b9f6b25fb29f6452d4bb4_2 = cache_frame_c37586c9e54b9f6b25fb29f6452d4bb4_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c37586c9e54b9f6b25fb29f6452d4bb4_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c37586c9e54b9f6b25fb29f6452d4bb4_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 261;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_7 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 261;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_8 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 261;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 261;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[25];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 261;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_9 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_9;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_10 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_10;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_k);
            tmp_dictset38_key_1 = outline_0_var_k;
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[46]);
            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[47]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_v);
            tmp_unicode_arg_1 = outline_0_var_v;
            tmp_args_element_value_1 = PyObject_Unicode(tmp_unicode_arg_1);
            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 261;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            frame_c37586c9e54b9f6b25fb29f6452d4bb4_2->m_frame.f_lineno = 261;
            tmp_dictset38_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset38_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_value_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_2 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_2);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c37586c9e54b9f6b25fb29f6452d4bb4_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_c37586c9e54b9f6b25fb29f6452d4bb4_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c37586c9e54b9f6b25fb29f6452d4bb4_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c37586c9e54b9f6b25fb29f6452d4bb4_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c37586c9e54b9f6b25fb29f6452d4bb4_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c37586c9e54b9f6b25fb29f6452d4bb4_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c37586c9e54b9f6b25fb29f6452d4bb4_2,
            type_description_2,
            outline_0_var_k,
            outline_0_var_v
        );


        // Release cached frame if used for exception.
        if (frame_c37586c9e54b9f6b25fb29f6452d4bb4_2 == cache_frame_c37586c9e54b9f6b25fb29f6452d4bb4_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c37586c9e54b9f6b25fb29f6452d4bb4_2);
            cache_frame_c37586c9e54b9f6b25fb29f6452d4bb4_2 = NULL;
        }

        assertFrameObject(frame_c37586c9e54b9f6b25fb29f6452d4bb4_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 261;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = par_kwargs;
            assert(old != NULL);
            par_kwargs = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_value_2;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_right_value_3;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_base_url);
        tmp_left_value_3 = par_base_url;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[15]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[48]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_right_value_2 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[49];
        tmp_string_concat_values_2 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_file_format);
            tmp_format_value_2 = par_file_format;
            tmp_format_spec_2 = mod_consts[13];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_left_value_2);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_right_value_3 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_value_2, tmp_right_value_3);
        Py_DECREF(tmp_left_value_2);
        Py_DECREF(tmp_right_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_url == NULL);
        var_url = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_size);
        tmp_cmp_expr_left_3 = par_size;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[50]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[51];
        frame_e7b51c9be27662a9351a4d8d8a8cb33a->m_frame.f_lineno = 266;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 266;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_size);
        tmp_cmp_expr_left_4 = par_size;
        tmp_cmp_expr_right_4 = mod_consts[52];
        tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_make_exception_arg_4 = mod_consts[53];
        frame_e7b51c9be27662a9351a4d8d8a8cb33a->m_frame.f_lineno = 269;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 269;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_size);
        tmp_args_element_value_2 = par_size;
        frame_e7b51c9be27662a9351a4d8d8a8cb33a->m_frame.f_lineno = 271;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[55], tmp_args_element_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_size_power == NULL);
        var_size_power = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_size_power);
        tmp_called_instance_2 = var_size_power;
        frame_e7b51c9be27662a9351a4d8d8a8cb33a->m_frame.f_lineno = 272;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[56]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(var_size_power);
            tmp_assign_source_13 = var_size_power;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_13);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_13;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            tmp_cmp_expr_left_5 = mod_consts[57];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_5 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_14 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_14;
        }
        {
            bool tmp_condition_result_7;
            PyObject *tmp_operand_value_3;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_3 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }
            tmp_condition_result_7 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_7 != false) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_6;
        branch_no_7:;
        {
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_6 = tmp_comparison_chain_1__operand_2;
            tmp_cmp_expr_right_6 = mod_consts[58];
            tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }
            goto try_return_handler_6;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_1);

            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_1);
        tmp_condition_result_6 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_6 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        CHECK_OBJECT(var_url);
        tmp_left_value_4 = var_url;
        tmp_right_value_4 = mod_consts[59];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_UNICODE_INPLACE(&tmp_left_value_4, tmp_right_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = tmp_left_value_4;
        var_url = tmp_assign_source_15;

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_unicode_arg_2;
        CHECK_OBJECT(var_url);
        tmp_left_value_5 = var_url;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[46]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[60]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[61];
        CHECK_OBJECT(par_size);
        tmp_unicode_arg_2 = par_size;
        tmp_dict_value_1 = PyObject_Unicode(tmp_unicode_arg_2);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_e7b51c9be27662a9351a4d8d8a8cb33a->m_frame.f_lineno = 274;
        tmp_right_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_right_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_5, tmp_right_value_5);
        Py_DECREF(tmp_right_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = tmp_left_value_5;
        var_url = tmp_assign_source_16;

    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        tmp_make_exception_arg_5 = mod_consts[62];
        frame_e7b51c9be27662a9351a4d8d8a8cb33a->m_frame.f_lineno = 276;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_type = tmp_raise_type_5;
        exception_lineno = 276;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_6:;
    branch_no_3:;
    if (var_url == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 278;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_url;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e7b51c9be27662a9351a4d8d8a8cb33a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e7b51c9be27662a9351a4d8d8a8cb33a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e7b51c9be27662a9351a4d8d8a8cb33a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e7b51c9be27662a9351a4d8d8a8cb33a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e7b51c9be27662a9351a4d8d8a8cb33a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e7b51c9be27662a9351a4d8d8a8cb33a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e7b51c9be27662a9351a4d8d8a8cb33a,
        type_description_1,
        par_self,
        par_base_url,
        par_file_format,
        par_size,
        par_kwargs,
        var_url,
        var_size_power
    );


    // Release cached frame if used for exception.
    if (frame_e7b51c9be27662a9351a4d8d8a8cb33a == cache_frame_e7b51c9be27662a9351a4d8d8a8cb33a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e7b51c9be27662a9351a4d8d8a8cb33a);
        cache_frame_e7b51c9be27662a9351a4d8d8a8cb33a = NULL;
    }

    assertFrameObject(frame_e7b51c9be27662a9351a4d8d8a8cb33a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_file_format);
    Py_DECREF(par_file_format);
    par_file_format = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_size_power);
    var_size_power = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_file_format);
    par_file_format = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_size_power);
    var_size_power = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_base_url);
    Py_DECREF(par_base_url);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_base_url);
    Py_DECREF(par_base_url);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hikari$internal$routes$$$function__15_compile_to_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_base_url = python_pars[1];
    PyObject *par_file_format = python_pars[2];
    PyObject *par_size = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_bd2ce5919d226da065e4ff1f46a8d822;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_bd2ce5919d226da065e4ff1f46a8d822 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bd2ce5919d226da065e4ff1f46a8d822)) {
        Py_XDECREF(cache_frame_bd2ce5919d226da065e4ff1f46a8d822);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd2ce5919d226da065e4ff1f46a8d822 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd2ce5919d226da065e4ff1f46a8d822 = MAKE_FUNCTION_FRAME(codeobj_bd2ce5919d226da065e4ff1f46a8d822, module_hikari$internal$routes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bd2ce5919d226da065e4ff1f46a8d822->m_type_description == NULL);
    frame_bd2ce5919d226da065e4ff1f46a8d822 = cache_frame_bd2ce5919d226da065e4ff1f46a8d822;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bd2ce5919d226da065e4ff1f46a8d822);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bd2ce5919d226da065e4ff1f46a8d822) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[66]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[67]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_base_url);
        tmp_tuple_element_1 = par_base_url;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[68];
        CHECK_OBJECT(par_file_format);
        tmp_dict_value_1 = par_file_format;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[61];
        CHECK_OBJECT(par_size);
        tmp_dict_value_1 = par_size;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_args_element_value_1 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_bd2ce5919d226da065e4ff1f46a8d822->m_frame.f_lineno = 289;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd2ce5919d226da065e4ff1f46a8d822);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd2ce5919d226da065e4ff1f46a8d822);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd2ce5919d226da065e4ff1f46a8d822);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bd2ce5919d226da065e4ff1f46a8d822, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd2ce5919d226da065e4ff1f46a8d822->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd2ce5919d226da065e4ff1f46a8d822, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd2ce5919d226da065e4ff1f46a8d822,
        type_description_1,
        par_self,
        par_base_url,
        par_file_format,
        par_size,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_bd2ce5919d226da065e4ff1f46a8d822 == cache_frame_bd2ce5919d226da065e4ff1f46a8d822) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bd2ce5919d226da065e4ff1f46a8d822);
        cache_frame_bd2ce5919d226da065e4ff1f46a8d822 = NULL;
    }

    assertFrameObject(frame_bd2ce5919d226da065e4ff1f46a8d822);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_base_url);
    Py_DECREF(par_base_url);
    CHECK_OBJECT(par_file_format);
    Py_DECREF(par_file_format);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_base_url);
    Py_DECREF(par_base_url);
    CHECK_OBJECT(par_file_format);
    Py_DECREF(par_file_format);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__10_compile(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__10_compile,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_53086d3a18fe1634bbda423eabe5beb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hikari$internal$routes,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__11___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__11___str__,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_cd5e26aedf8078091175ed17edfb082f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hikari$internal$routes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__12__cdn_valid_formats_converter(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__12__cdn_valid_formats_converter,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d028adc706cd137a2f26b18bb5362ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hikari$internal$routes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__13__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__13__,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_6ff8f950d26ceb18ad5b648b7e7b146e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hikari$internal$routes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__14_compile(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__14_compile,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_e7b51c9be27662a9351a4d8d8a8cb33a,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_hikari$internal$routes,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__15_compile_to_file(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__15_compile_to_file,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_bd2ce5919d226da065e4ff1f46a8d822,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_hikari$internal$routes,
        mod_consts[69],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__1_lambda,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c2ee43738e2db875c2e5510c9925d69f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hikari$internal$routes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__2_lambda,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ae612d0c6686694309d430c5a61b01f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hikari$internal$routes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__3_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__3_lambda,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f5922838a4f0653fa5958e504875fd9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hikari$internal$routes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__4_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__4_lambda,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ffb9ee975a9c366c81dd56c676c91d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hikari$internal$routes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__5_method(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__5_method,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_2675cfb544cf39b3b352031f7b1868df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hikari$internal$routes,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__6_create_url(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__6_create_url,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_a70613ded4629fe2338b98d48918133c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hikari$internal$routes,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__7_create_real_bucket_hash(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__7_create_real_bucket_hash,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_59a20b37952a6973e61c17d84f7ba2b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hikari$internal$routes,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__8___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__8___str__,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_3720a6009ceaee9f73781821db0be21a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hikari$internal$routes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hikari$internal$routes$$$function__9___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hikari$internal$routes$$$function__9___init__,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_a615e3d9b239f7e5d96da947a528c9d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hikari$internal$routes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_hikari$internal$routes[] = {
    impl_hikari$internal$routes$$$function__1_lambda,
    impl_hikari$internal$routes$$$function__2_lambda,
    impl_hikari$internal$routes$$$function__3_lambda,
    impl_hikari$internal$routes$$$function__4_lambda,
    impl_hikari$internal$routes$$$function__5_method,
    impl_hikari$internal$routes$$$function__6_create_url,
    impl_hikari$internal$routes$$$function__7_create_real_bucket_hash,
    impl_hikari$internal$routes$$$function__8___str__,
    impl_hikari$internal$routes$$$function__9___init__,
    impl_hikari$internal$routes$$$function__10_compile,
    impl_hikari$internal$routes$$$function__11___str__,
    impl_hikari$internal$routes$$$function__12__cdn_valid_formats_converter,
    impl_hikari$internal$routes$$$function__13__,
    impl_hikari$internal$routes$$$function__14_compile,
    impl_hikari$internal$routes$$$function__15_compile_to_file,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_hikari$internal$routes;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_hikari$internal$routes) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_hikari$internal$routes[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_hikari$internal$routes,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_hikari$internal$routes(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("hikari.internal.routes");

    // Store the module for future use.
    module_hikari$internal$routes = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("hikari.internal.routes: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("hikari.internal.routes: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("hikari.internal.routes: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithikari$internal$routes\n");

    moduledict_hikari$internal$routes = MODULE_DICT(module_hikari$internal$routes);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_hikari$internal$routes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_hikari$internal$routes,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[13]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_hikari$internal$routes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_hikari$internal$routes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_hikari$internal$routes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_hikari$internal$routes);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_hikari$internal$routes);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    struct Nuitka_FrameObject *frame_6fbb625b93c2a247cac1bc40df677204;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_hikari$internal$routes$$$class__1_CompiledRoute_55 = NULL;
    struct Nuitka_FrameObject *frame_c851127fc6bdcefe838e4ca30fd07227_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c851127fc6bdcefe838e4ca30fd07227_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_hikari$internal$routes$$$class__2_Route_118 = NULL;
    struct Nuitka_FrameObject *frame_988c245a6140893a1a80056191d071d7_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_988c245a6140893a1a80056191d071d7_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_hikari$internal$routes$$$class__3_CDNRoute_188 = NULL;
    struct Nuitka_FrameObject *frame_faf54919fa4cef04c4d743559d6323a8_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_faf54919fa4cef04c4d743559d6323a8_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_6fbb625b93c2a247cac1bc40df677204 = MAKE_MODULE_FRAME(codeobj_6fbb625b93c2a247cac1bc40df677204, module_hikari$internal$routes);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_6fbb625b93c2a247cac1bc40df677204);
    assert(Py_REFCNT(frame_6fbb625b93c2a247cac1bc40df677204) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[74], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[75], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 25;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[78]);
        }

        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = LIST_COPY(mod_consts[79]);
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_6);
    }
    tmp_dictset_value = mod_consts[81];
    tmp_dictset_dict = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

    if (unlikely(tmp_dictset_dict == NULL)) {
        tmp_dictset_dict = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
    }

    assert(!(tmp_dictset_dict == NULL));
    tmp_dictset_key = mod_consts[80];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[54];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_hikari$internal$routes;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[52];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 29;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[82];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_hikari$internal$routes;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[52];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 30;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[84];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_hikari$internal$routes;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[52];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 32;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[85];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_hikari$internal$routes;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[52];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 34;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[86];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_hikari$internal$routes;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[87];
        tmp_level_value_5 = mod_consts[52];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 36;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_hikari$internal$routes,
                mod_consts[65],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[88];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_hikari$internal$routes;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[89];
        tmp_level_value_6 = mod_consts[52];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 37;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_hikari$internal$routes,
                mod_consts[90],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[90]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[88];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_hikari$internal$routes;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[91];
        tmp_level_value_7 = mod_consts[52];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 38;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_hikari$internal$routes,
                mod_consts[23],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_15);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[93];
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[10];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 41;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[67],
            PyTuple_GET_ITEM(mod_consts[94], 0)
        );

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_16);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = mod_consts[95];
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[17];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[96];


        tmp_dict_value_1 = MAKE_FUNCTION_hikari$internal$routes$$$function__1_lambda();

        tmp_assign_source_17 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[98];


        tmp_dict_value_1 = MAKE_FUNCTION_hikari$internal$routes$$$function__2_lambda();

        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[99];


        tmp_dict_value_1 = MAKE_FUNCTION_hikari$internal$routes$$$function__3_lambda();

        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[100];


        tmp_dict_value_1 = MAKE_FUNCTION_hikari$internal$routes$$$function__4_lambda();

        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_17);
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = mod_consts[101];
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[19];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[102];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[102];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        condexpr_end_1:;
        tmp_bases_value_1 = mod_consts[103];
        tmp_assign_source_19 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[102];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[102];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 55;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_1 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_1, mod_consts[104]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[104]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        tmp_args_value_1 = mod_consts[105];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 55;
        tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_3 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[106]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_value_1 = mod_consts[107];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[108];
        tmp_getattr_default_1 = mod_consts[109];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_value_4 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_4 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[108]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 55;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[110]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 53;

            goto try_except_handler_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[111]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 53;

            goto try_except_handler_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 53;
        tmp_called_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[112], 0), mod_consts[113]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 53;

            goto try_except_handler_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 54;

            goto try_except_handler_1;
        }
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_hikari$internal$routes$$$class__1_CompiledRoute_55 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[118], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_3;
        }
        tmp_dictset_value = PyDict_New();
        tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_c851127fc6bdcefe838e4ca30fd07227_2)) {
            Py_XDECREF(cache_frame_c851127fc6bdcefe838e4ca30fd07227_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c851127fc6bdcefe838e4ca30fd07227_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c851127fc6bdcefe838e4ca30fd07227_2 = MAKE_FUNCTION_FRAME(codeobj_c851127fc6bdcefe838e4ca30fd07227, module_hikari$internal$routes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c851127fc6bdcefe838e4ca30fd07227_2->m_type_description == NULL);
        frame_c851127fc6bdcefe838e4ca30fd07227_2 = cache_frame_c851127fc6bdcefe838e4ca30fd07227_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c851127fc6bdcefe838e4ca30fd07227_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c851127fc6bdcefe838e4ca30fd07227_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_3;
            tmp_called_instance_3 = PyObject_GetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[85]);

            if (tmp_called_instance_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_called_instance_3 == NULL)) {
                        tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_called_instance_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 62;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_c851127fc6bdcefe838e4ca30fd07227_2->m_frame.f_lineno = 62;
            tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[119]);
            Py_DECREF(tmp_called_instance_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_ass_subvalue_4 = mod_consts[120];
            tmp_ass_subscribed_4 = PyObject_GetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[77]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_4 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subscribed_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            tmp_called_instance_4 = PyObject_GetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[85]);

            if (tmp_called_instance_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_called_instance_4 == NULL)) {
                        tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_called_instance_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_c851127fc6bdcefe838e4ca30fd07227_2->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[119]);
            Py_DECREF(tmp_called_instance_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_ass_subvalue_5 = mod_consts[121];
            tmp_ass_subscribed_5 = PyObject_GetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[77]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_5 = mod_consts[5];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            Py_DECREF(tmp_ass_subscribed_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            tmp_called_instance_5 = PyObject_GetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[85]);

            if (tmp_called_instance_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_called_instance_5 == NULL)) {
                        tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_called_instance_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 68;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_c851127fc6bdcefe838e4ca30fd07227_2->m_frame.f_lineno = 68;
            tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[119]);
            Py_DECREF(tmp_called_instance_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = mod_consts[120];
            tmp_ass_subscribed_6 = PyObject_GetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[77]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_6 = mod_consts[8];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            Py_DECREF(tmp_ass_subscribed_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_1;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_2;
            tmp_res = MAPPING_HAS_ITEM(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[122]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_5 = PyObject_GetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[122]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[122]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = PyDict_Copy(mod_consts[123]);


            tmp_args_element_value_4 = MAKE_FUNCTION_hikari$internal$routes$$$function__5_method(tmp_annotations_1);

            frame_c851127fc6bdcefe838e4ca30fd07227_2->m_frame.f_lineno = 71;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;
            tmp_annotations_2 = PyDict_Copy(mod_consts[123]);


            tmp_args_element_value_5 = MAKE_FUNCTION_hikari$internal$routes$$$function__5_method(tmp_annotations_2);

            frame_c851127fc6bdcefe838e4ca30fd07227_2->m_frame.f_lineno = 71;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = PyDict_Copy(mod_consts[125]);


            tmp_dictset_value = MAKE_FUNCTION_hikari$internal$routes$$$function__6_create_url(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[126], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = PyDict_Copy(mod_consts[128]);


            tmp_dictset_value = MAKE_FUNCTION_hikari$internal$routes$$$function__7_create_real_bucket_hash(tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[129], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = PyDict_Copy(mod_consts[123]);


            tmp_dictset_value = MAKE_FUNCTION_hikari$internal$routes$$$function__8___str__(tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__1_CompiledRoute_55, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c851127fc6bdcefe838e4ca30fd07227_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c851127fc6bdcefe838e4ca30fd07227_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c851127fc6bdcefe838e4ca30fd07227_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c851127fc6bdcefe838e4ca30fd07227_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c851127fc6bdcefe838e4ca30fd07227_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c851127fc6bdcefe838e4ca30fd07227_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c851127fc6bdcefe838e4ca30fd07227_2 == cache_frame_c851127fc6bdcefe838e4ca30fd07227_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c851127fc6bdcefe838e4ca30fd07227_2);
            cache_frame_c851127fc6bdcefe838e4ca30fd07227_2 = NULL;
        }

        assertFrameObject(frame_c851127fc6bdcefe838e4ca30fd07227_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_7 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[28];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[103];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_hikari$internal$routes$$$class__1_CompiledRoute_55;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 55;
            tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_args_element_value_3 = outline_0_var___class__;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_hikari$internal$routes$$$class__1_CompiledRoute_55);
        locals_hikari$internal$routes$$$class__1_CompiledRoute_55 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_hikari$internal$routes$$$class__1_CompiledRoute_55);
        locals_hikari$internal$routes$$$class__1_CompiledRoute_55 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 55;
        goto try_except_handler_1;
        outline_result_1:;
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 54;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[114], tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 54;

            goto try_except_handler_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 53;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 53;

            goto try_except_handler_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 52;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_22);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_6;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[102];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[102];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        condexpr_end_3:;
        tmp_bases_value_2 = mod_consts[103];
        tmp_assign_source_25 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[102];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[102];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 118;

        goto try_except_handler_4;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[104]);
        tmp_condition_result_8 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[104]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        tmp_args_value_3 = mod_consts[133];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 118;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[106]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_value_2 = mod_consts[107];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[108];
        tmp_getattr_default_2 = mod_consts[109];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        tmp_right_value_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[108]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_value_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_value_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 118;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_27;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_10;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_4;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[110]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_4;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 116;

            goto try_except_handler_4;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[111]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 116;

            goto try_except_handler_4;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 116;
        tmp_called_value_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[134], 0), mod_consts[135]);
        Py_DECREF(tmp_called_value_11);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 116;

            goto try_except_handler_4;
        }
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 117;

            goto try_except_handler_4;
        }
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_hikari$internal$routes$$$class__2_Route_118 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[118], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_6;
        }
        tmp_dictset_value = PyDict_New();
        tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_988c245a6140893a1a80056191d071d7_3)) {
            Py_XDECREF(cache_frame_988c245a6140893a1a80056191d071d7_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_988c245a6140893a1a80056191d071d7_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_988c245a6140893a1a80056191d071d7_3 = MAKE_FUNCTION_FRAME(codeobj_988c245a6140893a1a80056191d071d7, module_hikari$internal$routes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_988c245a6140893a1a80056191d071d7_3->m_type_description == NULL);
        frame_988c245a6140893a1a80056191d071d7_3 = cache_frame_988c245a6140893a1a80056191d071d7_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_988c245a6140893a1a80056191d071d7_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_988c245a6140893a1a80056191d071d7_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_7;
            tmp_called_instance_7 = PyObject_GetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[85]);

            if (tmp_called_instance_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_called_instance_7 == NULL)) {
                        tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_called_instance_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 132;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_988c245a6140893a1a80056191d071d7_3->m_frame.f_lineno = 132;
            tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[119]);
            Py_DECREF(tmp_called_instance_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = mod_consts[120];
            tmp_ass_subscribed_7 = PyObject_GetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[77]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_7 = mod_consts[6];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            Py_DECREF(tmp_ass_subscribed_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_8;
            tmp_called_instance_8 = PyObject_GetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[85]);

            if (tmp_called_instance_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_called_instance_8 == NULL)) {
                        tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_called_instance_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 135;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_988c245a6140893a1a80056191d071d7_3->m_frame.f_lineno = 135;
            tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[119]);
            Py_DECREF(tmp_called_instance_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_ass_subvalue_8 = mod_consts[120];
            tmp_ass_subscribed_8 = PyObject_GetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[77]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_8 = mod_consts[15];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            Py_DECREF(tmp_ass_subscribed_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_13;
            tmp_expression_value_13 = PyObject_GetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[85]);

            if (tmp_expression_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 138;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[119]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_988c245a6140893a1a80056191d071d7_3->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[137], 0), mod_consts[138]);
            Py_DECREF(tmp_called_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_ass_subvalue_9 = mod_consts[139];
            tmp_ass_subscribed_9 = PyObject_GetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[77]);

            if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_9 = mod_consts[16];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
            Py_DECREF(tmp_ass_subscribed_9);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = PyDict_Copy(mod_consts[140]);


            tmp_dictset_value = MAKE_FUNCTION_hikari$internal$routes$$$function__9___init__(tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[141], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_7;
            tmp_annotations_7 = PyDict_Copy(mod_consts[143]);


            tmp_dictset_value = MAKE_FUNCTION_hikari$internal$routes$$$function__10_compile(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[67], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = PyDict_Copy(mod_consts[123]);


            tmp_dictset_value = MAKE_FUNCTION_hikari$internal$routes$$$function__11___str__(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__2_Route_118, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_988c245a6140893a1a80056191d071d7_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_988c245a6140893a1a80056191d071d7_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_988c245a6140893a1a80056191d071d7_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_988c245a6140893a1a80056191d071d7_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_988c245a6140893a1a80056191d071d7_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_988c245a6140893a1a80056191d071d7_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_988c245a6140893a1a80056191d071d7_3 == cache_frame_988c245a6140893a1a80056191d071d7_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_988c245a6140893a1a80056191d071d7_3);
            cache_frame_988c245a6140893a1a80056191d071d7_3 = NULL;
        }

        assertFrameObject(frame_988c245a6140893a1a80056191d071d7_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_13 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_4 = mod_consts[121];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[103];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_hikari$internal$routes$$$class__2_Route_118;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 118;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_args_element_value_8 = outline_1_var___class__;
        Py_INCREF(tmp_args_element_value_8);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_hikari$internal$routes$$$class__2_Route_118);
        locals_hikari$internal$routes$$$class__2_Route_118 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_hikari$internal$routes$$$class__2_Route_118);
        locals_hikari$internal$routes$$$class__2_Route_118 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 118;
        goto try_except_handler_4;
        outline_result_2:;
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 117;
        tmp_args_element_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[114], tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 117;

            goto try_except_handler_4;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 116;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 116;

            goto try_except_handler_4;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 115;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_28);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_9;
        tmp_annotations_9 = PyDict_Copy(mod_consts[146]);


        tmp_assign_source_30 = MAKE_FUNCTION_hikari$internal$routes$$$function__12__cdn_valid_formats_converter(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_value_3;
        bool tmp_condition_result_10;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        PyObject *tmp_bases_value_3;
        tmp_key_value_7 = mod_consts[102];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_value_8 = mod_consts[102];
        tmp_metaclass_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_metaclass_value_3 == NULL) {
            tmp_metaclass_value_3 = Py_None;
        }
        assert(!(tmp_metaclass_value_3 == NULL));
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        condexpr_end_4:;
        tmp_bases_value_3 = mod_consts[103];
        tmp_assign_source_32 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[102];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[102];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 188;

        goto try_except_handler_7;
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[104]);
        tmp_condition_result_12 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_5;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[104]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_7;
        }
        tmp_args_value_5 = mod_consts[148];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 188;
        tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_14);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_16 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[106]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_7;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_value_3 = mod_consts[107];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[108];
        tmp_getattr_default_3 = mod_consts[109];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_7;
        }
        tmp_right_value_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_type_arg_3;
            PyTuple_SET_ITEM(tmp_right_value_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_3 = tmp_class_creation_3__prepared;
            tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_expression_value_17 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[108]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_value_3, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_value_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 188;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_34;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_16;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_7;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[110]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_7;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 186;

            goto try_except_handler_7;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[111]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 186;

            goto try_except_handler_7;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 186;
        tmp_called_value_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[112], 0), mod_consts[113]);
        Py_DECREF(tmp_called_value_17);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 186;

            goto try_except_handler_7;
        }
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 187;

            goto try_except_handler_7;
        }
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_hikari$internal$routes$$$class__3_CDNRoute_188 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[150];
        tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[118], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        tmp_dictset_value = PyDict_New();
        tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        if (isFrameUnusable(cache_frame_faf54919fa4cef04c4d743559d6323a8_4)) {
            Py_XDECREF(cache_frame_faf54919fa4cef04c4d743559d6323a8_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_faf54919fa4cef04c4d743559d6323a8_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_faf54919fa4cef04c4d743559d6323a8_4 = MAKE_FUNCTION_FRAME(codeobj_faf54919fa4cef04c4d743559d6323a8, module_hikari$internal$routes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_faf54919fa4cef04c4d743559d6323a8_4->m_type_description == NULL);
        frame_faf54919fa4cef04c4d743559d6323a8_4 = cache_frame_faf54919fa4cef04c4d743559d6323a8_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_faf54919fa4cef04c4d743559d6323a8_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_faf54919fa4cef04c4d743559d6323a8_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_10;
            tmp_called_instance_10 = PyObject_GetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[85]);

            if (tmp_called_instance_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_called_instance_10 == NULL)) {
                        tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_called_instance_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 191;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_10);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_faf54919fa4cef04c4d743559d6323a8_4->m_frame.f_lineno = 191;
            tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[119]);
            Py_DECREF(tmp_called_instance_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            tmp_ass_subvalue_10 = mod_consts[120];
            tmp_ass_subscribed_10 = PyObject_GetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[77]);

            if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_10 = mod_consts[15];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
            Py_DECREF(tmp_ass_subscribed_10);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_kw_call_value_1_1;
            PyObject *tmp_kw_call_value_2_1;
            PyObject *tmp_kw_call_value_3_1;
            tmp_expression_value_20 = PyObject_GetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[85]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 194;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[119]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_kw_call_value_0_1 = PyObject_GetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[147]);

            if (tmp_kw_call_value_0_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[147]);

                    if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
                        tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                    }

                    if (tmp_kw_call_value_0_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 195;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_kw_call_value_0_1);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_kw_call_value_1_1 = Py_False;
            tmp_kw_call_value_2_1 = Py_False;
            tmp_kw_call_value_3_1 = Py_False;
            frame_faf54919fa4cef04c4d743559d6323a8_4->m_frame.f_lineno = 194;
            {
                PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_18, kw_values, mod_consts[151]);
            }

            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_kw_call_value_0_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_11;
            PyObject *tmp_ass_subscribed_11;
            PyObject *tmp_ass_subscript_11;
            tmp_ass_subvalue_11 = mod_consts[152];
            tmp_ass_subscribed_11 = PyObject_GetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[77]);

            if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_11 = mod_consts[37];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
            Py_DECREF(tmp_ass_subscribed_11);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_10;
            tmp_called_instance_11 = PyObject_GetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[37]);

            if (unlikely(tmp_called_instance_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[37]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_10 = PyDict_Copy(mod_consts[154]);


            tmp_args_element_value_12 = MAKE_FUNCTION_hikari$internal$routes$$$function__13__(tmp_annotations_10);

            frame_faf54919fa4cef04c4d743559d6323a8_4->m_frame.f_lineno = 202;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[153], tmp_args_element_value_12);
            Py_DECREF(tmp_called_instance_11);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[155], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_21;
            tmp_expression_value_21 = PyObject_GetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[85]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 207;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[119]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_faf54919fa4cef04c4d743559d6323a8_4->m_frame.f_lineno = 207;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_19, &PyTuple_GET_ITEM(mod_consts[157], 0), mod_consts[158]);
            Py_DECREF(tmp_called_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_12;
            PyObject *tmp_ass_subscribed_12;
            PyObject *tmp_ass_subscript_12;
            tmp_ass_subvalue_12 = mod_consts[159];
            tmp_ass_subscribed_12 = PyObject_GetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[77]);

            if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_12 = mod_consts[50];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
            Py_DECREF(tmp_ass_subscribed_12);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_annotations_11;
            tmp_kw_defaults_1 = PyDict_Copy(mod_consts[160]);
            tmp_annotations_11 = PyDict_Copy(mod_consts[161]);


            tmp_dictset_value = MAKE_FUNCTION_hikari$internal$routes$$$function__14_compile(tmp_kw_defaults_1, tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[67], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_kw_defaults_2;
            PyObject *tmp_annotations_12;
            tmp_kw_defaults_2 = PyDict_Copy(mod_consts[160]);
            tmp_annotations_12 = PyDict_Copy(mod_consts[163]);


            tmp_dictset_value = MAKE_FUNCTION_hikari$internal$routes$$$function__15_compile_to_file(tmp_kw_defaults_2, tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_hikari$internal$routes$$$class__3_CDNRoute_188, mod_consts[164], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_faf54919fa4cef04c4d743559d6323a8_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_faf54919fa4cef04c4d743559d6323a8_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_faf54919fa4cef04c4d743559d6323a8_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_faf54919fa4cef04c4d743559d6323a8_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_faf54919fa4cef04c4d743559d6323a8_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_faf54919fa4cef04c4d743559d6323a8_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_faf54919fa4cef04c4d743559d6323a8_4 == cache_frame_faf54919fa4cef04c4d743559d6323a8_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_faf54919fa4cef04c4d743559d6323a8_4);
            cache_frame_faf54919fa4cef04c4d743559d6323a8_4 = NULL;
        }

        assertFrameObject(frame_faf54919fa4cef04c4d743559d6323a8_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_20 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_6 = mod_consts[150];
            tmp_args_value_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[103];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_hikari$internal$routes$$$class__3_CDNRoute_188;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 188;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_args_element_value_11 = outline_2_var___class__;
        Py_INCREF(tmp_args_element_value_11);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_hikari$internal$routes$$$class__3_CDNRoute_188);
        locals_hikari$internal$routes$$$class__3_CDNRoute_188 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_hikari$internal$routes$$$class__3_CDNRoute_188);
        locals_hikari$internal$routes$$$class__3_CDNRoute_188 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 188;
        goto try_except_handler_7;
        outline_result_3:;
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 187;
        tmp_args_element_value_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[114], tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 187;

            goto try_except_handler_7;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 186;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 186;

            goto try_except_handler_7;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 185;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_35);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[166];
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_37);
    }
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_ass_subscript_13;
        tmp_ass_subvalue_13 = mod_consts[93];
        tmp_ass_subscribed_13 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_13 == NULL)) {
            tmp_ass_subscribed_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_13 = mod_consts[166];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[167];
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_38);
    }
    {
        PyObject *tmp_ass_subvalue_14;
        PyObject *tmp_ass_subscribed_14;
        PyObject *tmp_ass_subscript_14;
        tmp_ass_subvalue_14 = mod_consts[93];
        tmp_ass_subscribed_14 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_14 == NULL)) {
            tmp_ass_subscribed_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_14 = mod_consts[167];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_39);
    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_ass_subscript_15;
        tmp_ass_subvalue_15 = mod_consts[93];
        tmp_ass_subscribed_15 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_15 == NULL)) {
            tmp_ass_subscribed_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_15 = mod_consts[168];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[169];
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_40);
    }
    {
        PyObject *tmp_ass_subvalue_16;
        PyObject *tmp_ass_subscribed_16;
        PyObject *tmp_ass_subscript_16;
        tmp_ass_subvalue_16 = mod_consts[93];
        tmp_ass_subscribed_16 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_16 == NULL)) {
            tmp_ass_subscribed_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_16 = mod_consts[169];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_41);
    }
    {
        PyObject *tmp_ass_subvalue_17;
        PyObject *tmp_ass_subscribed_17;
        PyObject *tmp_ass_subscript_17;
        tmp_ass_subvalue_17 = mod_consts[93];
        tmp_ass_subscribed_17 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_17 == NULL)) {
            tmp_ass_subscribed_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_17 = mod_consts[170];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = mod_consts[171];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_21, call_args);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_42);
    }
    {
        PyObject *tmp_ass_subvalue_18;
        PyObject *tmp_ass_subscribed_18;
        PyObject *tmp_ass_subscript_18;
        tmp_ass_subvalue_18 = mod_consts[173];
        tmp_ass_subscribed_18 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_18 == NULL)) {
            tmp_ass_subscribed_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_18 = mod_consts[172];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = mod_consts[171];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 300;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_22, call_args);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_43);
    }
    {
        PyObject *tmp_ass_subvalue_19;
        PyObject *tmp_ass_subscribed_19;
        PyObject *tmp_ass_subscript_19;
        tmp_ass_subvalue_19 = mod_consts[173];
        tmp_ass_subscribed_19 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_19 == NULL)) {
            tmp_ass_subscribed_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_19 = mod_consts[174];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = mod_consts[171];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_44);
    }
    {
        PyObject *tmp_ass_subvalue_20;
        PyObject *tmp_ass_subscribed_20;
        PyObject *tmp_ass_subscript_20;
        tmp_ass_subvalue_20 = mod_consts[173];
        tmp_ass_subscribed_20 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_20 == NULL)) {
            tmp_ass_subscribed_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_20 = mod_consts[175];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_19 == NULL)) {
            tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = mod_consts[176];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_24, call_args);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_45);
    }
    {
        PyObject *tmp_ass_subvalue_21;
        PyObject *tmp_ass_subscribed_21;
        PyObject *tmp_ass_subscript_21;
        tmp_ass_subvalue_21 = mod_consts[173];
        tmp_ass_subscribed_21 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_21 == NULL)) {
            tmp_ass_subscribed_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_21 = mod_consts[177];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[178];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 305;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_46);
    }
    {
        PyObject *tmp_ass_subvalue_22;
        PyObject *tmp_ass_subscribed_22;
        PyObject *tmp_ass_subscript_22;
        tmp_ass_subvalue_22 = mod_consts[173];
        tmp_ass_subscribed_22 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_22 == NULL)) {
            tmp_ass_subscribed_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_22 = mod_consts[179];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_23 == NULL)) {
            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = mod_consts[178];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 306;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_26, call_args);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_47);
    }
    {
        PyObject *tmp_ass_subvalue_23;
        PyObject *tmp_ass_subscribed_23;
        PyObject *tmp_ass_subscript_23;
        tmp_ass_subvalue_23 = mod_consts[173];
        tmp_ass_subscribed_23 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_23 == NULL)) {
            tmp_ass_subscribed_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_23 = mod_consts[180];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = mod_consts[181];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_27, call_args);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_48);
    }
    {
        PyObject *tmp_ass_subvalue_24;
        PyObject *tmp_ass_subscribed_24;
        PyObject *tmp_ass_subscript_24;
        tmp_ass_subvalue_24 = mod_consts[173];
        tmp_ass_subscribed_24 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_24 == NULL)) {
            tmp_ass_subscribed_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_24 = mod_consts[182];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = mod_consts[181];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 309;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_28, call_args);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_49);
    }
    {
        PyObject *tmp_ass_subvalue_25;
        PyObject *tmp_ass_subscribed_25;
        PyObject *tmp_ass_subscript_25;
        tmp_ass_subvalue_25 = mod_consts[173];
        tmp_ass_subscribed_25 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_25 == NULL)) {
            tmp_ass_subscribed_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_25 = mod_consts[183];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = mod_consts[181];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 310;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_29, call_args);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_50);
    }
    {
        PyObject *tmp_ass_subvalue_26;
        PyObject *tmp_ass_subscribed_26;
        PyObject *tmp_ass_subscript_26;
        tmp_ass_subvalue_26 = mod_consts[173];
        tmp_ass_subscribed_26 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_26 == NULL)) {
            tmp_ass_subscribed_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_26 = mod_consts[184];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_31 == NULL)) {
            tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = mod_consts[185];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_30, call_args);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_51);
    }
    {
        PyObject *tmp_ass_subvalue_27;
        PyObject *tmp_ass_subscribed_27;
        PyObject *tmp_ass_subscript_27;
        tmp_ass_subvalue_27 = mod_consts[173];
        tmp_ass_subscribed_27 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_27 == NULL)) {
            tmp_ass_subscribed_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_27 = mod_consts[186];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_33 == NULL)) {
            tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = mod_consts[187];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 314;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_31, call_args);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_52);
    }
    {
        PyObject *tmp_ass_subvalue_28;
        PyObject *tmp_ass_subscribed_28;
        PyObject *tmp_ass_subscript_28;
        tmp_ass_subvalue_28 = mod_consts[173];
        tmp_ass_subscribed_28 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_28 == NULL)) {
            tmp_ass_subscribed_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_28 = mod_consts[188];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_35 == NULL)) {
            tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = mod_consts[187];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 315;
        {
            PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_32, call_args);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_53);
    }
    {
        PyObject *tmp_ass_subvalue_29;
        PyObject *tmp_ass_subscribed_29;
        PyObject *tmp_ass_subscript_29;
        tmp_ass_subvalue_29 = mod_consts[173];
        tmp_ass_subscribed_29 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_29 == NULL)) {
            tmp_ass_subscribed_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_29 = mod_consts[189];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_37 == NULL)) {
            tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = mod_consts[190];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_33, call_args);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_54);
    }
    {
        PyObject *tmp_ass_subvalue_30;
        PyObject *tmp_ass_subscribed_30;
        PyObject *tmp_ass_subscript_30;
        tmp_ass_subvalue_30 = mod_consts[173];
        tmp_ass_subscribed_30 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_30 == NULL)) {
            tmp_ass_subscribed_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_30 = mod_consts[191];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_39 == NULL)) {
            tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = mod_consts[192];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_34, call_args);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_55);
    }
    {
        PyObject *tmp_ass_subvalue_31;
        PyObject *tmp_ass_subscribed_31;
        PyObject *tmp_ass_subscript_31;
        tmp_ass_subvalue_31 = mod_consts[173];
        tmp_ass_subscribed_31 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_31 == NULL)) {
            tmp_ass_subscribed_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_31 = mod_consts[193];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_41 == NULL)) {
            tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = mod_consts[192];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_35, call_args);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_56);
    }
    {
        PyObject *tmp_ass_subvalue_32;
        PyObject *tmp_ass_subscribed_32;
        PyObject *tmp_ass_subscript_32;
        tmp_ass_subvalue_32 = mod_consts[173];
        tmp_ass_subscribed_32 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_32 == NULL)) {
            tmp_ass_subscribed_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_32 = mod_consts[194];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_43 == NULL)) {
            tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_44 = mod_consts[195];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_36, call_args);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_57);
    }
    {
        PyObject *tmp_ass_subvalue_33;
        PyObject *tmp_ass_subscribed_33;
        PyObject *tmp_ass_subscript_33;
        tmp_ass_subvalue_33 = mod_consts[173];
        tmp_ass_subscribed_33 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_33 == NULL)) {
            tmp_ass_subscribed_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_33 = mod_consts[196];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_45 == NULL)) {
            tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = mod_consts[197];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_37, call_args);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_58);
    }
    {
        PyObject *tmp_ass_subvalue_34;
        PyObject *tmp_ass_subscribed_34;
        PyObject *tmp_ass_subscript_34;
        tmp_ass_subvalue_34 = mod_consts[173];
        tmp_ass_subscribed_34 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_34 == NULL)) {
            tmp_ass_subscribed_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_34 = mod_consts[198];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_47 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_47 == NULL)) {
            tmp_args_element_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_48 = mod_consts[197];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 324;
        {
            PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
            tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_38, call_args);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_59);
    }
    {
        PyObject *tmp_ass_subvalue_35;
        PyObject *tmp_ass_subscribed_35;
        PyObject *tmp_ass_subscript_35;
        tmp_ass_subvalue_35 = mod_consts[173];
        tmp_ass_subscribed_35 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_35 == NULL)) {
            tmp_ass_subscribed_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_35 = mod_consts[199];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_49 == NULL)) {
            tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = mod_consts[200];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 326;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50};
            tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_39, call_args);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_60);
    }
    {
        PyObject *tmp_ass_subvalue_36;
        PyObject *tmp_ass_subscribed_36;
        PyObject *tmp_ass_subscript_36;
        tmp_ass_subvalue_36 = mod_consts[173];
        tmp_ass_subscribed_36 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_36 == NULL)) {
            tmp_ass_subscribed_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_36 = mod_consts[201];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_51 == NULL)) {
            tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = mod_consts[202];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52};
            tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_40, call_args);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_61);
    }
    {
        PyObject *tmp_ass_subvalue_37;
        PyObject *tmp_ass_subscribed_37;
        PyObject *tmp_ass_subscript_37;
        tmp_ass_subvalue_37 = mod_consts[173];
        tmp_ass_subscribed_37 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_37 == NULL)) {
            tmp_ass_subscribed_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_37 = mod_consts[203];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_53 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_53 == NULL)) {
            tmp_args_element_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_54 = mod_consts[202];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 329;
        {
            PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54};
            tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_41, call_args);
        }

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_62);
    }
    {
        PyObject *tmp_ass_subvalue_38;
        PyObject *tmp_ass_subscribed_38;
        PyObject *tmp_ass_subscript_38;
        tmp_ass_subvalue_38 = mod_consts[173];
        tmp_ass_subscribed_38 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_38 == NULL)) {
            tmp_ass_subscribed_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_38 = mod_consts[204];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_55 == NULL)) {
            tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_56 = mod_consts[205];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56};
            tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_42, call_args);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_63);
    }
    {
        PyObject *tmp_ass_subvalue_39;
        PyObject *tmp_ass_subscribed_39;
        PyObject *tmp_ass_subscript_39;
        tmp_ass_subvalue_39 = mod_consts[173];
        tmp_ass_subscribed_39 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_39 == NULL)) {
            tmp_ass_subscribed_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_39 = mod_consts[206];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_57 == NULL)) {
            tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = mod_consts[207];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58};
            tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_43, call_args);
        }

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_64);
    }
    {
        PyObject *tmp_ass_subvalue_40;
        PyObject *tmp_ass_subscribed_40;
        PyObject *tmp_ass_subscript_40;
        tmp_ass_subvalue_40 = mod_consts[173];
        tmp_ass_subscribed_40 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_40 == NULL)) {
            tmp_ass_subscribed_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_40 = mod_consts[208];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_59 == NULL)) {
            tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_60 = mod_consts[205];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 334;
        {
            PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_44, call_args);
        }

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_65);
    }
    {
        PyObject *tmp_ass_subvalue_41;
        PyObject *tmp_ass_subscribed_41;
        PyObject *tmp_ass_subscript_41;
        tmp_ass_subvalue_41 = mod_consts[173];
        tmp_ass_subscribed_41 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_41 == NULL)) {
            tmp_ass_subscribed_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_41 = mod_consts[209];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_61 == NULL)) {
            tmp_args_element_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = mod_consts[210];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62};
            tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_45, call_args);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_66);
    }
    {
        PyObject *tmp_ass_subvalue_42;
        PyObject *tmp_ass_subscribed_42;
        PyObject *tmp_ass_subscript_42;
        tmp_ass_subvalue_42 = mod_consts[173];
        tmp_ass_subscribed_42 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_42 == NULL)) {
            tmp_ass_subscribed_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_42 = mod_consts[211];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_63 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_63 == NULL)) {
            tmp_args_element_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = mod_consts[212];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64};
            tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_46, call_args);
        }

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_67);
    }
    {
        PyObject *tmp_ass_subvalue_43;
        PyObject *tmp_ass_subscribed_43;
        PyObject *tmp_ass_subscript_43;
        tmp_ass_subvalue_43 = mod_consts[173];
        tmp_ass_subscribed_43 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_43 == NULL)) {
            tmp_ass_subscribed_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_43 = mod_consts[213];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_65 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_65 == NULL)) {
            tmp_args_element_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = mod_consts[214];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66};
            tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_47, call_args);
        }

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_68);
    }
    {
        PyObject *tmp_ass_subvalue_44;
        PyObject *tmp_ass_subscribed_44;
        PyObject *tmp_ass_subscript_44;
        tmp_ass_subvalue_44 = mod_consts[173];
        tmp_ass_subscribed_44 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_44 == NULL)) {
            tmp_ass_subscribed_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_44 = mod_consts[215];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_48;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_67 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_67 == NULL)) {
            tmp_args_element_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = mod_consts[212];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68};
            tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_48, call_args);
        }

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_69);
    }
    {
        PyObject *tmp_ass_subvalue_45;
        PyObject *tmp_ass_subscribed_45;
        PyObject *tmp_ass_subscript_45;
        tmp_ass_subvalue_45 = mod_consts[173];
        tmp_ass_subscribed_45 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_45 == NULL)) {
            tmp_ass_subscribed_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_45 = mod_consts[216];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_args_element_value_70;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_69 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_69 == NULL)) {
            tmp_args_element_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = mod_consts[212];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = {tmp_args_element_value_69, tmp_args_element_value_70};
            tmp_assign_source_70 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_49, call_args);
        }

        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_70);
    }
    {
        PyObject *tmp_ass_subvalue_46;
        PyObject *tmp_ass_subscribed_46;
        PyObject *tmp_ass_subscript_46;
        tmp_ass_subvalue_46 = mod_consts[173];
        tmp_ass_subscribed_46 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_46 == NULL)) {
            tmp_ass_subscribed_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_46 = mod_consts[217];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_71 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_71 == NULL)) {
            tmp_args_element_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_72 = mod_consts[218];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 345;
        {
            PyObject *call_args[] = {tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_assign_source_71 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_50, call_args);
        }

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_71);
    }
    {
        PyObject *tmp_ass_subvalue_47;
        PyObject *tmp_ass_subscribed_47;
        PyObject *tmp_ass_subscript_47;
        tmp_ass_subvalue_47 = mod_consts[173];
        tmp_ass_subscribed_47 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_47 == NULL)) {
            tmp_ass_subscribed_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_47 = mod_consts[219];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_51;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_73 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_73 == NULL)) {
            tmp_args_element_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_74 = mod_consts[220];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 347;
        {
            PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74};
            tmp_assign_source_72 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_51, call_args);
        }

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_72);
    }
    {
        PyObject *tmp_ass_subvalue_48;
        PyObject *tmp_ass_subscribed_48;
        PyObject *tmp_ass_subscript_48;
        tmp_ass_subvalue_48 = mod_consts[173];
        tmp_ass_subscribed_48 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_48 == NULL)) {
            tmp_ass_subscribed_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_48 = mod_consts[221];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_52;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_75 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_75 == NULL)) {
            tmp_args_element_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_76 = mod_consts[220];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 348;
        {
            PyObject *call_args[] = {tmp_args_element_value_75, tmp_args_element_value_76};
            tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_52, call_args);
        }

        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_73);
    }
    {
        PyObject *tmp_ass_subvalue_49;
        PyObject *tmp_ass_subscribed_49;
        PyObject *tmp_ass_subscript_49;
        tmp_ass_subvalue_49 = mod_consts[173];
        tmp_ass_subscribed_49 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_49 == NULL)) {
            tmp_ass_subscribed_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_49 = mod_consts[222];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_53;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_77 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_77 == NULL)) {
            tmp_args_element_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = mod_consts[220];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 349;
        {
            PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78};
            tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_53, call_args);
        }

        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_74);
    }
    {
        PyObject *tmp_ass_subvalue_50;
        PyObject *tmp_ass_subscribed_50;
        PyObject *tmp_ass_subscript_50;
        tmp_ass_subvalue_50 = mod_consts[173];
        tmp_ass_subscribed_50 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_50 == NULL)) {
            tmp_ass_subscribed_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_50 = mod_consts[223];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_54;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_79 == NULL)) {
            tmp_args_element_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_80 = mod_consts[224];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 351;
        {
            PyObject *call_args[] = {tmp_args_element_value_79, tmp_args_element_value_80};
            tmp_assign_source_75 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_54, call_args);
        }

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_75);
    }
    {
        PyObject *tmp_ass_subvalue_51;
        PyObject *tmp_ass_subscribed_51;
        PyObject *tmp_ass_subscript_51;
        tmp_ass_subvalue_51 = mod_consts[173];
        tmp_ass_subscribed_51 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_51 == NULL)) {
            tmp_ass_subscribed_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_51 = mod_consts[225];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_55;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_args_element_value_82;
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_81 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_81 == NULL)) {
            tmp_args_element_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_82 = mod_consts[226];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 353;
        {
            PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82};
            tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_55, call_args);
        }

        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_76);
    }
    {
        PyObject *tmp_ass_subvalue_52;
        PyObject *tmp_ass_subscribed_52;
        PyObject *tmp_ass_subscript_52;
        tmp_ass_subvalue_52 = mod_consts[173];
        tmp_ass_subscribed_52 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_52 == NULL)) {
            tmp_ass_subscribed_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_52 = mod_consts[227];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_56;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_83 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_83 == NULL)) {
            tmp_args_element_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = mod_consts[226];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = {tmp_args_element_value_83, tmp_args_element_value_84};
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_56, call_args);
        }

        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_77);
    }
    {
        PyObject *tmp_ass_subvalue_53;
        PyObject *tmp_ass_subscribed_53;
        PyObject *tmp_ass_subscript_53;
        tmp_ass_subvalue_53 = mod_consts[173];
        tmp_ass_subscribed_53 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_53 == NULL)) {
            tmp_ass_subscribed_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_53 = mod_consts[228];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_57;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_args_element_value_86;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_85 == NULL)) {
            tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = mod_consts[226];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = {tmp_args_element_value_85, tmp_args_element_value_86};
            tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_57, call_args);
        }

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_78);
    }
    {
        PyObject *tmp_ass_subvalue_54;
        PyObject *tmp_ass_subscribed_54;
        PyObject *tmp_ass_subscript_54;
        tmp_ass_subvalue_54 = mod_consts[173];
        tmp_ass_subscribed_54 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_54 == NULL)) {
            tmp_ass_subscribed_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_54 = mod_consts[229];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_58;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_args_element_value_88;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_87 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_87 == NULL)) {
            tmp_args_element_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = mod_consts[230];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = {tmp_args_element_value_87, tmp_args_element_value_88};
            tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_58, call_args);
        }

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_79);
    }
    {
        PyObject *tmp_ass_subvalue_55;
        PyObject *tmp_ass_subscribed_55;
        PyObject *tmp_ass_subscript_55;
        tmp_ass_subvalue_55 = mod_consts[173];
        tmp_ass_subscribed_55 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_55 == NULL)) {
            tmp_ass_subscribed_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_55 = mod_consts[231];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_55, tmp_ass_subscript_55, tmp_ass_subvalue_55);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_59;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_args_element_value_90;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_89 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_89 == NULL)) {
            tmp_args_element_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = mod_consts[230];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_value_89, tmp_args_element_value_90};
            tmp_assign_source_80 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_59, call_args);
        }

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_80);
    }
    {
        PyObject *tmp_ass_subvalue_56;
        PyObject *tmp_ass_subscribed_56;
        PyObject *tmp_ass_subscript_56;
        tmp_ass_subvalue_56 = mod_consts[173];
        tmp_ass_subscribed_56 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_56 == NULL)) {
            tmp_ass_subscribed_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_56 = mod_consts[232];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_56, tmp_ass_subscript_56, tmp_ass_subvalue_56);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_60;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_args_element_value_92;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_91 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_91 == NULL)) {
            tmp_args_element_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = mod_consts[233];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 360;
        {
            PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92};
            tmp_assign_source_81 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_60, call_args);
        }

        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_81);
    }
    {
        PyObject *tmp_ass_subvalue_57;
        PyObject *tmp_ass_subscribed_57;
        PyObject *tmp_ass_subscript_57;
        tmp_ass_subvalue_57 = mod_consts[173];
        tmp_ass_subscribed_57 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_57 == NULL)) {
            tmp_ass_subscribed_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_57 = mod_consts[234];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_57, tmp_ass_subscript_57, tmp_ass_subvalue_57);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_args_element_value_94;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_93 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_93 == NULL)) {
            tmp_args_element_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_94 = mod_consts[233];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = {tmp_args_element_value_93, tmp_args_element_value_94};
            tmp_assign_source_82 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_61, call_args);
        }

        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_82);
    }
    {
        PyObject *tmp_ass_subvalue_58;
        PyObject *tmp_ass_subscribed_58;
        PyObject *tmp_ass_subscript_58;
        tmp_ass_subvalue_58 = mod_consts[173];
        tmp_ass_subscribed_58 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_58 == NULL)) {
            tmp_ass_subscribed_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_58 = mod_consts[235];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_58, tmp_ass_subscript_58, tmp_ass_subvalue_58);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_62;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_args_element_value_96;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_95 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_95 == NULL)) {
            tmp_args_element_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_96 = mod_consts[236];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = {tmp_args_element_value_95, tmp_args_element_value_96};
            tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_62, call_args);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_83);
    }
    {
        PyObject *tmp_ass_subvalue_59;
        PyObject *tmp_ass_subscribed_59;
        PyObject *tmp_ass_subscript_59;
        tmp_ass_subvalue_59 = mod_consts[173];
        tmp_ass_subscribed_59 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_59 == NULL)) {
            tmp_ass_subscribed_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_59 = mod_consts[237];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_59, tmp_ass_subscript_59, tmp_ass_subvalue_59);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_63;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_args_element_value_98;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_97 == NULL)) {
            tmp_args_element_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_98 = mod_consts[236];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = {tmp_args_element_value_97, tmp_args_element_value_98};
            tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_63, call_args);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_84);
    }
    {
        PyObject *tmp_ass_subvalue_60;
        PyObject *tmp_ass_subscribed_60;
        PyObject *tmp_ass_subscript_60;
        tmp_ass_subvalue_60 = mod_consts[173];
        tmp_ass_subscribed_60 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_60 == NULL)) {
            tmp_ass_subscribed_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_60 = mod_consts[238];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_60, tmp_ass_subscript_60, tmp_ass_subvalue_60);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_64;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_args_element_value_100;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_99 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_99 == NULL)) {
            tmp_args_element_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_100 = mod_consts[239];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = {tmp_args_element_value_99, tmp_args_element_value_100};
            tmp_assign_source_85 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_64, call_args);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_85);
    }
    {
        PyObject *tmp_ass_subvalue_61;
        PyObject *tmp_ass_subscribed_61;
        PyObject *tmp_ass_subscript_61;
        tmp_ass_subvalue_61 = mod_consts[173];
        tmp_ass_subscribed_61 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_61 == NULL)) {
            tmp_ass_subscribed_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_61 = mod_consts[240];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_61, tmp_ass_subscript_61, tmp_ass_subvalue_61);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_65;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_101 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_101 == NULL)) {
            tmp_args_element_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_102 = mod_consts[239];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = {tmp_args_element_value_101, tmp_args_element_value_102};
            tmp_assign_source_86 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_65, call_args);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_86);
    }
    {
        PyObject *tmp_ass_subvalue_62;
        PyObject *tmp_ass_subscribed_62;
        PyObject *tmp_ass_subscript_62;
        tmp_ass_subvalue_62 = mod_consts[173];
        tmp_ass_subscribed_62 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_62 == NULL)) {
            tmp_ass_subscribed_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_62 = mod_consts[241];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_62, tmp_ass_subscript_62, tmp_ass_subvalue_62);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_66;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_args_element_value_104;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_103 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_103 == NULL)) {
            tmp_args_element_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_104 = mod_consts[239];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104};
            tmp_assign_source_87 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_66, call_args);
        }

        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_87);
    }
    {
        PyObject *tmp_ass_subvalue_63;
        PyObject *tmp_ass_subscribed_63;
        PyObject *tmp_ass_subscript_63;
        tmp_ass_subvalue_63 = mod_consts[173];
        tmp_ass_subscribed_63 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_63 == NULL)) {
            tmp_ass_subscribed_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_63 = mod_consts[242];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_63, tmp_ass_subscript_63, tmp_ass_subvalue_63);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_67;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_args_element_value_106;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_105 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_105 == NULL)) {
            tmp_args_element_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_106 = mod_consts[243];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = {tmp_args_element_value_105, tmp_args_element_value_106};
            tmp_assign_source_88 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_67, call_args);
        }

        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_88);
    }
    {
        PyObject *tmp_ass_subvalue_64;
        PyObject *tmp_ass_subscribed_64;
        PyObject *tmp_ass_subscript_64;
        tmp_ass_subvalue_64 = mod_consts[173];
        tmp_ass_subscribed_64 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_64 == NULL)) {
            tmp_ass_subscribed_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_64 = mod_consts[244];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_64, tmp_ass_subscript_64, tmp_ass_subvalue_64);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_args_element_value_108;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_107 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_107 == NULL)) {
            tmp_args_element_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_108 = mod_consts[243];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 371;
        {
            PyObject *call_args[] = {tmp_args_element_value_107, tmp_args_element_value_108};
            tmp_assign_source_89 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_68, call_args);
        }

        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_89);
    }
    {
        PyObject *tmp_ass_subvalue_65;
        PyObject *tmp_ass_subscribed_65;
        PyObject *tmp_ass_subscript_65;
        tmp_ass_subvalue_65 = mod_consts[173];
        tmp_ass_subscribed_65 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_65 == NULL)) {
            tmp_ass_subscribed_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_65 = mod_consts[245];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_65, tmp_ass_subscript_65, tmp_ass_subvalue_65);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_69;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_args_element_value_110;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_109 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_109 == NULL)) {
            tmp_args_element_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_110 = mod_consts[246];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 373;
        {
            PyObject *call_args[] = {tmp_args_element_value_109, tmp_args_element_value_110};
            tmp_assign_source_90 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_69, call_args);
        }

        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_90);
    }
    {
        PyObject *tmp_ass_subvalue_66;
        PyObject *tmp_ass_subscribed_66;
        PyObject *tmp_ass_subscript_66;
        tmp_ass_subvalue_66 = mod_consts[173];
        tmp_ass_subscribed_66 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_66 == NULL)) {
            tmp_ass_subscribed_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_66 = mod_consts[247];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_66, tmp_ass_subscript_66, tmp_ass_subvalue_66);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_70;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_args_element_value_112;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_111 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_111 == NULL)) {
            tmp_args_element_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_112 = mod_consts[248];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = {tmp_args_element_value_111, tmp_args_element_value_112};
            tmp_assign_source_91 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_70, call_args);
        }

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_91);
    }
    {
        PyObject *tmp_ass_subvalue_67;
        PyObject *tmp_ass_subscribed_67;
        PyObject *tmp_ass_subscript_67;
        tmp_ass_subvalue_67 = mod_consts[173];
        tmp_ass_subscribed_67 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_67 == NULL)) {
            tmp_ass_subscribed_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_67 = mod_consts[249];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_67, tmp_ass_subscript_67, tmp_ass_subvalue_67);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_71;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_args_element_value_114;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_113 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_113 == NULL)) {
            tmp_args_element_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_114 = mod_consts[250];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 375;
        {
            PyObject *call_args[] = {tmp_args_element_value_113, tmp_args_element_value_114};
            tmp_assign_source_92 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_71, call_args);
        }

        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_92);
    }
    {
        PyObject *tmp_ass_subvalue_68;
        PyObject *tmp_ass_subscribed_68;
        PyObject *tmp_ass_subscript_68;
        tmp_ass_subvalue_68 = mod_consts[173];
        tmp_ass_subscribed_68 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_68 == NULL)) {
            tmp_ass_subscribed_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_68 = mod_consts[251];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_68, tmp_ass_subscript_68, tmp_ass_subvalue_68);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_72;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_args_element_value_116;
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_115 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_115 == NULL)) {
            tmp_args_element_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_116 = mod_consts[248];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116};
            tmp_assign_source_93 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_72, call_args);
        }

        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_93);
    }
    {
        PyObject *tmp_ass_subvalue_69;
        PyObject *tmp_ass_subscribed_69;
        PyObject *tmp_ass_subscript_69;
        tmp_ass_subvalue_69 = mod_consts[173];
        tmp_ass_subscribed_69 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_69 == NULL)) {
            tmp_ass_subscribed_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_69 = mod_consts[252];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_69, tmp_ass_subscript_69, tmp_ass_subvalue_69);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_73;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_args_element_value_118;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_117 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_117 == NULL)) {
            tmp_args_element_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_118 = mod_consts[246];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 379;
        {
            PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118};
            tmp_assign_source_94 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_73, call_args);
        }

        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_94);
    }
    {
        PyObject *tmp_ass_subvalue_70;
        PyObject *tmp_ass_subscribed_70;
        PyObject *tmp_ass_subscript_70;
        tmp_ass_subvalue_70 = mod_consts[173];
        tmp_ass_subscribed_70 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_70 == NULL)) {
            tmp_ass_subscribed_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_70 = mod_consts[253];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_70, tmp_ass_subscript_70, tmp_ass_subvalue_70);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_74;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_args_element_value_120;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_119 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_119 == NULL)) {
            tmp_args_element_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_120 = mod_consts[246];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = {tmp_args_element_value_119, tmp_args_element_value_120};
            tmp_assign_source_95 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_74, call_args);
        }

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_95);
    }
    {
        PyObject *tmp_ass_subvalue_71;
        PyObject *tmp_ass_subscribed_71;
        PyObject *tmp_ass_subscript_71;
        tmp_ass_subvalue_71 = mod_consts[173];
        tmp_ass_subscribed_71 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_71 == NULL)) {
            tmp_ass_subscribed_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_71 = mod_consts[254];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_71, tmp_ass_subscript_71, tmp_ass_subvalue_71);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_75;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_args_element_value_122;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_121 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_121 == NULL)) {
            tmp_args_element_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_122 = mod_consts[255];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 382;
        {
            PyObject *call_args[] = {tmp_args_element_value_121, tmp_args_element_value_122};
            tmp_assign_source_96 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_75, call_args);
        }

        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_96);
    }
    {
        PyObject *tmp_ass_subvalue_72;
        PyObject *tmp_ass_subscribed_72;
        PyObject *tmp_ass_subscript_72;
        tmp_ass_subvalue_72 = mod_consts[173];
        tmp_ass_subscribed_72 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_72 == NULL)) {
            tmp_ass_subscribed_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_72 = mod_consts[256];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_72, tmp_ass_subscript_72, tmp_ass_subvalue_72);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_76;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_args_element_value_124;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_123 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_123 == NULL)) {
            tmp_args_element_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_124 = mod_consts[255];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = {tmp_args_element_value_123, tmp_args_element_value_124};
            tmp_assign_source_97 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_76, call_args);
        }

        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_97);
    }
    {
        PyObject *tmp_ass_subvalue_73;
        PyObject *tmp_ass_subscribed_73;
        PyObject *tmp_ass_subscript_73;
        tmp_ass_subvalue_73 = mod_consts[173];
        tmp_ass_subscribed_73 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_73 == NULL)) {
            tmp_ass_subscribed_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_73 = mod_consts[257];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_73, tmp_ass_subscript_73, tmp_ass_subvalue_73);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_77;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_125 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_125 == NULL)) {
            tmp_args_element_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_126 = mod_consts[255];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 384;
        {
            PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_126};
            tmp_assign_source_98 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_77, call_args);
        }

        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_98);
    }
    {
        PyObject *tmp_ass_subvalue_74;
        PyObject *tmp_ass_subscribed_74;
        PyObject *tmp_ass_subscript_74;
        tmp_ass_subvalue_74 = mod_consts[173];
        tmp_ass_subscribed_74 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_74 == NULL)) {
            tmp_ass_subscribed_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_74 = mod_consts[258];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_74, tmp_ass_subscript_74, tmp_ass_subvalue_74);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_78;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_args_element_value_128;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_127 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_127 == NULL)) {
            tmp_args_element_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_128 = mod_consts[259];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = {tmp_args_element_value_127, tmp_args_element_value_128};
            tmp_assign_source_99 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_78, call_args);
        }

        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_99);
    }
    {
        PyObject *tmp_ass_subvalue_75;
        PyObject *tmp_ass_subscribed_75;
        PyObject *tmp_ass_subscript_75;
        tmp_ass_subvalue_75 = mod_consts[173];
        tmp_ass_subscribed_75 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_75 == NULL)) {
            tmp_ass_subscribed_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_75 = mod_consts[260];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_75, tmp_ass_subscript_75, tmp_ass_subvalue_75);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_79;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_args_element_value_130;
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_129 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_129 == NULL)) {
            tmp_args_element_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_130 = mod_consts[259];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = {tmp_args_element_value_129, tmp_args_element_value_130};
            tmp_assign_source_100 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_79, call_args);
        }

        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_100);
    }
    {
        PyObject *tmp_ass_subvalue_76;
        PyObject *tmp_ass_subscribed_76;
        PyObject *tmp_ass_subscript_76;
        tmp_ass_subvalue_76 = mod_consts[173];
        tmp_ass_subscribed_76 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_76 == NULL)) {
            tmp_ass_subscribed_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_76 = mod_consts[261];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_76, tmp_ass_subscript_76, tmp_ass_subvalue_76);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_80;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_args_element_value_132;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_131 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_131 == NULL)) {
            tmp_args_element_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_132 = mod_consts[262];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 389;
        {
            PyObject *call_args[] = {tmp_args_element_value_131, tmp_args_element_value_132};
            tmp_assign_source_101 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_80, call_args);
        }

        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_101);
    }
    {
        PyObject *tmp_ass_subvalue_77;
        PyObject *tmp_ass_subscribed_77;
        PyObject *tmp_ass_subscript_77;
        tmp_ass_subvalue_77 = mod_consts[173];
        tmp_ass_subscribed_77 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_77 == NULL)) {
            tmp_ass_subscribed_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_77 = mod_consts[263];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_77, tmp_ass_subscript_77, tmp_ass_subvalue_77);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_81;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_args_element_value_134;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_133 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_133 == NULL)) {
            tmp_args_element_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_134 = mod_consts[264];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 390;
        {
            PyObject *call_args[] = {tmp_args_element_value_133, tmp_args_element_value_134};
            tmp_assign_source_102 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_81, call_args);
        }

        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_102);
    }
    {
        PyObject *tmp_ass_subvalue_78;
        PyObject *tmp_ass_subscribed_78;
        PyObject *tmp_ass_subscript_78;
        tmp_ass_subvalue_78 = mod_consts[173];
        tmp_ass_subscribed_78 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_78 == NULL)) {
            tmp_ass_subscribed_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_78 = mod_consts[265];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_78, tmp_ass_subscript_78, tmp_ass_subvalue_78);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_82;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_args_element_value_136;
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_135 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_135 == NULL)) {
            tmp_args_element_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_136 = mod_consts[266];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = {tmp_args_element_value_135, tmp_args_element_value_136};
            tmp_assign_source_103 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_82, call_args);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_103);
    }
    {
        PyObject *tmp_ass_subvalue_79;
        PyObject *tmp_ass_subscribed_79;
        PyObject *tmp_ass_subscript_79;
        tmp_ass_subvalue_79 = mod_consts[173];
        tmp_ass_subscribed_79 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_79 == NULL)) {
            tmp_ass_subscribed_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_79 = mod_consts[267];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_79, tmp_ass_subscript_79, tmp_ass_subvalue_79);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_83;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_args_element_value_138;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_137 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_137 == NULL)) {
            tmp_args_element_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_138 = mod_consts[268];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = {tmp_args_element_value_137, tmp_args_element_value_138};
            tmp_assign_source_104 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_83, call_args);
        }

        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_104);
    }
    {
        PyObject *tmp_ass_subvalue_80;
        PyObject *tmp_ass_subscribed_80;
        PyObject *tmp_ass_subscript_80;
        tmp_ass_subvalue_80 = mod_consts[173];
        tmp_ass_subscribed_80 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_80 == NULL)) {
            tmp_ass_subscribed_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_80 = mod_consts[269];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_80, tmp_ass_subscript_80, tmp_ass_subvalue_80);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_84;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_args_element_value_140;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_139 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_139 == NULL)) {
            tmp_args_element_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_140 = mod_consts[268];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 395;
        {
            PyObject *call_args[] = {tmp_args_element_value_139, tmp_args_element_value_140};
            tmp_assign_source_105 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_84, call_args);
        }

        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_105);
    }
    {
        PyObject *tmp_ass_subvalue_81;
        PyObject *tmp_ass_subscribed_81;
        PyObject *tmp_ass_subscript_81;
        tmp_ass_subvalue_81 = mod_consts[173];
        tmp_ass_subscribed_81 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_81 == NULL)) {
            tmp_ass_subscribed_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_81 = mod_consts[270];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_81, tmp_ass_subscript_81, tmp_ass_subvalue_81);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_85;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_args_element_value_142;
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_141 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_141 == NULL)) {
            tmp_args_element_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_142 = mod_consts[271];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 396;
        {
            PyObject *call_args[] = {tmp_args_element_value_141, tmp_args_element_value_142};
            tmp_assign_source_106 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_85, call_args);
        }

        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_106);
    }
    {
        PyObject *tmp_ass_subvalue_82;
        PyObject *tmp_ass_subscribed_82;
        PyObject *tmp_ass_subscript_82;
        tmp_ass_subvalue_82 = mod_consts[173];
        tmp_ass_subscribed_82 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_82 == NULL)) {
            tmp_ass_subscribed_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_82 = mod_consts[272];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_82, tmp_ass_subscript_82, tmp_ass_subvalue_82);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_86;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_args_element_value_144;
        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_86 == NULL)) {
            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_143 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_143 == NULL)) {
            tmp_args_element_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_144 = mod_consts[268];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = {tmp_args_element_value_143, tmp_args_element_value_144};
            tmp_assign_source_107 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_86, call_args);
        }

        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_107);
    }
    {
        PyObject *tmp_ass_subvalue_83;
        PyObject *tmp_ass_subscribed_83;
        PyObject *tmp_ass_subscript_83;
        tmp_ass_subvalue_83 = mod_consts[173];
        tmp_ass_subscribed_83 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_83 == NULL)) {
            tmp_ass_subscribed_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_83 = mod_consts[273];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_83, tmp_ass_subscript_83, tmp_ass_subvalue_83);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_87;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_args_element_value_146;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_145 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_145 == NULL)) {
            tmp_args_element_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_146 = mod_consts[274];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 399;
        {
            PyObject *call_args[] = {tmp_args_element_value_145, tmp_args_element_value_146};
            tmp_assign_source_108 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_87, call_args);
        }

        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_108);
    }
    {
        PyObject *tmp_ass_subvalue_84;
        PyObject *tmp_ass_subscribed_84;
        PyObject *tmp_ass_subscript_84;
        tmp_ass_subvalue_84 = mod_consts[173];
        tmp_ass_subscribed_84 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_84 == NULL)) {
            tmp_ass_subscribed_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_84 = mod_consts[275];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_84, tmp_ass_subscript_84, tmp_ass_subvalue_84);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_88;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_args_element_value_148;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_147 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_147 == NULL)) {
            tmp_args_element_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_148 = mod_consts[268];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = {tmp_args_element_value_147, tmp_args_element_value_148};
            tmp_assign_source_109 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_88, call_args);
        }

        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_109);
    }
    {
        PyObject *tmp_ass_subvalue_85;
        PyObject *tmp_ass_subscribed_85;
        PyObject *tmp_ass_subscript_85;
        tmp_ass_subvalue_85 = mod_consts[173];
        tmp_ass_subscribed_85 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_85 == NULL)) {
            tmp_ass_subscribed_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_85 = mod_consts[276];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_85, tmp_ass_subscript_85, tmp_ass_subvalue_85);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_89;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_args_element_value_150;
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_149 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_149 == NULL)) {
            tmp_args_element_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_150 = mod_consts[277];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 402;
        {
            PyObject *call_args[] = {tmp_args_element_value_149, tmp_args_element_value_150};
            tmp_assign_source_110 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_89, call_args);
        }

        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_110);
    }
    {
        PyObject *tmp_ass_subvalue_86;
        PyObject *tmp_ass_subscribed_86;
        PyObject *tmp_ass_subscript_86;
        tmp_ass_subvalue_86 = mod_consts[173];
        tmp_ass_subscribed_86 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_86 == NULL)) {
            tmp_ass_subscribed_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_86 = mod_consts[278];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_86, tmp_ass_subscript_86, tmp_ass_subvalue_86);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_90;
        PyObject *tmp_args_element_value_151;
        PyObject *tmp_args_element_value_152;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_151 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_151 == NULL)) {
            tmp_args_element_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_152 = mod_consts[279];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 404;
        {
            PyObject *call_args[] = {tmp_args_element_value_151, tmp_args_element_value_152};
            tmp_assign_source_111 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_90, call_args);
        }

        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_111);
    }
    {
        PyObject *tmp_ass_subvalue_87;
        PyObject *tmp_ass_subscribed_87;
        PyObject *tmp_ass_subscript_87;
        tmp_ass_subvalue_87 = mod_consts[173];
        tmp_ass_subscribed_87 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_87 == NULL)) {
            tmp_ass_subscribed_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_87 = mod_consts[280];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_87, tmp_ass_subscript_87, tmp_ass_subvalue_87);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_value_91;
        PyObject *tmp_args_element_value_153;
        PyObject *tmp_args_element_value_154;
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_153 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_153 == NULL)) {
            tmp_args_element_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_154 = mod_consts[279];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 405;
        {
            PyObject *call_args[] = {tmp_args_element_value_153, tmp_args_element_value_154};
            tmp_assign_source_112 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_91, call_args);
        }

        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_112);
    }
    {
        PyObject *tmp_ass_subvalue_88;
        PyObject *tmp_ass_subscribed_88;
        PyObject *tmp_ass_subscript_88;
        tmp_ass_subvalue_88 = mod_consts[173];
        tmp_ass_subscribed_88 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_88 == NULL)) {
            tmp_ass_subscribed_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_88 = mod_consts[281];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_88, tmp_ass_subscript_88, tmp_ass_subvalue_88);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_value_92;
        PyObject *tmp_args_element_value_155;
        PyObject *tmp_args_element_value_156;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_155 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_155 == NULL)) {
            tmp_args_element_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_156 = mod_consts[282];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 407;
        {
            PyObject *call_args[] = {tmp_args_element_value_155, tmp_args_element_value_156};
            tmp_assign_source_113 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_92, call_args);
        }

        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_113);
    }
    {
        PyObject *tmp_ass_subvalue_89;
        PyObject *tmp_ass_subscribed_89;
        PyObject *tmp_ass_subscript_89;
        tmp_ass_subvalue_89 = mod_consts[173];
        tmp_ass_subscribed_89 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_89 == NULL)) {
            tmp_ass_subscribed_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_89 = mod_consts[283];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_89, tmp_ass_subscript_89, tmp_ass_subvalue_89);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_93;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_args_element_value_158;
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_157 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_157 == NULL)) {
            tmp_args_element_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_158 = mod_consts[284];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 409;
        {
            PyObject *call_args[] = {tmp_args_element_value_157, tmp_args_element_value_158};
            tmp_assign_source_114 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_93, call_args);
        }

        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_114);
    }
    {
        PyObject *tmp_ass_subvalue_90;
        PyObject *tmp_ass_subscribed_90;
        PyObject *tmp_ass_subscript_90;
        tmp_ass_subvalue_90 = mod_consts[173];
        tmp_ass_subscribed_90 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_90 == NULL)) {
            tmp_ass_subscribed_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_90 = mod_consts[285];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_90, tmp_ass_subscript_90, tmp_ass_subvalue_90);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_94;
        PyObject *tmp_args_element_value_159;
        PyObject *tmp_args_element_value_160;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_159 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_159 == NULL)) {
            tmp_args_element_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_160 = mod_consts[284];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = {tmp_args_element_value_159, tmp_args_element_value_160};
            tmp_assign_source_115 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_94, call_args);
        }

        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_115);
    }
    {
        PyObject *tmp_ass_subvalue_91;
        PyObject *tmp_ass_subscribed_91;
        PyObject *tmp_ass_subscript_91;
        tmp_ass_subvalue_91 = mod_consts[173];
        tmp_ass_subscribed_91 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_91 == NULL)) {
            tmp_ass_subscribed_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_91 = mod_consts[286];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_91, tmp_ass_subscript_91, tmp_ass_subvalue_91);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_95;
        PyObject *tmp_args_element_value_161;
        PyObject *tmp_args_element_value_162;
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_161 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_161 == NULL)) {
            tmp_args_element_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_162 = mod_consts[287];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 412;
        {
            PyObject *call_args[] = {tmp_args_element_value_161, tmp_args_element_value_162};
            tmp_assign_source_116 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_95, call_args);
        }

        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_116);
    }
    {
        PyObject *tmp_ass_subvalue_92;
        PyObject *tmp_ass_subscribed_92;
        PyObject *tmp_ass_subscript_92;
        tmp_ass_subvalue_92 = mod_consts[173];
        tmp_ass_subscribed_92 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_92 == NULL)) {
            tmp_ass_subscribed_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_92 = mod_consts[288];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_92, tmp_ass_subscript_92, tmp_ass_subvalue_92);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_value_96;
        PyObject *tmp_args_element_value_163;
        PyObject *tmp_args_element_value_164;
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_163 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_163 == NULL)) {
            tmp_args_element_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_164 = mod_consts[287];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 413;
        {
            PyObject *call_args[] = {tmp_args_element_value_163, tmp_args_element_value_164};
            tmp_assign_source_117 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_96, call_args);
        }

        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_117);
    }
    {
        PyObject *tmp_ass_subvalue_93;
        PyObject *tmp_ass_subscribed_93;
        PyObject *tmp_ass_subscript_93;
        tmp_ass_subvalue_93 = mod_consts[173];
        tmp_ass_subscribed_93 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_93 == NULL)) {
            tmp_ass_subscribed_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_93 = mod_consts[289];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_93, tmp_ass_subscript_93, tmp_ass_subvalue_93);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_97;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_args_element_value_166;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_165 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_165 == NULL)) {
            tmp_args_element_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_166 = mod_consts[290];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 415;
        {
            PyObject *call_args[] = {tmp_args_element_value_165, tmp_args_element_value_166};
            tmp_assign_source_118 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_97, call_args);
        }

        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_118);
    }
    {
        PyObject *tmp_ass_subvalue_94;
        PyObject *tmp_ass_subscribed_94;
        PyObject *tmp_ass_subscript_94;
        tmp_ass_subvalue_94 = mod_consts[173];
        tmp_ass_subscribed_94 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_94 == NULL)) {
            tmp_ass_subscribed_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_94 = mod_consts[291];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_94, tmp_ass_subscript_94, tmp_ass_subvalue_94);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_98;
        PyObject *tmp_args_element_value_167;
        PyObject *tmp_args_element_value_168;
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_167 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_167 == NULL)) {
            tmp_args_element_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_168 = mod_consts[290];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = {tmp_args_element_value_167, tmp_args_element_value_168};
            tmp_assign_source_119 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_98, call_args);
        }

        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_119);
    }
    {
        PyObject *tmp_ass_subvalue_95;
        PyObject *tmp_ass_subscribed_95;
        PyObject *tmp_ass_subscript_95;
        tmp_ass_subvalue_95 = mod_consts[173];
        tmp_ass_subscribed_95 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_95 == NULL)) {
            tmp_ass_subscribed_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_95 = mod_consts[292];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_95, tmp_ass_subscript_95, tmp_ass_subvalue_95);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_value_99;
        PyObject *tmp_args_element_value_169;
        PyObject *tmp_args_element_value_170;
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_169 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_169 == NULL)) {
            tmp_args_element_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_170 = mod_consts[290];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = {tmp_args_element_value_169, tmp_args_element_value_170};
            tmp_assign_source_120 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_99, call_args);
        }

        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_120);
    }
    {
        PyObject *tmp_ass_subvalue_96;
        PyObject *tmp_ass_subscribed_96;
        PyObject *tmp_ass_subscript_96;
        tmp_ass_subvalue_96 = mod_consts[173];
        tmp_ass_subscribed_96 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_96 == NULL)) {
            tmp_ass_subscribed_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_96 = mod_consts[293];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_96, tmp_ass_subscript_96, tmp_ass_subvalue_96);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_value_100;
        PyObject *tmp_args_element_value_171;
        PyObject *tmp_args_element_value_172;
        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_100 == NULL)) {
            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_171 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_171 == NULL)) {
            tmp_args_element_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_172 = mod_consts[294];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 419;
        {
            PyObject *call_args[] = {tmp_args_element_value_171, tmp_args_element_value_172};
            tmp_assign_source_121 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_100, call_args);
        }

        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_121);
    }
    {
        PyObject *tmp_ass_subvalue_97;
        PyObject *tmp_ass_subscribed_97;
        PyObject *tmp_ass_subscript_97;
        tmp_ass_subvalue_97 = mod_consts[173];
        tmp_ass_subscribed_97 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_97 == NULL)) {
            tmp_ass_subscribed_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_97 = mod_consts[295];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_97, tmp_ass_subscript_97, tmp_ass_subvalue_97);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_called_value_101;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_args_element_value_174;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_173 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_173 == NULL)) {
            tmp_args_element_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_174 = mod_consts[296];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = {tmp_args_element_value_173, tmp_args_element_value_174};
            tmp_assign_source_122 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_101, call_args);
        }

        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_122);
    }
    {
        PyObject *tmp_ass_subvalue_98;
        PyObject *tmp_ass_subscribed_98;
        PyObject *tmp_ass_subscript_98;
        tmp_ass_subvalue_98 = mod_consts[173];
        tmp_ass_subscribed_98 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_98 == NULL)) {
            tmp_ass_subscribed_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_98 = mod_consts[297];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_98, tmp_ass_subscript_98, tmp_ass_subvalue_98);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_102;
        PyObject *tmp_args_element_value_175;
        PyObject *tmp_args_element_value_176;
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_175 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_175 == NULL)) {
            tmp_args_element_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_176 = mod_consts[298];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 422;
        {
            PyObject *call_args[] = {tmp_args_element_value_175, tmp_args_element_value_176};
            tmp_assign_source_123 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_102, call_args);
        }

        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_123);
    }
    {
        PyObject *tmp_ass_subvalue_99;
        PyObject *tmp_ass_subscribed_99;
        PyObject *tmp_ass_subscript_99;
        tmp_ass_subvalue_99 = mod_consts[173];
        tmp_ass_subscribed_99 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_99 == NULL)) {
            tmp_ass_subscribed_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_99 = mod_consts[299];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_99, tmp_ass_subscript_99, tmp_ass_subvalue_99);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_103;
        PyObject *tmp_args_element_value_177;
        PyObject *tmp_args_element_value_178;
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_177 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_177 == NULL)) {
            tmp_args_element_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_178 = mod_consts[300];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = {tmp_args_element_value_177, tmp_args_element_value_178};
            tmp_assign_source_124 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_103, call_args);
        }

        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_124);
    }
    {
        PyObject *tmp_ass_subvalue_100;
        PyObject *tmp_ass_subscribed_100;
        PyObject *tmp_ass_subscript_100;
        tmp_ass_subvalue_100 = mod_consts[173];
        tmp_ass_subscribed_100 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_100 == NULL)) {
            tmp_ass_subscribed_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_100 = mod_consts[301];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_100, tmp_ass_subscript_100, tmp_ass_subvalue_100);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_called_value_104;
        PyObject *tmp_args_element_value_179;
        PyObject *tmp_args_element_value_180;
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_179 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_179 == NULL)) {
            tmp_args_element_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_180 = mod_consts[302];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 426;
        {
            PyObject *call_args[] = {tmp_args_element_value_179, tmp_args_element_value_180};
            tmp_assign_source_125 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_104, call_args);
        }

        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_125);
    }
    {
        PyObject *tmp_ass_subvalue_101;
        PyObject *tmp_ass_subscribed_101;
        PyObject *tmp_ass_subscript_101;
        tmp_ass_subvalue_101 = mod_consts[173];
        tmp_ass_subscribed_101 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_101 == NULL)) {
            tmp_ass_subscribed_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_101 = mod_consts[303];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_101, tmp_ass_subscript_101, tmp_ass_subvalue_101);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_called_value_105;
        PyObject *tmp_args_element_value_181;
        PyObject *tmp_args_element_value_182;
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_181 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_181 == NULL)) {
            tmp_args_element_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_182 = mod_consts[304];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 429;
        {
            PyObject *call_args[] = {tmp_args_element_value_181, tmp_args_element_value_182};
            tmp_assign_source_126 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_105, call_args);
        }

        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_126);
    }
    {
        PyObject *tmp_ass_subvalue_102;
        PyObject *tmp_ass_subscribed_102;
        PyObject *tmp_ass_subscript_102;
        tmp_ass_subvalue_102 = mod_consts[173];
        tmp_ass_subscribed_102 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_102 == NULL)) {
            tmp_ass_subscribed_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_102 = mod_consts[305];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_102, tmp_ass_subscript_102, tmp_ass_subvalue_102);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_value_106;
        PyObject *tmp_args_element_value_183;
        PyObject *tmp_args_element_value_184;
        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_106 == NULL)) {
            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_183 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_183 == NULL)) {
            tmp_args_element_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_184 = mod_consts[306];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 430;
        {
            PyObject *call_args[] = {tmp_args_element_value_183, tmp_args_element_value_184};
            tmp_assign_source_127 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_106, call_args);
        }

        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_127);
    }
    {
        PyObject *tmp_ass_subvalue_103;
        PyObject *tmp_ass_subscribed_103;
        PyObject *tmp_ass_subscript_103;
        tmp_ass_subvalue_103 = mod_consts[173];
        tmp_ass_subscribed_103 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_103 == NULL)) {
            tmp_ass_subscribed_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_103 = mod_consts[307];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_103, tmp_ass_subscript_103, tmp_ass_subvalue_103);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_value_107;
        PyObject *tmp_args_element_value_185;
        PyObject *tmp_args_element_value_186;
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_185 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_185 == NULL)) {
            tmp_args_element_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_186 = mod_consts[308];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 433;
        {
            PyObject *call_args[] = {tmp_args_element_value_185, tmp_args_element_value_186};
            tmp_assign_source_128 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_107, call_args);
        }

        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_128);
    }
    {
        PyObject *tmp_ass_subvalue_104;
        PyObject *tmp_ass_subscribed_104;
        PyObject *tmp_ass_subscript_104;
        tmp_ass_subvalue_104 = mod_consts[173];
        tmp_ass_subscribed_104 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_104 == NULL)) {
            tmp_ass_subscribed_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_104 = mod_consts[309];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_104, tmp_ass_subscript_104, tmp_ass_subvalue_104);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_108;
        PyObject *tmp_args_element_value_187;
        PyObject *tmp_args_element_value_188;
        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_108 == NULL)) {
            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_187 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_187 == NULL)) {
            tmp_args_element_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_188 = mod_consts[310];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 434;
        {
            PyObject *call_args[] = {tmp_args_element_value_187, tmp_args_element_value_188};
            tmp_assign_source_129 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_108, call_args);
        }

        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_129);
    }
    {
        PyObject *tmp_ass_subvalue_105;
        PyObject *tmp_ass_subscribed_105;
        PyObject *tmp_ass_subscript_105;
        tmp_ass_subvalue_105 = mod_consts[173];
        tmp_ass_subscribed_105 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_105 == NULL)) {
            tmp_ass_subscribed_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_105 = mod_consts[311];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_105, tmp_ass_subscript_105, tmp_ass_subvalue_105);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_called_value_109;
        PyObject *tmp_args_element_value_189;
        PyObject *tmp_args_element_value_190;
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_189 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_189 == NULL)) {
            tmp_args_element_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_190 = mod_consts[312];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 435;
        {
            PyObject *call_args[] = {tmp_args_element_value_189, tmp_args_element_value_190};
            tmp_assign_source_130 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_109, call_args);
        }

        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_130);
    }
    {
        PyObject *tmp_ass_subvalue_106;
        PyObject *tmp_ass_subscribed_106;
        PyObject *tmp_ass_subscript_106;
        tmp_ass_subvalue_106 = mod_consts[173];
        tmp_ass_subscribed_106 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_106 == NULL)) {
            tmp_ass_subscribed_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_106 = mod_consts[313];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_106, tmp_ass_subscript_106, tmp_ass_subvalue_106);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_value_110;
        PyObject *tmp_args_element_value_191;
        PyObject *tmp_args_element_value_192;
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_191 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_191 == NULL)) {
            tmp_args_element_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_192 = mod_consts[308];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 436;
        {
            PyObject *call_args[] = {tmp_args_element_value_191, tmp_args_element_value_192};
            tmp_assign_source_131 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_110, call_args);
        }

        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_131);
    }
    {
        PyObject *tmp_ass_subvalue_107;
        PyObject *tmp_ass_subscribed_107;
        PyObject *tmp_ass_subscript_107;
        tmp_ass_subvalue_107 = mod_consts[173];
        tmp_ass_subscribed_107 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_107 == NULL)) {
            tmp_ass_subscribed_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_107 = mod_consts[314];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_107, tmp_ass_subscript_107, tmp_ass_subvalue_107);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_value_111;
        PyObject *tmp_args_element_value_193;
        PyObject *tmp_args_element_value_194;
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_193 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_193 == NULL)) {
            tmp_args_element_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_194 = mod_consts[312];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = {tmp_args_element_value_193, tmp_args_element_value_194};
            tmp_assign_source_132 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_111, call_args);
        }

        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_132);
    }
    {
        PyObject *tmp_ass_subvalue_108;
        PyObject *tmp_ass_subscribed_108;
        PyObject *tmp_ass_subscript_108;
        tmp_ass_subvalue_108 = mod_consts[173];
        tmp_ass_subscribed_108 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_108 == NULL)) {
            tmp_ass_subscribed_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_108 = mod_consts[315];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_108, tmp_ass_subscript_108, tmp_ass_subvalue_108);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_value_112;
        PyObject *tmp_args_element_value_195;
        PyObject *tmp_args_element_value_196;
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_195 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_195 == NULL)) {
            tmp_args_element_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_196 = mod_consts[310];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 438;
        {
            PyObject *call_args[] = {tmp_args_element_value_195, tmp_args_element_value_196};
            tmp_assign_source_133 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_112, call_args);
        }

        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_133);
    }
    {
        PyObject *tmp_ass_subvalue_109;
        PyObject *tmp_ass_subscribed_109;
        PyObject *tmp_ass_subscript_109;
        tmp_ass_subvalue_109 = mod_consts[173];
        tmp_ass_subscribed_109 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_109 == NULL)) {
            tmp_ass_subscribed_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_109 = mod_consts[316];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_109, tmp_ass_subscript_109, tmp_ass_subvalue_109);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_113;
        PyObject *tmp_args_element_value_197;
        PyObject *tmp_args_element_value_198;
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_197 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_197 == NULL)) {
            tmp_args_element_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_198 = mod_consts[308];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 439;
        {
            PyObject *call_args[] = {tmp_args_element_value_197, tmp_args_element_value_198};
            tmp_assign_source_134 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_113, call_args);
        }

        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_134);
    }
    {
        PyObject *tmp_ass_subvalue_110;
        PyObject *tmp_ass_subscribed_110;
        PyObject *tmp_ass_subscript_110;
        tmp_ass_subvalue_110 = mod_consts[173];
        tmp_ass_subscribed_110 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_110 == NULL)) {
            tmp_ass_subscribed_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_110 = mod_consts[317];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_110, tmp_ass_subscript_110, tmp_ass_subvalue_110);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_114;
        PyObject *tmp_args_element_value_199;
        PyObject *tmp_args_element_value_200;
        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_114 == NULL)) {
            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_199 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_199 == NULL)) {
            tmp_args_element_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_200 = mod_consts[318];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 442;
        {
            PyObject *call_args[] = {tmp_args_element_value_199, tmp_args_element_value_200};
            tmp_assign_source_135 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_114, call_args);
        }

        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_135);
    }
    {
        PyObject *tmp_ass_subvalue_111;
        PyObject *tmp_ass_subscribed_111;
        PyObject *tmp_ass_subscript_111;
        tmp_ass_subvalue_111 = mod_consts[173];
        tmp_ass_subscribed_111 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_111 == NULL)) {
            tmp_ass_subscribed_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_111 = mod_consts[319];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_111, tmp_ass_subscript_111, tmp_ass_subvalue_111);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_115;
        PyObject *tmp_args_element_value_201;
        PyObject *tmp_args_element_value_202;
        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_115 == NULL)) {
            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_201 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_201 == NULL)) {
            tmp_args_element_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_202 = mod_consts[318];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 443;
        {
            PyObject *call_args[] = {tmp_args_element_value_201, tmp_args_element_value_202};
            tmp_assign_source_136 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_115, call_args);
        }

        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_136);
    }
    {
        PyObject *tmp_ass_subvalue_112;
        PyObject *tmp_ass_subscribed_112;
        PyObject *tmp_ass_subscript_112;
        tmp_ass_subvalue_112 = mod_consts[173];
        tmp_ass_subscribed_112 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_112 == NULL)) {
            tmp_ass_subscribed_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_112 = mod_consts[320];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_112, tmp_ass_subscript_112, tmp_ass_subvalue_112);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_116;
        PyObject *tmp_args_element_value_203;
        PyObject *tmp_args_element_value_204;
        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_116 == NULL)) {
            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_203 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_203 == NULL)) {
            tmp_args_element_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_204 = mod_consts[321];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 446;
        {
            PyObject *call_args[] = {tmp_args_element_value_203, tmp_args_element_value_204};
            tmp_assign_source_137 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_116, call_args);
        }

        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_137);
    }
    {
        PyObject *tmp_ass_subvalue_113;
        PyObject *tmp_ass_subscribed_113;
        PyObject *tmp_ass_subscript_113;
        tmp_ass_subvalue_113 = mod_consts[173];
        tmp_ass_subscribed_113 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_113 == NULL)) {
            tmp_ass_subscribed_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_113 = mod_consts[322];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_113, tmp_ass_subscript_113, tmp_ass_subvalue_113);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_value_117;
        PyObject *tmp_args_element_value_205;
        PyObject *tmp_args_element_value_206;
        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_117 == NULL)) {
            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_205 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_205 == NULL)) {
            tmp_args_element_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_206 = mod_consts[323];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = {tmp_args_element_value_205, tmp_args_element_value_206};
            tmp_assign_source_138 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_117, call_args);
        }

        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_138);
    }
    {
        PyObject *tmp_ass_subvalue_114;
        PyObject *tmp_ass_subscribed_114;
        PyObject *tmp_ass_subscript_114;
        tmp_ass_subvalue_114 = mod_consts[173];
        tmp_ass_subscribed_114 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_114 == NULL)) {
            tmp_ass_subscribed_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_114 = mod_consts[324];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_114, tmp_ass_subscript_114, tmp_ass_subvalue_114);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_called_value_118;
        PyObject *tmp_args_element_value_207;
        PyObject *tmp_args_element_value_208;
        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_118 == NULL)) {
            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_207 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_207 == NULL)) {
            tmp_args_element_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_208 = mod_consts[325];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 450;
        {
            PyObject *call_args[] = {tmp_args_element_value_207, tmp_args_element_value_208};
            tmp_assign_source_139 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_118, call_args);
        }

        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_139);
    }
    {
        PyObject *tmp_ass_subvalue_115;
        PyObject *tmp_ass_subscribed_115;
        PyObject *tmp_ass_subscript_115;
        tmp_ass_subvalue_115 = mod_consts[173];
        tmp_ass_subscribed_115 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_115 == NULL)) {
            tmp_ass_subscribed_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_115 = mod_consts[326];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_115, tmp_ass_subscript_115, tmp_ass_subvalue_115);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_called_value_119;
        PyObject *tmp_args_element_value_209;
        PyObject *tmp_args_element_value_210;
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_209 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_209 == NULL)) {
            tmp_args_element_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_210 = mod_consts[327];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 451;
        {
            PyObject *call_args[] = {tmp_args_element_value_209, tmp_args_element_value_210};
            tmp_assign_source_140 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_119, call_args);
        }

        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_140);
    }
    {
        PyObject *tmp_ass_subvalue_116;
        PyObject *tmp_ass_subscribed_116;
        PyObject *tmp_ass_subscript_116;
        tmp_ass_subvalue_116 = mod_consts[173];
        tmp_ass_subscribed_116 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_116 == NULL)) {
            tmp_ass_subscribed_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_116 = mod_consts[328];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_116, tmp_ass_subscript_116, tmp_ass_subvalue_116);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_called_value_120;
        PyObject *tmp_args_element_value_211;
        PyObject *tmp_args_element_value_212;
        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_120 == NULL)) {
            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_211 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_211 == NULL)) {
            tmp_args_element_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_212 = mod_consts[329];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = {tmp_args_element_value_211, tmp_args_element_value_212};
            tmp_assign_source_141 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_120, call_args);
        }

        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_141);
    }
    {
        PyObject *tmp_ass_subvalue_117;
        PyObject *tmp_ass_subscribed_117;
        PyObject *tmp_ass_subscript_117;
        tmp_ass_subvalue_117 = mod_consts[173];
        tmp_ass_subscribed_117 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_117 == NULL)) {
            tmp_ass_subscribed_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_117 = mod_consts[330];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_117, tmp_ass_subscript_117, tmp_ass_subvalue_117);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_called_value_121;
        PyObject *tmp_args_element_value_213;
        PyObject *tmp_args_element_value_214;
        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_121 == NULL)) {
            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_213 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_213 == NULL)) {
            tmp_args_element_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_214 = mod_consts[331];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 454;
        {
            PyObject *call_args[] = {tmp_args_element_value_213, tmp_args_element_value_214};
            tmp_assign_source_142 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_121, call_args);
        }

        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_142);
    }
    {
        PyObject *tmp_ass_subvalue_118;
        PyObject *tmp_ass_subscribed_118;
        PyObject *tmp_ass_subscript_118;
        tmp_ass_subvalue_118 = mod_consts[173];
        tmp_ass_subscribed_118 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_118 == NULL)) {
            tmp_ass_subscribed_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_118 = mod_consts[332];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_118, tmp_ass_subscript_118, tmp_ass_subvalue_118);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_value_122;
        PyObject *tmp_args_element_value_215;
        PyObject *tmp_args_element_value_216;
        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_122 == NULL)) {
            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_215 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_215 == NULL)) {
            tmp_args_element_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_216 = mod_consts[333];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 456;
        {
            PyObject *call_args[] = {tmp_args_element_value_215, tmp_args_element_value_216};
            tmp_assign_source_143 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_122, call_args);
        }

        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_143);
    }
    {
        PyObject *tmp_ass_subvalue_119;
        PyObject *tmp_ass_subscribed_119;
        PyObject *tmp_ass_subscript_119;
        tmp_ass_subvalue_119 = mod_consts[173];
        tmp_ass_subscribed_119 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_119 == NULL)) {
            tmp_ass_subscribed_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_119 = mod_consts[334];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_119, tmp_ass_subscript_119, tmp_ass_subvalue_119);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_called_value_123;
        PyObject *tmp_args_element_value_217;
        PyObject *tmp_args_element_value_218;
        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_123 == NULL)) {
            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_217 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_217 == NULL)) {
            tmp_args_element_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_218 = mod_consts[333];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 457;
        {
            PyObject *call_args[] = {tmp_args_element_value_217, tmp_args_element_value_218};
            tmp_assign_source_144 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_123, call_args);
        }

        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_144);
    }
    {
        PyObject *tmp_ass_subvalue_120;
        PyObject *tmp_ass_subscribed_120;
        PyObject *tmp_ass_subscript_120;
        tmp_ass_subvalue_120 = mod_consts[173];
        tmp_ass_subscribed_120 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_120 == NULL)) {
            tmp_ass_subscribed_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_120 = mod_consts[335];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_120, tmp_ass_subscript_120, tmp_ass_subvalue_120);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_124;
        PyObject *tmp_args_element_value_219;
        PyObject *tmp_args_element_value_220;
        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_124 == NULL)) {
            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_219 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_219 == NULL)) {
            tmp_args_element_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_220 = mod_consts[336];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = {tmp_args_element_value_219, tmp_args_element_value_220};
            tmp_assign_source_145 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_124, call_args);
        }

        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_145);
    }
    {
        PyObject *tmp_ass_subvalue_121;
        PyObject *tmp_ass_subscribed_121;
        PyObject *tmp_ass_subscript_121;
        tmp_ass_subvalue_121 = mod_consts[173];
        tmp_ass_subscribed_121 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_121 == NULL)) {
            tmp_ass_subscribed_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_121 = mod_consts[337];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_121, tmp_ass_subscript_121, tmp_ass_subvalue_121);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_value_125;
        PyObject *tmp_args_element_value_221;
        PyObject *tmp_args_element_value_222;
        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_125 == NULL)) {
            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_221 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_221 == NULL)) {
            tmp_args_element_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_222 = mod_consts[336];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 460;
        {
            PyObject *call_args[] = {tmp_args_element_value_221, tmp_args_element_value_222};
            tmp_assign_source_146 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_125, call_args);
        }

        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_146);
    }
    {
        PyObject *tmp_ass_subvalue_122;
        PyObject *tmp_ass_subscribed_122;
        PyObject *tmp_ass_subscript_122;
        tmp_ass_subvalue_122 = mod_consts[173];
        tmp_ass_subscribed_122 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_122 == NULL)) {
            tmp_ass_subscribed_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_122 = mod_consts[338];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_122, tmp_ass_subscript_122, tmp_ass_subvalue_122);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_value_126;
        PyObject *tmp_args_element_value_223;
        PyObject *tmp_args_element_value_224;
        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_126 == NULL)) {
            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_223 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_223 == NULL)) {
            tmp_args_element_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_224 = mod_consts[339];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 463;
        {
            PyObject *call_args[] = {tmp_args_element_value_223, tmp_args_element_value_224};
            tmp_assign_source_147 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_126, call_args);
        }

        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_147);
    }
    {
        PyObject *tmp_ass_subvalue_123;
        PyObject *tmp_ass_subscribed_123;
        PyObject *tmp_ass_subscript_123;
        tmp_ass_subvalue_123 = mod_consts[173];
        tmp_ass_subscribed_123 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_123 == NULL)) {
            tmp_ass_subscribed_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_123 = mod_consts[340];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_123, tmp_ass_subscript_123, tmp_ass_subvalue_123);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_called_value_127;
        PyObject *tmp_args_element_value_225;
        PyObject *tmp_args_element_value_226;
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_225 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_225 == NULL)) {
            tmp_args_element_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_226 = mod_consts[341];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 466;
        {
            PyObject *call_args[] = {tmp_args_element_value_225, tmp_args_element_value_226};
            tmp_assign_source_148 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_127, call_args);
        }

        if (tmp_assign_source_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_148);
    }
    {
        PyObject *tmp_ass_subvalue_124;
        PyObject *tmp_ass_subscribed_124;
        PyObject *tmp_ass_subscript_124;
        tmp_ass_subvalue_124 = mod_consts[173];
        tmp_ass_subscribed_124 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_124 == NULL)) {
            tmp_ass_subscribed_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_124 = mod_consts[342];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_124, tmp_ass_subscript_124, tmp_ass_subvalue_124);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_called_value_128;
        PyObject *tmp_args_element_value_227;
        PyObject *tmp_args_element_value_228;
        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_128 == NULL)) {
            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_227 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_227 == NULL)) {
            tmp_args_element_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_228 = mod_consts[341];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 467;
        {
            PyObject *call_args[] = {tmp_args_element_value_227, tmp_args_element_value_228};
            tmp_assign_source_149 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_128, call_args);
        }

        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_149);
    }
    {
        PyObject *tmp_ass_subvalue_125;
        PyObject *tmp_ass_subscribed_125;
        PyObject *tmp_ass_subscript_125;
        tmp_ass_subvalue_125 = mod_consts[173];
        tmp_ass_subscribed_125 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_125 == NULL)) {
            tmp_ass_subscribed_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_125 = mod_consts[343];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_125, tmp_ass_subscript_125, tmp_ass_subvalue_125);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_called_value_129;
        PyObject *tmp_args_element_value_229;
        PyObject *tmp_args_element_value_230;
        tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_129 == NULL)) {
            tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_229 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_229 == NULL)) {
            tmp_args_element_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_230 = mod_consts[341];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 468;
        {
            PyObject *call_args[] = {tmp_args_element_value_229, tmp_args_element_value_230};
            tmp_assign_source_150 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_129, call_args);
        }

        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_150);
    }
    {
        PyObject *tmp_ass_subvalue_126;
        PyObject *tmp_ass_subscribed_126;
        PyObject *tmp_ass_subscript_126;
        tmp_ass_subvalue_126 = mod_consts[173];
        tmp_ass_subscribed_126 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_126 == NULL)) {
            tmp_ass_subscribed_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_126 = mod_consts[344];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_126, tmp_ass_subscript_126, tmp_ass_subvalue_126);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_called_value_130;
        PyObject *tmp_args_element_value_231;
        PyObject *tmp_args_element_value_232;
        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_130 == NULL)) {
            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_231 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_231 == NULL)) {
            tmp_args_element_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_232 = mod_consts[345];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 470;
        {
            PyObject *call_args[] = {tmp_args_element_value_231, tmp_args_element_value_232};
            tmp_assign_source_151 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_130, call_args);
        }

        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_151);
    }
    {
        PyObject *tmp_ass_subvalue_127;
        PyObject *tmp_ass_subscribed_127;
        PyObject *tmp_ass_subscript_127;
        tmp_ass_subvalue_127 = mod_consts[173];
        tmp_ass_subscribed_127 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_127 == NULL)) {
            tmp_ass_subscribed_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_127 = mod_consts[346];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_127, tmp_ass_subscript_127, tmp_ass_subvalue_127);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_value_131;
        PyObject *tmp_args_element_value_233;
        PyObject *tmp_args_element_value_234;
        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_131 == NULL)) {
            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_233 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_233 == NULL)) {
            tmp_args_element_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_234 = mod_consts[345];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 471;
        {
            PyObject *call_args[] = {tmp_args_element_value_233, tmp_args_element_value_234};
            tmp_assign_source_152 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_131, call_args);
        }

        if (tmp_assign_source_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_152);
    }
    {
        PyObject *tmp_ass_subvalue_128;
        PyObject *tmp_ass_subscribed_128;
        PyObject *tmp_ass_subscript_128;
        tmp_ass_subvalue_128 = mod_consts[173];
        tmp_ass_subscribed_128 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_128 == NULL)) {
            tmp_ass_subscribed_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_128 = mod_consts[347];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_128, tmp_ass_subscript_128, tmp_ass_subvalue_128);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_called_value_132;
        PyObject *tmp_args_element_value_235;
        PyObject *tmp_args_element_value_236;
        tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_132 == NULL)) {
            tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_235 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_235 == NULL)) {
            tmp_args_element_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_236 = mod_consts[345];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 472;
        {
            PyObject *call_args[] = {tmp_args_element_value_235, tmp_args_element_value_236};
            tmp_assign_source_153 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_132, call_args);
        }

        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_153);
    }
    {
        PyObject *tmp_ass_subvalue_129;
        PyObject *tmp_ass_subscribed_129;
        PyObject *tmp_ass_subscript_129;
        tmp_ass_subvalue_129 = mod_consts[173];
        tmp_ass_subscribed_129 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_129 == NULL)) {
            tmp_ass_subscribed_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_129 = mod_consts[348];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_129, tmp_ass_subscript_129, tmp_ass_subvalue_129);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_called_value_133;
        PyObject *tmp_args_element_value_237;
        PyObject *tmp_args_element_value_238;
        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_133 == NULL)) {
            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_237 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_237 == NULL)) {
            tmp_args_element_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_238 = mod_consts[345];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 474;
        {
            PyObject *call_args[] = {tmp_args_element_value_237, tmp_args_element_value_238};
            tmp_assign_source_154 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_133, call_args);
        }

        if (tmp_assign_source_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_154);
    }
    {
        PyObject *tmp_ass_subvalue_130;
        PyObject *tmp_ass_subscribed_130;
        PyObject *tmp_ass_subscript_130;
        tmp_ass_subvalue_130 = mod_consts[173];
        tmp_ass_subscribed_130 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_130 == NULL)) {
            tmp_ass_subscribed_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_130 = mod_consts[349];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_130, tmp_ass_subscript_130, tmp_ass_subvalue_130);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_called_value_134;
        PyObject *tmp_args_element_value_239;
        PyObject *tmp_args_element_value_240;
        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_134 == NULL)) {
            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_239 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_239 == NULL)) {
            tmp_args_element_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_240 = mod_consts[350];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 475;
        {
            PyObject *call_args[] = {tmp_args_element_value_239, tmp_args_element_value_240};
            tmp_assign_source_155 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_134, call_args);
        }

        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_155);
    }
    {
        PyObject *tmp_ass_subvalue_131;
        PyObject *tmp_ass_subscribed_131;
        PyObject *tmp_ass_subscript_131;
        tmp_ass_subvalue_131 = mod_consts[173];
        tmp_ass_subscribed_131 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_131 == NULL)) {
            tmp_ass_subscribed_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_131 = mod_consts[351];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_131, tmp_ass_subscript_131, tmp_ass_subvalue_131);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_called_value_135;
        PyObject *tmp_args_element_value_241;
        PyObject *tmp_args_element_value_242;
        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_135 == NULL)) {
            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_241 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_241 == NULL)) {
            tmp_args_element_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_242 = mod_consts[352];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 476;
        {
            PyObject *call_args[] = {tmp_args_element_value_241, tmp_args_element_value_242};
            tmp_assign_source_156 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_135, call_args);
        }

        if (tmp_assign_source_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_156);
    }
    {
        PyObject *tmp_ass_subvalue_132;
        PyObject *tmp_ass_subscribed_132;
        PyObject *tmp_ass_subscript_132;
        tmp_ass_subvalue_132 = mod_consts[173];
        tmp_ass_subscribed_132 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_132 == NULL)) {
            tmp_ass_subscribed_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_132 = mod_consts[353];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_132, tmp_ass_subscript_132, tmp_ass_subvalue_132);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_called_value_136;
        PyObject *tmp_args_element_value_243;
        PyObject *tmp_args_element_value_244;
        tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_136 == NULL)) {
            tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_243 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_243 == NULL)) {
            tmp_args_element_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_244 = mod_consts[354];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 478;
        {
            PyObject *call_args[] = {tmp_args_element_value_243, tmp_args_element_value_244};
            tmp_assign_source_157 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_136, call_args);
        }

        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_157);
    }
    {
        PyObject *tmp_ass_subvalue_133;
        PyObject *tmp_ass_subscribed_133;
        PyObject *tmp_ass_subscript_133;
        tmp_ass_subvalue_133 = mod_consts[173];
        tmp_ass_subscribed_133 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_133 == NULL)) {
            tmp_ass_subscribed_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_133 = mod_consts[355];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_133, tmp_ass_subscript_133, tmp_ass_subvalue_133);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_value_137;
        PyObject *tmp_args_element_value_245;
        PyObject *tmp_args_element_value_246;
        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_137 == NULL)) {
            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_245 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_245 == NULL)) {
            tmp_args_element_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_246 = mod_consts[354];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 479;
        {
            PyObject *call_args[] = {tmp_args_element_value_245, tmp_args_element_value_246};
            tmp_assign_source_158 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_137, call_args);
        }

        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_158);
    }
    {
        PyObject *tmp_ass_subvalue_134;
        PyObject *tmp_ass_subscribed_134;
        PyObject *tmp_ass_subscript_134;
        tmp_ass_subvalue_134 = mod_consts[173];
        tmp_ass_subscribed_134 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_134 == NULL)) {
            tmp_ass_subscribed_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_134 = mod_consts[356];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_134, tmp_ass_subscript_134, tmp_ass_subvalue_134);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_value_138;
        PyObject *tmp_args_element_value_247;
        PyObject *tmp_args_element_value_248;
        tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_138 == NULL)) {
            tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_247 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_247 == NULL)) {
            tmp_args_element_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_248 = mod_consts[354];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 480;
        {
            PyObject *call_args[] = {tmp_args_element_value_247, tmp_args_element_value_248};
            tmp_assign_source_159 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_138, call_args);
        }

        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_159);
    }
    {
        PyObject *tmp_ass_subvalue_135;
        PyObject *tmp_ass_subscribed_135;
        PyObject *tmp_ass_subscript_135;
        tmp_ass_subvalue_135 = mod_consts[173];
        tmp_ass_subscribed_135 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_135 == NULL)) {
            tmp_ass_subscribed_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_135 = mod_consts[357];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_135, tmp_ass_subscript_135, tmp_ass_subvalue_135);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_called_value_139;
        PyObject *tmp_args_element_value_249;
        PyObject *tmp_args_element_value_250;
        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_139 == NULL)) {
            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_249 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_249 == NULL)) {
            tmp_args_element_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_250 = mod_consts[358];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 483;
        {
            PyObject *call_args[] = {tmp_args_element_value_249, tmp_args_element_value_250};
            tmp_assign_source_160 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_139, call_args);
        }

        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_160);
    }
    {
        PyObject *tmp_ass_subvalue_136;
        PyObject *tmp_ass_subscribed_136;
        PyObject *tmp_ass_subscript_136;
        tmp_ass_subvalue_136 = mod_consts[173];
        tmp_ass_subscribed_136 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_136 == NULL)) {
            tmp_ass_subscribed_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_136 = mod_consts[359];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_136, tmp_ass_subscript_136, tmp_ass_subvalue_136);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_called_value_140;
        PyObject *tmp_args_element_value_251;
        PyObject *tmp_args_element_value_252;
        tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_140 == NULL)) {
            tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_251 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_251 == NULL)) {
            tmp_args_element_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_252 = mod_consts[360];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 484;
        {
            PyObject *call_args[] = {tmp_args_element_value_251, tmp_args_element_value_252};
            tmp_assign_source_161 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_140, call_args);
        }

        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_161);
    }
    {
        PyObject *tmp_ass_subvalue_137;
        PyObject *tmp_ass_subscribed_137;
        PyObject *tmp_ass_subscript_137;
        tmp_ass_subvalue_137 = mod_consts[173];
        tmp_ass_subscribed_137 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_137 == NULL)) {
            tmp_ass_subscribed_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_137 = mod_consts[361];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_137, tmp_ass_subscript_137, tmp_ass_subvalue_137);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_called_value_141;
        PyObject *tmp_args_element_value_253;
        PyObject *tmp_args_element_value_254;
        tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_141 == NULL)) {
            tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_253 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_253 == NULL)) {
            tmp_args_element_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_254 = mod_consts[358];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 485;
        {
            PyObject *call_args[] = {tmp_args_element_value_253, tmp_args_element_value_254};
            tmp_assign_source_162 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_141, call_args);
        }

        if (tmp_assign_source_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_162);
    }
    {
        PyObject *tmp_ass_subvalue_138;
        PyObject *tmp_ass_subscribed_138;
        PyObject *tmp_ass_subscript_138;
        tmp_ass_subvalue_138 = mod_consts[173];
        tmp_ass_subscribed_138 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_138 == NULL)) {
            tmp_ass_subscribed_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_138 = mod_consts[362];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_138, tmp_ass_subscript_138, tmp_ass_subvalue_138);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_called_value_142;
        PyObject *tmp_args_element_value_255;
        PyObject *tmp_args_element_value_256;
        tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_142 == NULL)) {
            tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_255 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_255 == NULL)) {
            tmp_args_element_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_256 = mod_consts[360];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 486;
        {
            PyObject *call_args[] = {tmp_args_element_value_255, tmp_args_element_value_256};
            tmp_assign_source_163 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_142, call_args);
        }

        if (tmp_assign_source_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_163);
    }
    {
        PyObject *tmp_ass_subvalue_139;
        PyObject *tmp_ass_subscribed_139;
        PyObject *tmp_ass_subscript_139;
        tmp_ass_subvalue_139 = mod_consts[173];
        tmp_ass_subscribed_139 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_139 == NULL)) {
            tmp_ass_subscribed_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_139 = mod_consts[363];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_139, tmp_ass_subscript_139, tmp_ass_subvalue_139);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_called_value_143;
        PyObject *tmp_args_element_value_257;
        PyObject *tmp_args_element_value_258;
        tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_143 == NULL)) {
            tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_257 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_257 == NULL)) {
            tmp_args_element_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_258 = mod_consts[360];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 487;
        {
            PyObject *call_args[] = {tmp_args_element_value_257, tmp_args_element_value_258};
            tmp_assign_source_164 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_143, call_args);
        }

        if (tmp_assign_source_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_164);
    }
    {
        PyObject *tmp_ass_subvalue_140;
        PyObject *tmp_ass_subscribed_140;
        PyObject *tmp_ass_subscript_140;
        tmp_ass_subvalue_140 = mod_consts[173];
        tmp_ass_subscribed_140 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_140 == NULL)) {
            tmp_ass_subscribed_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_140 = mod_consts[364];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_140, tmp_ass_subscript_140, tmp_ass_subvalue_140);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_called_value_144;
        PyObject *tmp_args_element_value_259;
        PyObject *tmp_args_element_value_260;
        tmp_called_value_144 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_144 == NULL)) {
            tmp_called_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_259 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_259 == NULL)) {
            tmp_args_element_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_260 = mod_consts[358];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 488;
        {
            PyObject *call_args[] = {tmp_args_element_value_259, tmp_args_element_value_260};
            tmp_assign_source_165 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_144, call_args);
        }

        if (tmp_assign_source_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_165);
    }
    {
        PyObject *tmp_ass_subvalue_141;
        PyObject *tmp_ass_subscribed_141;
        PyObject *tmp_ass_subscript_141;
        tmp_ass_subvalue_141 = mod_consts[173];
        tmp_ass_subscribed_141 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_141 == NULL)) {
            tmp_ass_subscribed_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_141 = mod_consts[365];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_141, tmp_ass_subscript_141, tmp_ass_subvalue_141);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_called_value_145;
        PyObject *tmp_args_element_value_261;
        PyObject *tmp_args_element_value_262;
        tmp_called_value_145 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_145 == NULL)) {
            tmp_called_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_261 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_261 == NULL)) {
            tmp_args_element_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_262 = mod_consts[366];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 490;
        {
            PyObject *call_args[] = {tmp_args_element_value_261, tmp_args_element_value_262};
            tmp_assign_source_166 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_145, call_args);
        }

        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_166);
    }
    {
        PyObject *tmp_ass_subvalue_142;
        PyObject *tmp_ass_subscribed_142;
        PyObject *tmp_ass_subscript_142;
        tmp_ass_subvalue_142 = mod_consts[173];
        tmp_ass_subscribed_142 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_142 == NULL)) {
            tmp_ass_subscribed_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_142 = mod_consts[367];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_142, tmp_ass_subscript_142, tmp_ass_subvalue_142);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_called_value_146;
        PyObject *tmp_args_element_value_263;
        PyObject *tmp_args_element_value_264;
        tmp_called_value_146 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_146 == NULL)) {
            tmp_called_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_263 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_263 == NULL)) {
            tmp_args_element_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_264 = mod_consts[368];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 493;
        {
            PyObject *call_args[] = {tmp_args_element_value_263, tmp_args_element_value_264};
            tmp_assign_source_167 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_146, call_args);
        }

        if (tmp_assign_source_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_167);
    }
    {
        PyObject *tmp_ass_subvalue_143;
        PyObject *tmp_ass_subscribed_143;
        PyObject *tmp_ass_subscript_143;
        tmp_ass_subvalue_143 = mod_consts[173];
        tmp_ass_subscribed_143 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_143 == NULL)) {
            tmp_ass_subscribed_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_143 = mod_consts[369];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_143, tmp_ass_subscript_143, tmp_ass_subvalue_143);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_called_value_147;
        PyObject *tmp_args_element_value_265;
        PyObject *tmp_args_element_value_266;
        tmp_called_value_147 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_147 == NULL)) {
            tmp_called_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_265 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_265 == NULL)) {
            tmp_args_element_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_266 = mod_consts[366];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 494;
        {
            PyObject *call_args[] = {tmp_args_element_value_265, tmp_args_element_value_266};
            tmp_assign_source_168 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_147, call_args);
        }

        if (tmp_assign_source_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_168);
    }
    {
        PyObject *tmp_ass_subvalue_144;
        PyObject *tmp_ass_subscribed_144;
        PyObject *tmp_ass_subscript_144;
        tmp_ass_subvalue_144 = mod_consts[173];
        tmp_ass_subscribed_144 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_144 == NULL)) {
            tmp_ass_subscribed_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_144 = mod_consts[370];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_144, tmp_ass_subscript_144, tmp_ass_subvalue_144);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_called_value_148;
        PyObject *tmp_args_element_value_267;
        PyObject *tmp_args_element_value_268;
        tmp_called_value_148 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_148 == NULL)) {
            tmp_called_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_267 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_267 == NULL)) {
            tmp_args_element_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_268 = mod_consts[368];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = {tmp_args_element_value_267, tmp_args_element_value_268};
            tmp_assign_source_169 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_148, call_args);
        }

        if (tmp_assign_source_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_169);
    }
    {
        PyObject *tmp_ass_subvalue_145;
        PyObject *tmp_ass_subscribed_145;
        PyObject *tmp_ass_subscript_145;
        tmp_ass_subvalue_145 = mod_consts[173];
        tmp_ass_subscribed_145 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_145 == NULL)) {
            tmp_ass_subscribed_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_145 = mod_consts[371];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_145, tmp_ass_subscript_145, tmp_ass_subvalue_145);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_called_value_149;
        PyObject *tmp_args_element_value_269;
        PyObject *tmp_args_element_value_270;
        tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_149 == NULL)) {
            tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_269 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_269 == NULL)) {
            tmp_args_element_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_270 = mod_consts[368];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 498;
        {
            PyObject *call_args[] = {tmp_args_element_value_269, tmp_args_element_value_270};
            tmp_assign_source_170 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_149, call_args);
        }

        if (tmp_assign_source_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_170);
    }
    {
        PyObject *tmp_ass_subvalue_146;
        PyObject *tmp_ass_subscribed_146;
        PyObject *tmp_ass_subscript_146;
        tmp_ass_subvalue_146 = mod_consts[173];
        tmp_ass_subscribed_146 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_146 == NULL)) {
            tmp_ass_subscribed_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_146 = mod_consts[372];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_146, tmp_ass_subscript_146, tmp_ass_subvalue_146);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_called_value_150;
        PyObject *tmp_args_element_value_271;
        PyObject *tmp_args_element_value_272;
        tmp_called_value_150 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_150 == NULL)) {
            tmp_called_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_271 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_271 == NULL)) {
            tmp_args_element_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_272 = mod_consts[366];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 499;
        {
            PyObject *call_args[] = {tmp_args_element_value_271, tmp_args_element_value_272};
            tmp_assign_source_171 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_150, call_args);
        }

        if (tmp_assign_source_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_171);
    }
    {
        PyObject *tmp_ass_subvalue_147;
        PyObject *tmp_ass_subscribed_147;
        PyObject *tmp_ass_subscript_147;
        tmp_ass_subvalue_147 = mod_consts[173];
        tmp_ass_subscribed_147 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_147 == NULL)) {
            tmp_ass_subscribed_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_147 = mod_consts[373];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_147, tmp_ass_subscript_147, tmp_ass_subvalue_147);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_called_value_151;
        PyObject *tmp_args_element_value_273;
        PyObject *tmp_args_element_value_274;
        tmp_called_value_151 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_151 == NULL)) {
            tmp_called_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_273 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_273 == NULL)) {
            tmp_args_element_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_274 = mod_consts[374];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 503;
        {
            PyObject *call_args[] = {tmp_args_element_value_273, tmp_args_element_value_274};
            tmp_assign_source_172 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_151, call_args);
        }

        if (tmp_assign_source_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_172);
    }
    {
        PyObject *tmp_ass_subvalue_148;
        PyObject *tmp_ass_subscribed_148;
        PyObject *tmp_ass_subscript_148;
        tmp_ass_subvalue_148 = mod_consts[173];
        tmp_ass_subscribed_148 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_148 == NULL)) {
            tmp_ass_subscribed_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_148 = mod_consts[375];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_148, tmp_ass_subscript_148, tmp_ass_subvalue_148);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_called_value_152;
        PyObject *tmp_args_element_value_275;
        PyObject *tmp_args_element_value_276;
        tmp_called_value_152 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_152 == NULL)) {
            tmp_called_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_275 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_275 == NULL)) {
            tmp_args_element_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_276 = mod_consts[376];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 506;
        {
            PyObject *call_args[] = {tmp_args_element_value_275, tmp_args_element_value_276};
            tmp_assign_source_173 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_152, call_args);
        }

        if (tmp_assign_source_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_173);
    }
    {
        PyObject *tmp_ass_subvalue_149;
        PyObject *tmp_ass_subscribed_149;
        PyObject *tmp_ass_subscript_149;
        tmp_ass_subvalue_149 = mod_consts[173];
        tmp_ass_subscribed_149 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_149 == NULL)) {
            tmp_ass_subscribed_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_149 = mod_consts[377];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_149, tmp_ass_subscript_149, tmp_ass_subvalue_149);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_called_value_153;
        PyObject *tmp_args_element_value_277;
        PyObject *tmp_args_element_value_278;
        tmp_called_value_153 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_153 == NULL)) {
            tmp_called_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_277 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_277 == NULL)) {
            tmp_args_element_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_278 = mod_consts[376];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 509;
        {
            PyObject *call_args[] = {tmp_args_element_value_277, tmp_args_element_value_278};
            tmp_assign_source_174 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_153, call_args);
        }

        if (tmp_assign_source_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_174);
    }
    {
        PyObject *tmp_ass_subvalue_150;
        PyObject *tmp_ass_subscribed_150;
        PyObject *tmp_ass_subscript_150;
        tmp_ass_subvalue_150 = mod_consts[173];
        tmp_ass_subscribed_150 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_150 == NULL)) {
            tmp_ass_subscribed_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_150 = mod_consts[378];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_150, tmp_ass_subscript_150, tmp_ass_subvalue_150);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_called_value_154;
        PyObject *tmp_args_element_value_279;
        PyObject *tmp_args_element_value_280;
        tmp_called_value_154 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_154 == NULL)) {
            tmp_called_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_279 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_279 == NULL)) {
            tmp_args_element_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_280 = mod_consts[374];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 512;
        {
            PyObject *call_args[] = {tmp_args_element_value_279, tmp_args_element_value_280};
            tmp_assign_source_175 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_154, call_args);
        }

        if (tmp_assign_source_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_175);
    }
    {
        PyObject *tmp_ass_subvalue_151;
        PyObject *tmp_ass_subscribed_151;
        PyObject *tmp_ass_subscript_151;
        tmp_ass_subvalue_151 = mod_consts[173];
        tmp_ass_subscribed_151 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_151 == NULL)) {
            tmp_ass_subscribed_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_151 = mod_consts[379];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_151, tmp_ass_subscript_151, tmp_ass_subvalue_151);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_value_155;
        PyObject *tmp_args_element_value_281;
        PyObject *tmp_args_element_value_282;
        tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_155 == NULL)) {
            tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_281 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_281 == NULL)) {
            tmp_args_element_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_282 = mod_consts[380];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 518;
        {
            PyObject *call_args[] = {tmp_args_element_value_281, tmp_args_element_value_282};
            tmp_assign_source_176 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_155, call_args);
        }

        if (tmp_assign_source_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[381], tmp_assign_source_176);
    }
    {
        PyObject *tmp_ass_subvalue_152;
        PyObject *tmp_ass_subscribed_152;
        PyObject *tmp_ass_subscript_152;
        tmp_ass_subvalue_152 = mod_consts[173];
        tmp_ass_subscribed_152 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_152 == NULL)) {
            tmp_ass_subscribed_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_152 = mod_consts[381];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_152, tmp_ass_subscript_152, tmp_ass_subvalue_152);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_called_value_156;
        PyObject *tmp_args_element_value_283;
        PyObject *tmp_args_element_value_284;
        tmp_called_value_156 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_156 == NULL)) {
            tmp_called_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_283 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_283 == NULL)) {
            tmp_args_element_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_284 = mod_consts[380];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 519;
        {
            PyObject *call_args[] = {tmp_args_element_value_283, tmp_args_element_value_284};
            tmp_assign_source_177 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_156, call_args);
        }

        if (tmp_assign_source_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_177);
    }
    {
        PyObject *tmp_ass_subvalue_153;
        PyObject *tmp_ass_subscribed_153;
        PyObject *tmp_ass_subscript_153;
        tmp_ass_subvalue_153 = mod_consts[173];
        tmp_ass_subscribed_153 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_153 == NULL)) {
            tmp_ass_subscribed_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_153 = mod_consts[382];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_153, tmp_ass_subscript_153, tmp_ass_subvalue_153);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_called_value_157;
        PyObject *tmp_args_element_value_285;
        PyObject *tmp_args_element_value_286;
        tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_157 == NULL)) {
            tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_285 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_285 == NULL)) {
            tmp_args_element_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_286 = mod_consts[383];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 520;
        {
            PyObject *call_args[] = {tmp_args_element_value_285, tmp_args_element_value_286};
            tmp_assign_source_178 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_157, call_args);
        }

        if (tmp_assign_source_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_178);
    }
    {
        PyObject *tmp_ass_subvalue_154;
        PyObject *tmp_ass_subscribed_154;
        PyObject *tmp_ass_subscript_154;
        tmp_ass_subvalue_154 = mod_consts[173];
        tmp_ass_subscribed_154 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_154 == NULL)) {
            tmp_ass_subscribed_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_154 = mod_consts[384];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_154, tmp_ass_subscript_154, tmp_ass_subvalue_154);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_called_value_158;
        PyObject *tmp_args_element_value_287;
        PyObject *tmp_args_element_value_288;
        tmp_called_value_158 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_158 == NULL)) {
            tmp_called_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_287 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_287 == NULL)) {
            tmp_args_element_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_288 = mod_consts[380];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 521;
        {
            PyObject *call_args[] = {tmp_args_element_value_287, tmp_args_element_value_288};
            tmp_assign_source_179 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_158, call_args);
        }

        if (tmp_assign_source_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[385], tmp_assign_source_179);
    }
    {
        PyObject *tmp_ass_subvalue_155;
        PyObject *tmp_ass_subscribed_155;
        PyObject *tmp_ass_subscript_155;
        tmp_ass_subvalue_155 = mod_consts[173];
        tmp_ass_subscribed_155 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_155 == NULL)) {
            tmp_ass_subscribed_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_155 = mod_consts[385];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_155, tmp_ass_subscript_155, tmp_ass_subvalue_155);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_called_value_159;
        PyObject *tmp_args_element_value_289;
        PyObject *tmp_args_element_value_290;
        tmp_called_value_159 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_159 == NULL)) {
            tmp_called_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_289 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_289 == NULL)) {
            tmp_args_element_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_290 = mod_consts[386];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 524;
        {
            PyObject *call_args[] = {tmp_args_element_value_289, tmp_args_element_value_290};
            tmp_assign_source_180 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_159, call_args);
        }

        if (tmp_assign_source_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[387], tmp_assign_source_180);
    }
    {
        PyObject *tmp_ass_subvalue_156;
        PyObject *tmp_ass_subscribed_156;
        PyObject *tmp_ass_subscript_156;
        tmp_ass_subvalue_156 = mod_consts[173];
        tmp_ass_subscribed_156 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_156 == NULL)) {
            tmp_ass_subscribed_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_156 = mod_consts[387];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_156, tmp_ass_subscript_156, tmp_ass_subvalue_156);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_called_value_160;
        PyObject *tmp_args_element_value_291;
        PyObject *tmp_args_element_value_292;
        tmp_called_value_160 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_160 == NULL)) {
            tmp_called_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_291 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_291 == NULL)) {
            tmp_args_element_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_292 = mod_consts[388];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 525;
        {
            PyObject *call_args[] = {tmp_args_element_value_291, tmp_args_element_value_292};
            tmp_assign_source_181 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_160, call_args);
        }

        if (tmp_assign_source_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_181);
    }
    {
        PyObject *tmp_ass_subvalue_157;
        PyObject *tmp_ass_subscribed_157;
        PyObject *tmp_ass_subscript_157;
        tmp_ass_subvalue_157 = mod_consts[173];
        tmp_ass_subscribed_157 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_157 == NULL)) {
            tmp_ass_subscribed_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_157 = mod_consts[389];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_157, tmp_ass_subscript_157, tmp_ass_subvalue_157);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_called_value_161;
        PyObject *tmp_args_element_value_293;
        PyObject *tmp_args_element_value_294;
        tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_161 == NULL)) {
            tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_293 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_293 == NULL)) {
            tmp_args_element_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_294 = mod_consts[390];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 527;
        {
            PyObject *call_args[] = {tmp_args_element_value_293, tmp_args_element_value_294};
            tmp_assign_source_182 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_161, call_args);
        }

        if (tmp_assign_source_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_182);
    }
    {
        PyObject *tmp_ass_subvalue_158;
        PyObject *tmp_ass_subscribed_158;
        PyObject *tmp_ass_subscript_158;
        tmp_ass_subvalue_158 = mod_consts[173];
        tmp_ass_subscribed_158 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_158 == NULL)) {
            tmp_ass_subscribed_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_158 = mod_consts[391];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_158, tmp_ass_subscript_158, tmp_ass_subvalue_158);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_called_value_162;
        PyObject *tmp_args_element_value_295;
        PyObject *tmp_args_element_value_296;
        tmp_called_value_162 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_162 == NULL)) {
            tmp_called_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_295 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_295 == NULL)) {
            tmp_args_element_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_296 = mod_consts[392];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 528;
        {
            PyObject *call_args[] = {tmp_args_element_value_295, tmp_args_element_value_296};
            tmp_assign_source_183 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_162, call_args);
        }

        if (tmp_assign_source_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_183);
    }
    {
        PyObject *tmp_ass_subvalue_159;
        PyObject *tmp_ass_subscribed_159;
        PyObject *tmp_ass_subscript_159;
        tmp_ass_subvalue_159 = mod_consts[173];
        tmp_ass_subscribed_159 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_159 == NULL)) {
            tmp_ass_subscribed_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_159 = mod_consts[393];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_159, tmp_ass_subscript_159, tmp_ass_subvalue_159);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_called_value_163;
        PyObject *tmp_args_element_value_297;
        PyObject *tmp_args_element_value_298;
        tmp_called_value_163 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_163 == NULL)) {
            tmp_called_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_297 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_297 == NULL)) {
            tmp_args_element_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_298 = mod_consts[394];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 529;
        {
            PyObject *call_args[] = {tmp_args_element_value_297, tmp_args_element_value_298};
            tmp_assign_source_184 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_163, call_args);
        }

        if (tmp_assign_source_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_184);
    }
    {
        PyObject *tmp_ass_subvalue_160;
        PyObject *tmp_ass_subscribed_160;
        PyObject *tmp_ass_subscript_160;
        tmp_ass_subvalue_160 = mod_consts[173];
        tmp_ass_subscribed_160 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_160 == NULL)) {
            tmp_ass_subscribed_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_160 = mod_consts[395];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_160, tmp_ass_subscript_160, tmp_ass_subvalue_160);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_called_value_164;
        PyObject *tmp_args_element_value_299;
        PyObject *tmp_args_element_value_300;
        tmp_called_value_164 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_164 == NULL)) {
            tmp_called_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_299 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_299 == NULL)) {
            tmp_args_element_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_300 = mod_consts[396];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 532;
        {
            PyObject *call_args[] = {tmp_args_element_value_299, tmp_args_element_value_300};
            tmp_assign_source_185 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_164, call_args);
        }

        if (tmp_assign_source_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_185);
    }
    {
        PyObject *tmp_ass_subvalue_161;
        PyObject *tmp_ass_subscribed_161;
        PyObject *tmp_ass_subscript_161;
        tmp_ass_subvalue_161 = mod_consts[173];
        tmp_ass_subscribed_161 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_161 == NULL)) {
            tmp_ass_subscribed_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_161 = mod_consts[397];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_161, tmp_ass_subscript_161, tmp_ass_subvalue_161);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_called_value_165;
        PyObject *tmp_args_element_value_301;
        PyObject *tmp_args_element_value_302;
        tmp_called_value_165 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_165 == NULL)) {
            tmp_called_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_301 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_301 == NULL)) {
            tmp_args_element_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_302 = mod_consts[398];
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 533;
        {
            PyObject *call_args[] = {tmp_args_element_value_301, tmp_args_element_value_302};
            tmp_assign_source_186 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_165, call_args);
        }

        if (tmp_assign_source_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[399], tmp_assign_source_186);
    }
    {
        PyObject *tmp_ass_subvalue_162;
        PyObject *tmp_ass_subscribed_162;
        PyObject *tmp_ass_subscript_162;
        tmp_ass_subvalue_162 = mod_consts[173];
        tmp_ass_subscribed_162 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_162 == NULL)) {
            tmp_ass_subscribed_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_162 = mod_consts[399];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_162, tmp_ass_subscript_162, tmp_ass_subvalue_162);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[400];
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_187);
    }
    {
        PyObject *tmp_ass_subvalue_163;
        PyObject *tmp_ass_subscribed_163;
        PyObject *tmp_ass_subscript_163;
        tmp_ass_subvalue_163 = mod_consts[93];
        tmp_ass_subscribed_163 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_163 == NULL)) {
            tmp_ass_subscribed_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_163 = mod_consts[401];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_163, tmp_ass_subscript_163, tmp_ass_subvalue_163);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[402];
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_188);
    }
    {
        PyObject *tmp_ass_subvalue_164;
        PyObject *tmp_ass_subscribed_164;
        PyObject *tmp_ass_subscript_164;
        tmp_ass_subvalue_164 = mod_consts[404];
        tmp_ass_subscribed_164 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_164 == NULL)) {
            tmp_ass_subscribed_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_164 = mod_consts[403];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_164, tmp_ass_subscript_164, tmp_ass_subvalue_164);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[405];
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_189);
    }
    {
        PyObject *tmp_ass_subvalue_165;
        PyObject *tmp_ass_subscribed_165;
        PyObject *tmp_ass_subscript_165;
        tmp_ass_subvalue_165 = mod_consts[93];
        tmp_ass_subscribed_165 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_165 == NULL)) {
            tmp_ass_subscribed_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_165 = mod_consts[406];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_165, tmp_ass_subscript_165, tmp_ass_subvalue_165);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[407];
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_190);
    }
    {
        PyObject *tmp_ass_subvalue_166;
        PyObject *tmp_ass_subscribed_166;
        PyObject *tmp_ass_subscript_166;
        tmp_ass_subvalue_166 = mod_consts[93];
        tmp_ass_subscribed_166 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_166 == NULL)) {
            tmp_ass_subscribed_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_166 = mod_consts[43];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_166, tmp_ass_subscript_166, tmp_ass_subvalue_166);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[408];
        UPDATE_STRING_DICT0(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_191);
    }
    {
        PyObject *tmp_ass_subvalue_167;
        PyObject *tmp_ass_subscribed_167;
        PyObject *tmp_ass_subscript_167;
        tmp_ass_subvalue_167 = mod_consts[93];
        tmp_ass_subscribed_167 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_167 == NULL)) {
            tmp_ass_subscribed_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_167 = mod_consts[409];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_167, tmp_ass_subscript_167, tmp_ass_subvalue_167);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_called_value_166;
        PyObject *tmp_args_element_value_303;
        PyObject *tmp_args_element_value_304;
        PyObject *tmp_set_element_1;
        tmp_called_value_166 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_166 == NULL)) {
            tmp_called_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_303 = mod_consts[410];
        tmp_set_element_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_set_element_1 == NULL)) {
            tmp_set_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_304 = PySet_New(NULL);
        assert(tmp_args_element_value_304);
        tmp_res = PySet_Add(tmp_args_element_value_304, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_304);

            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_set_element_1 == NULL)) {
            tmp_set_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_304);

            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_args_element_value_304, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_304);

            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 542;
        {
            PyObject *call_args[] = {tmp_args_element_value_303, tmp_args_element_value_304};
            tmp_assign_source_192 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_166, call_args);
        }

        Py_DECREF(tmp_args_element_value_304);
        if (tmp_assign_source_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[411], tmp_assign_source_192);
    }
    {
        PyObject *tmp_ass_subvalue_168;
        PyObject *tmp_ass_subscribed_168;
        PyObject *tmp_ass_subscript_168;
        tmp_ass_subvalue_168 = mod_consts[412];
        tmp_ass_subscribed_168 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_168 == NULL)) {
            tmp_ass_subscribed_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_168 = mod_consts[411];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_168, tmp_ass_subscript_168, tmp_ass_subvalue_168);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_called_value_167;
        PyObject *tmp_args_element_value_305;
        PyObject *tmp_args_element_value_306;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_tuple_element_8;
        tmp_called_value_167 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_167 == NULL)) {
            tmp_called_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_305 = mod_consts[413];
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_7, 0, tmp_tuple_element_8);
        tmp_dircall_arg1_1 = PyTuple_New(4);
        {
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_tuple_element_10;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_1, 1, tmp_tuple_element_7);
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_7 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_7, 0, tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 2, tmp_tuple_element_7);
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_7 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_7, 0, tmp_tuple_element_10);
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 3, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_dircall_arg1_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_args_element_value_306 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 544;
        {
            PyObject *call_args[] = {tmp_args_element_value_305, tmp_args_element_value_306};
            tmp_assign_source_193 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_167, call_args);
        }

        Py_DECREF(tmp_args_element_value_306);
        if (tmp_assign_source_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[414], tmp_assign_source_193);
    }
    {
        PyObject *tmp_ass_subvalue_169;
        PyObject *tmp_ass_subscribed_169;
        PyObject *tmp_ass_subscript_169;
        tmp_ass_subvalue_169 = mod_consts[412];
        tmp_ass_subscribed_169 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_169 == NULL)) {
            tmp_ass_subscribed_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_169 = mod_consts[414];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_169, tmp_ass_subscript_169, tmp_ass_subvalue_169);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_called_value_168;
        PyObject *tmp_args_element_value_307;
        PyObject *tmp_args_element_value_308;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_tuple_element_12;
        tmp_called_value_168 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_168 == NULL)) {
            tmp_called_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_307 = mod_consts[415];
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_11, 0, tmp_tuple_element_12);
        tmp_dircall_arg1_2 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_13;
            PyTuple_SET_ITEM(tmp_dircall_arg1_2, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_2, 1, tmp_tuple_element_11);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_11 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_11, 0, tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_dircall_arg1_2, 2, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_dircall_arg1_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_args_element_value_308 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 545;
        {
            PyObject *call_args[] = {tmp_args_element_value_307, tmp_args_element_value_308};
            tmp_assign_source_194 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_168, call_args);
        }

        Py_DECREF(tmp_args_element_value_308);
        if (tmp_assign_source_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_194);
    }
    {
        PyObject *tmp_ass_subvalue_170;
        PyObject *tmp_ass_subscribed_170;
        PyObject *tmp_ass_subscript_170;
        tmp_ass_subvalue_170 = mod_consts[412];
        tmp_ass_subscribed_170 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_170 == NULL)) {
            tmp_ass_subscribed_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_170 = mod_consts[416];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_170, tmp_ass_subscript_170, tmp_ass_subvalue_170);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_called_value_169;
        PyObject *tmp_args_element_value_309;
        PyObject *tmp_args_element_value_310;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_tuple_element_15;
        tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_169 == NULL)) {
            tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_309 = mod_consts[417];
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_14 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_14, 0, tmp_tuple_element_15);
        tmp_dircall_arg1_3 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_16;
            PyTuple_SET_ITEM(tmp_dircall_arg1_3, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_3, 1, tmp_tuple_element_14);
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_14 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_14, 0, tmp_tuple_element_16);
            PyTuple_SET_ITEM(tmp_dircall_arg1_3, 2, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_dircall_arg1_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_args_element_value_310 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 546;
        {
            PyObject *call_args[] = {tmp_args_element_value_309, tmp_args_element_value_310};
            tmp_assign_source_195 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_169, call_args);
        }

        Py_DECREF(tmp_args_element_value_310);
        if (tmp_assign_source_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_195);
    }
    {
        PyObject *tmp_ass_subvalue_171;
        PyObject *tmp_ass_subscribed_171;
        PyObject *tmp_ass_subscript_171;
        tmp_ass_subvalue_171 = mod_consts[412];
        tmp_ass_subscribed_171 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_171 == NULL)) {
            tmp_ass_subscribed_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_171 = mod_consts[418];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_171, tmp_ass_subscript_171, tmp_ass_subvalue_171);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_called_value_170;
        PyObject *tmp_args_element_value_311;
        PyObject *tmp_args_element_value_312;
        PyObject *tmp_dircall_arg1_4;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_tuple_element_18;
        tmp_called_value_170 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_170 == NULL)) {
            tmp_called_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_311 = mod_consts[419];
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_17 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_17, 0, tmp_tuple_element_18);
        tmp_dircall_arg1_4 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_19;
            PyTuple_SET_ITEM(tmp_dircall_arg1_4, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_4, 1, tmp_tuple_element_17);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_17 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_17, 0, tmp_tuple_element_19);
            PyTuple_SET_ITEM(tmp_dircall_arg1_4, 2, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_dircall_arg1_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_args_element_value_312 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 549;
        {
            PyObject *call_args[] = {tmp_args_element_value_311, tmp_args_element_value_312};
            tmp_assign_source_196 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_170, call_args);
        }

        Py_DECREF(tmp_args_element_value_312);
        if (tmp_assign_source_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_196);
    }
    {
        PyObject *tmp_ass_subvalue_172;
        PyObject *tmp_ass_subscribed_172;
        PyObject *tmp_ass_subscript_172;
        tmp_ass_subvalue_172 = mod_consts[412];
        tmp_ass_subscribed_172 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_172 == NULL)) {
            tmp_ass_subscribed_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_172 = mod_consts[420];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_172, tmp_ass_subscript_172, tmp_ass_subvalue_172);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_called_value_171;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_7;
        tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_171 == NULL)) {
            tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_20 = mod_consts[421];
        tmp_args_value_7 = PyTuple_New(2);
        {
            PyObject *tmp_set_element_2;
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_20);
            tmp_set_element_2 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

            if (unlikely(tmp_set_element_2 == NULL)) {
                tmp_set_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
            }

            if (tmp_set_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_20 = PySet_New(NULL);
            assert(tmp_tuple_element_20);
            tmp_res = PySet_Add(tmp_tuple_element_20, tmp_set_element_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_tuple_element_20);

                exception_lineno = 551;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_args_value_7, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_args_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_kwargs_value_7 = PyDict_Copy(mod_consts[422]);
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 551;
        tmp_assign_source_197 = CALL_FUNCTION(tmp_called_value_171, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_args_value_7);
        Py_DECREF(tmp_kwargs_value_7);
        if (tmp_assign_source_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[423], tmp_assign_source_197);
    }
    {
        PyObject *tmp_ass_subvalue_173;
        PyObject *tmp_ass_subscribed_173;
        PyObject *tmp_ass_subscript_173;
        tmp_ass_subvalue_173 = mod_consts[412];
        tmp_ass_subscribed_173 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_173 == NULL)) {
            tmp_ass_subscribed_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_173 = mod_consts[423];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_173, tmp_ass_subscript_173, tmp_ass_subvalue_173);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_called_value_172;
        PyObject *tmp_args_element_value_313;
        PyObject *tmp_args_element_value_314;
        PyObject *tmp_dircall_arg1_5;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_tuple_element_22;
        tmp_called_value_172 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_172 == NULL)) {
            tmp_called_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_313 = mod_consts[424];
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_22 == NULL)) {
            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_21 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_21, 0, tmp_tuple_element_22);
        tmp_dircall_arg1_5 = PyTuple_New(4);
        {
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_tuple_element_24;
            PyTuple_SET_ITEM(tmp_dircall_arg1_5, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_5, 1, tmp_tuple_element_21);
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_21 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_21, 0, tmp_tuple_element_23);
            PyTuple_SET_ITEM(tmp_dircall_arg1_5, 2, tmp_tuple_element_21);
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_21 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_21, 0, tmp_tuple_element_24);
            PyTuple_SET_ITEM(tmp_dircall_arg1_5, 3, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_dircall_arg1_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_args_element_value_314 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 552;
        {
            PyObject *call_args[] = {tmp_args_element_value_313, tmp_args_element_value_314};
            tmp_assign_source_198 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_172, call_args);
        }

        Py_DECREF(tmp_args_element_value_314);
        if (tmp_assign_source_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[425], tmp_assign_source_198);
    }
    {
        PyObject *tmp_ass_subvalue_174;
        PyObject *tmp_ass_subscribed_174;
        PyObject *tmp_ass_subscript_174;
        tmp_ass_subvalue_174 = mod_consts[412];
        tmp_ass_subscribed_174 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_174 == NULL)) {
            tmp_ass_subscribed_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_174 = mod_consts[425];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_174, tmp_ass_subscript_174, tmp_ass_subvalue_174);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_called_value_173;
        PyObject *tmp_args_element_value_315;
        PyObject *tmp_args_element_value_316;
        PyObject *tmp_dircall_arg1_6;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_tuple_element_26;
        tmp_called_value_173 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_173 == NULL)) {
            tmp_called_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_315 = mod_consts[426];
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_26 == NULL)) {
            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_25 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_25, 0, tmp_tuple_element_26);
        tmp_dircall_arg1_6 = PyTuple_New(4);
        {
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_tuple_element_28;
            PyTuple_SET_ITEM(tmp_dircall_arg1_6, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_6, 1, tmp_tuple_element_25);
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_25 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_25, 0, tmp_tuple_element_27);
            PyTuple_SET_ITEM(tmp_dircall_arg1_6, 2, tmp_tuple_element_25);
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_25 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_25, 0, tmp_tuple_element_28);
            PyTuple_SET_ITEM(tmp_dircall_arg1_6, 3, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_dircall_arg1_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_args_element_value_316 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 553;
        {
            PyObject *call_args[] = {tmp_args_element_value_315, tmp_args_element_value_316};
            tmp_assign_source_199 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_173, call_args);
        }

        Py_DECREF(tmp_args_element_value_316);
        if (tmp_assign_source_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[427], tmp_assign_source_199);
    }
    {
        PyObject *tmp_ass_subvalue_175;
        PyObject *tmp_ass_subscribed_175;
        PyObject *tmp_ass_subscript_175;
        tmp_ass_subvalue_175 = mod_consts[412];
        tmp_ass_subscribed_175 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_175 == NULL)) {
            tmp_ass_subscribed_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_175 = mod_consts[427];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_175, tmp_ass_subscript_175, tmp_ass_subvalue_175);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_called_value_174;
        PyObject *tmp_args_element_value_317;
        PyObject *tmp_args_element_value_318;
        PyObject *tmp_dircall_arg1_7;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_tuple_element_30;
        tmp_called_value_174 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_174 == NULL)) {
            tmp_called_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_317 = mod_consts[428];
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_30 == NULL)) {
            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_29 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_29, 0, tmp_tuple_element_30);
        tmp_dircall_arg1_7 = PyTuple_New(4);
        {
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_tuple_element_32;
            PyTuple_SET_ITEM(tmp_dircall_arg1_7, 0, tmp_tuple_element_29);
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_7, 1, tmp_tuple_element_29);
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_29 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_29, 0, tmp_tuple_element_31);
            PyTuple_SET_ITEM(tmp_dircall_arg1_7, 2, tmp_tuple_element_29);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_29 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_29, 0, tmp_tuple_element_32);
            PyTuple_SET_ITEM(tmp_dircall_arg1_7, 3, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_dircall_arg1_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_args_element_value_318 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 554;
        {
            PyObject *call_args[] = {tmp_args_element_value_317, tmp_args_element_value_318};
            tmp_assign_source_200 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_174, call_args);
        }

        Py_DECREF(tmp_args_element_value_318);
        if (tmp_assign_source_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[429], tmp_assign_source_200);
    }
    {
        PyObject *tmp_ass_subvalue_176;
        PyObject *tmp_ass_subscribed_176;
        PyObject *tmp_ass_subscript_176;
        tmp_ass_subvalue_176 = mod_consts[412];
        tmp_ass_subscribed_176 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_176 == NULL)) {
            tmp_ass_subscribed_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_176 = mod_consts[429];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_176, tmp_ass_subscript_176, tmp_ass_subvalue_176);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_called_value_175;
        PyObject *tmp_args_element_value_319;
        PyObject *tmp_args_element_value_320;
        PyObject *tmp_dircall_arg1_8;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_tuple_element_34;
        tmp_called_value_175 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_175 == NULL)) {
            tmp_called_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_319 = mod_consts[430];
        tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_34 == NULL)) {
            tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_33 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_33, 0, tmp_tuple_element_34);
        tmp_dircall_arg1_8 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_35;
            PyTuple_SET_ITEM(tmp_dircall_arg1_8, 0, tmp_tuple_element_33);
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_8, 1, tmp_tuple_element_33);
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_33 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_33, 0, tmp_tuple_element_35);
            PyTuple_SET_ITEM(tmp_dircall_arg1_8, 2, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_dircall_arg1_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_args_element_value_320 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_320 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 557;
        {
            PyObject *call_args[] = {tmp_args_element_value_319, tmp_args_element_value_320};
            tmp_assign_source_201 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_175, call_args);
        }

        Py_DECREF(tmp_args_element_value_320);
        if (tmp_assign_source_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[431], tmp_assign_source_201);
    }
    {
        PyObject *tmp_ass_subvalue_177;
        PyObject *tmp_ass_subscribed_177;
        PyObject *tmp_ass_subscript_177;
        tmp_ass_subvalue_177 = mod_consts[412];
        tmp_ass_subscribed_177 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_177 == NULL)) {
            tmp_ass_subscribed_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_177 = mod_consts[431];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_177, tmp_ass_subscript_177, tmp_ass_subvalue_177);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_called_value_176;
        PyObject *tmp_args_element_value_321;
        PyObject *tmp_args_element_value_322;
        PyObject *tmp_dircall_arg1_9;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_tuple_element_37;
        tmp_called_value_176 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_176 == NULL)) {
            tmp_called_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_321 = mod_consts[432];
        tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_37 == NULL)) {
            tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_36 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_36, 0, tmp_tuple_element_37);
        tmp_dircall_arg1_9 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_38;
            PyTuple_SET_ITEM(tmp_dircall_arg1_9, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_9, 1, tmp_tuple_element_36);
            tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_38 == NULL)) {
                tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_13;
            }
            tmp_tuple_element_36 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_36, 0, tmp_tuple_element_38);
            PyTuple_SET_ITEM(tmp_dircall_arg1_9, 2, tmp_tuple_element_36);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_dircall_arg1_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_args_element_value_322 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_322 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 559;
        {
            PyObject *call_args[] = {tmp_args_element_value_321, tmp_args_element_value_322};
            tmp_assign_source_202 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_176, call_args);
        }

        Py_DECREF(tmp_args_element_value_322);
        if (tmp_assign_source_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[433], tmp_assign_source_202);
    }
    {
        PyObject *tmp_ass_subvalue_178;
        PyObject *tmp_ass_subscribed_178;
        PyObject *tmp_ass_subscript_178;
        tmp_ass_subvalue_178 = mod_consts[412];
        tmp_ass_subscribed_178 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_178 == NULL)) {
            tmp_ass_subscribed_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_178 = mod_consts[433];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_178, tmp_ass_subscript_178, tmp_ass_subvalue_178);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_called_value_177;
        PyObject *tmp_args_element_value_323;
        PyObject *tmp_args_element_value_324;
        PyObject *tmp_dircall_arg1_10;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_tuple_element_40;
        tmp_called_value_177 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_177 == NULL)) {
            tmp_called_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_323 = mod_consts[434];
        tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_40 == NULL)) {
            tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_39 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_39, 0, tmp_tuple_element_40);
        tmp_dircall_arg1_10 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_41;
            PyTuple_SET_ITEM(tmp_dircall_arg1_10, 0, tmp_tuple_element_39);
            tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_39 == NULL)) {
                tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_10, 1, tmp_tuple_element_39);
            tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_41 == NULL)) {
                tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_14;
            }
            tmp_tuple_element_39 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_39, 0, tmp_tuple_element_41);
            PyTuple_SET_ITEM(tmp_dircall_arg1_10, 2, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_dircall_arg1_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_args_element_value_324 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_324 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 560;
        {
            PyObject *call_args[] = {tmp_args_element_value_323, tmp_args_element_value_324};
            tmp_assign_source_203 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_177, call_args);
        }

        Py_DECREF(tmp_args_element_value_324);
        if (tmp_assign_source_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[435], tmp_assign_source_203);
    }
    {
        PyObject *tmp_ass_subvalue_179;
        PyObject *tmp_ass_subscribed_179;
        PyObject *tmp_ass_subscript_179;
        tmp_ass_subvalue_179 = mod_consts[412];
        tmp_ass_subscribed_179 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_179 == NULL)) {
            tmp_ass_subscribed_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_179 = mod_consts[435];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_179, tmp_ass_subscript_179, tmp_ass_subvalue_179);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_called_value_178;
        PyObject *tmp_args_element_value_325;
        PyObject *tmp_args_element_value_326;
        PyObject *tmp_dircall_arg1_11;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_tuple_element_43;
        tmp_called_value_178 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_178 == NULL)) {
            tmp_called_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_325 = mod_consts[434];
        tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_43 == NULL)) {
            tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_42 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_42, 0, tmp_tuple_element_43);
        tmp_dircall_arg1_11 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_44;
            PyTuple_SET_ITEM(tmp_dircall_arg1_11, 0, tmp_tuple_element_42);
            tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_42 == NULL)) {
                tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_11, 1, tmp_tuple_element_42);
            tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_44 == NULL)) {
                tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_15;
            }
            tmp_tuple_element_42 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_42, 0, tmp_tuple_element_44);
            PyTuple_SET_ITEM(tmp_dircall_arg1_11, 2, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_dircall_arg1_11);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_args_element_value_326 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_326 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 561;
        {
            PyObject *call_args[] = {tmp_args_element_value_325, tmp_args_element_value_326};
            tmp_assign_source_204 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_178, call_args);
        }

        Py_DECREF(tmp_args_element_value_326);
        if (tmp_assign_source_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[436], tmp_assign_source_204);
    }
    {
        PyObject *tmp_ass_subvalue_180;
        PyObject *tmp_ass_subscribed_180;
        PyObject *tmp_ass_subscript_180;
        tmp_ass_subvalue_180 = mod_consts[412];
        tmp_ass_subscribed_180 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_180 == NULL)) {
            tmp_ass_subscribed_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_180 = mod_consts[436];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_180, tmp_ass_subscript_180, tmp_ass_subvalue_180);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_called_value_179;
        PyObject *tmp_args_element_value_327;
        PyObject *tmp_args_element_value_328;
        PyObject *tmp_dircall_arg1_12;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_tuple_element_46;
        tmp_called_value_179 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_179 == NULL)) {
            tmp_called_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_327 = mod_consts[437];
        tmp_tuple_element_46 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_46 == NULL)) {
            tmp_tuple_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_45 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_45, 0, tmp_tuple_element_46);
        tmp_dircall_arg1_12 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_47;
            PyTuple_SET_ITEM(tmp_dircall_arg1_12, 0, tmp_tuple_element_45);
            tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_45 == NULL)) {
                tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_12, 1, tmp_tuple_element_45);
            tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_47 == NULL)) {
                tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_16;
            }
            tmp_tuple_element_45 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_45, 0, tmp_tuple_element_47);
            PyTuple_SET_ITEM(tmp_dircall_arg1_12, 2, tmp_tuple_element_45);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_dircall_arg1_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
            tmp_args_element_value_328 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_328 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 562;
        {
            PyObject *call_args[] = {tmp_args_element_value_327, tmp_args_element_value_328};
            tmp_assign_source_205 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_179, call_args);
        }

        Py_DECREF(tmp_args_element_value_328);
        if (tmp_assign_source_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[438], tmp_assign_source_205);
    }
    {
        PyObject *tmp_ass_subvalue_181;
        PyObject *tmp_ass_subscribed_181;
        PyObject *tmp_ass_subscript_181;
        tmp_ass_subvalue_181 = mod_consts[412];
        tmp_ass_subscribed_181 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_181 == NULL)) {
            tmp_ass_subscribed_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_181 = mod_consts[438];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_181, tmp_ass_subscript_181, tmp_ass_subvalue_181);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_called_value_180;
        PyObject *tmp_args_element_value_329;
        PyObject *tmp_args_element_value_330;
        PyObject *tmp_dircall_arg1_13;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_tuple_element_49;
        tmp_called_value_180 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_180 == NULL)) {
            tmp_called_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_329 = mod_consts[439];
        tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_49 == NULL)) {
            tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_48 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_48, 0, tmp_tuple_element_49);
        tmp_dircall_arg1_13 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_50;
            PyTuple_SET_ITEM(tmp_dircall_arg1_13, 0, tmp_tuple_element_48);
            tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_48 == NULL)) {
                tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_13, 1, tmp_tuple_element_48);
            tmp_tuple_element_50 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_50 == NULL)) {
                tmp_tuple_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;

                goto tuple_build_exception_17;
            }
            tmp_tuple_element_48 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_48, 0, tmp_tuple_element_50);
            PyTuple_SET_ITEM(tmp_dircall_arg1_13, 2, tmp_tuple_element_48);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_dircall_arg1_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
            tmp_args_element_value_330 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_330 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 566;
        {
            PyObject *call_args[] = {tmp_args_element_value_329, tmp_args_element_value_330};
            tmp_assign_source_206 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_180, call_args);
        }

        Py_DECREF(tmp_args_element_value_330);
        if (tmp_assign_source_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_206);
    }
    {
        PyObject *tmp_ass_subvalue_182;
        PyObject *tmp_ass_subscribed_182;
        PyObject *tmp_ass_subscript_182;
        tmp_ass_subvalue_182 = mod_consts[412];
        tmp_ass_subscribed_182 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_182 == NULL)) {
            tmp_ass_subscribed_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_182 = mod_consts[440];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_182, tmp_ass_subscript_182, tmp_ass_subvalue_182);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_called_value_181;
        PyObject *tmp_args_element_value_331;
        PyObject *tmp_args_element_value_332;
        PyObject *tmp_dircall_arg1_14;
        PyObject *tmp_tuple_element_51;
        PyObject *tmp_tuple_element_52;
        tmp_called_value_181 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_181 == NULL)) {
            tmp_called_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_331 = mod_consts[441];
        tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_52 == NULL)) {
            tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_51 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_51, 0, tmp_tuple_element_52);
        tmp_dircall_arg1_14 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_53;
            PyTuple_SET_ITEM(tmp_dircall_arg1_14, 0, tmp_tuple_element_51);
            tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_51 == NULL)) {
                tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_14, 1, tmp_tuple_element_51);
            tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_53 == NULL)) {
                tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;

                goto tuple_build_exception_18;
            }
            tmp_tuple_element_51 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_51, 0, tmp_tuple_element_53);
            PyTuple_SET_ITEM(tmp_dircall_arg1_14, 2, tmp_tuple_element_51);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_dircall_arg1_14);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
            tmp_args_element_value_332 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_332 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 569;
        {
            PyObject *call_args[] = {tmp_args_element_value_331, tmp_args_element_value_332};
            tmp_assign_source_207 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_181, call_args);
        }

        Py_DECREF(tmp_args_element_value_332);
        if (tmp_assign_source_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_207);
    }
    {
        PyObject *tmp_ass_subvalue_183;
        PyObject *tmp_ass_subscribed_183;
        PyObject *tmp_ass_subscript_183;
        tmp_ass_subvalue_183 = mod_consts[412];
        tmp_ass_subscribed_183 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_183 == NULL)) {
            tmp_ass_subscribed_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_183 = mod_consts[442];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_183, tmp_ass_subscript_183, tmp_ass_subvalue_183);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_called_value_182;
        PyObject *tmp_args_value_8;
        PyObject *tmp_tuple_element_54;
        PyObject *tmp_kwargs_value_8;
        tmp_called_value_182 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_182 == NULL)) {
            tmp_called_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_54 = mod_consts[443];
        tmp_args_value_8 = PyTuple_New(2);
        {
            PyObject *tmp_set_element_3;
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_54);
            tmp_set_element_3 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

            if (unlikely(tmp_set_element_3 == NULL)) {
                tmp_set_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
            }

            if (tmp_set_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;

                goto tuple_build_exception_19;
            }
            tmp_tuple_element_54 = PySet_New(NULL);
            assert(tmp_tuple_element_54);
            tmp_res = PySet_Add(tmp_tuple_element_54, tmp_set_element_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_tuple_element_54);

                exception_lineno = 571;

                goto tuple_build_exception_19;
            }
            tmp_set_element_3 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[409]);

            if (unlikely(tmp_set_element_3 == NULL)) {
                tmp_set_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[409]);
            }

            if (tmp_set_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_tuple_element_54);

                exception_lineno = 571;

                goto tuple_build_exception_19;
            }
            tmp_res = PySet_Add(tmp_tuple_element_54, tmp_set_element_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_tuple_element_54);

                exception_lineno = 571;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_args_value_8, 1, tmp_tuple_element_54);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_args_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_kwargs_value_8 = PyDict_Copy(mod_consts[422]);
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 571;
        tmp_assign_source_208 = CALL_FUNCTION(tmp_called_value_182, tmp_args_value_8, tmp_kwargs_value_8);
        Py_DECREF(tmp_args_value_8);
        Py_DECREF(tmp_kwargs_value_8);
        if (tmp_assign_source_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[444], tmp_assign_source_208);
    }
    {
        PyObject *tmp_ass_subvalue_184;
        PyObject *tmp_ass_subscribed_184;
        PyObject *tmp_ass_subscript_184;
        tmp_ass_subvalue_184 = mod_consts[412];
        tmp_ass_subscribed_184 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_184 == NULL)) {
            tmp_ass_subscribed_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_184 = mod_consts[444];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_184, tmp_ass_subscript_184, tmp_ass_subvalue_184);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_called_value_183;
        PyObject *tmp_args_element_value_333;
        PyObject *tmp_args_element_value_334;
        PyObject *tmp_dircall_arg1_15;
        PyObject *tmp_tuple_element_55;
        PyObject *tmp_tuple_element_56;
        tmp_called_value_183 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_183 == NULL)) {
            tmp_called_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_333 = mod_consts[445];
        tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_56 == NULL)) {
            tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_55 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_55, 0, tmp_tuple_element_56);
        tmp_dircall_arg1_15 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_57;
            PyTuple_SET_ITEM(tmp_dircall_arg1_15, 0, tmp_tuple_element_55);
            tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_55 == NULL)) {
                tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_15, 1, tmp_tuple_element_55);
            tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_57 == NULL)) {
                tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto tuple_build_exception_20;
            }
            tmp_tuple_element_55 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_55, 0, tmp_tuple_element_57);
            PyTuple_SET_ITEM(tmp_dircall_arg1_15, 2, tmp_tuple_element_55);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_dircall_arg1_15);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
            tmp_args_element_value_334 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_334 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 572;
        {
            PyObject *call_args[] = {tmp_args_element_value_333, tmp_args_element_value_334};
            tmp_assign_source_209 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_183, call_args);
        }

        Py_DECREF(tmp_args_element_value_334);
        if (tmp_assign_source_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_209);
    }
    {
        PyObject *tmp_ass_subvalue_185;
        PyObject *tmp_ass_subscribed_185;
        PyObject *tmp_ass_subscript_185;
        tmp_ass_subvalue_185 = mod_consts[412];
        tmp_ass_subscribed_185 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_185 == NULL)) {
            tmp_ass_subscribed_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_185 = mod_consts[446];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_185, tmp_ass_subscript_185, tmp_ass_subvalue_185);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_called_value_184;
        PyObject *tmp_args_element_value_335;
        PyObject *tmp_args_element_value_336;
        PyObject *tmp_dircall_arg1_16;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_tuple_element_59;
        tmp_called_value_184 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_184 == NULL)) {
            tmp_called_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_335 = mod_consts[447];
        tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_tuple_element_59 == NULL)) {
            tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[401]);
        }

        if (tmp_tuple_element_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_58 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_58, 0, tmp_tuple_element_59);
        tmp_dircall_arg1_16 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_60;
            PyTuple_SET_ITEM(tmp_dircall_arg1_16, 0, tmp_tuple_element_58);
            tmp_tuple_element_58 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[403]);

            if (unlikely(tmp_tuple_element_58 == NULL)) {
                tmp_tuple_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[403]);
            }

            if (tmp_tuple_element_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 576;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM0(tmp_dircall_arg1_16, 1, tmp_tuple_element_58);
            tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[406]);

            if (unlikely(tmp_tuple_element_60 == NULL)) {
                tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
            }

            if (tmp_tuple_element_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 576;

                goto tuple_build_exception_21;
            }
            tmp_tuple_element_58 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_58, 0, tmp_tuple_element_60);
            PyTuple_SET_ITEM(tmp_dircall_arg1_16, 2, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_dircall_arg1_16);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
            tmp_args_element_value_336 = impl___main__$$$function__12__unpack_set(dir_call_args);
        }
        if (tmp_args_element_value_336 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        frame_6fbb625b93c2a247cac1bc40df677204->m_frame.f_lineno = 576;
        {
            PyObject *call_args[] = {tmp_args_element_value_335, tmp_args_element_value_336};
            tmp_assign_source_210 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_184, call_args);
        }

        Py_DECREF(tmp_args_element_value_336);
        if (tmp_assign_source_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_210);
    }
    {
        PyObject *tmp_ass_subvalue_186;
        PyObject *tmp_ass_subscribed_186;
        PyObject *tmp_ass_subscript_186;
        tmp_ass_subvalue_186 = mod_consts[412];
        tmp_ass_subscribed_186 = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_ass_subscribed_186 == NULL)) {
            tmp_ass_subscribed_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_ass_subscribed_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_186 = mod_consts[448];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_186, tmp_ass_subscript_186, tmp_ass_subvalue_186);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fbb625b93c2a247cac1bc40df677204);
#endif
    popFrameStack();

    assertFrameObject(frame_6fbb625b93c2a247cac1bc40df677204);

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fbb625b93c2a247cac1bc40df677204);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6fbb625b93c2a247cac1bc40df677204, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fbb625b93c2a247cac1bc40df677204->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fbb625b93c2a247cac1bc40df677204, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("hikari.internal.routes", false);

    return module_hikari$internal$routes;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hikari$internal$routes, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("hikari$internal$routes", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
