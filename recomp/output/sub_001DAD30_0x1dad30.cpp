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

// Function: sub_001DAD30
// Address: 0x1dad30 - 0x1daf28
void sub_001DAD30_0x1dad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAD30_0x1dad30");
#endif

    switch (ctx->pc) {
        case 0x1dad88u: goto label_1dad88;
        case 0x1dade8u: goto label_1dade8;
        case 0x1daea0u: goto label_1daea0;
        case 0x1daec4u: goto label_1daec4;
        case 0x1daefcu: goto label_1daefc;
        default: break;
    }

    ctx->pc = 0x1dad30u;

    // 0x1dad30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dad34: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1dad34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1dad38: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1dad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1dad3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dad3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dad40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1dad40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad44: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1dad48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1dad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1dad4c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1dad4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1dad50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1dad54: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1dad54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dad58: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x1dad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1dad5c: 0x8c530ffc  lw          $s3, 0xFFC($v0)
    ctx->pc = 0x1dad5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
    // 0x1dad60: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x1dad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1dad64: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1dad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1dad68: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1dad68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dad6c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1dad6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1dad70: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1DAD70u;
    {
        const bool branch_taken_0x1dad70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD70u;
        // 0x1dad74: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad70) {
            ctx->pc = 0x1DAEF4u;
            goto label_1daef4;
        }
    }
    ctx->pc = 0x1DAD78u;
    // 0x1dad78: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1dad78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1dad7c: 0xc454d80c  lwc1        $f20, -0x27F4($v0)
    ctx->pc = 0x1dad7cu;
    { uint32_t bits = FAST_READ32(0x45D80Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dad80: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1dad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1dad84: 0x0  nop
    ctx->pc = 0x1dad84u;
    // NOP
label_1dad88:
    // 0x1dad88: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1dad88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1dad8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dad90: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1dad90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dad94: 0x52000050  beql        $s0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x1DAD94u;
    {
        const bool branch_taken_0x1dad94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dad94) {
            ctx->pc = 0x1DAD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAD94u;
            // 0x1dad98: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAED8u;
            goto label_1daed8;
        }
    }
    ctx->pc = 0x1DAD9Cu;
    // 0x1dad9c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1dad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1dada0: 0x90430032  lbu         $v1, 0x32($v0)
    ctx->pc = 0x1dada0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x1dada4: 0x5460004c  bnel        $v1, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x1DADA4u;
    {
        const bool branch_taken_0x1dada4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dada4) {
            ctx->pc = 0x1DADA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DADA4u;
            // 0x1dada8: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAED8u;
            goto label_1daed8;
        }
    }
    ctx->pc = 0x1DADACu;
    // 0x1dadac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1dadacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dadb0: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1dadb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1dadb4: 0x8e2291e0  lw          $v0, -0x6E20($s1)
    ctx->pc = 0x1dadb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91E0u));
    // 0x1dadb8: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1dadb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x1dadbc: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x1dadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1dadc0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1dadc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadc4: 0x8e4591dc  lw          $a1, -0x6E24($s2)
    ctx->pc = 0x1dadc4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F91DCu));
    // 0x1dadc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dadc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dadcc: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x1dadccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1dadd0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1dadd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1dadd4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dadd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dadd8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1dadd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1daddc: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x1daddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dade0: 0xc079c30  jal         func_1E70C0
    ctx->pc = 0x1DADE0u;
    SET_GPR_U32(ctx, 31, 0x1DADE8u);
    ctx->pc = 0x1DADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DADE0u;
    // 0x1dade4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E70C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E70C0u, 0x1DADE0u, 0x1DADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DADE8u;
label_1dade8:
    // 0x1dade8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DADE8u;
    {
        const bool branch_taken_0x1dade8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADE8u;
        // 0x1dadec: 0x8e2391e0  lw          $v1, -0x6E20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dade8) {
            ctx->pc = 0x1DAE6Cu;
            goto label_1dae6c;
        }
    }
    ctx->pc = 0x1DADF0u;
    // 0x1dadf0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1dadf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dadf4: 0x8e4491dc  lw          $a0, -0x6E24($s2)
    ctx->pc = 0x1dadf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1dadf8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1dadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1dadfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dadfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dae00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dae04: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1dae04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dae08: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1dae08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1dae0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dae0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dae10: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x1dae10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x1dae14: 0x8e2491e0  lw          $a0, -0x6E20($s1)
    ctx->pc = 0x1dae14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939104)));
    // 0x1dae18: 0x8e4291dc  lw          $v0, -0x6E24($s2)
    ctx->pc = 0x1dae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1dae1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1dae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dae20: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1dae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dae24: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dae24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dae28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dae2c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1dae2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1dae30: 0x8e2291e0  lw          $v0, -0x6E20($s1)
    ctx->pc = 0x1dae30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939104)));
    // 0x1dae34: 0x8e4491dc  lw          $a0, -0x6E24($s2)
    ctx->pc = 0x1dae34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1dae38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dae38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dae3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dae40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dae40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dae44: 0xac700034  sw          $s0, 0x34($v1)
    ctx->pc = 0x1dae44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 16));
    // 0x1dae48: 0x8e2291e0  lw          $v0, -0x6E20($s1)
    ctx->pc = 0x1dae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939104)));
    // 0x1dae4c: 0x8e4491dc  lw          $a0, -0x6E24($s2)
    ctx->pc = 0x1dae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1dae50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dae50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dae54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dae58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dae5c: 0xac660038  sw          $a2, 0x38($v1)
    ctx->pc = 0x1dae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 6));
    // 0x1dae60: 0x8e2291e0  lw          $v0, -0x6E20($s1)
    ctx->pc = 0x1dae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939104)));
    // 0x1dae64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dae68: 0xae2291e0  sw          $v0, -0x6E20($s1)
    ctx->pc = 0x1dae68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939104), GPR_U32(ctx, 2));
