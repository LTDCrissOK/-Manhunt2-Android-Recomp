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

// Function: sub_001A6A30
// Address: 0x1a6a30 - 0x1a6ae0
void sub_001A6A30_0x1a6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6A30_0x1a6a30");
#endif

    switch (ctx->pc) {
        case 0x1a6a70u: goto label_1a6a70;
        case 0x1a6a94u: goto label_1a6a94;
        case 0x1a6aa0u: goto label_1a6aa0;
        case 0x1a6ac8u: goto label_1a6ac8;
        default: break;
    }

    ctx->pc = 0x1a6a30u;

    // 0x1a6a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6a34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6a38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a40: 0x4a00002  bltz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6A40u;
    {
        const bool branch_taken_0x1a6a40 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1A6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A40u;
        // 0x1a6a44: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a40) {
            ctx->pc = 0x1A6A4Cu;
            goto label_1a6a4c;
        }
    }
    ctx->pc = 0x1A6A48u;
    // 0x1a6a48: 0xae0501c8  sw          $a1, 0x1C8($s0)
    ctx->pc = 0x1a6a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 5));
label_1a6a4c:
    // 0x1a6a4c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a6a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a6a50: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1a6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1a6a54: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6A54u;
    {
        const bool branch_taken_0x1a6a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A54u;
        // 0x1a6a58: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a54) {
            ctx->pc = 0x1A6A78u;
            goto label_1a6a78;
        }
    }
    ctx->pc = 0x1A6A5Cu;
    // 0x1a6a5c: 0x8e0601c8  lw          $a2, 0x1C8($s0)
    ctx->pc = 0x1a6a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x1a6a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a64: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1a6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1a6a68: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6A68u;
    SET_GPR_U32(ctx, 31, 0x1A6A70u);
    ctx->pc = 0x1A6A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A68u;
    // 0x1a6a6c: 0x24c60514  addiu       $a2, $a2, 0x514 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6A68u, 0x1A6A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A70u;
label_1a6a70:
    // 0x1a6a70: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A6A70u;
    {
        const bool branch_taken_0x1a6a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A70u;
        // 0x1a6a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a70) {
            ctx->pc = 0x1A6ACCu;
            goto label_1a6acc;
        }
    }
    ctx->pc = 0x1A6A78u;
label_1a6a78:
    // 0x1a6a78: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A6A78u;
    {
        const bool branch_taken_0x1a6a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A78u;
        // 0x1a6a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a78) {
            ctx->pc = 0x1A6AB8u;
            goto label_1a6ab8;
        }
    }
    ctx->pc = 0x1A6A80u;
    // 0x1a6a80: 0x8e0601c8  lw          $a2, 0x1C8($s0)
    ctx->pc = 0x1a6a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x1a6a84: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1a6a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1a6a88: 0x8e11014c  lw          $s1, 0x14C($s0)
    ctx->pc = 0x1a6a88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1a6a8c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6A8Cu;
    SET_GPR_U32(ctx, 31, 0x1A6A94u);
    ctx->pc = 0x1A6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A8Cu;
    // 0x1a6a90: 0x24c604ec  addiu       $a2, $a2, 0x4EC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6A8Cu, 0x1A6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A94u;
label_1a6a94:
    // 0x1a6a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a98: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x1A6A98u;
    SET_GPR_U32(ctx, 31, 0x1A6AA0u);
    ctx->pc = 0x1A6A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A98u;
    // 0x1a6a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x1A6A98u, 0x1A6AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6AA0u;
label_1a6aa0:
    // 0x1a6aa0: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1a6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1a6aa4: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1a6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a6aa8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6AA8u;
    {
        const bool branch_taken_0x1a6aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AA8u;
        // 0x1a6aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6aa8) {
            ctx->pc = 0x1A6AC8u;
            goto label_1a6ac8;
        }
    }
    ctx->pc = 0x1A6AB0u;
    // 0x1a6ab0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6AB0u;
    {
        const bool branch_taken_0x1a6ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AB0u;
        // 0x1a6ab4: 0xae11014c  sw          $s1, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ab0) {
            ctx->pc = 0x1A6ACCu;
            goto label_1a6acc;
        }
    }
    ctx->pc = 0x1A6AB8u;
label_1a6ab8:
    // 0x1a6ab8: 0x8e0601c8  lw          $a2, 0x1C8($s0)
    ctx->pc = 0x1a6ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x1a6abc: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x1a6abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1a6ac0: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6AC0u;
    SET_GPR_U32(ctx, 31, 0x1A6AC8u);
    ctx->pc = 0x1A6AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6AC0u;
    // 0x1a6ac4: 0x24c6051e  addiu       $a2, $a2, 0x51E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1310));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6AC0u, 0x1A6AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6AC8u;
label_1a6ac8:
    // 0x1a6ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6acc:
    // 0x1a6acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6ad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6ad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AD8u;
        // 0x1a6adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6AE0u;
}
