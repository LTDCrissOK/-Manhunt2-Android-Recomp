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

// Function: sub_0023FA18
// Address: 0x23fa18 - 0x23fa98
void sub_0023FA18_0x23fa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FA18_0x23fa18");
#endif

    switch (ctx->pc) {
        case 0x23fa44u: goto label_23fa44;
        case 0x23fa5cu: goto label_23fa5c;
        case 0x23fa70u: goto label_23fa70;
        case 0x23fa80u: goto label_23fa80;
        default: break;
    }

    ctx->pc = 0x23fa18u;

    // 0x23fa18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23fa1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fa20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23fa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23fa24: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x23FA24u;
    {
        const bool branch_taken_0x23fa24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA24u;
        // 0x23fa28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa24) {
            ctx->pc = 0x23FA78u;
            goto label_23fa78;
        }
    }
    ctx->pc = 0x23FA2Cu;
    // 0x23fa2c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x23fa30: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23fa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x23fa34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FA34u;
    {
        const bool branch_taken_0x23fa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fa34) {
            ctx->pc = 0x23FA54u;
            goto label_23fa54;
        }
    }
    ctx->pc = 0x23FA3Cu;
    // 0x23fa3c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x23FA3Cu;
    SET_GPR_U32(ctx, 31, 0x23FA44u);
    ctx->pc = 0x23FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA3Cu;
    // 0x23fa40: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23FA3Cu, 0x23FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA44u;
label_23fa44:
    // 0x23fa44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23fa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23fa48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23FA4Cu;
    {
        const bool branch_taken_0x23fa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA4Cu;
        // 0x23fa50: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa4c) {
            ctx->pc = 0x23FA68u;
            goto label_23fa68;
        }
    }
    ctx->pc = 0x23FA54u;
label_23fa54:
    // 0x23fa54: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x23FA54u;
    SET_GPR_U32(ctx, 31, 0x23FA5Cu);
    ctx->pc = 0x23FA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA54u;
    // 0x23fa58: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23FA54u, 0x23FA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA5Cu;
label_23fa5c:
    // 0x23fa5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23fa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23fa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23fa64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23fa68:
    // 0x23fa68: 0xc0d59bc  jal         func_3566F0
    ctx->pc = 0x23FA68u;
    SET_GPR_U32(ctx, 31, 0x23FA70u);
    ctx->pc = 0x3566F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3566F0u, 0x23FA68u, 0x23FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA70u;
label_23fa70:
    // 0x23fa70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23FA70u;
    {
        const bool branch_taken_0x23fa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA70u;
        // 0x23fa74: 0xae020fc8  sw          $v0, 0xFC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa70) {
            ctx->pc = 0x23FA84u;
            goto label_23fa84;
        }
    }
    ctx->pc = 0x23FA78u;
label_23fa78:
    // 0x23fa78: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x23FA78u;
    SET_GPR_U32(ctx, 31, 0x23FA80u);
    ctx->pc = 0x23FA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA78u;
    // 0x23fa7c: 0x8e040fc8  lw          $a0, 0xFC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x23FA78u, 0x23FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA80u;
label_23fa80:
    // 0x23fa80: 0xae000fc8  sw          $zero, 0xFC8($s0)
    ctx->pc = 0x23fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4040), GPR_U32(ctx, 0));
label_23fa84:
    // 0x23fa84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fa84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fa88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23fa88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fa8c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA8Cu;
        // 0x23fa90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FA94u;
    // 0x23fa94: 0x0  nop
    ctx->pc = 0x23fa94u;
    // NOP
    ctx->pc = 0x23fa98u;
}
