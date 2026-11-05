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

// Function: sub_002CCB90
// Address: 0x2ccb90 - 0x2ccd80
void sub_002CCB90_0x2ccb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCB90_0x2ccb90");
#endif

    switch (ctx->pc) {
        case 0x2ccbb0u: goto label_2ccbb0;
        case 0x2ccbb8u: goto label_2ccbb8;
        case 0x2ccbd8u: goto label_2ccbd8;
        case 0x2ccbf8u: goto label_2ccbf8;
        case 0x2ccc3cu: goto label_2ccc3c;
        case 0x2ccc7cu: goto label_2ccc7c;
        case 0x2ccd30u: goto label_2ccd30;
        case 0x2ccd38u: goto label_2ccd38;
        case 0x2ccd54u: goto label_2ccd54;
        case 0x2ccd64u: goto label_2ccd64;
        default: break;
    }

    ctx->pc = 0x2ccb90u;

    // 0x2ccb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ccb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ccb94: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2ccb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x2ccb98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ccb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ccb9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ccb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ccba0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ccba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ccba4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ccba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ccba8: 0xc0dc4fa  jal         func_3713E8
    ctx->pc = 0x2CCBA8u;
    SET_GPR_U32(ctx, 31, 0x2CCBB0u);
    ctx->pc = 0x2CCBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCBA8u;
    // 0x2ccbac: 0x2484f910  addiu       $a0, $a0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3713E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3713E8u, 0x2CCBA8u, 0x2CCBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBB0u;
label_2ccbb0:
    // 0x2ccbb0: 0xc0b368a  jal         func_2CDA28
    ctx->pc = 0x2CCBB0u;
    SET_GPR_U32(ctx, 31, 0x2CCBB8u);
    ctx->pc = 0x2CDA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA28u, 0x2CCBB0u, 0x2CCBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBB8u;
label_2ccbb8:
    // 0x2ccbb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCBB8u;
    {
        const bool branch_taken_0x2ccbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBB8u;
        // 0x2ccbbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbb8) {
            ctx->pc = 0x2CCBC8u;
            goto label_2ccbc8;
        }
    }
    ctx->pc = 0x2CCBC0u;
    // 0x2ccbc0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2CCBC0u;
    {
        const bool branch_taken_0x2ccbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBC0u;
        // 0x2ccbc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbc0) {
            ctx->pc = 0x2CCD68u;
            goto label_2ccd68;
        }
    }
    ctx->pc = 0x2CCBC8u;
label_2ccbc8:
    // 0x2ccbc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ccbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccbcc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2ccbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ccbd0: 0xc0ee940  jal         func_3BA500
    ctx->pc = 0x2CCBD0u;
    SET_GPR_U32(ctx, 31, 0x2CCBD8u);
    ctx->pc = 0x2CCBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCBD0u;
    // 0x2ccbd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA500u, 0x2CCBD0u, 0x2CCBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBD8u;
label_2ccbd8:
    // 0x2ccbd8: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x2ccbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x2ccbdc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ccbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ccbe0: 0x8c62b4a8  lw          $v0, -0x4B58($v1)
    ctx->pc = 0x2ccbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2ccbe4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2ccbe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbe8: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x2ccbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2ccbec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ccbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ccbf0: 0xc0a2202  jal         func_288808
    ctx->pc = 0x2CCBF0u;
    SET_GPR_U32(ctx, 31, 0x2CCBF8u);
    ctx->pc = 0x2CCBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCBF0u;
    // 0x2ccbf4: 0xac4332f4  sw          $v1, 0x32F4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 13044), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288808u, 0x2CCBF0u, 0x2CCBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBF8u;
label_2ccbf8:
    // 0x2ccbf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ccbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccbfc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCBFCu;
    {
        const bool branch_taken_0x2ccbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBFCu;
        // 0x2ccc00: 0x8e22b4a8  lw          $v0, -0x4B58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbfc) {
            ctx->pc = 0x2CCC10u;
            goto label_2ccc10;
        }
    }
    ctx->pc = 0x2CCC04u;
    // 0x2ccc04: 0x24030224  addiu       $v1, $zero, 0x224
    ctx->pc = 0x2ccc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
    // 0x2ccc08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCC08u;
    {
        const bool branch_taken_0x2ccc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC08u;
        // 0x2ccc0c: 0x24120040  addiu       $s2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc08) {
            ctx->pc = 0x2CCC18u;
            goto label_2ccc18;
        }
    }
    ctx->pc = 0x2CCC10u;
