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

// Function: sub_0020AC78
// Address: 0x20ac78 - 0x20acf8
void sub_0020AC78_0x20ac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AC78_0x20ac78");
#endif

    switch (ctx->pc) {
        case 0x20ac9cu: goto label_20ac9c;
        case 0x20aca4u: goto label_20aca4;
        case 0x20acb4u: goto label_20acb4;
        case 0x20acbcu: goto label_20acbc;
        case 0x20acd0u: goto label_20acd0;
        default: break;
    }

    ctx->pc = 0x20ac78u;

    // 0x20ac78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ac78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ac7c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x20ac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x20ac80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ac84: 0x24a5ac58  addiu       $a1, $a1, -0x53A8
    ctx->pc = 0x20ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945880));
    // 0x20ac88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20ac88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20ac8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20ac90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ac94: 0xc0f25a0  jal         func_3C9680
    ctx->pc = 0x20AC94u;
    SET_GPR_U32(ctx, 31, 0x20AC9Cu);
    ctx->pc = 0x20AC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AC94u;
    // 0x20ac98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9680u, 0x20AC94u, 0x20AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC9Cu;
label_20ac9c:
    // 0x20ac9c: 0xc082bfc  jal         func_20AFF0
    ctx->pc = 0x20AC9Cu;
    SET_GPR_U32(ctx, 31, 0x20ACA4u);
    ctx->pc = 0x20ACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AC9Cu;
    // 0x20aca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AFF0u, 0x20AC9Cu, 0x20ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACA4u;
label_20aca4:
    // 0x20aca4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20ACA4u;
    {
        const bool branch_taken_0x20aca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACA4u;
        // 0x20aca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aca4) {
            ctx->pc = 0x20ACE4u;
            goto label_20ace4;
        }
    }
    ctx->pc = 0x20ACACu;
    // 0x20acac: 0xc082c08  jal         func_20B020
    ctx->pc = 0x20ACACu;
    SET_GPR_U32(ctx, 31, 0x20ACB4u);
    ctx->pc = 0x20ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACACu;
    // 0x20acb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B020u, 0x20ACACu, 0x20ACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACB4u;
label_20acb4:
    // 0x20acb4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20ACB4u;
    SET_GPR_U32(ctx, 31, 0x20ACBCu);
    ctx->pc = 0x20ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACB4u;
    // 0x20acb8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20ACB4u, 0x20ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACBCu;
label_20acbc:
    // 0x20acbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20ACBCu;
    {
        const bool branch_taken_0x20acbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACBCu;
        // 0x20acc0: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acbc) {
            ctx->pc = 0x20ACE0u;
            goto label_20ace0;
        }
    }
    ctx->pc = 0x20ACC4u;
    // 0x20acc4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20acc8: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x20ACC8u;
    SET_GPR_U32(ctx, 31, 0x20ACD0u);
    ctx->pc = 0x20ACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACC8u;
    // 0x20accc: 0x24840e40  addiu       $a0, $a0, 0xE40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D65B8u, 0x20ACC8u, 0x20ACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACD0u;
label_20acd0:
    // 0x20acd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20acd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20acd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20ACD8u;
    {
        const bool branch_taken_0x20acd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACD8u;
        // 0x20acdc: 0xa2030048  sb          $v1, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acd8) {
            ctx->pc = 0x20ACE4u;
            goto label_20ace4;
        }
    }
    ctx->pc = 0x20ACE0u;
label_20ace0:
    // 0x20ace0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20ace0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ace4:
    // 0x20ace4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ace4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ace8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20ace8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20acec: 0x3e00008  jr          $ra
    ctx->pc = 0x20ACECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACECu;
        // 0x20acf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ACECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ACF4u;
    // 0x20acf4: 0x0  nop
    ctx->pc = 0x20acf4u;
    // NOP
    ctx->pc = 0x20acf8u;
}
