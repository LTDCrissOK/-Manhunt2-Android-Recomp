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

// Function: sub_0038DEC8
// Address: 0x38dec8 - 0x38e068
void sub_0038DEC8_0x38dec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DEC8_0x38dec8");
#endif

    switch (ctx->pc) {
        case 0x38df00u: goto label_38df00;
        case 0x38df08u: goto label_38df08;
        case 0x38df10u: goto label_38df10;
        case 0x38df1cu: goto label_38df1c;
        case 0x38df38u: goto label_38df38;
        case 0x38df50u: goto label_38df50;
        case 0x38df5cu: goto label_38df5c;
        case 0x38df6cu: goto label_38df6c;
        case 0x38df78u: goto label_38df78;
        case 0x38df88u: goto label_38df88;
        case 0x38df98u: goto label_38df98;
        case 0x38dfa4u: goto label_38dfa4;
        case 0x38dfb0u: goto label_38dfb0;
        case 0x38dfb8u: goto label_38dfb8;
        case 0x38dfc4u: goto label_38dfc4;
        case 0x38dfd4u: goto label_38dfd4;
        case 0x38dff4u: goto label_38dff4;
        case 0x38e020u: goto label_38e020;
        default: break;
    }

    ctx->pc = 0x38dec8u;

    // 0x38dec8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38dec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38decc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38deccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38ded0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38ded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38ded4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ded4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ded8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38ded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38dedc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x38dedcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dee0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38dee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38dee4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x38dee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dee8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38deec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x38deecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x38def0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x38def0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38def4: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x38def4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x38def8: 0xc0e3bf6  jal         func_38EFD8
    ctx->pc = 0x38DEF8u;
    SET_GPR_U32(ctx, 31, 0x38DF00u);
    ctx->pc = 0x38DEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DEF8u;
    // 0x38defc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EFD8u, 0x38DEF8u, 0x38DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF00u;
label_38df00:
    // 0x38df00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38DF00u;
    {
        const bool branch_taken_0x38df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF00u;
        // 0x38df04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df00) {
            ctx->pc = 0x38DF14u;
            goto label_38df14;
        }
    }
    ctx->pc = 0x38DF08u;
label_38df08:
    // 0x38df08: 0xc0e3b9c  jal         func_38EE70
    ctx->pc = 0x38DF08u;
    SET_GPR_U32(ctx, 31, 0x38DF10u);
    ctx->pc = 0x38DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF08u;
    // 0x38df0c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE70u, 0x38DF08u, 0x38DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF10u;
label_38df10:
    // 0x38df10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38df10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38df14:
    // 0x38df14: 0xc0e32f8  jal         func_38CBE0
    ctx->pc = 0x38DF14u;
    SET_GPR_U32(ctx, 31, 0x38DF1Cu);
    ctx->pc = 0x38DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF14u;
    // 0x38df18: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CBE0u, 0x38DF14u, 0x38DF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF1Cu;
label_38df1c:
    // 0x38df1c: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x38DF1Cu;
    {
        const bool branch_taken_0x38df1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x38DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF1Cu;
        // 0x38df20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df1c) {
            ctx->pc = 0x38DF30u;
            goto label_38df30;
        }
    }
    ctx->pc = 0x38DF24u;
    // 0x38df24: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x38df24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x38df28: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x38DF28u;
    {
        const bool branch_taken_0x38df28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38df28) {
            ctx->pc = 0x38DF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38df08;
        }
    }
    ctx->pc = 0x38DF30u;
label_38df30:
    // 0x38df30: 0xc0e32f8  jal         func_38CBE0
    ctx->pc = 0x38DF30u;
    SET_GPR_U32(ctx, 31, 0x38DF38u);
    ctx->pc = 0x38DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF30u;
    // 0x38df34: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CBE0u, 0x38DF30u, 0x38DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF38u;
label_38df38:
    // 0x38df38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x38df38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38df3c: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x38df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x38df40: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x38df40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x38df44: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38DF44u;
    {
        const bool branch_taken_0x38df44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF44u;
        // 0x38df48: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df44) {
            ctx->pc = 0x38DF64u;
            goto label_38df64;
        }
    }
    ctx->pc = 0x38DF4Cu;
    // 0x38df4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38df4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38df50:
    // 0x38df50: 0x24a595b8  addiu       $a1, $a1, -0x6A48
    ctx->pc = 0x38df50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940088));
    // 0x38df54: 0xc0e290e  jal         func_38A438
    ctx->pc = 0x38DF54u;
    SET_GPR_U32(ctx, 31, 0x38DF5Cu);
    ctx->pc = 0x38DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF54u;
    // 0x38df58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A438u, 0x38DF54u, 0x38DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF5Cu;
label_38df5c:
    // 0x38df5c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x38DF5Cu;
    {
        const bool branch_taken_0x38df5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF5Cu;
        // 0x38df60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df5c) {
            ctx->pc = 0x38E048u;
            goto label_38e048;
        }
    }
    ctx->pc = 0x38DF64u;
label_38df64:
    // 0x38df64: 0xc0e3bf4  jal         func_38EFD0
    ctx->pc = 0x38DF64u;
    SET_GPR_U32(ctx, 31, 0x38DF6Cu);
    ctx->pc = 0x38DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF64u;
    // 0x38df68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EFD0u, 0x38DF64u, 0x38DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF6Cu;
