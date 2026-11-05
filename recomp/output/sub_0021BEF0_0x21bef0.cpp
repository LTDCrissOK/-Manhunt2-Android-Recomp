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

// Function: sub_0021BEF0
// Address: 0x21bef0 - 0x21bff8
void sub_0021BEF0_0x21bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BEF0_0x21bef0");
#endif

    switch (ctx->pc) {
        case 0x21bf10u: goto label_21bf10;
        case 0x21bf98u: goto label_21bf98;
        default: break;
    }

    ctx->pc = 0x21bef0u;

    // 0x21bef0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x21bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x21bef4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x21bef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bef8: 0x24443500  addiu       $a0, $v0, 0x3500
    ctx->pc = 0x21bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x21befc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21befcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3504u));
    // 0x21bf00: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x21bf00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A350Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A350Cu, _value); } while (0);
    // 0x21bf04: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x21bf04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf08: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21BF08u;
    {
        const bool branch_taken_0x21bf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF08u;
        // 0x21bf0c: 0x3c09004a  lui         $t1, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf08) {
            ctx->pc = 0x21BF4Cu;
            goto label_21bf4c;
        }
    }
    ctx->pc = 0x21BF10u;
label_21bf10:
    // 0x21bf10: 0x50e00004  beql        $a3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BF10u;
    {
        const bool branch_taken_0x21bf10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bf10) {
            ctx->pc = 0x21BF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BF10u;
            // 0x21bf14: 0x8c8500c0  lw          $a1, 0xC0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BF24u;
            goto label_21bf24;
        }
    }
    ctx->pc = 0x21BF18u;
    // 0x21bf18: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x21bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x21bf1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21BF1Cu;
    {
        const bool branch_taken_0x21bf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF1Cu;
        // 0x21bf20: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf1c) {
            ctx->pc = 0x21BF38u;
            goto label_21bf38;
        }
    }
    ctx->pc = 0x21BF24u;
label_21bf24:
    // 0x21bf24: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x21bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x21bf28: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x21bf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x21bf2c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21BF2Cu;
    {
        const bool branch_taken_0x21bf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF2Cu;
        // 0x21bf30: 0x2402ffef  addiu       $v0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf2c) {
            ctx->pc = 0x21BF4Cu;
            goto label_21bf4c;
        }
    }
    ctx->pc = 0x21BF34u;
    // 0x21bf34: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x21bf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_21bf38:
    // 0x21bf38: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BF38u;
    {
        const bool branch_taken_0x21bf38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF38u;
        // 0x21bf3c: 0xac8200c0  sw          $v0, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf38) {
            ctx->pc = 0x21BF4Cu;
            goto label_21bf4c;
        }
    }
    ctx->pc = 0x21BF40u;
    // 0x21bf40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x21bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x21bf44: 0x8c4395a0  lw          $v1, -0x6A60($v0)
    ctx->pc = 0x21bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F95A0u));
    // 0x21bf48: 0xacc300dc  sw          $v1, 0xDC($a2)
    ctx->pc = 0x21bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 3));
