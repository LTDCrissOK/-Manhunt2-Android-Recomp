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

// Function: sub_0023F2A0
// Address: 0x23f2a0 - 0x23f330
void sub_0023F2A0_0x23f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F2A0_0x23f2a0");
#endif

    switch (ctx->pc) {
        case 0x23f2d4u: goto label_23f2d4;
        case 0x23f2dcu: goto label_23f2dc;
        case 0x23f2e4u: goto label_23f2e4;
        case 0x23f2f4u: goto label_23f2f4;
        case 0x23f304u: goto label_23f304;
        case 0x23f30cu: goto label_23f30c;
        case 0x23f314u: goto label_23f314;
        default: break;
    }

    ctx->pc = 0x23f2a0u;

    // 0x23f2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f2a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23f2a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f2ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f2b0: 0x24900718  addiu       $s0, $a0, 0x718
    ctx->pc = 0x23f2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1816));
    // 0x23f2b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23f2b8: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x23f2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23f2bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23f2c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23f2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f2c8: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x23f2c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23f2cc: 0xc0763f2  jal         func_1D8FC8
    ctx->pc = 0x23F2CCu;
    SET_GPR_U32(ctx, 31, 0x23F2D4u);
    ctx->pc = 0x23F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2CCu;
    // 0x23f2d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x23F2CCu, 0x23F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2D4u;
label_23f2d4:
    // 0x23f2d4: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x23F2D4u;
    SET_GPR_U32(ctx, 31, 0x23F2DCu);
    ctx->pc = 0x23F2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2D4u;
    // 0x23f2d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x23F2D4u, 0x23F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2DCu;
label_23f2dc:
    // 0x23f2dc: 0xc076de4  jal         func_1DB790
    ctx->pc = 0x23F2DCu;
    SET_GPR_U32(ctx, 31, 0x23F2E4u);
    ctx->pc = 0x23F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2DCu;
    // 0x23f2e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x23F2DCu, 0x23F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2E4u;
label_23f2e4:
    // 0x23f2e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f2e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23f2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f2ec: 0xc076970  jal         func_1DA5C0
    ctx->pc = 0x23F2ECu;
    SET_GPR_U32(ctx, 31, 0x23F2F4u);
    ctx->pc = 0x23F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2ECu;
    // 0x23f2f0: 0x24053200  addiu       $a1, $zero, 0x3200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA5C0u, 0x23F2ECu, 0x23F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2F4u;
label_23f2f4:
    // 0x23f2f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23f2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f2f8: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x23f2f8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x23f2fc: 0xc0763f2  jal         func_1D8FC8
    ctx->pc = 0x23F2FCu;
    SET_GPR_U32(ctx, 31, 0x23F304u);
    ctx->pc = 0x23F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2FCu;
    // 0x23f300: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x23F2FCu, 0x23F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F304u;
label_23f304:
    // 0x23f304: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x23F304u;
    SET_GPR_U32(ctx, 31, 0x23F30Cu);
    ctx->pc = 0x23F308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F304u;
    // 0x23f308: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x23F304u, 0x23F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F30Cu;
label_23f30c:
    // 0x23f30c: 0xc076de4  jal         func_1DB790
    ctx->pc = 0x23F30Cu;
    SET_GPR_U32(ctx, 31, 0x23F314u);
    ctx->pc = 0x23F310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F30Cu;
    // 0x23f310: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x23F30Cu, 0x23F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F314u;
label_23f314:
    // 0x23f314: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23f314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f31c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f31cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f320: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f324: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23f324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f328: 0x3e00008  jr          $ra
    ctx->pc = 0x23F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F328u;
        // 0x23f32c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F330u;
}
