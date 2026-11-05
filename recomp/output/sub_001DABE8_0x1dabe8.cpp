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

// Function: sub_001DABE8
// Address: 0x1dabe8 - 0x1dad30
void sub_001DABE8_0x1dabe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DABE8_0x1dabe8");
#endif

    switch (ctx->pc) {
        case 0x1dac14u: goto label_1dac14;
        case 0x1dac28u: goto label_1dac28;
        case 0x1dac90u: goto label_1dac90;
        case 0x1dace0u: goto label_1dace0;
        case 0x1dad08u: goto label_1dad08;
        default: break;
    }

    ctx->pc = 0x1dabe8u;

    // 0x1dabe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dabe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dabec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dabecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dabf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dabf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dabf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dabf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dabf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dabf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dabfc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dabfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dac00: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1dac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1dac04: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1dac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1dac08: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1dac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1dac0c: 0xc076824  jal         func_1DA090
    ctx->pc = 0x1DAC0Cu;
    SET_GPR_U32(ctx, 31, 0x1DAC14u);
    ctx->pc = 0x1DAC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC0Cu;
    // 0x1dac10: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA090u, 0x1DAC0Cu, 0x1DAC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC14u;
label_1dac14:
    // 0x1dac14: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAC14u;
    {
        const bool branch_taken_0x1dac14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dac14) {
            ctx->pc = 0x1DAC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAC14u;
            // 0x1dac18: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAC2Cu;
            goto label_1dac2c;
        }
    }
    ctx->pc = 0x1DAC1Cu;
    // 0x1dac1c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1dac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1dac20: 0xc07984e  jal         func_1E6138
    ctx->pc = 0x1DAC20u;
    SET_GPR_U32(ctx, 31, 0x1DAC28u);
    ctx->pc = 0x1DAC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC20u;
    // 0x1dac24: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6138u, 0x1DAC20u, 0x1DAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC28u;
label_1dac28:
    // 0x1dac28: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1dac28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1dac2c:
    // 0x1dac2c: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x1dac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1dac30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAC30u;
    {
        const bool branch_taken_0x1dac30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC30u;
        // 0x1dac34: 0x8c520ffc  lw          $s2, 0xFFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac30) {
            ctx->pc = 0x1DAC48u;
            goto label_1dac48;
        }
    }
    ctx->pc = 0x1DAC38u;
    // 0x1dac38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1dac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1dac3c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1dac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1dac40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAC40u;
    {
        const bool branch_taken_0x1dac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC40u;
        // 0x1dac44: 0x3442fdef  ori         $v0, $v0, 0xFDEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65007);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac40) {
            ctx->pc = 0x1DAC54u;
            goto label_1dac54;
        }
    }
    ctx->pc = 0x1DAC48u;
label_1dac48:
    // 0x1dac48: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1dac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1dac4c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1dac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1dac50: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1dac50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_1dac54:
    // 0x1dac54: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1dac54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac58: 0xac62fff4  sw          $v0, -0xC($v1)
    ctx->pc = 0x1dac58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
    // 0x1dac5c: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x1dac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x1dac60: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x1dac60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1dac64: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dac68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1dac68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac6c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1dac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dac70: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1dac70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1dac74: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DAC74u;
    {
        const bool branch_taken_0x1dac74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC74u;
        // 0x1dac78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac74) {
            ctx->pc = 0x1DAD00u;
            goto label_1dad00;
        }
    }
    ctx->pc = 0x1DAC7Cu;
    // 0x1dac7c: 0x3c110010  lui         $s1, 0x10
    ctx->pc = 0x1dac7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16 << 16));
    // 0x1dac80: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x1dac80u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x1dac84: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x1dac84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1dac88: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1dac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1dac8c: 0x0  nop
    ctx->pc = 0x1dac8cu;
    // NOP
label_1dac90:
    // 0x1dac90: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1dac90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1dac94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dac98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dac98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dac9c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DAC9Cu;
    {
        const bool branch_taken_0x1dac9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC9Cu;
        // 0x1daca0: 0x8ea291ac  lw          $v0, -0x6E54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac9c) {
            ctx->pc = 0x1DACE0u;
            goto label_1dace0;
        }
    }
    ctx->pc = 0x1DACA4u;
    // 0x1daca4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DACA4u;
    {
        const bool branch_taken_0x1daca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daca4) {
            ctx->pc = 0x1DACA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DACA4u;
            // 0x1daca8: 0x8ca200b8  lw          $v0, 0xB8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DACBCu;
            goto label_1dacbc;
        }
    }
    ctx->pc = 0x1DACACu;
    // 0x1dacac: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x1dacacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x1dacb0: 0x5051000c  beql        $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DACB0u;
    {
        const bool branch_taken_0x1dacb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1dacb0) {
            ctx->pc = 0x1DACB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DACB0u;
            // 0x1dacb4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DACE4u;
            goto label_1dace4;
        }
    }
    ctx->pc = 0x1DACB8u;
    // 0x1dacb8: 0x8ca200b8  lw          $v0, 0xB8($a1)
    ctx->pc = 0x1dacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
label_1dacbc:
    // 0x1dacbc: 0x8ec3fff4  lw          $v1, -0xC($s6)
    ctx->pc = 0x1dacbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967284)));
    // 0x1dacc0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1dacc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dacc4: 0x34630210  ori         $v1, $v1, 0x210
    ctx->pc = 0x1dacc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)528);
    // 0x1dacc8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1dacc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1daccc: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DACCCu;
    {
        const bool branch_taken_0x1daccc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daccc) {
            ctx->pc = 0x1DACD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DACCCu;
            // 0x1dacd0: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DACE4u;
            goto label_1dace4;
        }
    }
    ctx->pc = 0x1DACD4u;
    // 0x1dacd4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1dacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1dacd8: 0xc079966  jal         func_1E6598
    ctx->pc = 0x1DACD8u;
    SET_GPR_U32(ctx, 31, 0x1DACE0u);
    ctx->pc = 0x1DACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DACD8u;
    // 0x1dacdc: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6598u, 0x1DACD8u, 0x1DACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACE0u;
label_1dace0:
    // 0x1dace0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1dace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1dace4:
    // 0x1dace4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dace4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dace8: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1dace8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1dacec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1dacecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dacf0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1dacf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1dacf4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1dacf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dacf8: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1DACF8u;
    {
        const bool branch_taken_0x1dacf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dacf8) {
            ctx->pc = 0x1DACFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DACF8u;
            // 0x1dacfc: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dac90;
        }
    }
    ctx->pc = 0x1DAD00u;
label_1dad00:
    // 0x1dad00: 0xc0797fe  jal         func_1E5FF8
    ctx->pc = 0x1DAD00u;
    SET_GPR_U32(ctx, 31, 0x1DAD08u);
    ctx->pc = 0x1E5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5FF8u, 0x1DAD00u, 0x1DAD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD08u;
label_1dad08:
    // 0x1dad08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dad08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dad0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dad0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dad10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dad10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dad14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dad14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dad18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dad18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dad1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1dad1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dad20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1dad20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dad24: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1dad24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dad28: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD28u;
        // 0x1dad2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAD30u;
}