label_2ccc10:
    // 0x2ccc10: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x2ccc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x2ccc14: 0x24120098  addiu       $s2, $zero, 0x98
    ctx->pc = 0x2ccc14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_2ccc18:
    // 0x2ccc18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ccc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ccc1c: 0xac4332f8  sw          $v1, 0x32F8($v0)
    ctx->pc = 0x2ccc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13048), GPR_U32(ctx, 3));
    // 0x2ccc20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ccc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc24: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x2ccc24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2ccc28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ccc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ccc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc30: 0x24080224  addiu       $t0, $zero, 0x224
    ctx->pc = 0x2ccc30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
    // 0x2ccc34: 0xc0b2d6e  jal         func_2CB5B8
    ctx->pc = 0x2CCC34u;
    SET_GPR_U32(ctx, 31, 0x2CCC3Cu);
    ctx->pc = 0x2CCC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC34u;
    // 0x2ccc38: 0x3c100067  lui         $s0, 0x67 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB5B8u, 0x2CCC34u, 0x2CCC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC3Cu;
label_2ccc3c:
    // 0x2ccc3c: 0x8e22b4a8  lw          $v0, -0x4B58($s1)
    ctx->pc = 0x2ccc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2ccc40: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2ccc40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2ccc44: 0x348430c0  ori         $a0, $a0, 0x30C0
    ctx->pc = 0x2ccc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12480);
    // 0x2ccc48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ccc48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc4c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2ccc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ccc50: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2ccc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ccc54: 0x8c6732f8  lw          $a3, 0x32F8($v1)
    ctx->pc = 0x2ccc54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13048)));
    // 0x2ccc58: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2ccc58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccc5c: 0x846632f4  lh          $a2, 0x32F4($v1)
    ctx->pc = 0x2ccc5cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 13044)));
    // 0x2ccc60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ccc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc64: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x2ccc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2ccc68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ccc68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc6c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2ccc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2ccc70: 0x73bc0  sll         $a3, $a3, 15
    ctx->pc = 0x2ccc70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
    // 0x2ccc74: 0xc0eea5c  jal         func_3BA970
    ctx->pc = 0x2CCC74u;
    SET_GPR_U32(ctx, 31, 0x2CCC7Cu);
    ctx->pc = 0x2CCC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC74u;
    // 0x2ccc78: 0x73c03  sra         $a3, $a3, 16 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA970u, 0x2CCC74u, 0x2CCC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC7Cu;
