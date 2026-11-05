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

// Function: sub_00116500
// Address: 0x116500 - 0x116570
void sub_00116500_0x116500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116500_0x116500");
#endif

    ctx->pc = 0x116500u;

    // 0x116500: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x116500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x116504: 0x8cc40ff8  lw          $a0, 0xFF8($a2)
    ctx->pc = 0x116504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4088)));
    // 0x116508: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x116508u;
    {
        const bool branch_taken_0x116508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x116508) {
            ctx->pc = 0x11650Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116508u;
            // 0x11650c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116518u;
            goto label_116518;
        }
    }
    ctx->pc = 0x116510u;
    // 0x116510: 0x3e00008  jr          $ra
    ctx->pc = 0x116510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116510u;
        // 0x116514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116518u;
label_116518:
    // 0x116518: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x116518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x11651c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11651cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116520: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x116520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x116524: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x116524u;
    {
        const bool branch_taken_0x116524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x116528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116524u;
        // 0x116528: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116524) {
            ctx->pc = 0x116538u;
            goto label_116538;
        }
    }
    ctx->pc = 0x11652Cu;
    // 0x11652c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x11652cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x116530: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116530u;
    {
        const bool branch_taken_0x116530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x116530) {
            ctx->pc = 0x116540u;
            goto label_116540;
        }
    }
    ctx->pc = 0x116538u;
label_116538:
    // 0x116538: 0x4a30003  bgezl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116538u;
    {
        const bool branch_taken_0x116538 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x116538) {
            ctx->pc = 0x11653Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116538u;
            // 0x11653c: 0x90c2047d  lbu         $v0, 0x47D($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116548u;
            goto label_116548;
        }
    }
    ctx->pc = 0x116540u;
label_116540:
    // 0x116540: 0x3e00008  jr          $ra
    ctx->pc = 0x116540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116540u;
        // 0x116544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116548u;
label_116548:
    // 0x116548: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116548u;
    {
        const bool branch_taken_0x116548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116548u;
        // 0x11654c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116548) {
            ctx->pc = 0x116564u;
            goto label_116564;
        }
    }
    ctx->pc = 0x116550u;
    // 0x116550: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x116550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x116554: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x116554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x116558: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x116558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x11655c: 0x3e00008  jr          $ra
    ctx->pc = 0x11655Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11655Cu;
        // 0x116560: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11655Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116564u;
label_116564:
    // 0x116564: 0x3e00008  jr          $ra
    ctx->pc = 0x116564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116564u;
        // 0x116568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11656Cu;
    // 0x11656c: 0x0  nop
    ctx->pc = 0x11656cu;
    // NOP
    ctx->pc = 0x116570u;
}
