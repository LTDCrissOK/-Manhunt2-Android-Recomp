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

// Function: sub_0011AF10
// Address: 0x11af10 - 0x11b080
void sub_0011AF10_0x11af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AF10_0x11af10");
#endif

    switch (ctx->pc) {
        case 0x11af38u: goto label_11af38;
        case 0x11af50u: goto label_11af50;
        case 0x11af98u: goto label_11af98;
        case 0x11b034u: goto label_11b034;
        default: break;
    }

    ctx->pc = 0x11af10u;

    // 0x11af10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11af14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11af18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11af1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11af1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11af20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11af24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11af24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11af28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11af2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11af2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af30: 0x92041213  lbu         $a0, 0x1213($s0)
    ctx->pc = 0x11af30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11af34: 0x0  nop
    ctx->pc = 0x11af34u;
    // NOP
label_11af38:
    // 0x11af38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11af38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af3c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x11af3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af40: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x11af40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11af44: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x11AF44u;
    {
        const bool branch_taken_0x11af44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF44u;
        // 0x11af48: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af44) {
            ctx->pc = 0x11B060u;
            goto label_11b060;
        }
    }
    ctx->pc = 0x11AF4Cu;
    // 0x11af4c: 0x92021211  lbu         $v0, 0x1211($s0)
    ctx->pc = 0x11af4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
label_11af50:
    // 0x11af50: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x11af50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x11af54: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11af54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11af58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11af58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11af5c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x11af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11af60: 0x8c620210  lw          $v0, 0x210($v1)
    ctx->pc = 0x11af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x11af64: 0x14520038  bne         $v0, $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x11AF64u;
    {
        const bool branch_taken_0x11af64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x11AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF64u;
        // 0x11af68: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af64) {
            ctx->pc = 0x11B048u;
            goto label_11b048;
        }
    }
    ctx->pc = 0x11AF6Cu;
    // 0x11af6c: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x11af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
    // 0x11af70: 0x54510036  bnel        $v0, $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x11AF70u;
    {
        const bool branch_taken_0x11af70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x11af70) {
            ctx->pc = 0x11AF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AF70u;
            // 0x11af74: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B04Cu;
            goto label_11b04c;
        }
    }
    ctx->pc = 0x11AF78u;
    // 0x11af78: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x11af78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af7c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x11af7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x11af80: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x11af80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11af84: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x11af84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11af88: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x11af88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11af8c: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x11AF8Cu;
    {
        const bool branch_taken_0x11af8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11af8c) {
            ctx->pc = 0x11AF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AF8Cu;
            // 0x11af90: 0x92051211  lbu         $a1, 0x1211($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B028u;
            goto label_11b028;
        }
    }
    ctx->pc = 0x11AF94u;
    // 0x11af94: 0x92021211  lbu         $v0, 0x1211($s0)
    ctx->pc = 0x11af94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
label_11af98:
    // 0x11af98: 0x82980  sll         $a1, $t0, 6
    ctx->pc = 0x11af98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x11af9c: 0x93180  sll         $a2, $t1, 6
    ctx->pc = 0x11af9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x11afa0: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11afa4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11afa8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11afa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11afac: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x11afacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11afb0: 0x24a50210  addiu       $a1, $a1, 0x210
    ctx->pc = 0x11afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 528));
    // 0x11afb4: 0x24c60210  addiu       $a2, $a2, 0x210
    ctx->pc = 0x11afb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 528));
    // 0x11afb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11afbc: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x11afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x11afc0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x11afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x11afc4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x11afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11afc8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x11afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x11afcc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x11afccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11afd0: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x11afd0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11afd4: 0x8ca70020  lw          $a3, 0x20($a1)
    ctx->pc = 0x11afd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x11afd8: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x11afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11afdc: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x11afdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11afe0: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x11afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11afe4: 0xacc70020  sw          $a3, 0x20($a2)
    ctx->pc = 0x11afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 7));
    // 0x11afe8: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x11afe8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11afec: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x11afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x11aff0: 0xacc20024  sw          $v0, 0x24($a2)
    ctx->pc = 0x11aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
    // 0x11aff4: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x11aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x11aff8: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x11aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x11affc: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x11affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x11b000: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x11b000u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x11b004: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x11b004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x11b008: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x11b008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x11b00c: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x11b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x11b010: 0xacc40034  sw          $a0, 0x34($a2)
    ctx->pc = 0x11b010u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 4));
    // 0x11b014: 0x92021213  lbu         $v0, 0x1213($s0)
    ctx->pc = 0x11b014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11b018: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x11b018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11b01c: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x11B01Cu;
    {
        const bool branch_taken_0x11b01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b01c) {
            ctx->pc = 0x11B020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B01Cu;
            // 0x11b020: 0x92021211  lbu         $v0, 0x1211($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11af98;
        }
    }
    ctx->pc = 0x11B024u;
    // 0x11b024: 0x92051211  lbu         $a1, 0x1211($s0)
    ctx->pc = 0x11b024u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
label_11b028:
    // 0x11b028: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x11b028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b02c: 0xc046b0c  jal         func_11AC30
    ctx->pc = 0x11B02Cu;
    SET_GPR_U32(ctx, 31, 0x11B034u);
    ctx->pc = 0x11B030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B02Cu;
    // 0x11b030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AC30u, 0x11B02Cu, 0x11B034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B034u;
label_11b034:
    // 0x11b034: 0x92021213  lbu         $v0, 0x1213($s0)
    ctx->pc = 0x11b034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11b038: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11b038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b03c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11b040: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11B040u;
    {
        const bool branch_taken_0x11b040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B040u;
        // 0x11b044: 0xa2021213  sb          $v0, 0x1213($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4627), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b040) {
            ctx->pc = 0x11B060u;
            goto label_11b060;
        }
    }
    ctx->pc = 0x11B048u;
label_11b048:
    // 0x11b048: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x11b048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_11b04c:
    // 0x11b04c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x11b04cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x11b050: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x11b050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x11b054: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x11b054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11b058: 0x5440ffbd  bnel        $v0, $zero, . + 4 + (-0x43 << 2)
    ctx->pc = 0x11B058u;
    {
        const bool branch_taken_0x11b058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b058) {
            ctx->pc = 0x11B05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B058u;
            // 0x11b05c: 0x92021211  lbu         $v0, 0x1211($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11af50;
        }
    }
    ctx->pc = 0x11B060u;
label_11b060:
    // 0x11b060: 0x54e0ffb5  bnel        $a3, $zero, . + 4 + (-0x4B << 2)
    ctx->pc = 0x11B060u;
    {
        const bool branch_taken_0x11b060 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b060) {
            ctx->pc = 0x11B064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B060u;
            // 0x11b064: 0x92041213  lbu         $a0, 0x1213($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11af38;
        }
    }
    ctx->pc = 0x11B068u;
    // 0x11b068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b06c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b06cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b070: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b074: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11b074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b078: 0x3e00008  jr          $ra
    ctx->pc = 0x11B078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B078u;
        // 0x11b07c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B080u;
}
