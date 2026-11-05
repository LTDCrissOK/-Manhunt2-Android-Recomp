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

// Function: sub_002B3648
// Address: 0x2b3648 - 0x2b3740
void sub_002B3648_0x2b3648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3648_0x2b3648");
#endif

    ctx->pc = 0x2b3648u;

    // 0x2b3648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b364c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2b364cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b3650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3654: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2b3654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b3658: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3658u;
    {
        const bool branch_taken_0x2b3658 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3658) {
            ctx->pc = 0x2B365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3658u;
            // 0x2b365c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3660u;
            goto label_2b3660;
        }
    }
    ctx->pc = 0x2B3660u;
label_2b3660:
    // 0x2b3660: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2b3660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b3664: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x2b3664u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2b3668: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2b3668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b366c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x2b366cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b3670: 0x2442f830  addiu       $v0, $v0, -0x7D0
    ctx->pc = 0x2b3670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965296));
    // 0x2b3674: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x2b3674u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b3678: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x2b3678u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b367c: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x2b367cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b3680: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x2b3680u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b3684: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x2b3684u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b3688: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x2b3688u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b368c: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x2b368cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b3690: 0x1012  mflo        $v0
    ctx->pc = 0x2b3690u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b3694: 0x3810  mfhi        $a3
    ctx->pc = 0x2b3694u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2b3698: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b3698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b369c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2b369cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2b36a0: 0xa0820007  sb          $v0, 0x7($a0)
    ctx->pc = 0x2b36a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b36a4: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x2b36a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2b36a8: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x2b36a8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2b36ac: 0x1012  mflo        $v0
    ctx->pc = 0x2b36acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b36b0: 0x1810  mfhi        $v1
    ctx->pc = 0x2b36b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b36b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b36b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b36b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b36bc: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x2b36bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b36c0: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x2b36c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b36c4: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x2b36c4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2b36c8: 0x1012  mflo        $v0
    ctx->pc = 0x2b36c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b36cc: 0x1810  mfhi        $v1
    ctx->pc = 0x2b36ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b36d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b36d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b36d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b36d8: 0xa0820005  sb          $v0, 0x5($a0)
    ctx->pc = 0x2b36d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b36dc: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x2b36dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2b36e0: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x2b36e0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2b36e4: 0x1012  mflo        $v0
    ctx->pc = 0x2b36e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b36e8: 0x1810  mfhi        $v1
    ctx->pc = 0x2b36e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b36ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b36f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b36f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b36f4: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x2b36f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b36f8: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x2b36f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b36fc: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x2b36fcu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2b3700: 0x1012  mflo        $v0
    ctx->pc = 0x2b3700u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b3704: 0x1810  mfhi        $v1
    ctx->pc = 0x2b3704u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b3708: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b3708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b370c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b370cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b3710: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2b3710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3714: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x2b3714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2b3718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b371c: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x2b371cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2b3720: 0x1012  mflo        $v0
    ctx->pc = 0x2b3720u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b3724: 0x1810  mfhi        $v1
    ctx->pc = 0x2b3724u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b3728: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b3728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b372c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b372cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b3730: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2b3730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3734: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3734u;
        // 0x2b3738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B373Cu;
    // 0x2b373c: 0x0  nop
    ctx->pc = 0x2b373cu;
    // NOP
    ctx->pc = 0x2b3740u;
}
