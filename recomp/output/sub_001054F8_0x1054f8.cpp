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

// Function: sub_001054F8
// Address: 0x1054f8 - 0x105570
void sub_001054F8_0x1054f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001054F8_0x1054f8");
#endif

    switch (ctx->pc) {
        case 0x105528u: goto label_105528;
        default: break;
    }

    ctx->pc = 0x1054f8u;

    // 0x1054f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1054f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1054fc: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1054fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x105500: 0x8c47bd50  lw          $a3, -0x42B0($v0)
    ctx->pc = 0x105500u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x105504: 0x24a63d20  addiu       $a2, $a1, 0x3D20
    ctx->pc = 0x105504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 15648));
    // 0x105508: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x105508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10550c: 0x8ce30fe8  lw          $v1, 0xFE8($a3)
    ctx->pc = 0x10550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4072)));
    // 0x105510: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x105510u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x105514: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x105514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x105518: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x105518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4B3D2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B3D2Cu, _value); } while (0);
    // 0x10551c: 0x1021026  xor         $v0, $t0, $v0
    ctx->pc = 0x10551cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x105520: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x105520u;
    {
        const bool branch_taken_0x105520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105520u;
        // 0x105524: 0x2c460001  sltiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105520) {
            ctx->pc = 0x105538u;
            goto label_105538;
        }
    }
    ctx->pc = 0x105528u;
label_105528:
    // 0x105528: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x105528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10552c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x10552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x105530: 0x1031826  xor         $v1, $t0, $v1
    ctx->pc = 0x105530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x105534: 0x83300a  movz        $a2, $a0, $v1
    ctx->pc = 0x105534u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
label_105538:
    // 0x105538: 0x24a43d20  addiu       $a0, $a1, 0x3D20
    ctx->pc = 0x105538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15648));
    // 0x10553c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x10553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x105540: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x105540u;
    {
        const bool branch_taken_0x105540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105540u;
        // 0x105544: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105540) {
            ctx->pc = 0x10554Cu;
            goto label_10554c;
        }
    }
    ctx->pc = 0x105548u;
    // 0x105548: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10554c:
    // 0x10554c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10554Cu;
    {
        const bool branch_taken_0x10554c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10554c) {
            ctx->pc = 0x10555Cu;
            goto label_10555c;
        }
    }
    ctx->pc = 0x105554u;
    // 0x105554: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x105554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x105558: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x105558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_10555c:
    // 0x10555c: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x10555Cu;
    {
        const bool branch_taken_0x10555c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10555c) {
            ctx->pc = 0x105560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10555Cu;
            // 0x105560: 0x8c620fe8  lw          $v0, 0xFE8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105528;
        }
    }
    ctx->pc = 0x105564u;
    // 0x105564: 0x3e00008  jr          $ra
    ctx->pc = 0x105564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105564u;
        // 0x105568: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10556Cu;
    // 0x10556c: 0x0  nop
    ctx->pc = 0x10556cu;
    // NOP
    ctx->pc = 0x105570u;
}
