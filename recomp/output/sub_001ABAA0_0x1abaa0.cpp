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

// Function: sub_001ABAA0
// Address: 0x1abaa0 - 0x1abce0
void sub_001ABAA0_0x1abaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABAA0_0x1abaa0");
#endif

    switch (ctx->pc) {
        case 0x1ababcu: goto label_1ababc;
        case 0x1abad8u: goto label_1abad8;
        case 0x1abb08u: goto label_1abb08;
        case 0x1abb58u: goto label_1abb58;
        case 0x1abb68u: goto label_1abb68;
        case 0x1abb88u: goto label_1abb88;
        case 0x1abb98u: goto label_1abb98;
        case 0x1abbf0u: goto label_1abbf0;
        case 0x1abc08u: goto label_1abc08;
        case 0x1abca8u: goto label_1abca8;
        case 0x1abcb8u: goto label_1abcb8;
        case 0x1abcc0u: goto label_1abcc0;
        default: break;
    }

    ctx->pc = 0x1abaa0u;

    // 0x1abaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abaa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abaa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abaac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1abaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abab0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1abab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1abab4: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1ABAB4u;
    SET_GPR_U32(ctx, 31, 0x1ABABCu);
    ctx->pc = 0x1ABAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAB4u;
    // 0x1abab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1ABAB4u, 0x1ABABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABABCu;
label_1ababc:
    // 0x1ababc: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x1ababcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1abac0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ABAC0u;
    {
        const bool branch_taken_0x1abac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAC0u;
        // 0x1abac4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abac0) {
            ctx->pc = 0x1ABAF4u;
            goto label_1abaf4;
        }
    }
    ctx->pc = 0x1ABAC8u;
    // 0x1abac8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1abac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abacc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abad0: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x1abad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
    // 0x1abad4: 0x0  nop
    ctx->pc = 0x1abad4u;
    // NOP
label_1abad8:
    // 0x1abad8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1abad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1abadc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ABADCu;
    {
        const bool branch_taken_0x1abadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abadc) {
            ctx->pc = 0x1ABAF4u;
            goto label_1abaf4;
        }
    }
    ctx->pc = 0x1ABAE4u;
    // 0x1abae4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1abae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1abae8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1abae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1abaec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ABAECu;
    {
        const bool branch_taken_0x1abaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAECu;
        // 0x1abaf0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abaec) {
            ctx->pc = 0x1ABAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abad8;
        }
    }
    ctx->pc = 0x1ABAF4u;
label_1abaf4:
    // 0x1abaf4: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1ABAF4u;
    {
        const bool branch_taken_0x1abaf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abaf4) {
            ctx->pc = 0x1ABAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABAF4u;
            // 0x1abaf8: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABB28u;
            goto label_1abb28;
        }
    }
    ctx->pc = 0x1ABAFCu;
    // 0x1abafc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1abafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb00: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x1abb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
    // 0x1abb04: 0x0  nop
    ctx->pc = 0x1abb04u;
    // NOP
label_1abb08:
    // 0x1abb08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1abb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1abb0c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABB0Cu;
    {
        const bool branch_taken_0x1abb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abb0c) {
            ctx->pc = 0x1ABB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABB0Cu;
            // 0x1abb10: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABB28u;
            goto label_1abb28;
        }
    }
    ctx->pc = 0x1ABB14u;
    // 0x1abb14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1abb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1abb18: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1abb18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1abb1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ABB1Cu;
    {
        const bool branch_taken_0x1abb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB1Cu;
        // 0x1abb20: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb1c) {
            ctx->pc = 0x1ABB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abb08;
        }
    }
    ctx->pc = 0x1ABB24u;
    // 0x1abb24: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x1abb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_1abb28:
    // 0x1abb28: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x1abb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1abb2c: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1abb2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1abb30: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1abb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1abb34: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1ABB34u;
    {
        const bool branch_taken_0x1abb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB34u;
        // 0x1abb38: 0x8e0300dc  lw          $v1, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb34) {
            ctx->pc = 0x1ABC5Cu;
            goto label_1abc5c;
        }
    }
    ctx->pc = 0x1ABB3Cu;
    // 0x1abb3c: 0x240207bc  addiu       $v0, $zero, 0x7BC
    ctx->pc = 0x1abb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1980));
    // 0x1abb40: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ABB40u;
    {
        const bool branch_taken_0x1abb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ABB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB40u;
        // 0x1abb44: 0x240207be  addiu       $v0, $zero, 0x7BE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1982));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb40) {
            ctx->pc = 0x1ABB70u;
            goto label_1abb70;
        }
    }
    ctx->pc = 0x1ABB48u;
    // 0x1abb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb4c: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x1abb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1abb50: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x1ABB50u;
    SET_GPR_U32(ctx, 31, 0x1ABB58u);
    ctx->pc = 0x1ABB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB50u;
    // 0x1abb54: 0x240607bd  addiu       $a2, $zero, 0x7BD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1981));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x1ABB50u, 0x1ABB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB58u;
