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

// Function: sub_0030F3A8
// Address: 0x30f3a8 - 0x30f408
void sub_0030F3A8_0x30f3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F3A8_0x30f3a8");
#endif

    switch (ctx->pc) {
        case 0x30f3d8u: goto label_30f3d8;
        case 0x30f3e4u: goto label_30f3e4;
        default: break;
    }

    ctx->pc = 0x30f3a8u;

    // 0x30f3a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30f3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30f3ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30f3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30f3b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30f3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30f3b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30f3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30f3b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30f3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30f3bc: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30F3BCu;
    {
        const bool branch_taken_0x30f3bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F3BCu;
        // 0x30f3c0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f3bc) {
            ctx->pc = 0x30F3F0u;
            goto label_30f3f0;
        }
    }
    ctx->pc = 0x30F3C4u;
    // 0x30f3c4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x30F3C4u;
    {
        const bool branch_taken_0x30f3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F3C4u;
        // 0x30f3c8: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f3c4) {
            ctx->pc = 0x30F3F0u;
            goto label_30f3f0;
        }
    }
    ctx->pc = 0x30F3CCu;
    // 0x30f3cc: 0x2411095f  addiu       $s1, $zero, 0x95F
    ctx->pc = 0x30f3ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2399));
    // 0x30f3d0: 0x245081a0  addiu       $s0, $v0, -0x7E60
    ctx->pc = 0x30f3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934944));
    // 0x30f3d4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x30f3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30f3d8:
    // 0x30f3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f3dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30F3DCu;
    SET_GPR_U32(ctx, 31, 0x30F3E4u);
    ctx->pc = 0x30F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F3DCu;
    // 0x30f3e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30F3DCu, 0x30F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F3E4u;
label_30f3e4:
    // 0x30f3e4: 0x0  nop
    ctx->pc = 0x30f3e4u;
    // NOP
    // 0x30f3e8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30F3E8u;
    {
        const bool branch_taken_0x30f3e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x30F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F3E8u;
        // 0x30f3ec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f3e8) {
            ctx->pc = 0x30F3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f3d8;
        }
    }
    ctx->pc = 0x30F3F0u;
label_30f3f0:
    // 0x30f3f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30f3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f3f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30f3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30f3f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30f3f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f3fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x30f3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30f400: 0x3e00008  jr          $ra
    ctx->pc = 0x30F400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F400u;
        // 0x30f404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F408u;
}
