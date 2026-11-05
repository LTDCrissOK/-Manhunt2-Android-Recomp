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

// Function: sub_0016BA20
// Address: 0x16ba20 - 0x16bad8
void sub_0016BA20_0x16ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BA20_0x16ba20");
#endif

    switch (ctx->pc) {
        case 0x16ba48u: goto label_16ba48;
        case 0x16ba90u: goto label_16ba90;
        case 0x16baa0u: goto label_16baa0;
        default: break;
    }

    ctx->pc = 0x16ba20u;

    // 0x16ba20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ba24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ba28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ba2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ba2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16ba30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba34: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x16BA34u;
    {
        const bool branch_taken_0x16ba34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA34u;
        // 0x16ba38: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba34) {
            ctx->pc = 0x16BABCu;
            goto label_16babc;
        }
    }
    ctx->pc = 0x16BA3Cu;
    // 0x16ba3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ba3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba40: 0xc05ab66  jal         func_16AD98
    ctx->pc = 0x16BA40u;
    SET_GPR_U32(ctx, 31, 0x16BA48u);
    ctx->pc = 0x16BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA40u;
    // 0x16ba44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AD98u, 0x16BA40u, 0x16BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA48u;
label_16ba48:
    // 0x16ba48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16ba48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba4c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x16ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16ba50: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16BA50u;
    {
        const bool branch_taken_0x16ba50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA50u;
        // 0x16ba54: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba50) {
            ctx->pc = 0x16BABCu;
            goto label_16babc;
        }
    }
    ctx->pc = 0x16BA58u;
    // 0x16ba58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16ba5c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16ba60: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x16ba60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16ba64: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16BA64u;
    {
        const bool branch_taken_0x16ba64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA64u;
        // 0x16ba68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba64) {
            ctx->pc = 0x16BAC0u;
            goto label_16bac0;
        }
    }
    ctx->pc = 0x16BA6Cu;
    // 0x16ba6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16ba70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BA70u;
    {
        const bool branch_taken_0x16ba70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA70u;
        // 0x16ba74: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba70) {
            ctx->pc = 0x16BA80u;
            goto label_16ba80;
        }
    }
    ctx->pc = 0x16BA78u;
    // 0x16ba78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16BA78u;
    {
        const bool branch_taken_0x16ba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA78u;
        // 0x16ba7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba78) {
            ctx->pc = 0x16BA84u;
            goto label_16ba84;
        }
    }
    ctx->pc = 0x16BA80u;
label_16ba80:
    // 0x16ba80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ba84:
    // 0x16ba84: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x16BA84u;
    {
        const bool branch_taken_0x16ba84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba84) {
            ctx->pc = 0x16BA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BA84u;
            // 0x16ba88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BAC0u;
            goto label_16bac0;
        }
    }
    ctx->pc = 0x16BA8Cu;
    // 0x16ba8c: 0x0  nop
    ctx->pc = 0x16ba8cu;
    // NOP
label_16ba90:
    // 0x16ba90: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x16BA90u;
    {
        const bool branch_taken_0x16ba90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x16BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA90u;
        // 0x16ba94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba90) {
            ctx->pc = 0x16BAC0u;
            goto label_16bac0;
        }
    }
    ctx->pc = 0x16BA98u;
    // 0x16ba98: 0xc041180  jal         func_104600
    ctx->pc = 0x16BA98u;
    SET_GPR_U32(ctx, 31, 0x16BAA0u);
    ctx->pc = 0x16BA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA98u;
    // 0x16ba9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104600u, 0x16BA98u, 0x16BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BAA0u;
label_16baa0:
    // 0x16baa0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16baa4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BAA4u;
    {
        const bool branch_taken_0x16baa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAA4u;
        // 0x16baa8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16baa4) {
            ctx->pc = 0x16BAB0u;
            goto label_16bab0;
        }
    }
    ctx->pc = 0x16BAACu;
    // 0x16baac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16baacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16bab0:
    // 0x16bab0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16bab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bab4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16BAB4u;
    {
        const bool branch_taken_0x16bab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bab4) {
            ctx->pc = 0x16BA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ba90;
        }
    }
    ctx->pc = 0x16BABCu;
label_16babc:
    // 0x16babc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16babcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bac0:
    // 0x16bac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bac4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16bac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bacc: 0x3e00008  jr          $ra
    ctx->pc = 0x16BACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BACCu;
        // 0x16bad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BAD4u;
    // 0x16bad4: 0x0  nop
    ctx->pc = 0x16bad4u;
    // NOP
    ctx->pc = 0x16bad8u;
}