label_1abb58:
    // 0x1abb58: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1abb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1abb5c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1abb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1abb60: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1ABB60u;
    SET_GPR_U32(ctx, 31, 0x1ABB68u);
    ctx->pc = 0x1ABB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB60u;
    // 0x1abb64: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1ABB60u, 0x1ABB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB68u;
label_1abb68:
    // 0x1abb68: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1ABB68u;
    {
        const bool branch_taken_0x1abb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB68u;
        // 0x1abb6c: 0xc6010174  lwc1        $f1, 0x174($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb68) {
            ctx->pc = 0x1ABB9Cu;
            goto label_1abb9c;
        }
    }
    ctx->pc = 0x1ABB70u;
label_1abb70:
    // 0x1abb70: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ABB70u;
    {
        const bool branch_taken_0x1abb70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abb70) {
            ctx->pc = 0x1ABB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABB70u;
            // 0x1abb74: 0xc6010174  lwc1        $f1, 0x174($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABB9Cu;
            goto label_1abb9c;
        }
    }
    ctx->pc = 0x1ABB78u;
    // 0x1abb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb7c: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x1abb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1abb80: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x1ABB80u;
    SET_GPR_U32(ctx, 31, 0x1ABB88u);
    ctx->pc = 0x1ABB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB80u;
    // 0x1abb84: 0x240607bf  addiu       $a2, $zero, 0x7BF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1983));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x1ABB80u, 0x1ABB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB88u;
label_1abb88:
    // 0x1abb88: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1abb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1abb8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1abb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1abb90: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1ABB90u;
    SET_GPR_U32(ctx, 31, 0x1ABB98u);
    ctx->pc = 0x1ABB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB90u;
    // 0x1abb94: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1ABB90u, 0x1ABB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB98u;
label_1abb98:
    // 0x1abb98: 0xc6010174  lwc1        $f1, 0x174($s0)
    ctx->pc = 0x1abb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abb9c:
    // 0x1abb9c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1abb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1abba0: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1abba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1abba4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abba8: 0x0  nop
    ctx->pc = 0x1abba8u;
    // NOP
    // 0x1abbac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1abbacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1abbb0: 0x0  nop
    ctx->pc = 0x1abbb0u;
    // NOP
    // 0x1abbb4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABBB4u;
    {
        const bool branch_taken_0x1abbb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1abbb4) {
            ctx->pc = 0x1ABBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABBB4u;
            // 0x1abbb8: 0x8e0301e4  lw          $v1, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABBD0u;
            goto label_1abbd0;
        }
    }
    ctx->pc = 0x1ABBBCu;
    // 0x1abbbc: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1abbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1abbc0: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1abbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1abbc4: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ABBC4u;
    {
        const bool branch_taken_0x1abbc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1abbc4) {
            ctx->pc = 0x1ABBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABBC4u;
            // 0x1abbc8: 0x8e0201e4  lw          $v0, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABBF4u;
            goto label_1abbf4;
        }
    }
    ctx->pc = 0x1ABBCCu;
    // 0x1abbcc: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x1abbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1abbd0:
    // 0x1abbd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbd4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1abbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1abbd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1abbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1abbdc: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1abbdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1abbe0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1abbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1abbe4: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x1abbe4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1abbe8: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1ABBE8u;
    SET_GPR_U32(ctx, 31, 0x1ABBF0u);
    ctx->pc = 0x1ABBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBE8u;
    // 0x1abbec: 0x8e0401e4  lw          $a0, 0x1E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1ABBE8u, 0x1ABBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABBF0u;
label_1abbf0:
    // 0x1abbf0: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x1abbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1abbf4:
    // 0x1abbf4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1ABBF4u;
    {
        const bool branch_taken_0x1abbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abbf4) {
            ctx->pc = 0x1ABBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABBF4u;
            // 0x1abbf8: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABC2Cu;
            goto label_1abc2c;
        }
    }
    ctx->pc = 0x1ABBFCu;
    // 0x1abbfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1abbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc00: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x1abc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
    // 0x1abc04: 0x0  nop
    ctx->pc = 0x1abc04u;
    // NOP
