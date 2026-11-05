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

// Function: sub_001C4F98
// Address: 0x1c4f98 - 0x1c51b0
void sub_001C4F98_0x1c4f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4F98_0x1c4f98");
#endif

    switch (ctx->pc) {
        case 0x1c4fd0u: goto label_1c4fd0;
        case 0x1c506cu: goto label_1c506c;
        default: break;
    }

    ctx->pc = 0x1c4f98u;

    // 0x1c4f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4f9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4fa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c4fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c4fa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4fa8: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x1c4fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x1c4fac: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1c4facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c4fb0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c4fb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4fb8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c4fb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c4fbc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C4FBCu;
    {
        const bool branch_taken_0x1c4fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FBCu;
        // 0x1c4fc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fbc) {
            ctx->pc = 0x1C5064u;
            goto label_1c5064;
        }
    }
    ctx->pc = 0x1C4FC4u;
    // 0x1c4fc4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1c4fc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4fc8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1c4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c4fcc: 0x0  nop
    ctx->pc = 0x1c4fccu;
    // NOP
label_1c4fd0:
    // 0x1c4fd0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1c4fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c4fd4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1c4fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4fd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4fdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4fe0: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C4FE0u;
    {
        const bool branch_taken_0x1c4fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4fe0) {
            ctx->pc = 0x1C4FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4FE0u;
            // 0x1c4fe4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5044u;
            goto label_1c5044;
        }
    }
    ctx->pc = 0x1C4FE8u;
    // 0x1c4fe8: 0x8c6400c0  lw          $a0, 0xC0($v1)
    ctx->pc = 0x1c4fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1c4fec: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1c4fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1c4ff0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4FF0u;
    {
        const bool branch_taken_0x1c4ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ff0) {
            ctx->pc = 0x1C4FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4FF0u;
            // 0x1c4ff4: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5020u;
            goto label_1c5020;
        }
    }
    ctx->pc = 0x1C4FF8u;
    // 0x1c4ff8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1c4ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1c4ffc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4FFCu;
    {
        const bool branch_taken_0x1c4ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ffc) {
            ctx->pc = 0x1C5000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4FFCu;
            // 0x1c5000: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5020u;
            goto label_1c5020;
        }
    }
    ctx->pc = 0x1C5004u;
    // 0x1c5004: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1c5004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x1c5008: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1C5008u;
    {
        const bool branch_taken_0x1c5008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5008) {
            ctx->pc = 0x1C500Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5008u;
            // 0x1c500c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5044u;
            goto label_1c5044;
        }
    }
    ctx->pc = 0x1C5010u;
    // 0x1c5010: 0x90420032  lbu         $v0, 0x32($v0)
    ctx->pc = 0x1c5010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x1c5014: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5014u;
    {
        const bool branch_taken_0x1c5014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5014) {
            ctx->pc = 0x1C5018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5014u;
            // 0x1c5018: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5044u;
            goto label_1c5044;
        }
    }
    ctx->pc = 0x1C501Cu;
    // 0x1c501c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1c501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1c5020:
    // 0x1c5020: 0x26050034  addiu       $a1, $s0, 0x34
    ctx->pc = 0x1c5020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x1c5024: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1c5024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c5028: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x1c5028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x1c502c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1c502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1c5030: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c5030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1c5034: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1c5034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1c5038: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1c5038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1c503c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C503Cu;
    {
        const bool branch_taken_0x1c503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C503Cu;
        // 0x1c5040: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c503c) {
            ctx->pc = 0x1C5048u;
            goto label_1c5048;
        }
    }
    ctx->pc = 0x1C5044u;
label_1c5044:
    // 0x1c5044: 0x26050034  addiu       $a1, $s0, 0x34
    ctx->pc = 0x1c5044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_1c5048:
    // 0x1c5048: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1c5048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c504c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1c504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c5050: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c5050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5054: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c5054u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c5058: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1c5058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c505c: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1C505Cu;
    {
        const bool branch_taken_0x1c505c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c505c) {
            ctx->pc = 0x1C5060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C505Cu;
            // 0x1c5060: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4fd0;
        }
    }
    ctx->pc = 0x1C5064u;
label_1c5064:
    // 0x1c5064: 0xc0714b2  jal         func_1C52C8
    ctx->pc = 0x1C5064u;
    SET_GPR_U32(ctx, 31, 0x1C506Cu);
    ctx->pc = 0x1C5068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5064u;
    // 0x1c5068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C52C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C52C8u, 0x1C5064u, 0x1C506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C506Cu;
