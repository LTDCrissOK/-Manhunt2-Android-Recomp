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

// Function: sub_003BAE28
// Address: 0x3bae28 - 0x3baec8
void sub_003BAE28_0x3bae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BAE28_0x3bae28");
#endif

    switch (ctx->pc) {
        case 0x3bae4cu: goto label_3bae4c;
        case 0x3bae68u: goto label_3bae68;
        case 0x3bae84u: goto label_3bae84;
        case 0x3bae98u: goto label_3bae98;
        case 0x3baea4u: goto label_3baea4;
        default: break;
    }

    ctx->pc = 0x3bae28u;

    // 0x3bae28: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3bae28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3bae2c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3bae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3bae30: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x3bae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x3bae34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3bae34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bae38: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x3bae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x3bae3c: 0x24840ab0  addiu       $a0, $a0, 0xAB0
    ctx->pc = 0x3bae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2736));
    // 0x3bae40: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x3bae40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x3bae44: 0xc0f3872  jal         func_3CE1C8
    ctx->pc = 0x3BAE44u;
    SET_GPR_U32(ctx, 31, 0x3BAE4Cu);
    ctx->pc = 0x3BAE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAE44u;
    // 0x3bae48: 0xffb00100  sd          $s0, 0x100($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE1C8u, 0x3BAE44u, 0x3BAE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAE4Cu;
label_3bae4c:
    // 0x3bae4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3bae4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bae50: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BAE50u;
    {
        const bool branch_taken_0x3bae50 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x3BAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE50u;
        // 0x3bae54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae50) {
            ctx->pc = 0x3BAE60u;
            goto label_3bae60;
        }
    }
    ctx->pc = 0x3BAE58u;
    // 0x3bae58: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3BAE58u;
    {
        const bool branch_taken_0x3bae58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE58u;
        // 0x3bae5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae58) {
            ctx->pc = 0x3BAEB0u;
            goto label_3baeb0;
        }
    }
    ctx->pc = 0x3BAE60u;
label_3bae60:
    // 0x3bae60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BAE60u;
    {
        const bool branch_taken_0x3bae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE60u;
        // 0x3bae64: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae60) {
            ctx->pc = 0x3BAE6Cu;
            goto label_3bae6c;
        }
    }
    ctx->pc = 0x3BAE68u;
label_3bae68:
    // 0x3bae68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3bae68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3bae6c:
    // 0x3bae6c: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x3bae6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3bae70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BAE70u;
    {
        const bool branch_taken_0x3bae70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE70u;
        // 0x3bae74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae70) {
            ctx->pc = 0x3BAE90u;
            goto label_3bae90;
        }
    }
    ctx->pc = 0x3BAE78u;
    // 0x3bae78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bae7c: 0xc0f3a04  jal         func_3CE810
    ctx->pc = 0x3BAE7Cu;
    SET_GPR_U32(ctx, 31, 0x3BAE84u);
    ctx->pc = 0x3BAE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAE7Cu;
    // 0x3bae80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE810u, 0x3BAE7Cu, 0x3BAE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAE84u;
label_3bae84:
    // 0x3bae84: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x3bae84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bae88: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3BAE88u;
    {
        const bool branch_taken_0x3bae88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE88u;
        // 0x3bae8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae88) {
            ctx->pc = 0x3BAE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bae68;
        }
    }
    ctx->pc = 0x3BAE90u;
label_3bae90:
    // 0x3bae90: 0xc0f3916  jal         func_3CE458
    ctx->pc = 0x3BAE90u;
    SET_GPR_U32(ctx, 31, 0x3BAE98u);
    ctx->pc = 0x3BAE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAE90u;
    // 0x3bae94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE458u, 0x3BAE90u, 0x3BAE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAE98u;
label_3bae98:
    // 0x3bae98: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x3bae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x3bae9c: 0xc0f02a8  jal         func_3C0AA0
    ctx->pc = 0x3BAE9Cu;
    SET_GPR_U32(ctx, 31, 0x3BAEA4u);
    ctx->pc = 0x3BAEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAE9Cu;
    // 0x3baea0: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0AA0u, 0x3BAE9Cu, 0x3BAEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAEA4u;
label_3baea4:
    // 0x3baea4: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x3baea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x3baea8: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x3baea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x3baeac: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3baeacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3baeb0:
    // 0x3baeb0: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x3baeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3baeb4: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x3baeb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3baeb8: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x3baeb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3baebc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x3baebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3baec0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BAEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAEC0u;
        // 0x3baec4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BAEC8u;
}
