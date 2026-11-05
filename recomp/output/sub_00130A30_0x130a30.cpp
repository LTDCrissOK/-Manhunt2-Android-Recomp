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

// Function: sub_00130A30
// Address: 0x130a30 - 0x130ab0
void sub_00130A30_0x130a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130A30_0x130a30");
#endif

    switch (ctx->pc) {
        case 0x130a60u: goto label_130a60;
        case 0x130a78u: goto label_130a78;
        case 0x130a84u: goto label_130a84;
        case 0x130a8cu: goto label_130a8c;
        default: break;
    }

    ctx->pc = 0x130a30u;

    // 0x130a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130a34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130a44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x130a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x130a48: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x130a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130a4c: 0x8c820258  lw          $v0, 0x258($a0)
    ctx->pc = 0x130a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x130a50: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x130A50u;
    {
        const bool branch_taken_0x130a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A50u;
        // 0x130a54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a50) {
            ctx->pc = 0x130A94u;
            goto label_130a94;
        }
    }
    ctx->pc = 0x130A58u;
    // 0x130a58: 0xc043920  jal         func_10E480
    ctx->pc = 0x130A58u;
    SET_GPR_U32(ctx, 31, 0x130A60u);
    ctx->pc = 0x130A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A58u;
    // 0x130a5c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130A58u, 0x130A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A60u;
label_130a60:
    // 0x130a60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a64: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x130A64u;
    {
        const bool branch_taken_0x130a64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A64u;
        // 0x130a68: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a64) {
            ctx->pc = 0x130A94u;
            goto label_130a94;
        }
    }
    ctx->pc = 0x130A6Cu;
    // 0x130a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a70: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130A70u;
    SET_GPR_U32(ctx, 31, 0x130A78u);
    ctx->pc = 0x130A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A70u;
    // 0x130a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130A70u, 0x130A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A78u;
label_130a78:
    // 0x130a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a7c: 0xc094f7a  jal         func_253DE8
    ctx->pc = 0x130A7Cu;
    SET_GPR_U32(ctx, 31, 0x130A84u);
    ctx->pc = 0x130A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A7Cu;
    // 0x130a80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253DE8u, 0x130A7Cu, 0x130A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A84u;
label_130a84:
    // 0x130a84: 0xc095216  jal         func_254858
    ctx->pc = 0x130A84u;
    SET_GPR_U32(ctx, 31, 0x130A8Cu);
    ctx->pc = 0x130A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A84u;
    // 0x130a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x130A84u, 0x130A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A8Cu;
label_130a8c:
    // 0x130a8c: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x130a8cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x130a90: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x130a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_130a94:
    // 0x130a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130a98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130a9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130aa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x130aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x130AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AA4u;
        // 0x130aa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130AACu;
    // 0x130aac: 0x0  nop
    ctx->pc = 0x130aacu;
    // NOP
    ctx->pc = 0x130ab0u;
}
