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

// Function: sub_002C3FC8
// Address: 0x2c3fc8 - 0x2c4028
void sub_002C3FC8_0x2c3fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3FC8_0x2c3fc8");
#endif

    switch (ctx->pc) {
        case 0x2c3fe0u: goto label_2c3fe0;
        case 0x2c3fecu: goto label_2c3fec;
        case 0x2c3ffcu: goto label_2c3ffc;
        case 0x2c4008u: goto label_2c4008;
        default: break;
    }

    ctx->pc = 0x2c3fc8u;

    // 0x2c3fc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c3fcc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2c3fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2c3fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fd4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c3fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2c3fd8: 0xc0b0d44  jal         func_2C3510
    ctx->pc = 0x2C3FD8u;
    SET_GPR_U32(ctx, 31, 0x2C3FE0u);
    ctx->pc = 0x2C3FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3FD8u;
    // 0x2c3fdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3510u, 0x2C3FD8u, 0x2C3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FE0u;
label_2c3fe0:
    // 0x2c3fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fe4: 0xc0b115a  jal         func_2C4568
    ctx->pc = 0x2C3FE4u;
    SET_GPR_U32(ctx, 31, 0x2C3FECu);
    ctx->pc = 0x2C3FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3FE4u;
    // 0x2c3fe8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4568u, 0x2C3FE4u, 0x2C3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FECu;
label_2c3fec:
    // 0x2c3fec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3FECu;
    {
        const bool branch_taken_0x2c3fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FECu;
        // 0x2c3ff0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3fec) {
            ctx->pc = 0x2C4014u;
            goto label_2c4014;
        }
    }
    ctx->pc = 0x2C3FF4u;
    // 0x2c3ff4: 0xc0b0818  jal         func_2C2060
    ctx->pc = 0x2C3FF4u;
    SET_GPR_U32(ctx, 31, 0x2C3FFCu);
    ctx->pc = 0x2C3FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3FF4u;
    // 0x2c3ff8: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2060u, 0x2C3FF4u, 0x2C3FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FFCu;
label_2c3ffc:
    // 0x2c3ffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4000: 0xc0b0d7e  jal         func_2C35F8
    ctx->pc = 0x2C4000u;
    SET_GPR_U32(ctx, 31, 0x2C4008u);
    ctx->pc = 0x2C4004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4000u;
    // 0x2c4004: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C35F8u, 0x2C4000u, 0x2C4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4008u;
label_2c4008:
    // 0x2c4008: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c4008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c400c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C400Cu;
    {
        const bool branch_taken_0x2c400c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C400Cu;
        // 0x2c4010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c400c) {
            ctx->pc = 0x2C4018u;
            goto label_2c4018;
        }
    }
    ctx->pc = 0x2C4014u;
label_2c4014:
    // 0x2c4014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4018:
    // 0x2c4018: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2c4018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c401c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c401cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c4020: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4020u;
        // 0x2c4024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4028u;
}
