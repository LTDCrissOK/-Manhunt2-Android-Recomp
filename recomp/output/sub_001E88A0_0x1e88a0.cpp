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

// Function: sub_001E88A0
// Address: 0x1e88a0 - 0x1e8920
void sub_001E88A0_0x1e88a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E88A0_0x1e88a0");
#endif

    switch (ctx->pc) {
        case 0x1e88c8u: goto label_1e88c8;
        case 0x1e88e4u: goto label_1e88e4;
        case 0x1e8904u: goto label_1e8904;
        default: break;
    }

    ctx->pc = 0x1e88a0u;

    // 0x1e88a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e88a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e88a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1e88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1e88a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e88a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e88ac: 0x8c622b20  lw          $v0, 0x2B20($v1)
    ctx->pc = 0x1e88acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B20u));
    // 0x1e88b0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1e88b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e88b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e88b8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E88B8u;
    {
        const bool branch_taken_0x1e88b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E88BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88B8u;
        // 0x1e88bc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88b8) {
            ctx->pc = 0x1E8908u;
            goto label_1e8908;
        }
    }
    ctx->pc = 0x1E88C0u;
    // 0x1e88c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e88c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88c4: 0x8e232b20  lw          $v1, 0x2B20($s1)
    ctx->pc = 0x1e88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
label_1e88c8:
    // 0x1e88c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1e88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e88cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e88d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e88d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e88d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E88D4u;
    {
        const bool branch_taken_0x1e88d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88D4u;
        // 0x1e88d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88d4) {
            ctx->pc = 0x1E88E4u;
            goto label_1e88e4;
        }
    }
    ctx->pc = 0x1E88DCu;
    // 0x1e88dc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1E88DCu;
    SET_GPR_U32(ctx, 31, 0x1E88E4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1E88DCu, 0x1E88E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E88E4u;
label_1e88e4:
    // 0x1e88e4: 0x2e02003c  sltiu       $v0, $s0, 0x3C
    ctx->pc = 0x1e88e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x1e88e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E88E8u;
    {
        const bool branch_taken_0x1e88e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E88ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88E8u;
        // 0x1e88ec: 0x8e232b20  lw          $v1, 0x2B20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88e8) {
            ctx->pc = 0x1E88C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e88c8;
        }
    }
    ctx->pc = 0x1E88F0u;
    // 0x1e88f0: 0x8e242b20  lw          $a0, 0x2B20($s1)
    ctx->pc = 0x1e88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
    // 0x1e88f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E88F4u;
    {
        const bool branch_taken_0x1e88f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e88f4) {
            ctx->pc = 0x1E88F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E88F4u;
            // 0x1e88f8: 0xae202b20  sw          $zero, 0x2B20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 11040), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8908u;
            goto label_1e8908;
        }
    }
    ctx->pc = 0x1E88FCu;
    // 0x1e88fc: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1E88FCu;
    SET_GPR_U32(ctx, 31, 0x1E8904u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1E88FCu, 0x1E8904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8904u;
label_1e8904:
    // 0x1e8904: 0xae202b20  sw          $zero, 0x2B20($s1)
    ctx->pc = 0x1e8904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11040), GPR_U32(ctx, 0));
label_1e8908:
    // 0x1e8908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e8908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e890c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e890cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8914: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8914u;
        // 0x1e8918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E891Cu;
    // 0x1e891c: 0x0  nop
    ctx->pc = 0x1e891cu;
    // NOP
    ctx->pc = 0x1e8920u;
}
