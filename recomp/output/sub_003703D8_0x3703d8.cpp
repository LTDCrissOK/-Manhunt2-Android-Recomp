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

// Function: sub_003703D8
// Address: 0x3703d8 - 0x370438
void sub_003703D8_0x3703d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003703D8_0x3703d8");
#endif

    ctx->pc = 0x3703d8u;

    // 0x3703d8: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x3703d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x3703dc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3703dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3703e0: 0x8d04cc38  lw          $a0, -0x33C8($t0)
    ctx->pc = 0x3703e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCC38u));
    // 0x3703e4: 0x3463f31d  ori         $v1, $v1, 0xF31D
    ctx->pc = 0x3703e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62237);
    // 0x3703e8: 0x240641a7  addiu       $a2, $zero, 0x41A7
    ctx->pc = 0x3703e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16807));
    // 0x3703ec: 0x24070b14  addiu       $a3, $zero, 0xB14
    ctx->pc = 0x3703ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2836));
    // 0x3703f0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3703f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3703f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3703f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3703f8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3703F8u;
    {
        const bool branch_taken_0x3703f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3703f8) {
            ctx->pc = 0x3703FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3703F8u;
            // 0x3703fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x370400u;
            goto label_370400;
        }
    }
    ctx->pc = 0x370400u;
label_370400:
    // 0x370400: 0x3442f31d  ori         $v0, $v0, 0xF31D
    ctx->pc = 0x370400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62237);
    // 0x370404: 0x2012  mflo        $a0
    ctx->pc = 0x370404u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x370408: 0x2810  mfhi        $a1
    ctx->pc = 0x370408u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x37040c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x37040cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x370410: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x370410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x370414: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x370414u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x370418: 0x1ca00005  bgtz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x370418u;
    {
        const bool branch_taken_0x370418 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x37041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370418u;
        // 0x37041c: 0xad05cc38  sw          $a1, -0x33C8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294954040), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370418) {
            ctx->pc = 0x370430u;
            goto label_370430;
        }
    }
    ctx->pc = 0x370420u;
    // 0x370420: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x370420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x370424: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370428: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x370428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37042c: 0xad02cc38  sw          $v0, -0x33C8($t0)
    ctx->pc = 0x37042cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294954040), GPR_U32(ctx, 2));
label_370430:
    // 0x370430: 0x3e00008  jr          $ra
    ctx->pc = 0x370430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370430u;
        // 0x370434: 0x8d02cc38  lw          $v0, -0x33C8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294954040)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370438u;
}