label_1abc08:
    // 0x1abc08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1abc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1abc0c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ABC0Cu;
    {
        const bool branch_taken_0x1abc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abc0c) {
            ctx->pc = 0x1ABC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABC0Cu;
            // 0x1abc10: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABC2Cu;
            goto label_1abc2c;
        }
    }
    ctx->pc = 0x1ABC14u;
    // 0x1abc14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1abc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1abc18: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1abc18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1abc1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ABC1Cu;
    {
        const bool branch_taken_0x1abc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC1Cu;
        // 0x1abc20: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc1c) {
            ctx->pc = 0x1ABC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abc08;
        }
    }
    ctx->pc = 0x1ABC24u;
    // 0x1abc24: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x1abc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x1abc28: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1abc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abc2c:
    // 0x1abc2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1abc2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abc30: 0x0  nop
    ctx->pc = 0x1abc30u;
    // NOP
    // 0x1abc34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1abc34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1abc38: 0x0  nop
    ctx->pc = 0x1abc38u;
    // NOP
    // 0x1abc3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1ABC3Cu;
    {
        const bool branch_taken_0x1abc3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC3Cu;
        // 0x1abc40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc3c) {
            ctx->pc = 0x1ABC54u;
            goto label_1abc54;
        }
    }
    ctx->pc = 0x1ABC44u;
    // 0x1abc44: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1abc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1abc48: 0x28420031  slti        $v0, $v0, 0x31
    ctx->pc = 0x1abc48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1abc4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABC4Cu;
    {
        const bool branch_taken_0x1abc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC4Cu;
        // 0x1abc50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc4c) {
            ctx->pc = 0x1ABC58u;
            goto label_1abc58;
        }
    }
    ctx->pc = 0x1ABC54u;
label_1abc54:
    // 0x1abc54: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1abc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_1abc58:
    // 0x1abc58: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x1abc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_1abc5c:
    // 0x1abc5c: 0x240207b8  addiu       $v0, $zero, 0x7B8
    ctx->pc = 0x1abc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1976));
    // 0x1abc60: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ABC60u;
    {
        const bool branch_taken_0x1abc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC60u;
        // 0x1abc64: 0x240207b9  addiu       $v0, $zero, 0x7B9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1977));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc60) {
            ctx->pc = 0x1ABC80u;
            goto label_1abc80;
        }
    }
    ctx->pc = 0x1ABC68u;
    // 0x1abc68: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ABC68u;
    {
        const bool branch_taken_0x1abc68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC68u;
        // 0x1abc6c: 0x240207c0  addiu       $v0, $zero, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc68) {
            ctx->pc = 0x1ABC80u;
            goto label_1abc80;
        }
    }
    ctx->pc = 0x1ABC70u;
    // 0x1abc70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABC70u;
    {
        const bool branch_taken_0x1abc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC70u;
        // 0x1abc74: 0x240207c1  addiu       $v0, $zero, 0x7C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1985));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc70) {
            ctx->pc = 0x1ABC80u;
            goto label_1abc80;
        }
    }
    ctx->pc = 0x1ABC78u;
    // 0x1abc78: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ABC78u;
    {
        const bool branch_taken_0x1abc78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abc78) {
            ctx->pc = 0x1ABCA0u;
            goto label_1abca0;
        }
    }
    ctx->pc = 0x1ABC80u;
label_1abc80:
    // 0x1abc80: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1abc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1abc84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1abc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abc88: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1abc88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1abc8c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1abc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1abc90: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x1abc90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1abc94: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1abc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1abc98: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x1abc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x1abc9c: 0xa0450030  sb          $a1, 0x30($v0)
    ctx->pc = 0x1abc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 5));
label_1abca0:
    // 0x1abca0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1ABCA0u;
    SET_GPR_U32(ctx, 31, 0x1ABCA8u);
    ctx->pc = 0x1ABCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCA0u;
    // 0x1abca4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1ABCA0u, 0x1ABCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCA8u;
label_1abca8:
    // 0x1abca8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ABCA8u;
    {
        const bool branch_taken_0x1abca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCA8u;
        // 0x1abcac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abca8) {
            ctx->pc = 0x1ABCCCu;
            goto label_1abccc;
        }
    }
    ctx->pc = 0x1ABCB0u;
    // 0x1abcb0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1ABCB0u;
    SET_GPR_U32(ctx, 31, 0x1ABCB8u);
    ctx->pc = 0x1ABCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCB0u;
    // 0x1abcb4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1ABCB0u, 0x1ABCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCB8u;
label_1abcb8:
    // 0x1abcb8: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1ABCB8u;
    SET_GPR_U32(ctx, 31, 0x1ABCC0u);
    ctx->pc = 0x1ABCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCB8u;
    // 0x1abcbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1ABCB8u, 0x1ABCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCC0u;
label_1abcc0:
    // 0x1abcc0: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x1abcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1abcc4: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABCC4u;
    {
        const bool branch_taken_0x1abcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1ABCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCC4u;
        // 0x1abcc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcc4) {
            ctx->pc = 0x1ABCD0u;
            goto label_1abcd0;
        }
    }
    ctx->pc = 0x1ABCCCu;
label_1abccc:
    // 0x1abccc: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x1abcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
label_1abcd0:
    // 0x1abcd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abcd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abcd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1abcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCD8u;
        // 0x1abcdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABCE0u;
}
