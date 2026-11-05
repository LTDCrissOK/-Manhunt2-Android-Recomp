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

// Function: sub_001D0AD0
// Address: 0x1d0ad0 - 0x1d0bb8
void sub_001D0AD0_0x1d0ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0AD0_0x1d0ad0");
#endif

    switch (ctx->pc) {
        case 0x1d0af8u: goto label_1d0af8;
        case 0x1d0b14u: goto label_1d0b14;
        case 0x1d0b40u: goto label_1d0b40;
        case 0x1d0b48u: goto label_1d0b48;
        case 0x1d0b50u: goto label_1d0b50;
        default: break;
    }

    ctx->pc = 0x1d0ad0u;

    // 0x1d0ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0adc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0ae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0ae4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d0ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d0ae8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d0ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d0aec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d0aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d0af0: 0xc0c2e5a  jal         func_30B968
    ctx->pc = 0x1D0AF0u;
    SET_GPR_U32(ctx, 31, 0x1D0AF8u);
    ctx->pc = 0x1D0AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0AF0u;
    // 0x1d0af4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B968u, 0x1D0AF0u, 0x1D0AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0AF8u;
label_1d0af8:
    // 0x1d0af8: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x1d0af8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0afc: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D0AFCu;
    {
        const bool branch_taken_0x1d0afc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AFCu;
        // 0x1d0b00: 0x8e13000c  lw          $s3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0afc) {
            ctx->pc = 0x1D0B94u;
            goto label_1d0b94;
        }
    }
    ctx->pc = 0x1D0B04u;
    // 0x1d0b04: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1d0b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0b08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d0b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b0c: 0xc0741b2  jal         func_1D06C8
    ctx->pc = 0x1D0B0Cu;
    SET_GPR_U32(ctx, 31, 0x1D0B14u);
    ctx->pc = 0x1D0B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B0Cu;
    // 0x1d0b10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D06C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06C8u, 0x1D0B0Cu, 0x1D0B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B14u;
label_1d0b14:
    // 0x1d0b14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0b18: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D0B18u;
    {
        const bool branch_taken_0x1d0b18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D0B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B18u;
        // 0x1d0b1c: 0x8e74000c  lw          $s4, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b18) {
            ctx->pc = 0x1D0B94u;
            goto label_1d0b94;
        }
    }
    ctx->pc = 0x1D0B20u;
    // 0x1d0b20: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d0b24: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1d0b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1d0b28: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1d0b28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0b2c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0B2Cu;
    {
        const bool branch_taken_0x1d0b2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0b2c) {
            ctx->pc = 0x1D0B40u;
            goto label_1d0b40;
        }
    }
    ctx->pc = 0x1D0B34u;
    // 0x1d0b34: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D0B34u;
    {
        const bool branch_taken_0x1d0b34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B34u;
        // 0x1d0b38: 0xa6600006  sh          $zero, 0x6($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b34) {
            ctx->pc = 0x1D0B94u;
            goto label_1d0b94;
        }
    }
    ctx->pc = 0x1D0B3Cu;
    // 0x1d0b3c: 0x0  nop
    ctx->pc = 0x1d0b3cu;
    // NOP
label_1d0b40:
    // 0x1d0b40: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0B40u;
    {
        const bool branch_taken_0x1d0b40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0b40) {
            ctx->pc = 0x1D0B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0B40u;
            // 0x1d0b44: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0B64u;
            goto label_1d0b64;
        }
    }
    ctx->pc = 0x1D0B48u;
label_1d0b48:
    // 0x1d0b48: 0xc0c3254  jal         func_30C950
    ctx->pc = 0x1D0B48u;
    SET_GPR_U32(ctx, 31, 0x1D0B50u);
    ctx->pc = 0x1D0B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B48u;
    // 0x1d0b4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C950u, 0x1D0B48u, 0x1D0B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B50u;
label_1d0b50:
    // 0x1d0b50: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1d0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d0b54: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x1d0b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d0b58: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x1d0b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1d0b5c: 0xa0620021  sb          $v0, 0x21($v1)
    ctx->pc = 0x1d0b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0b60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d0b64:
    // 0x1d0b64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d0b68: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d0b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d0b6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0B6Cu;
    {
        const bool branch_taken_0x1d0b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B6Cu;
        // 0x1d0b70: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b6c) {
            ctx->pc = 0x1D0B94u;
            goto label_1d0b94;
        }
    }
    ctx->pc = 0x1D0B74u;
    // 0x1d0b74: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d0b78: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x1d0b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1d0b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0b80: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1d0b80u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0b84: 0x14a4ffee  bne         $a1, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D0B84u;
    {
        const bool branch_taken_0x1d0b84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d0b84) {
            ctx->pc = 0x1D0B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0b40;
        }
    }
    ctx->pc = 0x1D0B8Cu;
    // 0x1d0b8c: 0x1640ffee  bnez        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D0B8Cu;
    {
        const bool branch_taken_0x1d0b8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B8Cu;
        // 0x1d0b90: 0xa6700006  sh          $s0, 0x6($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b8c) {
            ctx->pc = 0x1D0B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0b48;
        }
    }
    ctx->pc = 0x1D0B94u;
label_1d0b94:
    // 0x1d0b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0b9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0ba0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d0ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0ba4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d0ba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0ba8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d0ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d0bac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BACu;
        // 0x1d0bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0BB4u;
    // 0x1d0bb4: 0x0  nop
    ctx->pc = 0x1d0bb4u;
    // NOP
    ctx->pc = 0x1d0bb8u;
}