label_21bf4c:
    // 0x21bf4c: 0x25033500  addiu       $v1, $t0, 0x3500
    ctx->pc = 0x21bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 13568));
    // 0x21bf50: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21bf54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21BF54u;
    {
        const bool branch_taken_0x21bf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF54u;
        // 0x21bf58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf54) {
            ctx->pc = 0x21BF60u;
            goto label_21bf60;
        }
    }
    ctx->pc = 0x21BF5Cu;
    // 0x21bf5c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x21bf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21bf60:
    // 0x21bf60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BF60u;
    {
        const bool branch_taken_0x21bf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF60u;
        // 0x21bf64: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf60) {
            ctx->pc = 0x21BF70u;
            goto label_21bf70;
        }
    }
    ctx->pc = 0x21BF68u;
    // 0x21bf68: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21bf6c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x21bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_21bf70:
    // 0x21bf70: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x21BF70u;
    {
        const bool branch_taken_0x21bf70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF70u;
        // 0x21bf74: 0x25223510  addiu       $v0, $t1, 0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 13584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf70) {
            ctx->pc = 0x21BF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bf10;
        }
    }
    ctx->pc = 0x21BF78u;
    // 0x21bf78: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x21bf78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x21bf7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21bf80: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21bf80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf84: 0x240affef  addiu       $t2, $zero, -0x11
    ctx->pc = 0x21bf84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x21bf88: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x21bf88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x21bf8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21BF8Cu;
    {
        const bool branch_taken_0x21bf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF8Cu;
        // 0x21bf90: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf8c) {
            ctx->pc = 0x21BFC8u;
            goto label_21bfc8;
        }
    }
    ctx->pc = 0x21BF94u;
    // 0x21bf94: 0x0  nop
    ctx->pc = 0x21bf94u;
    // NOP
label_21bf98:
    // 0x21bf98: 0x50e00004  beql        $a3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BF98u;
    {
        const bool branch_taken_0x21bf98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bf98) {
            ctx->pc = 0x21BF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BF98u;
            // 0x21bf9c: 0x8c8300c0  lw          $v1, 0xC0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BFACu;
            goto label_21bfac;
        }
    }
    ctx->pc = 0x21BFA0u;
    // 0x21bfa0: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x21bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x21bfa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21BFA4u;
    {
        const bool branch_taken_0x21bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFA4u;
        // 0x21bfa8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfa4) {
            ctx->pc = 0x21BFB8u;
            goto label_21bfb8;
        }
    }
    ctx->pc = 0x21BFACu;
label_21bfac:
    // 0x21bfac: 0x681024  and         $v0, $v1, $t0
    ctx->pc = 0x21bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x21bfb0: 0x10480005  beq         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BFB0u;
    {
        const bool branch_taken_0x21bfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x21BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFB0u;
        // 0x21bfb4: 0x6a1024  and         $v0, $v1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfb0) {
            ctx->pc = 0x21BFC8u;
            goto label_21bfc8;
        }
    }
    ctx->pc = 0x21BFB8u;
label_21bfb8:
    // 0x21bfb8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BFB8u;
    {
        const bool branch_taken_0x21bfb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFB8u;
        // 0x21bfbc: 0xac8200c0  sw          $v0, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfb8) {
            ctx->pc = 0x21BFC8u;
            goto label_21bfc8;
        }
    }
    ctx->pc = 0x21BFC0u;
    // 0x21bfc0: 0x8d2295a0  lw          $v0, -0x6A60($t1)
    ctx->pc = 0x21bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294940064)));
    // 0x21bfc4: 0xaca200dc  sw          $v0, 0xDC($a1)
    ctx->pc = 0x21bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 2));
label_21bfc8:
    // 0x21bfc8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x21bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21bfcc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21BFCCu;
    {
        const bool branch_taken_0x21bfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFCCu;
        // 0x21bfd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfcc) {
            ctx->pc = 0x21BFD8u;
            goto label_21bfd8;
        }
    }
    ctx->pc = 0x21BFD4u;
    // 0x21bfd4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21bfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21bfd8:
    // 0x21bfd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BFD8u;
    {
        const bool branch_taken_0x21bfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFD8u;
        // 0x21bfdc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfd8) {
            ctx->pc = 0x21BFE8u;
            goto label_21bfe8;
        }
    }
    ctx->pc = 0x21BFE0u;
    // 0x21bfe0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21bfe4: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x21bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_21bfe8:
    // 0x21bfe8: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x21BFE8u;
    {
        const bool branch_taken_0x21bfe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bfe8) {
            ctx->pc = 0x21BF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bf98;
        }
    }
    ctx->pc = 0x21BFF0u;
    // 0x21bff0: 0x3e00008  jr          $ra
    ctx->pc = 0x21BFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BFF8u;
}