label_2ccc7c:
    // 0x2ccc7c: 0x8e27b4a8  lw          $a3, -0x4B58($s1)
    ctx->pc = 0x2ccc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2ccc80: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x2ccc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x2ccc84: 0x2408f000  addiu       $t0, $zero, -0x1000
    ctx->pc = 0x2ccc84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x2ccc88: 0x3c0aff80  lui         $t2, 0xFF80
    ctx->pc = 0x2ccc88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65408 << 16));
    // 0x2ccc8c: 0x354a0fff  ori         $t2, $t2, 0xFFF
    ctx->pc = 0x2ccc8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)4095);
    // 0x2ccc90: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x2ccc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x2ccc94: 0x124b38  dsll        $t1, $s2, 12
    ctx->pc = 0x2ccc94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << 12);
    // 0x2ccc98: 0x8ce232f4  lw          $v0, 0x32F4($a3)
    ctx->pc = 0x2ccc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13044)));
    // 0x2ccc9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ccc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccca0: 0xdce530d8  ld          $a1, 0x30D8($a3)
    ctx->pc = 0x2ccca0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 12504)));
    // 0x2ccca4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2ccca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ccca8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2ccca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2cccac: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x2cccacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x2cccb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cccb4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2cccb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2cccb8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cccbc: 0x30420ff0  andi        $v0, $v0, 0xFF0
    ctx->pc = 0x2cccbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4080);
    // 0x2cccc0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2cccc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2cccc4: 0xfce530d8  sd          $a1, 0x30D8($a3)
    ctx->pc = 0x2cccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 12504), GPR_U64(ctx, 5));
    // 0x2cccc8: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2ccccc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cccccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cccd0: 0xdc6230d8  ld          $v0, 0x30D8($v1)
    ctx->pc = 0x2cccd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 12504)));
    // 0x2cccd4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2cccd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2cccd8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2cccd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2cccdc: 0xfc6230d8  sd          $v0, 0x30D8($v1)
    ctx->pc = 0x2cccdcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 12504), GPR_U64(ctx, 2));
    // 0x2ccce0: 0x8e25b4a8  lw          $a1, -0x4B58($s1)
    ctx->pc = 0x2ccce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2ccce4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2ccce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2ccce8: 0x8ca332f4  lw          $v1, 0x32F4($a1)
    ctx->pc = 0x2ccce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13044)));
    // 0x2cccec: 0xdca23100  ld          $v0, 0x3100($a1)
    ctx->pc = 0x2cccecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 12544)));
    // 0x2cccf0: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2cccf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2cccf4: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x2cccf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2cccf8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2cccf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2cccfc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2cccfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2ccd00: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2ccd00u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2ccd04: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2ccd04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2ccd08: 0x30c60ff0  andi        $a2, $a2, 0xFF0
    ctx->pc = 0x2ccd08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4080);
    // 0x2ccd0c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2ccd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2ccd10: 0xfca23100  sd          $v0, 0x3100($a1)
    ctx->pc = 0x2ccd10u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 12544), GPR_U64(ctx, 2));
    // 0x2ccd14: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2ccd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2ccd18: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ccd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ccd1c: 0xdc623100  ld          $v0, 0x3100($v1)
    ctx->pc = 0x2ccd1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 12544)));
    // 0x2ccd20: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2ccd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2ccd24: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2ccd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2ccd28: 0xc0f2708  jal         func_3C9C20
    ctx->pc = 0x2CCD28u;
    SET_GPR_U32(ctx, 31, 0x2CCD30u);
    ctx->pc = 0x2CCD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD28u;
    // 0x2ccd2c: 0xfc623100  sd          $v0, 0x3100($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 12544), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9C20u, 0x2CCD28u, 0x2CCD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD30u;
label_2ccd30:
    // 0x2ccd30: 0xc0e178e  jal         func_385E38
    ctx->pc = 0x2CCD30u;
    SET_GPR_U32(ctx, 31, 0x2CCD38u);
    ctx->pc = 0x385E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385E38u, 0x2CCD30u, 0x2CCD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD38u;
label_2ccd38:
    // 0x2ccd38: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2ccd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2ccd3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ccd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ccd40: 0x8c6230ac  lw          $v0, 0x30AC($v1)
    ctx->pc = 0x2ccd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12460)));
    // 0x2ccd44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CCD44u;
    {
        const bool branch_taken_0x2ccd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD44u;
        // 0x2ccd48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd44) {
            ctx->pc = 0x2CCD68u;
            goto label_2ccd68;
        }
    }
    ctx->pc = 0x2CCD4Cu;
    // 0x2ccd4c: 0xc0ee82c  jal         func_3BA0B0
    ctx->pc = 0x2CCD4Cu;
    SET_GPR_U32(ctx, 31, 0x2CCD54u);
    ctx->pc = 0x3BA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA0B0u, 0x2CCD4Cu, 0x2CCD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD54u;
label_2ccd54:
    // 0x2ccd54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccd58: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2ccd58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ccd5c: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCD5Cu;
    SET_GPR_U32(ctx, 31, 0x2CCD64u);
    ctx->pc = 0x2CCD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD5Cu;
    // 0x2ccd60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCD5Cu, 0x2CCD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD64u;
label_2ccd64:
    // 0x2ccd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ccd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ccd68:
    // 0x2ccd68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ccd68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccd6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ccd6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ccd70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ccd70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccd74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ccd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ccd78: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD78u;
        // 0x2ccd7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCD80u;
}
