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

// Function: sub_00143B70
// Address: 0x143b70 - 0x143c20
void sub_00143B70_0x143b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143B70_0x143b70");
#endif

    switch (ctx->pc) {
        case 0x143bbcu: goto label_143bbc;
        case 0x143bc8u: goto label_143bc8;
        case 0x143be4u: goto label_143be4;
        case 0x143bf4u: goto label_143bf4;
        case 0x143bfcu: goto label_143bfc;
        default: break;
    }

    ctx->pc = 0x143b70u;

    // 0x143b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143b74: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x143b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x143b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143b7c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x143b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x143b80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x143b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x143b8c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x143b8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x143b90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x143b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x143b94: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x143b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x143b98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x143b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x143b9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x143b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x143ba0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x143ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x143ba4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x143ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143ba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x143ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x143bac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x143bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143bb0: 0x8c72020c  lw          $s2, 0x20C($v1)
    ctx->pc = 0x143bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x143bb4: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x143BB4u;
    SET_GPR_U32(ctx, 31, 0x143BBCu);
    ctx->pc = 0x143BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143BB4u;
    // 0x143bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x143BB4u, 0x143BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BBCu;
label_143bbc:
    // 0x143bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bc0: 0xc04e890  jal         func_13A240
    ctx->pc = 0x143BC0u;
    SET_GPR_U32(ctx, 31, 0x143BC8u);
    ctx->pc = 0x143BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143BC0u;
    // 0x143bc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A240u, 0x143BC0u, 0x143BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BC8u;
label_143bc8:
    // 0x143bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x143bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bcc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x143BCCu;
    {
        const bool branch_taken_0x143bcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x143BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BCCu;
        // 0x143bd0: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143bcc) {
            ctx->pc = 0x143BF4u;
            goto label_143bf4;
        }
    }
    ctx->pc = 0x143BD4u;
    // 0x143bd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bd8: 0x2451b530  addiu       $s1, $v0, -0x4AD0
    ctx->pc = 0x143bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948144));
    // 0x143bdc: 0xc04b2b6  jal         func_12CAD8
    ctx->pc = 0x143BDCu;
    SET_GPR_U32(ctx, 31, 0x143BE4u);
    ctx->pc = 0x143BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143BDCu;
    // 0x143be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAD8u, 0x143BDCu, 0x143BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BE4u;
label_143be4:
    // 0x143be4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143BE4u;
    {
        const bool branch_taken_0x143be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BE4u;
        // 0x143be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143be4) {
            ctx->pc = 0x143BF4u;
            goto label_143bf4;
        }
    }
    ctx->pc = 0x143BECu;
    // 0x143bec: 0xc04b2c0  jal         func_12CB00
    ctx->pc = 0x143BECu;
    SET_GPR_U32(ctx, 31, 0x143BF4u);
    ctx->pc = 0x143BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143BECu;
    // 0x143bf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CB00u, 0x143BECu, 0x143BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BF4u;
label_143bf4:
    // 0x143bf4: 0xc043e8e  jal         func_10FA38
    ctx->pc = 0x143BF4u;
    SET_GPR_U32(ctx, 31, 0x143BFCu);
    ctx->pc = 0x143BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143BF4u;
    // 0x143bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA38u, 0x143BF4u, 0x143BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BFCu;
label_143bfc:
    // 0x143bfc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x143bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x143c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143c04: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x143c04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x143c08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143c0c: 0xae430268  sw          $v1, 0x268($s2)
    ctx->pc = 0x143c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 3));
    // 0x143c10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x143c10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143c14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x143c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143c18: 0x3e00008  jr          $ra
    ctx->pc = 0x143C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C18u;
        // 0x143c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143C20u;
}
