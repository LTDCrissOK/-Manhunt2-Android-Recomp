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

// Function: sub_002EDE78
// Address: 0x2ede78 - 0x2edf40
void sub_002EDE78_0x2ede78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDE78_0x2ede78");
#endif

    switch (ctx->pc) {
        case 0x2edea4u: goto label_2edea4;
        case 0x2edeb4u: goto label_2edeb4;
        case 0x2edec4u: goto label_2edec4;
        case 0x2edf04u: goto label_2edf04;
        case 0x2edf14u: goto label_2edf14;
        case 0x2edf24u: goto label_2edf24;
        default: break;
    }

    ctx->pc = 0x2ede78u;

    // 0x2ede78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ede78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ede7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ede7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ede80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ede80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ede84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ede84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede88: 0x92021384  lbu         $v0, 0x1384($s0)
    ctx->pc = 0x2ede88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
    // 0x2ede8c: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2EDE8Cu;
    {
        const bool branch_taken_0x2ede8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ede8c) {
            ctx->pc = 0x2EDE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDE8Cu;
            // 0x2ede90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDF34u;
            goto label_2edf34;
        }
    }
    ctx->pc = 0x2EDE94u;
    // 0x2ede94: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2EDE94u;
    {
        const bool branch_taken_0x2ede94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE94u;
        // 0x2ede98: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede94) {
            ctx->pc = 0x2EDF2Cu;
            goto label_2edf2c;
        }
    }
    ctx->pc = 0x2EDE9Cu;
    // 0x2ede9c: 0xc0b4e26  jal         func_2D3898
    ctx->pc = 0x2EDE9Cu;
    SET_GPR_U32(ctx, 31, 0x2EDEA4u);
    ctx->pc = 0x2EDEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE9Cu;
    // 0x2edea0: 0x8c44bd2c  lw          $a0, -0x42D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3898u, 0x2EDE9Cu, 0x2EDEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDEA4u;
label_2edea4:
    // 0x2edea4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2edea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2edea8: 0x8e051380  lw          $a1, 0x1380($s0)
    ctx->pc = 0x2edea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4992)));
    // 0x2edeac: 0xc0b5be6  jal         func_2D6F98
    ctx->pc = 0x2EDEACu;
    SET_GPR_U32(ctx, 31, 0x2EDEB4u);
    ctx->pc = 0x2EDEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDEACu;
    // 0x2edeb0: 0x8c44bd30  lw          $a0, -0x42D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6F98u, 0x2EDEACu, 0x2EDEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDEB4u;
label_2edeb4:
    // 0x2edeb4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EDEB4u;
    {
        const bool branch_taken_0x2edeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edeb4) {
            ctx->pc = 0x2EDEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDEB4u;
            // 0x2edeb8: 0x92021384  lbu         $v0, 0x1384($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDF30u;
            goto label_2edf30;
        }
    }
    ctx->pc = 0x2EDEBCu;
    // 0x2edebc: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x2EDEBCu;
    SET_GPR_U32(ctx, 31, 0x2EDEC4u);
    ctx->pc = 0x2EDEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDEBCu;
    // 0x2edec0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x2EDEBCu, 0x2EDEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDEC4u;
label_2edec4:
    // 0x2edec4: 0x8e031368  lw          $v1, 0x1368($s0)
    ctx->pc = 0x2edec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4968)));
    // 0x2edec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edecc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EDECCu;
    {
        const bool branch_taken_0x2edecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDECCu;
        // 0x2eded0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edecc) {
            ctx->pc = 0x2EDF0Cu;
            goto label_2edf0c;
        }
    }
    ctx->pc = 0x2EDED4u;
    // 0x2eded4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDED4u;
    {
        const bool branch_taken_0x2eded4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDED4u;
        // 0x2eded8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eded4) {
            ctx->pc = 0x2EDEECu;
            goto label_2edeec;
        }
    }
    ctx->pc = 0x2EDEDCu;
    // 0x2ededc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EDEDCu;
    {
        const bool branch_taken_0x2ededc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ededc) {
            ctx->pc = 0x2EDEFCu;
            goto label_2edefc;
        }
    }
    ctx->pc = 0x2EDEE4u;
    // 0x2edee4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2EDEE4u;
    {
        const bool branch_taken_0x2edee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEE4u;
        // 0x2edee8: 0xa2001370  sb          $zero, 0x1370($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4976), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edee4) {
            ctx->pc = 0x2EDF28u;
            goto label_2edf28;
        }
    }
    ctx->pc = 0x2EDEECu;
