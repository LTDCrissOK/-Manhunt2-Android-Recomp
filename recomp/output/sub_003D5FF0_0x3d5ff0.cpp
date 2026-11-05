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

// Function: sub_003D5FF0
// Address: 0x3d5ff0 - 0x3d6064
void sub_003D5FF0_0x3d5ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5FF0_0x3d5ff0");
#endif

    switch (ctx->pc) {
        case 0x3d5ff0u: goto label_3d5ff0;
        case 0x3d5ff4u: goto label_3d5ff4;
        case 0x3d5ff8u: goto label_3d5ff8;
        case 0x3d5ffcu: goto label_3d5ffc;
        case 0x3d6000u: goto label_3d6000;
        case 0x3d6004u: goto label_3d6004;
        case 0x3d6008u: goto label_3d6008;
        case 0x3d600cu: goto label_3d600c;
        case 0x3d6010u: goto label_3d6010;
        case 0x3d6014u: goto label_3d6014;
        case 0x3d6018u: goto label_3d6018;
        case 0x3d601cu: goto label_3d601c;
        case 0x3d6020u: goto label_3d6020;
        case 0x3d6024u: goto label_3d6024;
        case 0x3d6028u: goto label_3d6028;
        case 0x3d602cu: goto label_3d602c;
        case 0x3d6030u: goto label_3d6030;
        case 0x3d6034u: goto label_3d6034;
        case 0x3d6038u: goto label_3d6038;
        case 0x3d603cu: goto label_3d603c;
        case 0x3d6040u: goto label_3d6040;
        case 0x3d6044u: goto label_3d6044;
        case 0x3d6048u: goto label_3d6048;
        case 0x3d604cu: goto label_3d604c;
        case 0x3d6050u: goto label_3d6050;
        case 0x3d6054u: goto label_3d6054;
        case 0x3d6058u: goto label_3d6058;
        case 0x3d605cu: goto label_3d605c;
        case 0x3d6060u: goto label_3d6060;
        default: break;
    }

    ctx->pc = 0x3d5ff0u;

label_3d5ff0:
    // 0x3d5ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d5ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d5ff4:
    // 0x3d5ff4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3d5ff8:
    // 0x3d5ff8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3d5ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_3d5ffc:
    // 0x3d5ffc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d6000:
    // 0x3d6000: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3d6000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3d6004:
    // 0x3d6004: 0x24512618  addiu       $s1, $v0, 0x2618
    ctx->pc = 0x3d6004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 9752));
label_3d6008:
    // 0x3d6008: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d6008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d600c:
    // 0x3d600c: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x3d600cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
label_3d6010:
    // 0x3d6010: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3d6010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3d6014:
    // 0x3d6014: 0xc0f56de  jal         func_3D5B78
label_3d6018:
    if (ctx->pc == 0x3D6018u) {
        ctx->pc = 0x3D6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6014u;
        // 0x3d6018: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D601Cu;
        goto label_3d601c;
    }
    ctx->pc = 0x3D6014u;
    SET_GPR_U32(ctx, 31, 0x3D601Cu);
    ctx->pc = 0x3D6018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6014u;
    // 0x3d6018: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5B78u, 0x3D6014u, 0x3D601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D601Cu;
label_3d601c:
    // 0x3d601c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d601cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6020:
    // 0x3d6020: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d6024:
    if (ctx->pc == 0x3D6024u) {
        ctx->pc = 0x3D6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6020u;
        // 0x3d6024: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6028u;
        goto label_3d6028;
    }
    ctx->pc = 0x3D6020u;
    {
        const bool branch_taken_0x3d6020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6020u;
        // 0x3d6024: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6020) {
            ctx->pc = 0x3D6030u;
            goto label_3d6030;
        }
    }
    ctx->pc = 0x3D6028u;
label_3d6028:
    // 0x3d6028: 0xc0f55b4  jal         func_3D56D0
label_3d602c:
    if (ctx->pc == 0x3D602Cu) {
        ctx->pc = 0x3D6030u;
        goto label_3d6030;
    }
    ctx->pc = 0x3D6028u;
    SET_GPR_U32(ctx, 31, 0x3D6030u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D6028u, 0x3D6030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6030u;
label_3d6030:
    // 0x3d6030: 0x26422470  addiu       $v0, $s2, 0x2470
    ctx->pc = 0x3d6030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9328));
label_3d6034:
    // 0x3d6034: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d6034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3d6038:
    // 0x3d6038: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d6038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d603c:
    // 0x3d603c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d6040:
    // 0x3d6040: 0x40f809  jalr        $v0
label_3d6044:
    if (ctx->pc == 0x3D6044u) {
        ctx->pc = 0x3D6048u;
        goto label_3d6048;
    }
    ctx->pc = 0x3D6040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D6048u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6040u, 0x3D6048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6048u;
label_3d6048:
    // 0x3d6048: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3d6048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
label_3d604c:
    // 0x3d604c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d604cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6050:
    // 0x3d6050: 0x24c67748  addiu       $a2, $a2, 0x7748
    ctx->pc = 0x3d6050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30536));
label_3d6054:
    // 0x3d6054: 0xc0f570c  jal         func_3D5C30
label_3d6058:
    if (ctx->pc == 0x3D6058u) {
        ctx->pc = 0x3D6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6054u;
        // 0x3d6058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D605Cu;
        goto label_3d605c;
    }
    ctx->pc = 0x3D6054u;
    SET_GPR_U32(ctx, 31, 0x3D605Cu);
    ctx->pc = 0x3D6058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6054u;
    // 0x3d6058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5C30u, 0x3D6054u, 0x3D605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D605Cu;
label_3d605c:
    // 0x3d605c: 0xc0f55b4  jal         func_3D56D0
label_3d6060:
    if (ctx->pc == 0x3D6060u) {
        ctx->pc = 0x3D6064u;
        goto label_fallthrough_0x3d605c;
    }
    ctx->pc = 0x3D605Cu;
    SET_GPR_U32(ctx, 31, 0x3D6064u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D605Cu, 0x3D6064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x3d605c:
    ctx->pc = 0x3D6064u;
}
