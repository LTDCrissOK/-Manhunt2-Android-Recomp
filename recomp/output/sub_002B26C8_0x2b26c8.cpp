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

// Function: sub_002B26C8
// Address: 0x2b26c8 - 0x2b2718
void sub_002B26C8_0x2b26c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B26C8_0x2b26c8");
#endif

    switch (ctx->pc) {
        case 0x2b26e0u: goto label_2b26e0;
        default: break;
    }

    ctx->pc = 0x2b26c8u;

    // 0x2b26c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b26cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B26CCu;
    {
        const bool branch_taken_0x2b26cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B26D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26CCu;
        // 0x2b26d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26cc) {
            ctx->pc = 0x2B2710u;
            goto label_2b2710;
        }
    }
    ctx->pc = 0x2B26D4u;
    // 0x2b26d4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2b26d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b26d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b26d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b26dc: 0x0  nop
    ctx->pc = 0x2b26dcu;
    // NOP
label_2b26e0:
    // 0x2b26e0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2b26e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b26e4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B26E4u;
    {
        const bool branch_taken_0x2b26e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26E4u;
        // 0x2b26e8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26e4) {
            ctx->pc = 0x2B2704u;
            goto label_2b2704;
        }
    }
    ctx->pc = 0x2B26ECu;
    // 0x2b26ec: 0x8cc200b8  lw          $v0, 0xB8($a2)
    ctx->pc = 0x2b26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x2b26f0: 0x8c430220  lw          $v1, 0x220($v0)
    ctx->pc = 0x2b26f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x2b26f4: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B26F4u;
    {
        const bool branch_taken_0x2b26f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2B26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26F4u;
        // 0x2b26f8: 0xe8102b  sltu        $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26f4) {
            ctx->pc = 0x2B2708u;
            goto label_2b2708;
        }
    }
    ctx->pc = 0x2B26FCu;
    // 0x2b26fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B26FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26FCu;
        // 0x2b2700: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B26FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2704u;
label_2b2704:
    // 0x2b2704: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x2b2704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_2b2708:
    // 0x2b2708: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B2708u;
    {
        const bool branch_taken_0x2b2708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2708u;
        // 0x2b270c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2708) {
            ctx->pc = 0x2B26E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b26e0;
        }
    }
    ctx->pc = 0x2B2710u;
label_2b2710:
    // 0x2b2710: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2710u;
        // 0x2b2714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2718u;
}
