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

// Function: sub_00271B40
// Address: 0x271b40 - 0x271be8
void sub_00271B40_0x271b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271B40_0x271b40");
#endif

    switch (ctx->pc) {
        case 0x271b9cu: goto label_271b9c;
        case 0x271bb0u: goto label_271bb0;
        case 0x271bbcu: goto label_271bbc;
        case 0x271bc8u: goto label_271bc8;
        case 0x271bd4u: goto label_271bd4;
        default: break;
    }

    ctx->pc = 0x271b40u;

    // 0x271b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x271b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x271b44: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x271b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x271b48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x271b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x271b4c: 0x24422a78  addiu       $v0, $v0, 0x2A78
    ctx->pc = 0x271b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10872));
    // 0x271b50: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x271b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x271b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x271b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x271b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x271b5c: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x271b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    // 0x271b60: 0x8e0302cc  lw          $v1, 0x2CC($s0)
    ctx->pc = 0x271b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x271b64: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x271B64u;
    {
        const bool branch_taken_0x271b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B64u;
        // 0x271b68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b64) {
            ctx->pc = 0x271BA4u;
            goto label_271ba4;
        }
    }
    ctx->pc = 0x271B6Cu;
    // 0x271b6c: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x271b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x271b70: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x271b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x271b74: 0x24844778  addiu       $a0, $a0, 0x4778
    ctx->pc = 0x271b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18296));
    // 0x271b78: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x271b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x271b7c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x271b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x271b80: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x271b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b84: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x271b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x271b88: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x271b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x271b8c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x271b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x271b90: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x271b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x271b94: 0xc0f7f34  jal         func_3DFCD0
    ctx->pc = 0x271B94u;
    SET_GPR_U32(ctx, 31, 0x271B9Cu);
    ctx->pc = 0x271B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271B94u;
    // 0x271b98: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFCD0u, 0x271B94u, 0x271B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B9Cu;
label_271b9c:
    // 0x271b9c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x271b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x271ba0: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x271ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
label_271ba4:
    // 0x271ba4: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x271ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x271ba8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x271BA8u;
    SET_GPR_U32(ctx, 31, 0x271BB0u);
    ctx->pc = 0x271BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BA8u;
    // 0x271bac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x271BA8u, 0x271BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BB0u;
label_271bb0:
    // 0x271bb0: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x271bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x271bb4: 0xc0b4bba  jal         func_2D2EE8
    ctx->pc = 0x271BB4u;
    SET_GPR_U32(ctx, 31, 0x271BBCu);
    ctx->pc = 0x271BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BB4u;
    // 0x271bb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2EE8u, 0x271BB4u, 0x271BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BBCu;
label_271bbc:
    // 0x271bbc: 0x26040228  addiu       $a0, $s0, 0x228
    ctx->pc = 0x271bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x271bc0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x271BC0u;
    SET_GPR_U32(ctx, 31, 0x271BC8u);
    ctx->pc = 0x271BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BC0u;
    // 0x271bc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x271BC0u, 0x271BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BC8u;
label_271bc8:
    // 0x271bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271bcc: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x271BCCu;
    SET_GPR_U32(ctx, 31, 0x271BD4u);
    ctx->pc = 0x271BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BCCu;
    // 0x271bd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x271BCCu, 0x271BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BD4u;
label_271bd4:
    // 0x271bd4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x271bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271bd8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x271bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x271bdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x271bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271be0: 0x3e00008  jr          $ra
    ctx->pc = 0x271BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BE0u;
        // 0x271be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271BE8u;
}
