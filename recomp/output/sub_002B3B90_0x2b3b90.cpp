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

// Function: sub_002B3B90
// Address: 0x2b3b90 - 0x2b3c30
void sub_002B3B90_0x2b3b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3B90_0x2b3b90");
#endif

    switch (ctx->pc) {
        case 0x2b3bbcu: goto label_2b3bbc;
        case 0x2b3bccu: goto label_2b3bcc;
        default: break;
    }

    ctx->pc = 0x2b3b90u;

    // 0x2b3b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3b94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b3b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b3b9c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b3b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b3ba0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b3ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b3ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b3ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3bac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3bb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b3bb4: 0xc0ef1d2  jal         func_3BC748
    ctx->pc = 0x2B3BB4u;
    SET_GPR_U32(ctx, 31, 0x2B3BBCu);
    ctx->pc = 0x2B3BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3BB4u;
    // 0x2b3bb8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC748u, 0x2B3BB4u, 0x2B3BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3BBCu;
label_2b3bbc:
    // 0x2b3bbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b3bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3bc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b3bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3bc4: 0xc0ef0b2  jal         func_3BC2C8
    ctx->pc = 0x2B3BC4u;
    SET_GPR_U32(ctx, 31, 0x2B3BCCu);
    ctx->pc = 0x2B3BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3BC4u;
    // 0x2b3bc8: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B3BC4u, 0x2B3BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3BCCu;
label_2b3bcc:
    // 0x2b3bcc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2b3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b3bd0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3BD0u;
    {
        const bool branch_taken_0x2b3bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BD0u;
        // 0x2b3bd4: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bd0) {
            ctx->pc = 0x2B3BE4u;
            goto label_2b3be4;
        }
    }
    ctx->pc = 0x2B3BD8u;
    // 0x2b3bd8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b3bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b3bdc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B3BDCu;
    {
        const bool branch_taken_0x2b3bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BDCu;
        // 0x2b3be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bdc) {
            ctx->pc = 0x2B3C14u;
            goto label_2b3c14;
        }
    }
    ctx->pc = 0x2B3BE4u;
label_2b3be4:
    // 0x2b3be4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3BE4u;
    {
        const bool branch_taken_0x2b3be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BE4u;
        // 0x2b3be8: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3be4) {
            ctx->pc = 0x2B3BF8u;
            goto label_2b3bf8;
        }
    }
    ctx->pc = 0x2B3BECu;
    // 0x2b3bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3bf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3BF0u;
    {
        const bool branch_taken_0x2b3bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BF0u;
        // 0x2b3bf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bf0) {
            ctx->pc = 0x2B3C10u;
            goto label_2b3c10;
        }
    }
    ctx->pc = 0x2B3BF8u;
label_2b3bf8:
    // 0x2b3bf8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3BF8u;
    {
        const bool branch_taken_0x2b3bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BF8u;
        // 0x2b3bfc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bf8) {
            ctx->pc = 0x2B3C08u;
            goto label_2b3c08;
        }
    }
    ctx->pc = 0x2B3C00u;
    // 0x2b3c00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3C00u;
    {
        const bool branch_taken_0x2b3c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C00u;
        // 0x2b3c04: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c00) {
            ctx->pc = 0x2B3C14u;
            goto label_2b3c14;
        }
    }
    ctx->pc = 0x2B3C08u;
label_2b3c08:
    // 0x2b3c08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b3c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b3c0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b3c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b3c10:
    // 0x2b3c10: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2b3c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2b3c14:
    // 0x2b3c14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b3c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3c18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b3c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C1Cu;
        // 0x2b3c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3C24u;
    // 0x2b3c24: 0x0  nop
    ctx->pc = 0x2b3c24u;
    // NOP
    // 0x2b3c28: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2b3c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b3c2c: 0x0  nop
    ctx->pc = 0x2b3c2cu;
    // NOP
    ctx->pc = 0x2b3c30u;
}
