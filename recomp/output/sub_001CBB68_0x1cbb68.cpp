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

// Function: sub_001CBB68
// Address: 0x1cbb68 - 0x1cbc48
void sub_001CBB68_0x1cbb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBB68_0x1cbb68");
#endif

    switch (ctx->pc) {
        case 0x1cbb94u: goto label_1cbb94;
        case 0x1cbba4u: goto label_1cbba4;
        case 0x1cbbb0u: goto label_1cbbb0;
        case 0x1cbbccu: goto label_1cbbcc;
        case 0x1cbc08u: goto label_1cbc08;
        default: break;
    }

    ctx->pc = 0x1cbb68u;

    // 0x1cbb68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cbb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cbb6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cbb70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cbb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cbb74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cbb74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cbb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cbb7c: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x1cbb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1cbb80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cbb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cbb84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cbb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb88: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cbb8c: 0xc072888  jal         func_1CA220
    ctx->pc = 0x1CBB8Cu;
    SET_GPR_U32(ctx, 31, 0x1CBB94u);
    ctx->pc = 0x1CBB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB8Cu;
    // 0x1cbb90: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA220u, 0x1CBB8Cu, 0x1CBB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB94u;
label_1cbb94:
    // 0x1cbb94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBB94u;
    {
        const bool branch_taken_0x1cbb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB94u;
        // 0x1cbb98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb94) {
            ctx->pc = 0x1CBBB0u;
            goto label_1cbbb0;
        }
    }
    ctx->pc = 0x1CBB9Cu;
    // 0x1cbb9c: 0xc072818  jal         func_1CA060
    ctx->pc = 0x1CBB9Cu;
    SET_GPR_U32(ctx, 31, 0x1CBBA4u);
    ctx->pc = 0x1CBBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB9Cu;
    // 0x1cbba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA060u, 0x1CBB9Cu, 0x1CBBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBA4u;
label_1cbba4:
    // 0x1cbba4: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x1cbba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1cbba8: 0xc07266c  jal         func_1C99B0
    ctx->pc = 0x1CBBA8u;
    SET_GPR_U32(ctx, 31, 0x1CBBB0u);
    ctx->pc = 0x1CBBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBA8u;
    // 0x1cbbac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99B0u, 0x1CBBA8u, 0x1CBBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBB0u;
label_1cbbb0:
    // 0x1cbbb0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cbbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cbbb4: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1cbbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x1cbbb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cbbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cbbbc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CBBBCu;
    {
        const bool branch_taken_0x1cbbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbbc) {
            ctx->pc = 0x1CBBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBBBCu;
            // 0x1cbbc0: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBC0Cu;
            goto label_1cbc0c;
        }
    }
    ctx->pc = 0x1CBBC4u;
    // 0x1cbbc4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1CBBC4u;
    SET_GPR_U32(ctx, 31, 0x1CBBCCu);
    ctx->pc = 0x1CBBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBC4u;
    // 0x1cbbc8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1CBBC4u, 0x1CBBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBCCu;
label_1cbbcc:
    // 0x1cbbcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbd0: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CBBD0u;
    {
        const bool branch_taken_0x1cbbd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbd0) {
            ctx->pc = 0x1CBBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBBD0u;
            // 0x1cbbd4: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBC0Cu;
            goto label_1cbc0c;
        }
    }
    ctx->pc = 0x1CBBD8u;
    // 0x1cbbd8: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x1cbbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x1cbbdc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1cbbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1cbbe0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CBBE0u;
    {
        const bool branch_taken_0x1cbbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbe0) {
            ctx->pc = 0x1CBBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBBE0u;
            // 0x1cbbe4: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBC0Cu;
            goto label_1cbc0c;
        }
    }
    ctx->pc = 0x1CBBE8u;
    // 0x1cbbe8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1cbbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1cbbec: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBBECu;
    {
        const bool branch_taken_0x1cbbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbec) {
            ctx->pc = 0x1CBBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBBECu;
            // 0x1cbbf0: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBC0Cu;
            goto label_1cbc0c;
        }
    }
    ctx->pc = 0x1CBBF4u;
    // 0x1cbbf4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1cbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cbbf8: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBBF8u;
    {
        const bool branch_taken_0x1cbbf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbbf8) {
            ctx->pc = 0x1CBBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBBF8u;
            // 0x1cbbfc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBC0Cu;
            goto label_1cbc0c;
        }
    }
    ctx->pc = 0x1CBC00u;
    // 0x1cbc00: 0xc072818  jal         func_1CA060
    ctx->pc = 0x1CBC00u;
    SET_GPR_U32(ctx, 31, 0x1CBC08u);
    ctx->pc = 0x1CBC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC00u;
    // 0x1cbc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA060u, 0x1CBC00u, 0x1CBC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC08u;
label_1cbc08:
    // 0x1cbc08: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1cbc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1cbc0c:
    // 0x1cbc0c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1cbc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1cbc10: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1cbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cbc14: 0x8c631004  lw          $v1, 0x1004($v1)
    ctx->pc = 0x1cbc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x1cbc18: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CBC18u;
    {
        const bool branch_taken_0x1cbc18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cbc18) {
            ctx->pc = 0x1CBC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBC18u;
            // 0x1cbc1c: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBC20u;
            goto label_1cbc20;
        }
    }
    ctx->pc = 0x1CBC20u;
label_1cbc20:
    // 0x1cbc20: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1cbc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cbc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbc28: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1cbc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x1cbc2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbc2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cbc30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cbc30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbc34: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1cbc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cbc38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cbc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cbc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC3Cu;
        // 0x1cbc40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBC44u;
    // 0x1cbc44: 0x0  nop
    ctx->pc = 0x1cbc44u;
    // NOP
    ctx->pc = 0x1cbc48u;
}
