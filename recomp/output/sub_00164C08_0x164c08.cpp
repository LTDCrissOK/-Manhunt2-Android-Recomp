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

// Function: sub_00164C08
// Address: 0x164c08 - 0x164ea8
void sub_00164C08_0x164c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164C08_0x164c08");
#endif

    switch (ctx->pc) {
        case 0x164c40u: goto label_164c40;
        case 0x164c60u: goto label_164c60;
        case 0x164c70u: goto label_164c70;
        case 0x164c7cu: goto label_164c7c;
        case 0x164c98u: goto label_164c98;
        case 0x164ce4u: goto label_164ce4;
        case 0x164d04u: goto label_164d04;
        case 0x164d34u: goto label_164d34;
        case 0x164d44u: goto label_164d44;
        case 0x164d54u: goto label_164d54;
        case 0x164d64u: goto label_164d64;
        case 0x164d94u: goto label_164d94;
        case 0x164da4u: goto label_164da4;
        case 0x164ddcu: goto label_164ddc;
        case 0x164decu: goto label_164dec;
        case 0x164e30u: goto label_164e30;
        case 0x164e5cu: goto label_164e5c;
        default: break;
    }

    ctx->pc = 0x164c08u;

    // 0x164c08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x164c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x164c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164c10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x164c1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x164c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x164c20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x164c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x164c24: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x164c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x164c28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x164c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x164c2c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x164c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x164c30: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x164C30u;
    {
        const bool branch_taken_0x164c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C30u;
        // 0x164c34: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c30) {
            ctx->pc = 0x164E84u;
            goto label_164e84;
        }
    }
    ctx->pc = 0x164C38u;
    // 0x164c38: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x164c38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c3c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x164c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_164c40:
    // 0x164c40: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x164c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x164c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164c48: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x164c48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164c4c: 0x12600089  beqz        $s3, . + 4 + (0x89 << 2)
    ctx->pc = 0x164C4Cu;
    {
        const bool branch_taken_0x164c4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C4Cu;
        // 0x164c50: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c4c) {
            ctx->pc = 0x164E74u;
            goto label_164e74;
        }
    }
    ctx->pc = 0x164C54u;
    // 0x164c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c58: 0xc04f1ae  jal         func_13C6B8
    ctx->pc = 0x164C58u;
    SET_GPR_U32(ctx, 31, 0x164C60u);
    ctx->pc = 0x164C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164C58u;
    // 0x164c5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6B8u, 0x164C58u, 0x164C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C60u;
label_164c60:
    // 0x164c60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164C60u;
    {
        const bool branch_taken_0x164c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C60u;
        // 0x164c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c60) {
            ctx->pc = 0x164C70u;
            goto label_164c70;
        }
    }
    ctx->pc = 0x164C68u;
    // 0x164c68: 0xc04f452  jal         func_13D148
    ctx->pc = 0x164C68u;
    SET_GPR_U32(ctx, 31, 0x164C70u);
    ctx->pc = 0x164C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164C68u;
    // 0x164c6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x164C68u, 0x164C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C70u;
label_164c70:
    // 0x164c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c74: 0xc04f112  jal         func_13C448
    ctx->pc = 0x164C74u;
    SET_GPR_U32(ctx, 31, 0x164C7Cu);
    ctx->pc = 0x164C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164C74u;
    // 0x164c78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x164C74u, 0x164C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C7Cu;
label_164c7c:
    // 0x164c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164c80: 0x54430040  bnel        $v0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x164C80u;
    {
        const bool branch_taken_0x164c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x164c80) {
            ctx->pc = 0x164C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164C80u;
            // 0x164c84: 0x8e0203b0  lw          $v0, 0x3B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164D84u;
            goto label_164d84;
        }
    }
    ctx->pc = 0x164C88u;
    // 0x164c88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c8c: 0x26060228  addiu       $a2, $s0, 0x228
    ctx->pc = 0x164c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x164c90: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x164c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x164c94: 0x0  nop
    ctx->pc = 0x164c94u;
    // NOP