label_38df6c:
    // 0x38df6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38df6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38df70: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38DF70u;
    SET_GPR_U32(ctx, 31, 0x38DF78u);
    ctx->pc = 0x38DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF70u;
    // 0x38df74: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38DF70u, 0x38DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF78u;
label_38df78:
    // 0x38df78: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x38df78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x38df7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38df7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38df80: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38DF80u;
    SET_GPR_U32(ctx, 31, 0x38DF88u);
    ctx->pc = 0x38DF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF80u;
    // 0x38df84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38DF80u, 0x38DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF88u;
label_38df88:
    // 0x38df88: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x38DF88u;
    {
        const bool branch_taken_0x38df88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF88u;
        // 0x38df8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df88) {
            ctx->pc = 0x38DFCCu;
            goto label_38dfcc;
        }
    }
    ctx->pc = 0x38DF90u;
    // 0x38df90: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38DF90u;
    SET_GPR_U32(ctx, 31, 0x38DF98u);
    ctx->pc = 0x38DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF90u;
    // 0x38df94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38DF90u, 0x38DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF98u;
label_38df98:
    // 0x38df98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38df98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38df9c: 0xc0e3b9c  jal         func_38EE70
    ctx->pc = 0x38DF9Cu;
    SET_GPR_U32(ctx, 31, 0x38DFA4u);
    ctx->pc = 0x38DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF9Cu;
    // 0x38dfa0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE70u, 0x38DF9Cu, 0x38DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DFA4u;
label_38dfa4:
    // 0x38dfa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38DFA4u;
    {
        const bool branch_taken_0x38dfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFA4u;
        // 0x38dfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dfa4) {
            ctx->pc = 0x38DFBCu;
            goto label_38dfbc;
        }
    }
    ctx->pc = 0x38DFACu;
    // 0x38dfac: 0x0  nop
    ctx->pc = 0x38dfacu;
    // NOP
label_38dfb0:
    // 0x38dfb0: 0xc0e3b9c  jal         func_38EE70
    ctx->pc = 0x38DFB0u;
    SET_GPR_U32(ctx, 31, 0x38DFB8u);
    ctx->pc = 0x38DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DFB0u;
    // 0x38dfb4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE70u, 0x38DFB0u, 0x38DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DFB8u;
label_38dfb8:
    // 0x38dfb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38dfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38dfbc:
    // 0x38dfbc: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38DFBCu;
    SET_GPR_U32(ctx, 31, 0x38DFC4u);
    ctx->pc = 0x38DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DFBCu;
    // 0x38dfc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38DFBCu, 0x38DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DFC4u;
label_38dfc4:
    // 0x38dfc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38DFC4u;
    {
        const bool branch_taken_0x38dfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFC4u;
        // 0x38dfc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dfc4) {
            ctx->pc = 0x38DFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38dfb0;
        }
    }
    ctx->pc = 0x38DFCCu;
label_38dfcc:
    // 0x38dfcc: 0xc0e31a6  jal         func_38C698
    ctx->pc = 0x38DFCCu;
    SET_GPR_U32(ctx, 31, 0x38DFD4u);
    ctx->pc = 0x38DFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DFCCu;
    // 0x38dfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C698u, 0x38DFCCu, 0x38DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DFD4u;
label_38dfd4:
    // 0x38dfd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38dfd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dfd8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x38dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x38dfdc: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x38dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x38dfe0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38DFE0u;
    {
        const bool branch_taken_0x38dfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFE0u;
        // 0x38dfe4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dfe0) {
            ctx->pc = 0x38DFFCu;
            goto label_38dffc;
        }
    }
    ctx->pc = 0x38DFE8u;
    // 0x38dfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38dfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dfec: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x38DFECu;
    SET_GPR_U32(ctx, 31, 0x38DFF4u);
    ctx->pc = 0x38DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DFECu;
    // 0x38dff0: 0x24a595e0  addiu       $a1, $a1, -0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38DFECu, 0x38DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DFF4u;
label_38dff4:
    // 0x38dff4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x38DFF4u;
    {
        const bool branch_taken_0x38dff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFF4u;
        // 0x38dff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dff4) {
            ctx->pc = 0x38E048u;
            goto label_38e048;
        }
    }
    ctx->pc = 0x38DFFCu;
label_38dffc:
    // 0x38dffc: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x38dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x38e000: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x38e000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x38e004: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38e004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38e008: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38e008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e00c: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x38e00cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38e010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38e010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e014: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x38e014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x38e018: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38e018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38e01c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x38e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_38e020:
    // 0x38e020: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x38e020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x38e024: 0xae0401c0  sw          $a0, 0x1C0($s0)
    ctx->pc = 0x38e024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
    // 0x38e028: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x38e028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x38e02c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x38e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x38e030: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x38e030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x38e034: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x38e034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x38e038: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x38e038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x38e03c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x38e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x38e040: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x38e040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x38e044: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x38e044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_38e048:
    // 0x38e048: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x38e048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38e04c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38e04cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38e050: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38e050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38e054: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38e054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e058: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38e058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e05c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38e05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e060: 0x3e00008  jr          $ra
    ctx->pc = 0x38E060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E060u;
        // 0x38e064: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E068u;
}
