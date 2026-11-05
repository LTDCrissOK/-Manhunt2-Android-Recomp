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

// Function: sub_00204FC0
// Address: 0x204fc0 - 0x205050
void sub_00204FC0_0x204fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204FC0_0x204fc0");
#endif

    switch (ctx->pc) {
        case 0x205000u: goto label_205000;
        case 0x205014u: goto label_205014;
        case 0x20501cu: goto label_20501c;
        case 0x205030u: goto label_205030;
        case 0x20503cu: goto label_20503c;
        default: break;
    }

    ctx->pc = 0x204fc0u;

    // 0x204fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x204fc4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x204fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x204fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x204fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x204fcc: 0x244214f8  addiu       $v0, $v0, 0x14F8
    ctx->pc = 0x204fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5368));
    // 0x204fd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x204fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x204fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x204fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x204fdc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x204fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x204fe0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x204fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x204fe4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x204FE4u;
    {
        const bool branch_taken_0x204fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x204FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FE4u;
        // 0x204fe8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204fe4) {
            ctx->pc = 0x205030u;
            goto label_205030;
        }
    }
    ctx->pc = 0x204FECu;
    // 0x204fec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x204fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x204ff0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x204FF0u;
    {
        const bool branch_taken_0x204ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204ff0) {
            ctx->pc = 0x205014u;
            goto label_205014;
        }
    }
    ctx->pc = 0x204FF8u;
    // 0x204ff8: 0xc0e78b6  jal         func_39E2D8
    ctx->pc = 0x204FF8u;
    SET_GPR_U32(ctx, 31, 0x205000u);
    ctx->pc = 0x39E2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E2D8u, 0x204FF8u, 0x205000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205000u;
label_205000:
    // 0x205000: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x205000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x205004: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205004u;
    {
        const bool branch_taken_0x205004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205004) {
            ctx->pc = 0x205014u;
            goto label_205014;
        }
    }
    ctx->pc = 0x20500Cu;
    // 0x20500c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x20500Cu;
    SET_GPR_U32(ctx, 31, 0x205014u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x20500Cu, 0x205014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205014u;
label_205014:
    // 0x205014: 0xc0e6c80  jal         func_39B200
    ctx->pc = 0x205014u;
    SET_GPR_U32(ctx, 31, 0x20501Cu);
    ctx->pc = 0x205018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205014u;
    // 0x205018: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B200u, 0x205014u, 0x20501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20501Cu;
label_20501c:
    // 0x20501c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x20501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x205020: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x205020u;
    {
        const bool branch_taken_0x205020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205020) {
            ctx->pc = 0x205024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205020u;
            // 0x205024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205034u;
            goto label_205034;
        }
    }
    ctx->pc = 0x205028u;
    // 0x205028: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x205028u;
    SET_GPR_U32(ctx, 31, 0x205030u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x205028u, 0x205030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205030u;
label_205030:
    // 0x205030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205034:
    // 0x205034: 0xc08184a  jal         func_206128
    ctx->pc = 0x205034u;
    SET_GPR_U32(ctx, 31, 0x20503Cu);
    ctx->pc = 0x205038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205034u;
    // 0x205038: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206128u, 0x205034u, 0x20503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20503Cu;
label_20503c:
    // 0x20503c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20503cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x205044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205048: 0x3e00008  jr          $ra
    ctx->pc = 0x205048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205048u;
        // 0x20504c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205050u;
}