label_164c98:
    // 0x164c98: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x164c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x164c9c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x164c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164ca0: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x164CA0u;
    {
        const bool branch_taken_0x164ca0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CA0u;
        // 0x164ca4: 0x2031021  addu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ca0) {
            ctx->pc = 0x164D6Cu;
            goto label_164d6c;
        }
    }
    ctx->pc = 0x164CA8u;
    // 0x164ca8: 0x8c52022c  lw          $s2, 0x22C($v0)
    ctx->pc = 0x164ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x164cac: 0x2643fffe  addiu       $v1, $s2, -0x2
    ctx->pc = 0x164cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x164cb0: 0x2c620018  sltiu       $v0, $v1, 0x18
    ctx->pc = 0x164cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x164cb4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x164CB4u;
    {
        const bool branch_taken_0x164cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CB4u;
        // 0x164cb8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cb4) {
            ctx->pc = 0x164D6Cu;
            goto label_164d6c;
        }
    }
    ctx->pc = 0x164CBCu;
    // 0x164cbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164cc0: 0x2442ef40  addiu       $v0, $v0, -0x10C0
    ctx->pc = 0x164cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963008));
    // 0x164cc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x164cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164cc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x164cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164ccc: 0x800008  jr          $a0
    ctx->pc = 0x164CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164CD4u: goto label_164cd4;
            case 0x164D6Cu: goto label_164d6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164CCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x164CD4u;
label_164cd4:
    // 0x164cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x164cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cdc: 0xc04d6fe  jal         func_135BF8
    ctx->pc = 0x164CDCu;
    SET_GPR_U32(ctx, 31, 0x164CE4u);
    ctx->pc = 0x164CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164CDCu;
    // 0x164ce0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BF8u, 0x164CDCu, 0x164CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164CE4u;
label_164ce4:
    // 0x164ce4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x164ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x164ce8: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164CE8u;
    {
        const bool branch_taken_0x164ce8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x164CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CE8u;
        // 0x164cec: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ce8) {
            ctx->pc = 0x164CF8u;
            goto label_164cf8;
        }
    }
    ctx->pc = 0x164CF0u;
    // 0x164cf0: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164CF0u;
    {
        const bool branch_taken_0x164cf0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x164cf0) {
            ctx->pc = 0x164CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164CF0u;
            // 0x164cf4: 0x8e02039c  lw          $v0, 0x39C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164D08u;
            goto label_164d08;
        }
    }
    ctx->pc = 0x164CF8u;
label_164cf8:
    // 0x164cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cfc: 0xc059be8  jal         func_166FA0
    ctx->pc = 0x164CFCu;
    SET_GPR_U32(ctx, 31, 0x164D04u);
    ctx->pc = 0x164D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164CFCu;
    // 0x164d00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166FA0u, 0x164CFCu, 0x164D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D04u;
label_164d04:
    // 0x164d04: 0x8e02039c  lw          $v0, 0x39C($s0)
    ctx->pc = 0x164d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
label_164d08:
    // 0x164d08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x164D08u;
    {
        const bool branch_taken_0x164d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D08u;
        // 0x164d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d08) {
            ctx->pc = 0x164D38u;
            goto label_164d38;
        }
    }
    ctx->pc = 0x164D10u;
    // 0x164d10: 0x8e0203a4  lw          $v0, 0x3A4($s0)
    ctx->pc = 0x164d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x164d14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164D14u;
    {
        const bool branch_taken_0x164d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D14u;
        // 0x164d18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d14) {
            ctx->pc = 0x164D3Cu;
            goto label_164d3c;
        }
    }
    ctx->pc = 0x164D1Cu;
    // 0x164d1c: 0x8e0203a0  lw          $v0, 0x3A0($s0)
    ctx->pc = 0x164d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
    // 0x164d20: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x164D20u;
    {
        const bool branch_taken_0x164d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x164d20) {
            ctx->pc = 0x164D3Cu;
            goto label_164d3c;
        }
    }
    ctx->pc = 0x164D28u;
    // 0x164d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d2c: 0xc04d7d4  jal         func_135F50
    ctx->pc = 0x164D2Cu;
    SET_GPR_U32(ctx, 31, 0x164D34u);
    ctx->pc = 0x164D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D2Cu;
    // 0x164d30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F50u, 0x164D2Cu, 0x164D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D34u;
