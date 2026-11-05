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

// Function: sub_003D5F70
// Address: 0x3d5f70 - 0x3d5fe4
void sub_003D5F70_0x3d5f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5F70_0x3d5f70");
#endif

    switch (ctx->pc) {
        case 0x3d5f70u: goto label_3d5f70;
        case 0x3d5f74u: goto label_3d5f74;
        case 0x3d5f78u: goto label_3d5f78;
        case 0x3d5f7cu: goto label_3d5f7c;
        case 0x3d5f80u: goto label_3d5f80;
        case 0x3d5f84u: goto label_3d5f84;
        case 0x3d5f88u: goto label_3d5f88;
        case 0x3d5f8cu: goto label_3d5f8c;
        case 0x3d5f90u: goto label_3d5f90;
        case 0x3d5f94u: goto label_3d5f94;
        case 0x3d5f98u: goto label_3d5f98;
        case 0x3d5f9cu: goto label_3d5f9c;
        case 0x3d5fa0u: goto label_3d5fa0;
        case 0x3d5fa4u: goto label_3d5fa4;
        case 0x3d5fa8u: goto label_3d5fa8;
        case 0x3d5facu: goto label_3d5fac;
        case 0x3d5fb0u: goto label_3d5fb0;
        case 0x3d5fb4u: goto label_3d5fb4;
        case 0x3d5fb8u: goto label_3d5fb8;
        case 0x3d5fbcu: goto label_3d5fbc;
        case 0x3d5fc0u: goto label_3d5fc0;
        case 0x3d5fc4u: goto label_3d5fc4;
        case 0x3d5fc8u: goto label_3d5fc8;
        case 0x3d5fccu: goto label_3d5fcc;
        case 0x3d5fd0u: goto label_3d5fd0;
        case 0x3d5fd4u: goto label_3d5fd4;
        case 0x3d5fd8u: goto label_3d5fd8;
        case 0x3d5fdcu: goto label_3d5fdc;
        case 0x3d5fe0u: goto label_3d5fe0;
        default: break;
    }

    ctx->pc = 0x3d5f70u;

label_3d5f70:
    // 0x3d5f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d5f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d5f74:
    // 0x3d5f74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3d5f78:
    // 0x3d5f78: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3d5f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_3d5f7c:
    // 0x3d5f7c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d5f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d5f80:
    // 0x3d5f80: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3d5f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3d5f84:
    // 0x3d5f84: 0x24512630  addiu       $s1, $v0, 0x2630
    ctx->pc = 0x3d5f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
label_3d5f88:
    // 0x3d5f88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d5f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d5f8c:
    // 0x3d5f8c: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x3d5f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
label_3d5f90:
    // 0x3d5f90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3d5f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3d5f94:
    // 0x3d5f94: 0xc0f56de  jal         func_3D5B78
label_3d5f98:
    if (ctx->pc == 0x3D5F98u) {
        ctx->pc = 0x3D5F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F94u;
        // 0x3d5f98: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5F9Cu;
        goto label_3d5f9c;
    }
    ctx->pc = 0x3D5F94u;
    SET_GPR_U32(ctx, 31, 0x3D5F9Cu);
    ctx->pc = 0x3D5F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5F94u;
    // 0x3d5f98: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5B78u, 0x3D5F94u, 0x3D5F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F9Cu;
label_3d5f9c:
    // 0x3d5f9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d5f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5fa0:
    // 0x3d5fa0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d5fa4:
    if (ctx->pc == 0x3D5FA4u) {
        ctx->pc = 0x3D5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FA0u;
        // 0x3d5fa4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FA8u;
        goto label_3d5fa8;
    }
    ctx->pc = 0x3D5FA0u;
    {
        const bool branch_taken_0x3d5fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FA0u;
        // 0x3d5fa4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5fa0) {
            ctx->pc = 0x3D5FB0u;
            goto label_3d5fb0;
        }
    }
    ctx->pc = 0x3D5FA8u;
label_3d5fa8:
    // 0x3d5fa8: 0xc0f55b4  jal         func_3D56D0
label_3d5fac:
    if (ctx->pc == 0x3D5FACu) {
        ctx->pc = 0x3D5FB0u;
        goto label_3d5fb0;
    }
    ctx->pc = 0x3D5FA8u;
    SET_GPR_U32(ctx, 31, 0x3D5FB0u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D5FA8u, 0x3D5FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5FB0u;
label_3d5fb0:
    // 0x3d5fb0: 0x26422470  addiu       $v0, $s2, 0x2470
    ctx->pc = 0x3d5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9328));
label_3d5fb4:
    // 0x3d5fb4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d5fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3d5fb8:
    // 0x3d5fb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d5fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d5fbc:
    // 0x3d5fbc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d5fc0:
    // 0x3d5fc0: 0x40f809  jalr        $v0
label_3d5fc4:
    if (ctx->pc == 0x3D5FC4u) {
        ctx->pc = 0x3D5FC8u;
        goto label_3d5fc8;
    }
    ctx->pc = 0x3D5FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5FC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5FC0u, 0x3D5FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5FC8u;
label_3d5fc8:
    // 0x3d5fc8: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3d5fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
label_3d5fcc:
    // 0x3d5fcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d5fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5fd0:
    // 0x3d5fd0: 0x24c677e0  addiu       $a2, $a2, 0x77E0
    ctx->pc = 0x3d5fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30688));
label_3d5fd4:
    // 0x3d5fd4: 0xc0f570c  jal         func_3D5C30
label_3d5fd8:
    if (ctx->pc == 0x3D5FD8u) {
        ctx->pc = 0x3D5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FD4u;
        // 0x3d5fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FDCu;
        goto label_3d5fdc;
    }
    ctx->pc = 0x3D5FD4u;
    SET_GPR_U32(ctx, 31, 0x3D5FDCu);
    ctx->pc = 0x3D5FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5FD4u;
    // 0x3d5fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5C30u, 0x3D5FD4u, 0x3D5FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5FDCu;
label_3d5fdc:
    // 0x3d5fdc: 0xc0f55b4  jal         func_3D56D0
label_3d5fe0:
    if (ctx->pc == 0x3D5FE0u) {
        ctx->pc = 0x3D5FE4u;
        goto label_fallthrough_0x3d5fdc;
    }
    ctx->pc = 0x3D5FDCu;
    SET_GPR_U32(ctx, 31, 0x3D5FE4u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D5FDCu, 0x3D5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x3d5fdc:
    ctx->pc = 0x3D5FE4u;
}
