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

// Function: sub_0028F188
// Address: 0x28f188 - 0x28f200
void sub_0028F188_0x28f188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F188_0x28f188");
#endif

    switch (ctx->pc) {
        case 0x28f1b0u: goto label_28f1b0;
        case 0x28f1c4u: goto label_28f1c4;
        case 0x28f1e4u: goto label_28f1e4;
        default: break;
    }

    ctx->pc = 0x28f188u;

    // 0x28f188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28f188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28f18c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28f18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28f190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f194: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28f194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f198: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28f198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28f19c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x28f19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f1a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28f1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28f1a4: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x28f1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28f1a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28f1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28f1ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28f1acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28f1b0:
    // 0x28f1b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28f1b4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F1B4u;
    {
        const bool branch_taken_0x28f1b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f1b4) {
            ctx->pc = 0x28F1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F1B4u;
            // 0x28f1b8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F1C8u;
            goto label_28f1c8;
        }
    }
    ctx->pc = 0x28F1BCu;
    // 0x28f1bc: 0xc0a3b80  jal         func_28EE00
    ctx->pc = 0x28F1BCu;
    SET_GPR_U32(ctx, 31, 0x28F1C4u);
    ctx->pc = 0x28F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F1BCu;
    // 0x28f1c0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EE00u, 0x28F1BCu, 0x28F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F1C4u;
label_28f1c4:
    // 0x28f1c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x28f1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_28f1c8:
    // 0x28f1c8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28F1C8u;
    {
        const bool branch_taken_0x28f1c8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x28F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1C8u;
        // 0x28f1cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1c8) {
            ctx->pc = 0x28F1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f1b0;
        }
    }
    ctx->pc = 0x28F1D0u;
    // 0x28f1d0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x28f1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x28f1d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F1D4u;
    {
        const bool branch_taken_0x28f1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1D4u;
        // 0x28f1d8: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1d4) {
            ctx->pc = 0x28F1E4u;
            goto label_28f1e4;
        }
    }
    ctx->pc = 0x28F1DCu;
    // 0x28f1dc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x28F1DCu;
    SET_GPR_U32(ctx, 31, 0x28F1E4u);
    ctx->pc = 0x28F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F1DCu;
    // 0x28f1e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x28F1DCu, 0x28F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F1E4u;
label_28f1e4:
    // 0x28f1e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f1e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f1e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28f1e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f1ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28f1ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f1f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28f1f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28f1f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28f1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x28F1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1F8u;
        // 0x28f1fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F200u;
}
