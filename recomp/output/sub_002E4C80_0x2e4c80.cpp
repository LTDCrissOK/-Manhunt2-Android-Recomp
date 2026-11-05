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

// Function: sub_002E4C80
// Address: 0x2e4c80 - 0x2e4d78
void sub_002E4C80_0x2e4c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4C80_0x2e4c80");
#endif

    switch (ctx->pc) {
        case 0x2e4c9cu: goto label_2e4c9c;
        case 0x2e4ce4u: goto label_2e4ce4;
        case 0x2e4d38u: goto label_2e4d38;
        case 0x2e4d44u: goto label_2e4d44;
        case 0x2e4d58u: goto label_2e4d58;
        case 0x2e4d60u: goto label_2e4d60;
        default: break;
    }

    ctx->pc = 0x2e4c80u;

    // 0x2e4c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4c88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e4c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e4c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e4c94: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x2E4C94u;
    SET_GPR_U32(ctx, 31, 0x2E4C9Cu);
    ctx->pc = 0x2E4C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C94u;
    // 0x2e4c98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2E4C94u, 0x2E4C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C9Cu;
label_2e4c9c:
    // 0x2e4c9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4C9Cu;
    {
        const bool branch_taken_0x2e4c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C9Cu;
        // 0x2e4ca0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c9c) {
            ctx->pc = 0x2E4CB4u;
            goto label_2e4cb4;
        }
    }
    ctx->pc = 0x2E4CA4u;
    // 0x2e4ca4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e4ca8: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x2e4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x2e4cac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4CACu;
    {
        const bool branch_taken_0x2e4cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CACu;
        // 0x2e4cb0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4cac) {
            ctx->pc = 0x2E4CCCu;
            goto label_2e4ccc;
        }
    }
    ctx->pc = 0x2E4CB4u;
label_2e4cb4:
    // 0x2e4cb4: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x2e4cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948897)));
    // 0x2e4cb8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E4CB8u;
    {
        const bool branch_taken_0x2e4cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CB8u;
        // 0x2e4cbc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4cb8) {
            ctx->pc = 0x2E4D60u;
            goto label_2e4d60;
        }
    }
    ctx->pc = 0x2E4CC0u;
    // 0x2e4cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4cc4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2E4CC4u;
    {
        const bool branch_taken_0x2e4cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CC4u;
        // 0x2e4cc8: 0xa062b822  sb          $v0, -0x47DE($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294948898), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4cc4) {
            ctx->pc = 0x2E4D60u;
            goto label_2e4d60;
        }
    }
    ctx->pc = 0x2E4CCCu;
label_2e4ccc:
    // 0x2e4ccc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e4cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2e4cd0: 0x9062b821  lbu         $v0, -0x47DF($v1)
    ctx->pc = 0x2e4cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FB821u));
    // 0x2e4cd4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E4CD4u;
    {
        const bool branch_taken_0x2e4cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4cd4) {
            ctx->pc = 0x2E4CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4CD4u;
            // 0x2e4cd8: 0xa060b821  sb          $zero, -0x47DF($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 4294948897), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4CDCu;
            goto label_2e4cdc;
        }
    }
    ctx->pc = 0x2E4CDCu;
label_2e4cdc:
    // 0x2e4cdc: 0xc0a1802  jal         func_286008
    ctx->pc = 0x2E4CDCu;
    SET_GPR_U32(ctx, 31, 0x2E4CE4u);
    ctx->pc = 0x2E4CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CDCu;
    // 0x2e4ce0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286008u, 0x2E4CDCu, 0x2E4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4CE4u;
label_2e4ce4:
    // 0x2e4ce4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2e4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2e4ce8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2e4ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x2e4cec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e4cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e4cf0: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E4CF0u;
    {
        const bool branch_taken_0x2e4cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CF0u;
        // 0x2e4cf4: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4cf0) {
            ctx->pc = 0x2E4D60u;
            goto label_2e4d60;
        }
    }
    ctx->pc = 0x2E4CF8u;
    // 0x2e4cf8: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2e4cfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e4cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e4d00: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E4D00u;
    {
        const bool branch_taken_0x2e4d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E4D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D00u;
        // 0x2e4d04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d00) {
            ctx->pc = 0x2E4D3Cu;
            goto label_2e4d3c;
        }
    }
    ctx->pc = 0x2E4D08u;
    // 0x2e4d08: 0x8e0211e4  lw          $v0, 0x11E4($s0)
    ctx->pc = 0x2e4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
    // 0x2e4d0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E4D0Cu;
    {
        const bool branch_taken_0x2e4d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d0c) {
            ctx->pc = 0x2E4D3Cu;
            goto label_2e4d3c;
        }
    }
    ctx->pc = 0x2E4D14u;
    // 0x2e4d14: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x2e4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2e4d18: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e4d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e4d1c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2e4d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2e4d20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4D20u;
    {
        const bool branch_taken_0x2e4d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D20u;
        // 0x2e4d24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d20) {
            ctx->pc = 0x2E4D3Cu;
            goto label_2e4d3c;
        }
    }
    ctx->pc = 0x2E4D28u;
    // 0x2e4d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e4d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4d30: 0xc0bc58c  jal         func_2F1630
    ctx->pc = 0x2E4D30u;
    SET_GPR_U32(ctx, 31, 0x2E4D38u);
    ctx->pc = 0x2E4D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D30u;
    // 0x2e4d34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1630u, 0x2E4D30u, 0x2E4D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D38u;
label_2e4d38:
    // 0x2e4d38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e4d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e4d3c:
    // 0x2e4d3c: 0xc08b6b2  jal         func_22DAC8
    ctx->pc = 0x2E4D3Cu;
    SET_GPR_U32(ctx, 31, 0x2E4D44u);
    ctx->pc = 0x2E4D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D3Cu;
    // 0x2e4d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAC8u, 0x2E4D3Cu, 0x2E4D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D44u;
label_2e4d44:
    // 0x2e4d44: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2e4d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2e4d48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e4d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d50: 0xc0bd62c  jal         func_2F58B0
    ctx->pc = 0x2E4D50u;
    SET_GPR_U32(ctx, 31, 0x2E4D58u);
    ctx->pc = 0x2E4D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D50u;
    // 0x2e4d54: 0xe6000378  swc1        $f0, 0x378($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 888), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2E4D50u, 0x2E4D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D58u;
label_2e4d58:
    // 0x2e4d58: 0xc0bb688  jal         func_2EDA20
    ctx->pc = 0x2E4D58u;
    SET_GPR_U32(ctx, 31, 0x2E4D60u);
    ctx->pc = 0x2E4D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D58u;
    // 0x2e4d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA20u, 0x2E4D58u, 0x2E4D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D60u;
label_2e4d60:
    // 0x2e4d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4d64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e4d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4d68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D6Cu;
        // 0x2e4d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4D74u;
    // 0x2e4d74: 0x0  nop
    ctx->pc = 0x2e4d74u;
    // NOP
    ctx->pc = 0x2e4d78u;
}
