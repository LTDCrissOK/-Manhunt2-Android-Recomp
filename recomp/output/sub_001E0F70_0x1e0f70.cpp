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

// Function: sub_001E0F70
// Address: 0x1e0f70 - 0x1e1018
void sub_001E0F70_0x1e0f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0F70_0x1e0f70");
#endif

    switch (ctx->pc) {
        case 0x1e0f9cu: goto label_1e0f9c;
        case 0x1e0fb8u: goto label_1e0fb8;
        case 0x1e0fd0u: goto label_1e0fd0;
        default: break;
    }

    ctx->pc = 0x1e0f70u;

    // 0x1e0f70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e0f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e0f74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e0f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e0f78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e0f78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e0f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e0f80: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e0f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1e0f84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e0f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e0f88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f8c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e0f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e0f90: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1e0f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1e0f94: 0xc07a768  jal         func_1E9DA0
    ctx->pc = 0x1E0F94u;
    SET_GPR_U32(ctx, 31, 0x1E0F9Cu);
    ctx->pc = 0x1E0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0F94u;
    // 0x1e0f98: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9DA0u, 0x1E0F94u, 0x1E0F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0F9Cu;
label_1e0f9c:
    // 0x1e0f9c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e0fa0: 0x8c6291f4  lw          $v0, -0x6E0C($v1)
    ctx->pc = 0x1e0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91F4u));
    // 0x1e0fa4: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E0FA4u;
    {
        const bool branch_taken_0x1e0fa4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FA4u;
        // 0x1e0fa8: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0fa4) {
            ctx->pc = 0x1E0FF0u;
            goto label_1e0ff0;
        }
    }
    ctx->pc = 0x1E0FACu;
    // 0x1e0fac: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1e0facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1e0fb0: 0x3c13001e  lui         $s3, 0x1E
    ctx->pc = 0x1e0fb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)30 << 16));
    // 0x1e0fb4: 0x2451c758  addiu       $s1, $v0, -0x38A8
    ctx->pc = 0x1e0fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
label_1e0fb8:
    // 0x1e0fb8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1e0fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e0fbc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e0fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fc0: 0x26670f40  addiu       $a3, $s3, 0xF40
    ctx->pc = 0x1e0fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 3904));
    // 0x1e0fc4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1e0fc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fc8: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x1E0FC8u;
    SET_GPR_U32(ctx, 31, 0x1E0FD0u);
    ctx->pc = 0x1E0FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0FC8u;
    // 0x1e0fcc: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x1E0FC8u, 0x1E0FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0FD0u;
label_1e0fd0:
    // 0x1e0fd0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0fd4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0FD4u;
    {
        const bool branch_taken_0x1e0fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FD4u;
        // 0x1e0fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0fd4) {
            ctx->pc = 0x1E0FF4u;
            goto label_1e0ff4;
        }
    }
    ctx->pc = 0x1E0FDCu;
    // 0x1e0fdc: 0x8e8291f4  lw          $v0, -0x6E0C($s4)
    ctx->pc = 0x1e0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939124)));
    // 0x1e0fe0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e0fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e0fe4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1e0fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e0fe8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1E0FE8u;
    {
        const bool branch_taken_0x1e0fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FE8u;
        // 0x1e0fec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0fe8) {
            ctx->pc = 0x1E0FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0fb8;
        }
    }
    ctx->pc = 0x1E0FF0u;
label_1e0ff0:
    // 0x1e0ff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0ff4:
    // 0x1e0ff4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e0ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0ff8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e0ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e0ffc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e0ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1000: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e1000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e1004: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e1004u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1008: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e1008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e100c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E100Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E100Cu;
        // 0x1e1010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E100Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1014u;
    // 0x1e1014: 0x0  nop
    ctx->pc = 0x1e1014u;
    // NOP
    ctx->pc = 0x1e1018u;
}
