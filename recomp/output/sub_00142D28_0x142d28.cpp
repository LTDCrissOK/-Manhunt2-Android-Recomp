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

// Function: sub_00142D28
// Address: 0x142d28 - 0x142d80
void sub_00142D28_0x142d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142D28_0x142d28");
#endif

    switch (ctx->pc) {
        case 0x142d5cu: goto label_142d5c;
        case 0x142d68u: goto label_142d68;
        default: break;
    }

    ctx->pc = 0x142d28u;

    // 0x142d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142d2c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x142d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x142d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142d34: 0x24420818  addiu       $v0, $v0, 0x818
    ctx->pc = 0x142d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2072));
    // 0x142d38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x142d44: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x142d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x142d48: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x142d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x142d4c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x142D4Cu;
    {
        const bool branch_taken_0x142d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D4Cu;
        // 0x142d50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142d4c) {
            ctx->pc = 0x142D5Cu;
            goto label_142d5c;
        }
    }
    ctx->pc = 0x142D54u;
    // 0x142d54: 0xc050b74  jal         func_142DD0
    ctx->pc = 0x142D54u;
    SET_GPR_U32(ctx, 31, 0x142D5Cu);
    ctx->pc = 0x142DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142DD0u, 0x142D54u, 0x142D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D5Cu;
label_142d5c:
    // 0x142d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d60: 0xc04e4c4  jal         func_139310
    ctx->pc = 0x142D60u;
    SET_GPR_U32(ctx, 31, 0x142D68u);
    ctx->pc = 0x142D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D60u;
    // 0x142d64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139310u, 0x142D60u, 0x142D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D68u;
label_142d68:
    // 0x142d68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142d6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142d70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142d74: 0x3e00008  jr          $ra
    ctx->pc = 0x142D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D74u;
        // 0x142d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142D7Cu;
    // 0x142d7c: 0x0  nop
    ctx->pc = 0x142d7cu;
    // NOP
    ctx->pc = 0x142d80u;
}
