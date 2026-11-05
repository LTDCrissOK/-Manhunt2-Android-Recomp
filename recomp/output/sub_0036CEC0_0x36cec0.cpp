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

// Function: sub_0036CEC0
// Address: 0x36cec0 - 0x36cf90
void sub_0036CEC0_0x36cec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CEC0_0x36cec0");
#endif

    switch (ctx->pc) {
        case 0x36cee0u: goto label_36cee0;
        case 0x36cee8u: goto label_36cee8;
        case 0x36cf18u: goto label_36cf18;
        case 0x36cf24u: goto label_36cf24;
        case 0x36cf2cu: goto label_36cf2c;
        case 0x36cf38u: goto label_36cf38;
        case 0x36cf44u: goto label_36cf44;
        case 0x36cf54u: goto label_36cf54;
        case 0x36cf64u: goto label_36cf64;
        case 0x36cf74u: goto label_36cf74;
        case 0x36cf7cu: goto label_36cf7c;
        default: break;
    }

    ctx->pc = 0x36cec0u;

    // 0x36cec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36cec4: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x36cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x36cec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36cecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36ced0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x36ced0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x36ced4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36ced8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x36CED8u;
    SET_GPR_U32(ctx, 31, 0x36CEE0u);
    ctx->pc = 0x36CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CED8u;
    // 0x36cedc: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x36CED8u, 0x36CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEE0u;
label_36cee0:
    // 0x36cee0: 0xc0dfe12  jal         func_37F848
    ctx->pc = 0x36CEE0u;
    SET_GPR_U32(ctx, 31, 0x36CEE8u);
    ctx->pc = 0x36CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CEE0u;
    // 0x36cee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F848u, 0x36CEE0u, 0x36CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEE8u;
label_36cee8:
    // 0x36cee8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x36cee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x36ceec: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x36ceecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x36cef0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x36cef0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x36cef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36cef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cef8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36cef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cefc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36cefcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cf00: 0x24c61660  addiu       $a2, $a2, 0x1660
    ctx->pc = 0x36cf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5728));
    // 0x36cf04: 0x2508cc08  addiu       $t0, $t0, -0x33F8
    ctx->pc = 0x36cf04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953992));
    // 0x36cf08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36cf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cf0c: 0xae02cc00  sw          $v0, -0x3400($s0)
    ctx->pc = 0x36cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953984), GPR_U32(ctx, 2));
    // 0x36cf10: 0xc0dfea4  jal         func_37FA90
    ctx->pc = 0x36CF10u;
    SET_GPR_U32(ctx, 31, 0x36CF18u);
    ctx->pc = 0x36CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF10u;
    // 0x36cf14: 0x24a515d0  addiu       $a1, $a1, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA90u, 0x36CF10u, 0x36CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF18u;
label_36cf18:
    // 0x36cf18: 0x8e04cc00  lw          $a0, -0x3400($s0)
    ctx->pc = 0x36cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953984)));
    // 0x36cf1c: 0xc0dff0e  jal         func_37FC38
    ctx->pc = 0x36CF1Cu;
    SET_GPR_U32(ctx, 31, 0x36CF24u);
    ctx->pc = 0x36CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF1Cu;
    // 0x36cf20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FC38u, 0x36CF1Cu, 0x36CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF24u;
label_36cf24:
    // 0x36cf24: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x36CF24u;
    SET_GPR_U32(ctx, 31, 0x36CF2Cu);
    ctx->pc = 0x36CF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF24u;
    // 0x36cf28: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x36CF24u, 0x36CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF2Cu;
label_36cf2c:
    // 0x36cf2c: 0x8e05cc00  lw          $a1, -0x3400($s0)
    ctx->pc = 0x36cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953984)));
    // 0x36cf30: 0xc0df60e  jal         func_37D838
    ctx->pc = 0x36CF30u;
    SET_GPR_U32(ctx, 31, 0x36CF38u);
    ctx->pc = 0x36CF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF30u;
    // 0x36cf34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D838u, 0x36CF30u, 0x36CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF38u;
label_36cf38:
    // 0x36cf38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36cf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cf3c: 0xc0df61c  jal         func_37D870
    ctx->pc = 0x36CF3Cu;
    SET_GPR_U32(ctx, 31, 0x36CF44u);
    ctx->pc = 0x36CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF3Cu;
    // 0x36cf40: 0xae22cc04  sw          $v0, -0x33FC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953988), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D870u, 0x36CF3Cu, 0x36CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF44u;
label_36cf44:
    // 0x36cf44: 0x8e24cc04  lw          $a0, -0x33FC($s1)
    ctx->pc = 0x36cf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953988)));
    // 0x36cf48: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x36cf48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x36cf4c: 0xc0df620  jal         func_37D880
    ctx->pc = 0x36CF4Cu;
    SET_GPR_U32(ctx, 31, 0x36CF54u);
    ctx->pc = 0x36CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF4Cu;
    // 0x36cf50: 0x24a580d8  addiu       $a1, $a1, -0x7F28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x36CF4Cu, 0x36CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF54u;
label_36cf54:
    // 0x36cf54: 0x8e24cc04  lw          $a0, -0x33FC($s1)
    ctx->pc = 0x36cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953988)));
    // 0x36cf58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x36cf58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x36cf5c: 0xc0df620  jal         func_37D880
    ctx->pc = 0x36CF5Cu;
    SET_GPR_U32(ctx, 31, 0x36CF64u);
    ctx->pc = 0x36CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF5Cu;
    // 0x36cf60: 0x24a515d0  addiu       $a1, $a1, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x36CF5Cu, 0x36CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF64u;
label_36cf64:
    // 0x36cf64: 0x8e24cc04  lw          $a0, -0x33FC($s1)
    ctx->pc = 0x36cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953988)));
    // 0x36cf68: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x36cf68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x36cf6c: 0xc0df620  jal         func_37D880
    ctx->pc = 0x36CF6Cu;
    SET_GPR_U32(ctx, 31, 0x36CF74u);
    ctx->pc = 0x36CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF6Cu;
    // 0x36cf70: 0x24a58fb8  addiu       $a1, $a1, -0x7048 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x36CF6Cu, 0x36CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF74u;
label_36cf74:
    // 0x36cf74: 0xc0df638  jal         func_37D8E0
    ctx->pc = 0x36CF74u;
    SET_GPR_U32(ctx, 31, 0x36CF7Cu);
    ctx->pc = 0x36CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF74u;
    // 0x36cf78: 0x8e24cc04  lw          $a0, -0x33FC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953988)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D8E0u, 0x36CF74u, 0x36CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF7Cu;
label_36cf7c:
    // 0x36cf7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36cf7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cf80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36cf80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cf84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36cf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cf88: 0x3e00008  jr          $ra
    ctx->pc = 0x36CF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CF88u;
        // 0x36cf8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CF90u;
}
