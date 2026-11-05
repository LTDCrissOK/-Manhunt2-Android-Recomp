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

// Function: sub_003D0808
// Address: 0x3d0808 - 0x3d08a0
void sub_003D0808_0x3d0808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0808_0x3d0808");
#endif

    switch (ctx->pc) {
        case 0x3d081cu: goto label_3d081c;
        case 0x3d0848u: goto label_3d0848;
        case 0x3d0864u: goto label_3d0864;
        case 0x3d086cu: goto label_3d086c;
        case 0x3d0874u: goto label_3d0874;
        case 0x3d0884u: goto label_3d0884;
        default: break;
    }

    ctx->pc = 0x3d0808u;

    // 0x3d0808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d0808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d080c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d0810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d0810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d0814: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3D0814u;
    SET_GPR_U32(ctx, 31, 0x3D081Cu);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3D0814u, 0x3D081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D081Cu;
label_3d081c:
    // 0x3d081c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d081cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0820: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3d0820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3d0824: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x3d0824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x3d0828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d0828u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x3d082c: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x3d082cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3d0830: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D0830u;
    {
        const bool branch_taken_0x3d0830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0830) {
            ctx->pc = 0x3D0850u;
            goto label_3d0850;
        }
    }
    ctx->pc = 0x3D0838u;
    // 0x3d0838: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D0838u;
    {
        const bool branch_taken_0x3d0838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0838u;
        // 0x3d083c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0838) {
            ctx->pc = 0x3D0888u;
            goto label_3d0888;
        }
    }
    ctx->pc = 0x3D0840u;
    // 0x3d0840: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3D0840u;
    SET_GPR_U32(ctx, 31, 0x3D0848u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3D0840u, 0x3D0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0848u;
label_3d0848:
    // 0x3d0848: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3D0848u;
    {
        const bool branch_taken_0x3d0848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0848u;
        // 0x3d084c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0848) {
            ctx->pc = 0x3D0888u;
            goto label_3d0888;
        }
    }
    ctx->pc = 0x3D0850u;
label_3d0850:
    // 0x3d0850: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3d0850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3d0854: 0x3484f3ff  ori         $a0, $a0, 0xF3FF
    ctx->pc = 0x3d0854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62463);
    // 0x3d0858: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x3d0858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3d085c: 0xc0f41a2  jal         func_3D0688
    ctx->pc = 0x3D085Cu;
    SET_GPR_U32(ctx, 31, 0x3D0864u);
    ctx->pc = 0x3D0860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D085Cu;
    // 0x3d0860: 0x34840080  ori         $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0688u, 0x3D085Cu, 0x3D0864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0864u;
label_3d0864:
    // 0x3d0864: 0xc0f4366  jal         func_3D0D98
    ctx->pc = 0x3D0864u;
    SET_GPR_U32(ctx, 31, 0x3D086Cu);
    ctx->pc = 0x3D0D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0D98u, 0x3D0864u, 0x3D086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D086Cu;
label_3d086c:
    // 0x3d086c: 0xc0f4228  jal         func_3D08A0
    ctx->pc = 0x3D086Cu;
    SET_GPR_U32(ctx, 31, 0x3D0874u);
    ctx->pc = 0x3D0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D086Cu;
    // 0x3d0870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D08A0u, 0x3D086Cu, 0x3D0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0874u;
label_3d0874:
    // 0x3d0874: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D0874u;
    {
        const bool branch_taken_0x3d0874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0874u;
        // 0x3d0878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0874) {
            ctx->pc = 0x3D0888u;
            goto label_3d0888;
        }
    }
    ctx->pc = 0x3D087Cu;
    // 0x3d087c: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3D087Cu;
    SET_GPR_U32(ctx, 31, 0x3D0884u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3D087Cu, 0x3D0884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0884u;
label_3d0884:
    // 0x3d0884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d0884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0888:
    // 0x3d0888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d0888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d088c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d088cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d0890: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0890u;
        // 0x3d0894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0898u;
    // 0x3d0898: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3d0898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3d089c: 0x0  nop
    ctx->pc = 0x3d089cu;
    // NOP
    ctx->pc = 0x3d08a0u;
}
