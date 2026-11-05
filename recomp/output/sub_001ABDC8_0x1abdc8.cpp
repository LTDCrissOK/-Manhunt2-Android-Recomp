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

// Function: sub_001ABDC8
// Address: 0x1abdc8 - 0x1abee0
void sub_001ABDC8_0x1abdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABDC8_0x1abdc8");
#endif

    switch (ctx->pc) {
        case 0x1abe2cu: goto label_1abe2c;
        case 0x1abe48u: goto label_1abe48;
        case 0x1abe58u: goto label_1abe58;
        case 0x1abe80u: goto label_1abe80;
        case 0x1abea8u: goto label_1abea8;
        default: break;
    }

    ctx->pc = 0x1abdc8u;

    // 0x1abdc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1abdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1abdcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abdd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1abdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1abdd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1abdd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abdd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1abdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1abddc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1abddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1abde0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1abde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1abde4: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1abde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1abde8: 0x8c4303a4  lw          $v1, 0x3A4($v0)
    ctx->pc = 0x1abde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1abdec: 0x8c710334  lw          $s1, 0x334($v1)
    ctx->pc = 0x1abdecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x1abdf0: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1abdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1abdf4: 0x14440032  bne         $v0, $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1ABDF4u;
    {
        const bool branch_taken_0x1abdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1ABDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDF4u;
        // 0x1abdf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdf4) {
            ctx->pc = 0x1ABEC0u;
            goto label_1abec0;
        }
    }
    ctx->pc = 0x1ABDFCu;
    // 0x1abdfc: 0xc621016c  lwc1        $f1, 0x16C($s1)
    ctx->pc = 0x1abdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abe00: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1abe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1abe04: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x1abe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1abe08: 0xe601016c  swc1        $f1, 0x16C($s0)
    ctx->pc = 0x1abe08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1abe0c: 0xc6200170  lwc1        $f0, 0x170($s1)
    ctx->pc = 0x1abe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abe10: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ABE10u;
    {
        const bool branch_taken_0x1abe10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ABE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE10u;
        // 0x1abe14: 0xe6000170  swc1        $f0, 0x170($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe10) {
            ctx->pc = 0x1ABE34u;
            goto label_1abe34;
        }
    }
    ctx->pc = 0x1ABE18u;
    // 0x1abe18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abe18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abe1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1abe20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abe24: 0xc06a652  jal         func_1A9948
    ctx->pc = 0x1ABE24u;
    SET_GPR_U32(ctx, 31, 0x1ABE2Cu);
    ctx->pc = 0x1ABE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE24u;
    // 0x1abe28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9948u, 0x1ABE24u, 0x1ABE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE2Cu;
label_1abe2c:
    // 0x1abe2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ABE2Cu;
    {
        const bool branch_taken_0x1abe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE2Cu;
        // 0x1abe30: 0x261201ec  addiu       $s2, $s0, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe2c) {
            ctx->pc = 0x1ABE4Cu;
            goto label_1abe4c;
        }
    }
    ctx->pc = 0x1ABE34u;
label_1abe34:
    // 0x1abe34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abe38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1abe3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe40: 0xc06a652  jal         func_1A9948
    ctx->pc = 0x1ABE40u;
    SET_GPR_U32(ctx, 31, 0x1ABE48u);
    ctx->pc = 0x1ABE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE40u;
    // 0x1abe44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9948u, 0x1ABE40u, 0x1ABE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE48u;
label_1abe48:
    // 0x1abe48: 0x261201ec  addiu       $s2, $s0, 0x1EC
    ctx->pc = 0x1abe48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
label_1abe4c:
    // 0x1abe4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1abe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1abe50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1abe54: 0x0  nop
    ctx->pc = 0x1abe54u;
    // NOP
label_1abe58:
    // 0x1abe58: 0x24900001  addiu       $s0, $a0, 0x1
    ctx->pc = 0x1abe58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1abe5c: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x1abe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1abe60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1abe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1abe64: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ABE64u;
    {
        const bool branch_taken_0x1abe64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abe64) {
            ctx->pc = 0x1ABE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABE64u;
            // 0x1abe68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABEACu;
            goto label_1abeac;
        }
    }
    ctx->pc = 0x1ABE6Cu;
    // 0x1abe6c: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x1abe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1abe70: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1ABE70u;
    {
        const bool branch_taken_0x1abe70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abe70) {
            ctx->pc = 0x1ABE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABE70u;
            // 0x1abe74: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABEA0u;
            goto label_1abea0;
        }
    }
    ctx->pc = 0x1ABE78u;
    // 0x1abe78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abe78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe7c: 0x262301ec  addiu       $v1, $s1, 0x1EC
    ctx->pc = 0x1abe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 492));
label_1abe80:
    // 0x1abe80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1abe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1abe84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ABE84u;
    {
        const bool branch_taken_0x1abe84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE84u;
        // 0x1abe88: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe84) {
            ctx->pc = 0x1ABE9Cu;
            goto label_1abe9c;
        }
    }
    ctx->pc = 0x1ABE8Cu;
    // 0x1abe8c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1abe8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1abe90: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ABE90u;
    {
        const bool branch_taken_0x1abe90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE90u;
        // 0x1abe94: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe90) {
            ctx->pc = 0x1ABE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abe80;
        }
    }
    ctx->pc = 0x1ABE98u;
    // 0x1abe98: 0x8e2201e8  lw          $v0, 0x1E8($s1)
    ctx->pc = 0x1abe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
label_1abe9c:
    // 0x1abe9c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1abe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1abea0:
    // 0x1abea0: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1ABEA0u;
    SET_GPR_U32(ctx, 31, 0x1ABEA8u);
    ctx->pc = 0x1ABEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABEA0u;
    // 0x1abea4: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1ABEA0u, 0x1ABEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABEA8u;
label_1abea8:
    // 0x1abea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1abeac:
    // 0x1abeac: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1abeacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1abeb0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1ABEB0u;
    {
        const bool branch_taken_0x1abeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEB0u;
        // 0x1abeb4: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abeb0) {
            ctx->pc = 0x1ABE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abe58;
        }
    }
    ctx->pc = 0x1ABEB8u;
    // 0x1abeb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABEB8u;
    {
        const bool branch_taken_0x1abeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEB8u;
        // 0x1abebc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abeb8) {
            ctx->pc = 0x1ABEC8u;
            goto label_1abec8;
        }
    }
    ctx->pc = 0x1ABEC0u;
label_1abec0:
    // 0x1abec0: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1abec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x1abec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1abec8:
    // 0x1abec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1abec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abecc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1abeccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abed0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1abed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1abed4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABED4u;
        // 0x1abed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABEDCu;
    // 0x1abedc: 0x0  nop
    ctx->pc = 0x1abedcu;
    // NOP
    ctx->pc = 0x1abee0u;
}
