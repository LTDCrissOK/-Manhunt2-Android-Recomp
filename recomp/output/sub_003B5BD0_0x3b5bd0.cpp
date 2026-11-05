#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B5BD0
// Address: 0x3b5bd0 - 0x3b5d80
void sub_003B5BD0_0x3b5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5BD0_0x3b5bd0");
#endif

    switch (ctx->pc) {
        case 0x3b5becu: goto label_3b5bec;
        case 0x3b5c8cu: goto label_3b5c8c;
        default: break;
    }

    ctx->pc = 0x3b5bd0u;

    // 0x3b5bd0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3b5bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5bd4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3b5bd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5bd8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3b5bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5bdc: 0x24ac0000  addiu       $t4, $a1, 0x0
    ctx->pc = 0x3b5bdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x3b5be0: 0x24cd0000  addiu       $t5, $a2, 0x0
    ctx->pc = 0x3b5be0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x3b5be4: 0x24ce0040  addiu       $t6, $a2, 0x40
    ctx->pc = 0x3b5be4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3b5be8: 0x24cf0020  addiu       $t7, $a2, 0x20
    ctx->pc = 0x3b5be8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_3b5bec:
    // 0x3b5bec: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x3b5becu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b5bf0: 0x79890000  lq          $t1, 0x0($t4)
    ctx->pc = 0x3b5bf0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3b5bf4: 0x71095449  phmadh      $t2, $t0, $t1
    ctx->pc = 0x3b5bf4u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 10, acc); }
    // 0x3b5bf8: 0x78880010  lq          $t0, 0x10($a0)
    ctx->pc = 0x3b5bf8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3b5bfc: 0x79890010  lq          $t1, 0x10($t4)
    ctx->pc = 0x3b5bfcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x3b5c00: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x3b5c00u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x3b5c04: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5c04u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5c08: 0x78880020  lq          $t0, 0x20($a0)
    ctx->pc = 0x3b5c08u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3b5c0c: 0x79890020  lq          $t1, 0x20($t4)
    ctx->pc = 0x3b5c0cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x3b5c10: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x3b5c10u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x3b5c14: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5c14u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5c18: 0x78880030  lq          $t0, 0x30($a0)
    ctx->pc = 0x3b5c18u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3b5c1c: 0x79890030  lq          $t1, 0x30($t4)
    ctx->pc = 0x3b5c1cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x3b5c20: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x3b5c20u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x3b5c24: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5c24u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5c28: 0x710844c9  pxor        $t0, $t0, $t0
    ctx->pc = 0x3b5c28u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x3b5c2c: 0x5190004  mtsah       $t0, 0x4
    ctx->pc = 0x3b5c2cu;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)4) & 0x7) << 4;
    // 0x3b5c30: 0x714a5ee8  qfsrv       $t3, $t2, $t2
    ctx->pc = 0x3b5c30u;
    SET_GPR_VEC(ctx, 11, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x3b5c34: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5c34u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5c38: 0x0  nop
    ctx->pc = 0x3b5c38u;
    // NOP
    // 0x3b5c3c: 0x0  nop
    ctx->pc = 0x3b5c3cu;
    // NOP
    // 0x3b5c40: 0x71294cc9  pxor        $t1, $t1, $t1
    ctx->pc = 0x3b5c40u;
    SET_GPR_VEC(ctx, 9, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3b5c44: 0x5390002  mtsah       $t1, 0x2
    ctx->pc = 0x3b5c44u;
    ctx->sa = ((GPR_U32(ctx, 9) ^ (uint32_t)2) & 0x7) << 4;
    // 0x3b5c48: 0x714a5ee8  qfsrv       $t3, $t2, $t2
    ctx->pc = 0x3b5c48u;
    SET_GPR_VEC(ctx, 11, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x3b5c4c: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5c4cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5c50: 0x700a533f  psraw       $t2, $t2, 12
    ctx->pc = 0x3b5c50u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi32(GPR_VEC(ctx, 10), 12));
    // 0x3b5c54: 0xa5aa0000  sh          $t2, 0x0($t5)
    ctx->pc = 0x3b5c54u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x3b5c58: 0xa5022  neg         $t2, $t2
    ctx->pc = 0x3b5c58u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 10), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x3b5c5c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3b5c5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3b5c60: 0xa5ca0000  sh          $t2, 0x0($t6)
    ctx->pc = 0x3b5c60u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x3b5c64: 0x258c0040  addiu       $t4, $t4, 0x40
    ctx->pc = 0x3b5c64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x3b5c68: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x3b5c68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x3b5c6c: 0x15afffdf  bne         $t5, $t7, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3B5C6Cu;
    {
        const bool branch_taken_0x3b5c6c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x3B5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C6Cu;
        // 0x3b5c70: 0x25cefffe  addiu       $t6, $t6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5c6c) {
            ctx->pc = 0x3B5BECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5bec;
        }
    }
    ctx->pc = 0x3B5C74u;
    // 0x3b5c74: 0x0  nop
    ctx->pc = 0x3b5c74u;
    // NOP
    // 0x3b5c78: 0xa5a00000  sh          $zero, 0x0($t5)
    ctx->pc = 0x3b5c78u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b5c7c: 0x258c0440  addiu       $t4, $t4, 0x440
    ctx->pc = 0x3b5c7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1088));
    // 0x3b5c80: 0x24cd0042  addiu       $t5, $a2, 0x42
    ctx->pc = 0x3b5c80u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 66));
    // 0x3b5c84: 0x24ce007e  addiu       $t6, $a2, 0x7E
    ctx->pc = 0x3b5c84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 126));
    // 0x3b5c88: 0x24cf0060  addiu       $t7, $a2, 0x60
    ctx->pc = 0x3b5c88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_3b5c8c:
    // 0x3b5c8c: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x3b5c8cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b5c90: 0x79890000  lq          $t1, 0x0($t4)
    ctx->pc = 0x3b5c90u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3b5c94: 0x71095449  phmadh      $t2, $t0, $t1
    ctx->pc = 0x3b5c94u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 10, acc); }
    // 0x3b5c98: 0x78880010  lq          $t0, 0x10($a0)
    ctx->pc = 0x3b5c98u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3b5c9c: 0x79890010  lq          $t1, 0x10($t4)
    ctx->pc = 0x3b5c9cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x3b5ca0: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x3b5ca0u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x3b5ca4: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5ca4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5ca8: 0x78880020  lq          $t0, 0x20($a0)
    ctx->pc = 0x3b5ca8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3b5cac: 0x79890020  lq          $t1, 0x20($t4)
    ctx->pc = 0x3b5cacu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x3b5cb0: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x3b5cb0u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x3b5cb4: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5cb4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5cb8: 0x78880030  lq          $t0, 0x30($a0)
    ctx->pc = 0x3b5cb8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3b5cbc: 0x79890030  lq          $t1, 0x30($t4)
    ctx->pc = 0x3b5cbcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x3b5cc0: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x3b5cc0u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x3b5cc4: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5cc4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5cc8: 0x710844c9  pxor        $t0, $t0, $t0
    ctx->pc = 0x3b5cc8u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x3b5ccc: 0x5190004  mtsah       $t0, 0x4
    ctx->pc = 0x3b5cccu;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)4) & 0x7) << 4;
    // 0x3b5cd0: 0x714a5ee8  qfsrv       $t3, $t2, $t2
    ctx->pc = 0x3b5cd0u;
    SET_GPR_VEC(ctx, 11, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x3b5cd4: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5cd4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5cd8: 0x0  nop
    ctx->pc = 0x3b5cd8u;
    // NOP
    // 0x3b5cdc: 0x0  nop
    ctx->pc = 0x3b5cdcu;
    // NOP
    // 0x3b5ce0: 0x71294cc9  pxor        $t1, $t1, $t1
    ctx->pc = 0x3b5ce0u;
    SET_GPR_VEC(ctx, 9, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3b5ce4: 0x5390002  mtsah       $t1, 0x2
    ctx->pc = 0x3b5ce4u;
    ctx->sa = ((GPR_U32(ctx, 9) ^ (uint32_t)2) & 0x7) << 4;
    // 0x3b5ce8: 0x714a5ee8  qfsrv       $t3, $t2, $t2
    ctx->pc = 0x3b5ce8u;
    SET_GPR_VEC(ctx, 11, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x3b5cec: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5cecu;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5cf0: 0x700a533f  psraw       $t2, $t2, 12
    ctx->pc = 0x3b5cf0u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi32(GPR_VEC(ctx, 10), 12));
    // 0x3b5cf4: 0xa5aa0000  sh          $t2, 0x0($t5)
    ctx->pc = 0x3b5cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x3b5cf8: 0xa5ca0000  sh          $t2, 0x0($t6)
    ctx->pc = 0x3b5cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x3b5cfc: 0x258c0040  addiu       $t4, $t4, 0x40
    ctx->pc = 0x3b5cfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x3b5d00: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x3b5d00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x3b5d04: 0x15afffe1  bne         $t5, $t7, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3B5D04u;
    {
        const bool branch_taken_0x3b5d04 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x3B5D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D04u;
        // 0x3b5d08: 0x25cefffe  addiu       $t6, $t6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5d04) {
            ctx->pc = 0x3B5C8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5c8c;
        }
    }
    ctx->pc = 0x3B5D0Cu;
    // 0x3b5d0c: 0x0  nop
    ctx->pc = 0x3b5d0cu;
    // NOP
    // 0x3b5d10: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x3b5d10u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b5d14: 0x79890000  lq          $t1, 0x0($t4)
    ctx->pc = 0x3b5d14u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3b5d18: 0x71095449  phmadh      $t2, $t0, $t1
    ctx->pc = 0x3b5d18u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 10, acc); }
    // 0x3b5d1c: 0x78880010  lq          $t0, 0x10($a0)
    ctx->pc = 0x3b5d1cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3b5d20: 0x79890010  lq          $t1, 0x10($t4)
    ctx->pc = 0x3b5d20u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x3b5d24: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x3b5d24u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x3b5d28: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5d28u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5d2c: 0x78880020  lq          $t0, 0x20($a0)
    ctx->pc = 0x3b5d2cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3b5d30: 0x79890020  lq          $t1, 0x20($t4)
    ctx->pc = 0x3b5d30u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x3b5d34: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x3b5d34u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x3b5d38: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5d38u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5d3c: 0x78880030  lq          $t0, 0x30($a0)
    ctx->pc = 0x3b5d3cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3b5d40: 0x79890030  lq          $t1, 0x30($t4)
    ctx->pc = 0x3b5d40u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x3b5d44: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x3b5d44u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x3b5d48: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5d48u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5d4c: 0x710844c9  pxor        $t0, $t0, $t0
    ctx->pc = 0x3b5d4cu;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x3b5d50: 0x5190004  mtsah       $t0, 0x4
    ctx->pc = 0x3b5d50u;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)4) & 0x7) << 4;
    // 0x3b5d54: 0x714a5ee8  qfsrv       $t3, $t2, $t2
    ctx->pc = 0x3b5d54u;
    SET_GPR_VEC(ctx, 11, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x3b5d58: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5d58u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5d5c: 0x0  nop
    ctx->pc = 0x3b5d5cu;
    // NOP
    // 0x3b5d60: 0x0  nop
    ctx->pc = 0x3b5d60u;
    // NOP
    // 0x3b5d64: 0x71294cc9  pxor        $t1, $t1, $t1
    ctx->pc = 0x3b5d64u;
    SET_GPR_VEC(ctx, 9, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3b5d68: 0x5390002  mtsah       $t1, 0x2
    ctx->pc = 0x3b5d68u;
    ctx->sa = ((GPR_U32(ctx, 9) ^ (uint32_t)2) & 0x7) << 4;
    // 0x3b5d6c: 0x714a5ee8  qfsrv       $t3, $t2, $t2
    ctx->pc = 0x3b5d6cu;
    SET_GPR_VEC(ctx, 11, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x3b5d70: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x3b5d70u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x3b5d74: 0x700a533f  psraw       $t2, $t2, 12
    ctx->pc = 0x3b5d74u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi32(GPR_VEC(ctx, 10), 12));
    // 0x3b5d78: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D78u;
        // 0x3b5d7c: 0xa5aa0000  sh          $t2, 0x0($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5D80u;
}
