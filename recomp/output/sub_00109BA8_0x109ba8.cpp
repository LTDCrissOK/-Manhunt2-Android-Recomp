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

// Function: sub_00109BA8
// Address: 0x109ba8 - 0x109c50
void sub_00109BA8_0x109ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109BA8_0x109ba8");
#endif

    switch (ctx->pc) {
        case 0x109bccu: goto label_109bcc;
        case 0x109c04u: goto label_109c04;
        case 0x109c2cu: goto label_109c2c;
        default: break;
    }

    ctx->pc = 0x109ba8u;

    // 0x109ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x109bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109bb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x109bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x109bb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109bbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x109bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x109bc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x109bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x109bc4: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109BC4u;
    SET_GPR_U32(ctx, 31, 0x109BCCu);
    ctx->pc = 0x109BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BC4u;
    // 0x109bc8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109BC4u, 0x109BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BCCu;
label_109bcc:
    // 0x109bcc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bd0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x109bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x109bd4: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x109BD4u;
    {
        const bool branch_taken_0x109bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x109BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BD4u;
        // 0x109bd8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bd4) {
            ctx->pc = 0x109C2Cu;
            goto label_109c2c;
        }
    }
    ctx->pc = 0x109BDCu;
    // 0x109bdc: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x109bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x109be0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x109be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x109be4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109be8: 0x8c72001c  lw          $s2, 0x1C($v1)
    ctx->pc = 0x109be8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109bec: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x109becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x109bf0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x109BF0u;
    {
        const bool branch_taken_0x109bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BF0u;
        // 0x109bf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bf0) {
            ctx->pc = 0x109C30u;
            goto label_109c30;
        }
    }
    ctx->pc = 0x109BF8u;
    // 0x109bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bfc: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109BFCu;
    SET_GPR_U32(ctx, 31, 0x109C04u);
    ctx->pc = 0x109C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BFCu;
    // 0x109c00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109BFCu, 0x109C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C04u;
label_109c04:
    // 0x109c04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109c08: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x109c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x109c0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109c10: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x109c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109c14: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x109c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x109c18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109C18u;
    {
        const bool branch_taken_0x109c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C18u;
        // 0x109c1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c18) {
            ctx->pc = 0x109C30u;
            goto label_109c30;
        }
    }
    ctx->pc = 0x109C20u;
    // 0x109c20: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x109c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x109c24: 0xc044140  jal         func_110500
    ctx->pc = 0x109C24u;
    SET_GPR_U32(ctx, 31, 0x109C2Cu);
    ctx->pc = 0x109C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C24u;
    // 0x109c28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110500u, 0x109C24u, 0x109C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C2Cu;
label_109c2c:
    // 0x109c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109c30:
    // 0x109c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109c34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x109c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109c38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x109c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109c3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x109c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109c40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x109c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109c44: 0x3e00008  jr          $ra
    ctx->pc = 0x109C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C44u;
        // 0x109c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109C4Cu;
    // 0x109c4c: 0x0  nop
    ctx->pc = 0x109c4cu;
    // NOP
    ctx->pc = 0x109c50u;
}
