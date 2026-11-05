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

// Function: sub_001E62B0
// Address: 0x1e62b0 - 0x1e6320
void sub_001E62B0_0x1e62b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E62B0_0x1e62b0");
#endif

    switch (ctx->pc) {
        case 0x1e62d8u: goto label_1e62d8;
        case 0x1e62e0u: goto label_1e62e0;
        case 0x1e62e8u: goto label_1e62e8;
        default: break;
    }

    ctx->pc = 0x1e62b0u;

    // 0x1e62b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e62b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e62b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e62b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e62b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e62b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e62bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e62bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e62c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e62c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e62c4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e62c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e62c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E62C8u;
    {
        const bool branch_taken_0x1e62c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62C8u;
        // 0x1e62cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62c8) {
            ctx->pc = 0x1E6304u;
            goto label_1e6304;
        }
    }
    ctx->pc = 0x1E62D0u;
    // 0x1e62d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e62d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e62d4: 0x0  nop
    ctx->pc = 0x1e62d4u;
    // NOP
label_1e62d8:
    // 0x1e62d8: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E62D8u;
    SET_GPR_U32(ctx, 31, 0x1E62E0u);
    ctx->pc = 0x1E62DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E62D8u;
    // 0x1e62dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E62D8u, 0x1E62E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E62E0u;
label_1e62e0:
    // 0x1e62e0: 0xc0783dc  jal         func_1E0F70
    ctx->pc = 0x1E62E0u;
    SET_GPR_U32(ctx, 31, 0x1E62E8u);
    ctx->pc = 0x1E62E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E62E0u;
    // 0x1e62e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0F70u, 0x1E62E0u, 0x1E62E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E62E8u;
label_1e62e8:
    // 0x1e62e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E62E8u;
    {
        const bool branch_taken_0x1e62e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62E8u;
        // 0x1e62ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62e8) {
            ctx->pc = 0x1E6308u;
            goto label_1e6308;
        }
    }
    ctx->pc = 0x1E62F0u;
    // 0x1e62f0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e62f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e62f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e62f8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e62f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e62fc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E62FCu;
    {
        const bool branch_taken_0x1e62fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62FCu;
        // 0x1e6300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62fc) {
            ctx->pc = 0x1E62D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e62d8;
        }
    }
    ctx->pc = 0x1E6304u;
label_1e6304:
    // 0x1e6304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e6304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6308:
    // 0x1e6308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e630c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e630cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e6310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6314: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6314u;
        // 0x1e6318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E631Cu;
    // 0x1e631c: 0x0  nop
    ctx->pc = 0x1e631cu;
    // NOP
    ctx->pc = 0x1e6320u;
}