label_1dae6c:
    // 0x1dae6c: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x1dae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1dae70: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1dae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1dae74: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1dae74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1dae78: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DAE78u;
    {
        const bool branch_taken_0x1dae78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dae78) {
            ctx->pc = 0x1DAE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAE78u;
            // 0x1dae7c: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAED8u;
            goto label_1daed8;
        }
    }
    ctx->pc = 0x1DAE80u;
    // 0x1dae80: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1dae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1dae84: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x1dae84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x1dae88: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DAE88u;
    {
        const bool branch_taken_0x1dae88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dae88) {
            ctx->pc = 0x1DAE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAE88u;
            // 0x1dae8c: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAED8u;
            goto label_1daed8;
        }
    }
    ctx->pc = 0x1DAE90u;
    // 0x1dae90: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1dae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1dae94: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x1dae94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1dae98: 0xc0f75b6  jal         func_3DD6D8
    ctx->pc = 0x1DAE98u;
    SET_GPR_U32(ctx, 31, 0x1DAEA0u);
    ctx->pc = 0x1DAE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE98u;
    // 0x1dae9c: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD6D8u, 0x1DAE98u, 0x1DAEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEA0u;
label_1daea0:
    // 0x1daea0: 0x8e2391e0  lw          $v1, -0x6E20($s1)
    ctx->pc = 0x1daea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939104)));
    // 0x1daea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daea8: 0x8e4691dc  lw          $a2, -0x6E24($s2)
    ctx->pc = 0x1daea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1daeac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1daeacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daeb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1daeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1daeb4: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x1daeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1daeb8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1daeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1daebc: 0xc079c9c  jal         func_1E7270
    ctx->pc = 0x1DAEBCu;
    SET_GPR_U32(ctx, 31, 0x1DAEC4u);
    ctx->pc = 0x1DAEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAEBCu;
    // 0x1daec0: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7270u, 0x1DAEBCu, 0x1DAEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEC4u;
label_1daec4:
    // 0x1daec4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAEC4u;
    {
        const bool branch_taken_0x1daec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEC4u;
        // 0x1daec8: 0x8e2291e0  lw          $v0, -0x6E20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daec4) {
            ctx->pc = 0x1DAED4u;
            goto label_1daed4;
        }
    }
    ctx->pc = 0x1DAECCu;
    // 0x1daecc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1daeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1daed0: 0xae2291e0  sw          $v0, -0x6E20($s1)
    ctx->pc = 0x1daed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939104), GPR_U32(ctx, 2));
label_1daed4:
    // 0x1daed4: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x1daed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_1daed8:
    // 0x1daed8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1daed8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1daedc: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x1daedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1daee0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1daee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1daee4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1daee4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1daee8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1daee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1daeec: 0x5440ffa6  bnel        $v0, $zero, . + 4 + (-0x5A << 2)
    ctx->pc = 0x1DAEECu;
    {
        const bool branch_taken_0x1daeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daeec) {
            ctx->pc = 0x1DAEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAEECu;
            // 0x1daef0: 0x8e620044  lw          $v0, 0x44($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dad88;
        }
    }
    ctx->pc = 0x1DAEF4u;
label_1daef4:
    // 0x1daef4: 0xc0797fe  jal         func_1E5FF8
    ctx->pc = 0x1DAEF4u;
    SET_GPR_U32(ctx, 31, 0x1DAEFCu);
    ctx->pc = 0x1E5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5FF8u, 0x1DAEF4u, 0x1DAEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEFCu;
label_1daefc:
    // 0x1daefc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1daefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1daf00: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1daf00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1daf04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1daf04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1daf08: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1daf08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1daf0c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1daf0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1daf10: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1daf10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1daf14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1daf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1daf18: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1daf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1daf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF1Cu;
        // 0x1daf20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAF24u;
    // 0x1daf24: 0x0  nop
    ctx->pc = 0x1daf24u;
    // NOP
    ctx->pc = 0x1daf28u;
}