label_1c506c:
    // 0x1c506c: 0x26030210  addiu       $v1, $s0, 0x210
    ctx->pc = 0x1c506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1c5070: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1c5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1c5074: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C5074u;
    {
        const bool branch_taken_0x1c5074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5074u;
        // 0x1c5078: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5074) {
            ctx->pc = 0x1C5104u;
            goto label_1c5104;
        }
    }
    ctx->pc = 0x1C507Cu;
    // 0x1c507c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1c507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1c5080: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x1c5080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x1c5084: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1c5084u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c5088: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5088u;
    {
        const bool branch_taken_0x1c5088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5088u;
        // 0x1c508c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5088) {
            ctx->pc = 0x1C5094u;
            goto label_1c5094;
        }
    }
    ctx->pc = 0x1C5090u;
    // 0x1c5090: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x1c5090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1c5094:
    // 0x1c5094: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x1c5094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x1c5098: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c5098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c509c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C509Cu;
    {
        const bool branch_taken_0x1c509c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c509c) {
            ctx->pc = 0x1C50C0u;
            goto label_1c50c0;
        }
    }
    ctx->pc = 0x1C50A4u;
    // 0x1c50a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C50A4u;
    {
        const bool branch_taken_0x1c50a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50A4u;
        // 0x1c50a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50a4) {
            ctx->pc = 0x1C50B0u;
            goto label_1c50b0;
        }
    }
    ctx->pc = 0x1C50ACu;
    // 0x1c50ac: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1c50acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1c50b0:
    // 0x1c50b0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x1c50b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1c50b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c50b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c50b8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C50B8u;
    {
        const bool branch_taken_0x1c50b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50B8u;
        // 0x1c50bc: 0x26030270  addiu       $v1, $s0, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50b8) {
            ctx->pc = 0x1C5108u;
            goto label_1c5108;
        }
    }
    ctx->pc = 0x1C50C0u;
label_1c50c0:
    // 0x1c50c0: 0x7e000210  sq          $zero, 0x210($s0)
    ctx->pc = 0x1c50c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 528), GPR_VEC(ctx, 0));
    // 0x1c50c4: 0x7e000220  sq          $zero, 0x220($s0)
    ctx->pc = 0x1c50c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), GPR_VEC(ctx, 0));
    // 0x1c50c8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1c50c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1c50cc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c50ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c50d0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1c50d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1c50d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c50d8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1c50d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1c50dc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1c50dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1c50e0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1c50e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1c50e4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1c50e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1c50e8: 0xc460c73c  lwc1        $f0, -0x38C4($v1)
    ctx->pc = 0x1c50e8u;
    { uint32_t bits = FAST_READ32(0x45C73Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50ec: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x1c50ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x1c50f0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1c50f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1c50f4: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1c50f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1c50f8: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1c50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1c50fc: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1c50fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1c5100: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1c5100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_1c5104:
    // 0x1c5104: 0x26030270  addiu       $v1, $s0, 0x270
    ctx->pc = 0x1c5104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
label_1c5108:
    // 0x1c5108: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1c5108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1c510c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C510Cu;
    {
        const bool branch_taken_0x1c510c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C510Cu;
        // 0x1c5110: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c510c) {
            ctx->pc = 0x1C519Cu;
            goto label_1c519c;
        }
    }
    ctx->pc = 0x1C5114u;
    // 0x1c5114: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1c5114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1c5118: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x1c5118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x1c511c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1c511cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c5120: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5120u;
    {
        const bool branch_taken_0x1c5120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5120u;
        // 0x1c5124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5120) {
            ctx->pc = 0x1C512Cu;
            goto label_1c512c;
        }
    }
    ctx->pc = 0x1C5128u;
    // 0x1c5128: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x1c5128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1c512c:
    // 0x1c512c: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x1c512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x1c5130: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c5130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c5134: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5134u;
    {
        const bool branch_taken_0x1c5134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5134) {
            ctx->pc = 0x1C5158u;
            goto label_1c5158;
        }
    }
    ctx->pc = 0x1C513Cu;
    // 0x1c513c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C513Cu;
    {
        const bool branch_taken_0x1c513c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C513Cu;
        // 0x1c5140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c513c) {
            ctx->pc = 0x1C5148u;
            goto label_1c5148;
        }
    }
    ctx->pc = 0x1C5144u;
    // 0x1c5144: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1c5144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1c5148:
    // 0x1c5148: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x1c5148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1c514c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c514cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c5150: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C5150u;
    {
        const bool branch_taken_0x1c5150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5150) {
            ctx->pc = 0x1C5154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5150u;
            // 0x1c5154: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C51A0u;
            goto label_1c51a0;
        }
    }
    ctx->pc = 0x1C5158u;
label_1c5158:
    // 0x1c5158: 0x7e000270  sq          $zero, 0x270($s0)
    ctx->pc = 0x1c5158u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 624), GPR_VEC(ctx, 0));
    // 0x1c515c: 0x7e000280  sq          $zero, 0x280($s0)
    ctx->pc = 0x1c515cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 640), GPR_VEC(ctx, 0));
    // 0x1c5160: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1c5160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1c5164: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c5164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c5168: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1c5168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1c516c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c5170: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1c5170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1c5174: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1c5174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1c5178: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1c5178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1c517c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1c517cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1c5180: 0xc460c73c  lwc1        $f0, -0x38C4($v1)
    ctx->pc = 0x1c5180u;
    { uint32_t bits = FAST_READ32(0x45C73Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5184: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x1c5184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x1c5188: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1c5188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1c518c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1c518cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1c5190: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1c5190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1c5194: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1c5194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1c5198: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1c5198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_1c519c:
    // 0x1c519c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c519cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c51a0:
    // 0x1c51a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c51a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51A4u;
        // 0x1c51a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51ACu;
    // 0x1c51ac: 0x0  nop
    ctx->pc = 0x1c51acu;
    // NOP
    ctx->pc = 0x1c51b0u;
}