label_164d34:
    // 0x164d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164d38:
    // 0x164d38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x164d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_164d3c:
    // 0x164d3c: 0xc04f10c  jal         func_13C430
    ctx->pc = 0x164D3Cu;
    SET_GPR_U32(ctx, 31, 0x164D44u);
    ctx->pc = 0x164D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D3Cu;
    // 0x164d40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x164D3Cu, 0x164D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D44u;
label_164d44:
    // 0x164d44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x164d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d4c: 0xc04f124  jal         func_13C490
    ctx->pc = 0x164D4Cu;
    SET_GPR_U32(ctx, 31, 0x164D54u);
    ctx->pc = 0x164D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D4Cu;
    // 0x164d50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C490u, 0x164D4Cu, 0x164D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D54u;
label_164d54:
    // 0x164d54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x164d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d5c: 0xc04f118  jal         func_13C460
    ctx->pc = 0x164D5Cu;
    SET_GPR_U32(ctx, 31, 0x164D64u);
    ctx->pc = 0x164D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D5Cu;
    // 0x164d60: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x164D5Cu, 0x164D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D64u;
label_164d64:
    // 0x164d64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x164D64u;
    {
        const bool branch_taken_0x164d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D64u;
        // 0x164d68: 0x8e0203b0  lw          $v0, 0x3B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d64) {
            ctx->pc = 0x164D84u;
            goto label_164d84;
        }
    }
    ctx->pc = 0x164D6Cu;
label_164d6c:
    // 0x164d6c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x164d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x164d70: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x164d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164d74: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x164d74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x164d78: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x164D78u;
    {
        const bool branch_taken_0x164d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D78u;
        // 0x164d7c: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d78) {
            ctx->pc = 0x164C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164c98;
        }
    }
    ctx->pc = 0x164D80u;
    // 0x164d80: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x164d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
label_164d84:
    // 0x164d84: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x164D84u;
    {
        const bool branch_taken_0x164d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D84u;
        // 0x164d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d84) {
            ctx->pc = 0x164DE0u;
            goto label_164de0;
        }
    }
    ctx->pc = 0x164D8Cu;
    // 0x164d8c: 0xc04f112  jal         func_13C448
    ctx->pc = 0x164D8Cu;
    SET_GPR_U32(ctx, 31, 0x164D94u);
    ctx->pc = 0x164D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D8Cu;
    // 0x164d90: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x164D8Cu, 0x164D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D94u;
label_164d94:
    // 0x164d94: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x164D94u;
    {
        const bool branch_taken_0x164d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D94u;
        // 0x164d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d94) {
            ctx->pc = 0x164DE4u;
            goto label_164de4;
        }
    }
    ctx->pc = 0x164D9Cu;
    // 0x164d9c: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x164D9Cu;
    SET_GPR_U32(ctx, 31, 0x164DA4u);
    ctx->pc = 0x164DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D9Cu;
    // 0x164da0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x164D9Cu, 0x164DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164DA4u;
label_164da4:
    // 0x164da4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x164da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164da8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x164da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x164dac: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x164dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x164db0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x164db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x164db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164db8: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x164db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x164dbc: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x164DBCu;
    {
        const bool branch_taken_0x164dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x164DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DBCu;
        // 0x164dc0: 0x28a20007  slti        $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164dbc) {
            ctx->pc = 0x164E70u;
            goto label_164e70;
        }
    }
    ctx->pc = 0x164DC4u;
    // 0x164dc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x164DC4u;
    {
        const bool branch_taken_0x164dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DC4u;
        // 0x164dc8: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164dc4) {
            ctx->pc = 0x164DE0u;
            goto label_164de0;
        }
    }
    ctx->pc = 0x164DCCu;
    // 0x164dcc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x164DCCu;
    {
        const bool branch_taken_0x164dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164dcc) {
            ctx->pc = 0x164DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164DCCu;
            // 0x164dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164DE4u;
            goto label_164de4;
        }
    }
    ctx->pc = 0x164DD4u;
    // 0x164dd4: 0xc0cda26  jal         func_336898
    ctx->pc = 0x164DD4u;
    SET_GPR_U32(ctx, 31, 0x164DDCu);
    ctx->pc = 0x164DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164DD4u;
    // 0x164dd8: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x164DD4u, 0x164DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164DDCu;
label_164ddc:
    // 0x164ddc: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x164ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
