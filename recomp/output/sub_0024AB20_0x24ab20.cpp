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

// Function: sub_0024AB20
// Address: 0x24ab20 - 0x24ac00
void sub_0024AB20_0x24ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AB20_0x24ab20");
#endif

    switch (ctx->pc) {
        case 0x24ab34u: goto label_24ab34;
        case 0x24ab54u: goto label_24ab54;
        case 0x24ab90u: goto label_24ab90;
        case 0x24aba0u: goto label_24aba0;
        case 0x24aba8u: goto label_24aba8;
        case 0x24abb8u: goto label_24abb8;
        case 0x24abccu: goto label_24abcc;
        case 0x24abd4u: goto label_24abd4;
        case 0x24abe4u: goto label_24abe4;
        default: break;
    }

    ctx->pc = 0x24ab20u;

    // 0x24ab20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ab24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24ab28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24ab2c: 0xc092b78  jal         func_24ADE0
    ctx->pc = 0x24AB2Cu;
    SET_GPR_U32(ctx, 31, 0x24AB34u);
    ctx->pc = 0x24AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB2Cu;
    // 0x24ab30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ADE0u, 0x24AB2Cu, 0x24AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB34u;
label_24ab34:
    // 0x24ab34: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x24ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x24ab38: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x24ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24ab3c: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x24AB3Cu;
    {
        const bool branch_taken_0x24ab3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB3Cu;
        // 0x24ab40: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab3c) {
            ctx->pc = 0x24ABE4u;
            goto label_24abe4;
        }
    }
    ctx->pc = 0x24AB44u;
    // 0x24ab44: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24AB44u;
    {
        const bool branch_taken_0x24ab44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ab44) {
            ctx->pc = 0x24AB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AB44u;
            // 0x24ab48: 0x8e050334  lw          $a1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AB60u;
            goto label_24ab60;
        }
    }
    ctx->pc = 0x24AB4Cu;
    // 0x24ab4c: 0xc092432  jal         func_2490C8
    ctx->pc = 0x24AB4Cu;
    SET_GPR_U32(ctx, 31, 0x24AB54u);
    ctx->pc = 0x24AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB4Cu;
    // 0x24ab50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x24AB4Cu, 0x24AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB54u;
label_24ab54:
    // 0x24ab54: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x24AB54u;
    {
        const bool branch_taken_0x24ab54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ab54) {
            ctx->pc = 0x24AB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AB54u;
            // 0x24ab58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ABE8u;
            goto label_24abe8;
        }
    }
    ctx->pc = 0x24AB5Cu;
    // 0x24ab5c: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x24ab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24ab60:
    // 0x24ab60: 0x240207e8  addiu       $v0, $zero, 0x7E8
    ctx->pc = 0x24ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2024));
    // 0x24ab64: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x24ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x24ab68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24ab6c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x24ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24ab70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ab74: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AB74u;
    {
        const bool branch_taken_0x24ab74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ab74) {
            ctx->pc = 0x24AB88u;
            goto label_24ab88;
        }
    }
    ctx->pc = 0x24AB7Cu;
    // 0x24ab7c: 0x8ca20160  lw          $v0, 0x160($a1)
    ctx->pc = 0x24ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x24ab80: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x24AB80u;
    {
        const bool branch_taken_0x24ab80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ab80) {
            ctx->pc = 0x24AB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AB80u;
            // 0x24ab84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ABE8u;
            goto label_24abe8;
        }
    }
    ctx->pc = 0x24AB88u;
label_24ab88:
    // 0x24ab88: 0xc09242a  jal         func_2490A8
    ctx->pc = 0x24AB88u;
    SET_GPR_U32(ctx, 31, 0x24AB90u);
    ctx->pc = 0x24AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB88u;
    // 0x24ab8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490A8u, 0x24AB88u, 0x24AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB90u;
label_24ab90:
    // 0x24ab90: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x24AB90u;
    {
        const bool branch_taken_0x24ab90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ab90) {
            ctx->pc = 0x24AB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AB90u;
            // 0x24ab94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ABE8u;
            goto label_24abe8;
        }
    }
    ctx->pc = 0x24AB98u;
    // 0x24ab98: 0xc092590  jal         func_249640
    ctx->pc = 0x24AB98u;
    SET_GPR_U32(ctx, 31, 0x24ABA0u);
    ctx->pc = 0x24AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB98u;
    // 0x24ab9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249640u, 0x24AB98u, 0x24ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABA0u;
label_24aba0:
    // 0x24aba0: 0xc08db00  jal         func_236C00
    ctx->pc = 0x24ABA0u;
    SET_GPR_U32(ctx, 31, 0x24ABA8u);
    ctx->pc = 0x24ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABA0u;
    // 0x24aba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x24ABA0u, 0x24ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABA8u;
label_24aba8:
    // 0x24aba8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24ABA8u;
    {
        const bool branch_taken_0x24aba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aba8) {
            ctx->pc = 0x24ABDCu;
            goto label_24abdc;
        }
    }
    ctx->pc = 0x24ABB0u;
    // 0x24abb0: 0xc08fe4c  jal         func_23F930
    ctx->pc = 0x24ABB0u;
    SET_GPR_U32(ctx, 31, 0x24ABB8u);
    ctx->pc = 0x24ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABB0u;
    // 0x24abb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F930u, 0x24ABB0u, 0x24ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABB8u;
label_24abb8:
    // 0x24abb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24abbc: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x24ABBCu;
    {
        const bool branch_taken_0x24abbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24abbc) {
            ctx->pc = 0x24ABC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ABBCu;
            // 0x24abc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ABE8u;
            goto label_24abe8;
        }
    }
    ctx->pc = 0x24ABC4u;
    // 0x24abc4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x24ABC4u;
    SET_GPR_U32(ctx, 31, 0x24ABCCu);
    ctx->pc = 0x24ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABC4u;
    // 0x24abc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x24ABC4u, 0x24ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABCCu;
label_24abcc:
    // 0x24abcc: 0xc09854c  jal         func_261530
    ctx->pc = 0x24ABCCu;
    SET_GPR_U32(ctx, 31, 0x24ABD4u);
    ctx->pc = 0x24ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABCCu;
    // 0x24abd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261530u, 0x24ABCCu, 0x24ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABD4u;
label_24abd4:
    // 0x24abd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24ABD4u;
    {
        const bool branch_taken_0x24abd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABD4u;
        // 0x24abd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abd4) {
            ctx->pc = 0x24ABE8u;
            goto label_24abe8;
        }
    }
    ctx->pc = 0x24ABDCu;
label_24abdc:
    // 0x24abdc: 0xc08fe4c  jal         func_23F930
    ctx->pc = 0x24ABDCu;
    SET_GPR_U32(ctx, 31, 0x24ABE4u);
    ctx->pc = 0x24ABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABDCu;
    // 0x24abe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F930u, 0x24ABDCu, 0x24ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABE4u;
label_24abe4:
    // 0x24abe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24abe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24abe8:
    // 0x24abe8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24abe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24abec: 0x3e00008  jr          $ra
    ctx->pc = 0x24ABECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABECu;
        // 0x24abf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ABECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ABF4u;
    // 0x24abf4: 0x0  nop
    ctx->pc = 0x24abf4u;
    // NOP
    // 0x24abf8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x24abf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24abfc: 0x0  nop
    ctx->pc = 0x24abfcu;
    // NOP
    ctx->pc = 0x24ac00u;
}