label_2edeec:
    // 0x2edeec: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EDEECu;
    {
        const bool branch_taken_0x2edeec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2edeec) {
            ctx->pc = 0x2EDF1Cu;
            goto label_2edf1c;
        }
    }
    ctx->pc = 0x2EDEF4u;
    // 0x2edef4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EDEF4u;
    {
        const bool branch_taken_0x2edef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEF4u;
        // 0x2edef8: 0xa2001370  sb          $zero, 0x1370($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4976), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edef4) {
            ctx->pc = 0x2EDF28u;
            goto label_2edf28;
        }
    }
    ctx->pc = 0x2EDEFCu;
label_2edefc:
    // 0x2edefc: 0xc0beb78  jal         func_2FADE0
    ctx->pc = 0x2EDEFCu;
    SET_GPR_U32(ctx, 31, 0x2EDF04u);
    ctx->pc = 0x2EDF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDEFCu;
    // 0x2edf00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FADE0u, 0x2EDEFCu, 0x2EDF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF04u;
label_2edf04:
    // 0x2edf04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EDF04u;
    {
        const bool branch_taken_0x2edf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF04u;
        // 0x2edf08: 0xa2001370  sb          $zero, 0x1370($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4976), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf04) {
            ctx->pc = 0x2EDF28u;
            goto label_2edf28;
        }
    }
    ctx->pc = 0x2EDF0Cu;
label_2edf0c:
    // 0x2edf0c: 0xc0be9d4  jal         func_2FA750
    ctx->pc = 0x2EDF0Cu;
    SET_GPR_U32(ctx, 31, 0x2EDF14u);
    ctx->pc = 0x2EDF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF0Cu;
    // 0x2edf10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA750u, 0x2EDF0Cu, 0x2EDF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF14u;
label_2edf14:
    // 0x2edf14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDF14u;
    {
        const bool branch_taken_0x2edf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF14u;
        // 0x2edf18: 0xa2001370  sb          $zero, 0x1370($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4976), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf14) {
            ctx->pc = 0x2EDF28u;
            goto label_2edf28;
        }
    }
    ctx->pc = 0x2EDF1Cu;
label_2edf1c:
    // 0x2edf1c: 0xc0be6ae  jal         func_2F9AB8
    ctx->pc = 0x2EDF1Cu;
    SET_GPR_U32(ctx, 31, 0x2EDF24u);
    ctx->pc = 0x2EDF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF1Cu;
    // 0x2edf20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9AB8u, 0x2EDF1Cu, 0x2EDF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF24u;
label_2edf24:
    // 0x2edf24: 0xa2001370  sb          $zero, 0x1370($s0)
    ctx->pc = 0x2edf24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4976), (uint8_t)GPR_U32(ctx, 0));
label_2edf28:
    // 0x2edf28: 0xa2001384  sb          $zero, 0x1384($s0)
    ctx->pc = 0x2edf28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4996), (uint8_t)GPR_U32(ctx, 0));
label_2edf2c:
    // 0x2edf2c: 0x92021384  lbu         $v0, 0x1384($s0)
    ctx->pc = 0x2edf2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
label_2edf30:
    // 0x2edf30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2edf30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2edf34:
    // 0x2edf34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2edf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2edf38: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF38u;
        // 0x2edf3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDF40u;
}