label_164de0:
    // 0x164de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164de4:
    // 0x164de4: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x164DE4u;
    SET_GPR_U32(ctx, 31, 0x164DECu);
    ctx->pc = 0x164DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164DE4u;
    // 0x164de8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x164DE4u, 0x164DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164DECu;
label_164dec:
    // 0x164dec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x164decu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164df0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x164df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x164df4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164DF4u;
    {
        const bool branch_taken_0x164df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DF4u;
        // 0x164df8: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164df4) {
            ctx->pc = 0x164E0Cu;
            goto label_164e0c;
        }
    }
    ctx->pc = 0x164DFCu;
    // 0x164dfc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164DFCu;
    {
        const bool branch_taken_0x164dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DFCu;
        // 0x164e00: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164dfc) {
            ctx->pc = 0x164E0Cu;
            goto label_164e0c;
        }
    }
    ctx->pc = 0x164E04u;
    // 0x164e04: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x164E04u;
    {
        const bool branch_taken_0x164e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E04u;
        // 0x164e08: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e04) {
            ctx->pc = 0x164E60u;
            goto label_164e60;
        }
    }
    ctx->pc = 0x164E0Cu;
label_164e0c:
    // 0x164e0c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x164e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x164e10: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x164e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x164e14: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x164e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x164e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164e1c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x164e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x164e20: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x164E20u;
    {
        const bool branch_taken_0x164e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E20u;
        // 0x164e24: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e20) {
            ctx->pc = 0x164E60u;
            goto label_164e60;
        }
    }
    ctx->pc = 0x164E28u;
    // 0x164e28: 0xc044240  jal         func_110900
    ctx->pc = 0x164E28u;
    SET_GPR_U32(ctx, 31, 0x164E30u);
    ctx->pc = 0x110900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110900u, 0x164E28u, 0x164E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E30u;
label_164e30:
    // 0x164e30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x164e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e34: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x164e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x164e38: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x164E38u;
    {
        const bool branch_taken_0x164e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E38u;
        // 0x164e3c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e38) {
            ctx->pc = 0x164E5Cu;
            goto label_164e5c;
        }
    }
    ctx->pc = 0x164E40u;
    // 0x164e40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164E40u;
    {
        const bool branch_taken_0x164e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E40u;
        // 0x164e44: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e40) {
            ctx->pc = 0x164E60u;
            goto label_164e60;
        }
    }
    ctx->pc = 0x164E48u;
    // 0x164e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164e4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x164e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e50: 0xae0203c0  sw          $v0, 0x3C0($s0)
    ctx->pc = 0x164e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 2));
    // 0x164e54: 0xc059be8  jal         func_166FA0
    ctx->pc = 0x164E54u;
    SET_GPR_U32(ctx, 31, 0x164E5Cu);
    ctx->pc = 0x164E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164E54u;
    // 0x164e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166FA0u, 0x164E54u, 0x164E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E5Cu;
label_164e5c:
    // 0x164e5c: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x164e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_164e60:
    // 0x164e60: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x164e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x164e64: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x164e64u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164e68: 0x52a30007  beql        $s5, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x164E68u;
    {
        const bool branch_taken_0x164e68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x164e68) {
            ctx->pc = 0x164E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164E68u;
            // 0x164e6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164E88u;
            goto label_164e88;
        }
    }
    ctx->pc = 0x164E70u;
label_164e70:
    // 0x164e70: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x164e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_164e74:
    // 0x164e74: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x164e74u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164e78: 0x2e830010  sltiu       $v1, $s4, 0x10
    ctx->pc = 0x164e78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x164e7c: 0x5460ff70  bnel        $v1, $zero, . + 4 + (-0x90 << 2)
    ctx->pc = 0x164E7Cu;
    {
        const bool branch_taken_0x164e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164e7c) {
            ctx->pc = 0x164E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164E7Cu;
            // 0x164e80: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164c40;
        }
    }
    ctx->pc = 0x164E84u;
label_164e84:
    // 0x164e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164e88:
    // 0x164e88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164e8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164e8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164e90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x164e90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164e94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x164e94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164e98: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x164e98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x164e9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x164e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x164EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EA0u;
        // 0x164ea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164EA8u;
}
