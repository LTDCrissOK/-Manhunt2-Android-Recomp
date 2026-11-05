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

// Function: sub_003AE438
// Address: 0x3ae438 - 0x3ae4b8
void sub_003AE438_0x3ae438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE438_0x3ae438");
#endif

    ctx->pc = 0x3ae438u;

    // 0x3ae438: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3ae438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae43c: 0x84e20098  lh          $v0, 0x98($a3)
    ctx->pc = 0x3ae43cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x3ae440: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AE440u;
    {
        const bool branch_taken_0x3ae440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE440u;
        // 0x3ae444: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae440) {
            ctx->pc = 0x3AE468u;
            goto label_3ae468;
        }
    }
    ctx->pc = 0x3AE448u;
    // 0x3ae448: 0x80e2000f  lb          $v0, 0xF($a3)
    ctx->pc = 0x3ae448u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
    // 0x3ae44c: 0xace80048  sw          $t0, 0x48($a3)
    ctx->pc = 0x3ae44cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 8));
    // 0x3ae450: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x3ae450u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ae454: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AE454u;
    {
        const bool branch_taken_0x3ae454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae454) {
            ctx->pc = 0x3AE458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE454u;
            // 0x3ae458: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE45Cu;
            goto label_3ae45c;
        }
    }
    ctx->pc = 0x3AE45Cu;
label_3ae45c:
    // 0x3ae45c: 0x1812  mflo        $v1
    ctx->pc = 0x3ae45cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3ae460: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3AE460u;
    {
        const bool branch_taken_0x3ae460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE460u;
        // 0x3ae464: 0xace00074  sw          $zero, 0x74($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae460) {
            ctx->pc = 0x3AE49Cu;
            goto label_3ae49c;
        }
    }
    ctx->pc = 0x3AE468u;
label_3ae468:
    // 0x3ae468: 0x80e2000d  lb          $v0, 0xD($a3)
    ctx->pc = 0x3ae468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x3ae46c: 0x80e5000e  lb          $a1, 0xE($a3)
    ctx->pc = 0x3ae46cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x3ae470: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x3ae470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3ae474: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x3ae474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x3ae478: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x3ae478u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3ae47c: 0xace80048  sw          $t0, 0x48($a3)
    ctx->pc = 0x3ae47cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 8));
    // 0x3ae480: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3ae480u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3ae484: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3ae484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ae488: 0x70c2001a  div1        $zero, $a2, $v0
    ctx->pc = 0x3ae488u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 6); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x3ae48c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AE48Cu;
    {
        const bool branch_taken_0x3ae48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae48c) {
            ctx->pc = 0x3AE490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE48Cu;
            // 0x3ae490: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE494u;
            goto label_3ae494;
        }
    }
    ctx->pc = 0x3AE494u;
label_3ae494:
    // 0x3ae494: 0xace00074  sw          $zero, 0x74($a3)
    ctx->pc = 0x3ae494u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
    // 0x3ae498: 0x70001812  mflo1       $v1
    ctx->pc = 0x3ae498u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
label_3ae49c:
    // 0x3ae49c: 0xace3004c  sw          $v1, 0x4C($a3)
    ctx->pc = 0x3ae49cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 3));
    // 0x3ae4a0: 0xace000f4  sw          $zero, 0xF4($a3)
    ctx->pc = 0x3ae4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    // 0x3ae4a4: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x3ae4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x3ae4a8: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x3ae4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x3ae4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4ACu;
        // 0x3ae4b0: 0xace000f8  sw          $zero, 0xF8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE4B4u;
    // 0x3ae4b4: 0x0  nop
    ctx->pc = 0x3ae4b4u;
    // NOP
    ctx->pc = 0x3ae4b8u;
}
