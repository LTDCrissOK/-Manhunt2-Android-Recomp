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

// Function: sub_0017FC60
// Address: 0x17fc60 - 0x1800d8
void sub_0017FC60_0x17fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FC60_0x17fc60");
#endif

    switch (ctx->pc) {
        case 0x17fcd4u: goto label_17fcd4;
        case 0x17fd00u: goto label_17fd00;
        case 0x17fd50u: goto label_17fd50;
        case 0x17fd70u: goto label_17fd70;
        case 0x17fd84u: goto label_17fd84;
        case 0x17fda8u: goto label_17fda8;
        case 0x17fe2cu: goto label_17fe2c;
        case 0x17fe68u: goto label_17fe68;
        case 0x17fe9cu: goto label_17fe9c;
        case 0x17feacu: goto label_17feac;
        case 0x17fed0u: goto label_17fed0;
        case 0x17ff20u: goto label_17ff20;
        case 0x17ff30u: goto label_17ff30;
        case 0x17ff74u: goto label_17ff74;
        case 0x17fff0u: goto label_17fff0;
        case 0x180014u: goto label_180014;
        case 0x18001cu: goto label_18001c;
        case 0x180094u: goto label_180094;
        default: break;
    }

    ctx->pc = 0x17fc60u;

    // 0x17fc60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17fc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17fc64: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x17fc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x17fc68: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x17fc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x17fc6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17fc6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc70: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x17fc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x17fc74: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x17fc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x17fc78: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x17fc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x17fc7c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x17fc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x17fc80: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x17fc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x17fc84: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x17fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x17fc88: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x17fc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x17fc8c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x17fc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x17fc90: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x17fc90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x17fc94: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x17fc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x17fc98: 0x92420412  lbu         $v0, 0x412($s2)
    ctx->pc = 0x17fc98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1042)));
    // 0x17fc9c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x17fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17fca0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17fca4: 0x8c560020  lw          $s6, 0x20($v0)
    ctx->pc = 0x17fca4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x17fca8: 0x12c000fd  beqz        $s6, . + 4 + (0xFD << 2)
    ctx->pc = 0x17FCA8u;
    {
        const bool branch_taken_0x17fca8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCA8u;
        // 0x17fcac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fca8) {
            ctx->pc = 0x1800A0u;
            goto label_1800a0;
        }
    }
    ctx->pc = 0x17FCB0u;
    // 0x17fcb0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x17fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x17fcb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17fcb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcb8: 0x2442a080  addiu       $v0, $v0, -0x5F80
    ctx->pc = 0x17fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    // 0x17fcbc: 0x8c430fbc  lw          $v1, 0xFBC($v0)
    ctx->pc = 0x17fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48B03Cu));
    // 0x17fcc0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FCC0u;
    {
        const bool branch_taken_0x17fcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCC0u;
        // 0x17fcc4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcc0) {
            ctx->pc = 0x17FCDCu;
            goto label_17fcdc;
        }
    }
    ctx->pc = 0x17FCC8u;
    // 0x17fcc8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17fccc: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x17FCCCu;
    SET_GPR_U32(ctx, 31, 0x17FCD4u);
    ctx->pc = 0x17FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCCCu;
    // 0x17fcd0: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x17FCCCu, 0x17FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FCD4u;
label_17fcd4:
    // 0x17fcd4: 0x144000f2  bnez        $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x17FCD4u;
    {
        const bool branch_taken_0x17fcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCD4u;
        // 0x17fcd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcd4) {
            ctx->pc = 0x1800A0u;
            goto label_1800a0;
        }
    }
    ctx->pc = 0x17FCDCu;
label_17fcdc:
    // 0x17fcdc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x17fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17fce0: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x17fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x17fce4: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x17FCE4u;
    {
        const bool branch_taken_0x17fce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCE4u;
        // 0x17fce8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fce4) {
            ctx->pc = 0x18009Cu;
            goto label_18009c;
        }
    }
    ctx->pc = 0x17FCECu;
    // 0x17fcec: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17fcecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17fcf0: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x17fcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x17fcf4: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x17fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x17fcf8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x17FCF8u;
    SET_GPR_U32(ctx, 31, 0x17FD00u);
    ctx->pc = 0x17FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCF8u;
    // 0x17fcfc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x17FCF8u, 0x17FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD00u;
label_17fd00:
    // 0x17fd00: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x17FD00u;
    {
        const bool branch_taken_0x17fd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD00u;
        // 0x17fd04: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd00) {
            ctx->pc = 0x18009Cu;
            goto label_18009c;
        }
    }
    ctx->pc = 0x17FD08u;
    // 0x17fd08: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x17fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x17fd0c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x17fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x17fd10: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x17fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17fd14: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x17fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x17fd18: 0x104000e0  beqz        $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x17FD18u;
    {
        const bool branch_taken_0x17fd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD18u;
        // 0x17fd1c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd18) {
            ctx->pc = 0x18009Cu;
            goto label_18009c;
        }
    }
    ctx->pc = 0x17FD20u;
    // 0x17fd20: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x17fd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fd24: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x17fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17fd28: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17FD28u;
    {
        const bool branch_taken_0x17fd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD28u;
        // 0x17fd2c: 0x24700108  addiu       $s0, $v1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd28) {
            ctx->pc = 0x17FD58u;
            goto label_17fd58;
        }
    }
    ctx->pc = 0x17FD30u;
    // 0x17fd30: 0x92420412  lbu         $v0, 0x412($s2)
    ctx->pc = 0x17fd30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1042)));
    // 0x17fd34: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17fd38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17fd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd3c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x17fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17fd40: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17fd44: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x17fd44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x17fd48: 0xc060164  jal         func_180590
    ctx->pc = 0x17FD48u;
    SET_GPR_U32(ctx, 31, 0x17FD50u);
    ctx->pc = 0x17FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD48u;
    // 0x17fd4c: 0x90850412  lbu         $a1, 0x412($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1042)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180590u, 0x17FD48u, 0x17FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD50u;
label_17fd50:
    // 0x17fd50: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x17FD50u;
    {
        const bool branch_taken_0x17fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD50u;
        // 0x17fd54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd50) {
            ctx->pc = 0x1800A0u;
            goto label_1800a0;
        }
    }
    ctx->pc = 0x17FD58u;
label_17fd58:
    // 0x17fd58: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x17fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x17fd5c: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x17fd5cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fd60: 0x12e000ce  beqz        $s7, . + 4 + (0xCE << 2)
    ctx->pc = 0x17FD60u;
    {
        const bool branch_taken_0x17fd60 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD60u;
        // 0x17fd64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd60) {
            ctx->pc = 0x18009Cu;
            goto label_18009c;
        }
    }
    ctx->pc = 0x17FD68u;
    // 0x17fd68: 0xc06021a  jal         func_180868
    ctx->pc = 0x17FD68u;
    SET_GPR_U32(ctx, 31, 0x17FD70u);
    ctx->pc = 0x17FD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD68u;
    // 0x17fd6c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180868u, 0x17FD68u, 0x17FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD70u;
label_17fd70:
    // 0x17fd70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fd74: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FD74u;
    {
        const bool branch_taken_0x17fd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fd74) {
            ctx->pc = 0x17FD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FD74u;
            // 0x17fd78: 0x8e420418  lw          $v0, 0x418($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FD8Cu;
            goto label_17fd8c;
        }
    }
    ctx->pc = 0x17FD7Cu;
    // 0x17fd7c: 0xc0601cc  jal         func_180730
    ctx->pc = 0x17FD7Cu;
    SET_GPR_U32(ctx, 31, 0x17FD84u);
    ctx->pc = 0x17FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD7Cu;
    // 0x17fd80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180730u, 0x17FD7Cu, 0x17FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD84u;
label_17fd84:
    // 0x17fd84: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x17fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x17fd88: 0x8e420418  lw          $v0, 0x418($s2)
    ctx->pc = 0x17fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
label_17fd8c:
    // 0x17fd8c: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x17FD8Cu;
    {
        const bool branch_taken_0x17fd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD8Cu;
        // 0x17fd90: 0x241e0009  addiu       $fp, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd8c) {
            ctx->pc = 0x17FFC8u;
            goto label_17ffc8;
        }
    }
    ctx->pc = 0x17FD94u;
    // 0x17fd94: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x17fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17fd98: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x17fd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x17fd9c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17fd9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17fda0: 0xc0736a8  jal         func_1CDAA0
    ctx->pc = 0x17FDA0u;
    SET_GPR_U32(ctx, 31, 0x17FDA8u);
    ctx->pc = 0x17FDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDA0u;
    // 0x17fda4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAA0u, 0x17FDA0u, 0x17FDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDA8u;
label_17fda8:
    // 0x17fda8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x17fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17fdac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x17fdacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x17fdb0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x17fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x17fdb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17fdb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17fdbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fdc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FDC0u;
    {
        const bool branch_taken_0x17fdc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDC0u;
        // 0x17fdc4: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdc0) {
            ctx->pc = 0x17FDD0u;
            goto label_17fdd0;
        }
    }
    ctx->pc = 0x17FDC8u;
    // 0x17fdc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17FDC8u;
    {
        const bool branch_taken_0x17fdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDC8u;
        // 0x17fdcc: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdc8) {
            ctx->pc = 0x17FDE0u;
            goto label_17fde0;
        }
    }
    ctx->pc = 0x17FDD0u;
label_17fdd0:
    // 0x17fdd0: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x17fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x17fdd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fdd8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x17fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x17fddc: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x17fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_17fde0:
    // 0x17fde0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fde4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x17FDE4u;
    {
        const bool branch_taken_0x17fde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDE4u;
        // 0x17fde8: 0x3c050049  lui         $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fde4) {
            ctx->pc = 0x17FE58u;
            goto label_17fe58;
        }
    }
    ctx->pc = 0x17FDECu;
    // 0x17fdec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x17fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fdf0: 0x24a39a08  addiu       $v1, $a1, -0x65F8
    ctx->pc = 0x17fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x17fdf4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17fdf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17fdfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17fe00: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x17fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x17fe04: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FE04u;
    {
        const bool branch_taken_0x17fe04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fe04) {
            ctx->pc = 0x17FE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FE04u;
            // 0x17fe08: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FE14u;
            goto label_17fe14;
        }
    }
    ctx->pc = 0x17FE0Cu;
    // 0x17fe0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17FE0Cu;
    {
        const bool branch_taken_0x17fe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE0Cu;
        // 0x17fe10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe0c) {
            ctx->pc = 0x17FE1Cu;
            goto label_17fe1c;
        }
    }
    ctx->pc = 0x17FE14u;
label_17fe14:
    // 0x17fe14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fe18: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x17fe18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17fe1c:
    // 0x17fe1c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x17FE1Cu;
    {
        const bool branch_taken_0x17fe1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE1Cu;
        // 0x17fe20: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe1c) {
            ctx->pc = 0x17FE58u;
            goto label_17fe58;
        }
    }
    ctx->pc = 0x17FE24u;
    // 0x17fe24: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x17FE24u;
    SET_GPR_U32(ctx, 31, 0x17FE2Cu);
    ctx->pc = 0x17FE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE24u;
    // 0x17fe28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x17FE24u, 0x17FE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE2Cu;
label_17fe2c:
    // 0x17fe2c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17fe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17fe30: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x17fe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17fe34: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x17fe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17fe38: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17fe38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17fe3c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17fe3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17fe40: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x17fe40u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17fe44: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x17fe44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fe48: 0x0  nop
    ctx->pc = 0x17fe48u;
    // NOP
    // 0x17fe4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17FE4Cu;
    {
        const bool branch_taken_0x17fe4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE4Cu;
        // 0x17fe50: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe4c) {
            ctx->pc = 0x17FE58u;
            goto label_17fe58;
        }
    }
    ctx->pc = 0x17FE54u;
    // 0x17fe54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17fe54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17fe58:
    // 0x17fe58: 0x1220005b  beqz        $s1, . + 4 + (0x5B << 2)
    ctx->pc = 0x17FE58u;
    {
        const bool branch_taken_0x17fe58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE58u;
        // 0x17fe5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe58) {
            ctx->pc = 0x17FFC8u;
            goto label_17ffc8;
        }
    }
    ctx->pc = 0x17FE60u;
    // 0x17fe60: 0xc06024e  jal         func_180938
    ctx->pc = 0x17FE60u;
    SET_GPR_U32(ctx, 31, 0x17FE68u);
    ctx->pc = 0x17FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE60u;
    // 0x17fe64: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180938u, 0x17FE60u, 0x17FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE68u;
label_17fe68:
    // 0x17fe68: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x17FE68u;
    {
        const bool branch_taken_0x17fe68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE68u;
        // 0x17fe6c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe68) {
            ctx->pc = 0x17FFC8u;
            goto label_17ffc8;
        }
    }
    ctx->pc = 0x17FE70u;
    // 0x17fe70: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x17fe70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x17fe74: 0x8c438a5c  lw          $v1, -0x75A4($v0)
    ctx->pc = 0x17fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937180)));
    // 0x17fe78: 0x2674a080  addiu       $s4, $s3, -0x5F80
    ctx->pc = 0x17fe78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942848));
    // 0x17fe7c: 0x8e3091c0  lw          $s0, -0x6E40($s1)
    ctx->pc = 0x17fe7cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3F91C0u));
    // 0x17fe80: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x17fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x17fe84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fe88: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x17fe88u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x17fe8c: 0xae2391c0  sw          $v1, -0x6E40($s1)
    ctx->pc = 0x17fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939072), GPR_U32(ctx, 3));
    // 0x17fe90: 0xac438a5c  sw          $v1, -0x75A4($v0)
    ctx->pc = 0x17fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937180), GPR_U32(ctx, 3));
    // 0x17fe94: 0xc04549c  jal         func_115270
    ctx->pc = 0x17FE94u;
    SET_GPR_U32(ctx, 31, 0x17FE9Cu);
    ctx->pc = 0x17FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE94u;
    // 0x17fe98: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115270u, 0x17FE94u, 0x17FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE9Cu;
label_17fe9c:
    // 0x17fe9c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x17fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17fea0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x17fea0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x17fea4: 0xc073644  jal         func_1CD910
    ctx->pc = 0x17FEA4u;
    SET_GPR_U32(ctx, 31, 0x17FEACu);
    ctx->pc = 0x17FEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEA4u;
    // 0x17fea8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD910u, 0x17FEA4u, 0x17FEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEACu;
label_17feac:
    // 0x17feac: 0x8e930fcc  lw          $s3, 0xFCC($s4)
    ctx->pc = 0x17feacu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4044)));
    // 0x17feb0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x17feb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17feb4: 0x8e950fc8  lw          $s5, 0xFC8($s4)
    ctx->pc = 0x17feb4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4040)));
    // 0x17feb8: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x17FEB8u;
    {
        const bool branch_taken_0x17feb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEB8u;
        // 0x17febc: 0xae3091c0  sw          $s0, -0x6E40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294939072), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17feb8) {
            ctx->pc = 0x17FEE8u;
            goto label_17fee8;
        }
    }
    ctx->pc = 0x17FEC0u;
    // 0x17fec0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x17fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x17fec4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x17fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17fec8: 0xc047866  jal         func_11E198
    ctx->pc = 0x17FEC8u;
    SET_GPR_U32(ctx, 31, 0x17FED0u);
    ctx->pc = 0x17FECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEC8u;
    // 0x17fecc: 0x24449a08  addiu       $a0, $v0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x17FEC8u, 0x17FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FED0u;
label_17fed0:
    // 0x17fed0: 0x56620006  bnel        $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FED0u;
    {
        const bool branch_taken_0x17fed0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x17fed0) {
            ctx->pc = 0x17FED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FED0u;
            // 0x17fed4: 0x8ee200bc  lw          $v0, 0xBC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FEECu;
            goto label_17feec;
        }
    }
    ctx->pc = 0x17FED8u;
    // 0x17fed8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17fedc: 0xae800fcc  sw          $zero, 0xFCC($s4)
    ctx->pc = 0x17fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4044), GPR_U32(ctx, 0));
    // 0x17fee0: 0xae820fc8  sw          $v0, 0xFC8($s4)
    ctx->pc = 0x17fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4040), GPR_U32(ctx, 2));
    // 0x17fee4: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x17fee4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17fee8:
    // 0x17fee8: 0x8ee200bc  lw          $v0, 0xBC($s7)
    ctx->pc = 0x17fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 188)));
label_17feec:
    // 0x17feec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x17feecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x17fef0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x17fef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x17fef4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x17FEF4u;
    {
        const bool branch_taken_0x17fef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEF4u;
        // 0x17fef8: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fef4) {
            ctx->pc = 0x17FFC0u;
            goto label_17ffc0;
        }
    }
    ctx->pc = 0x17FEFCu;
    // 0x17fefc: 0x8ee30334  lw          $v1, 0x334($s7)
    ctx->pc = 0x17fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 820)));
    // 0x17ff00: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x17ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x17ff04: 0x38420045  xori        $v0, $v0, 0x45
    ctx->pc = 0x17ff04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)69);
    // 0x17ff08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17FF08u;
    {
        const bool branch_taken_0x17ff08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF08u;
        // 0x17ff0c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff08) {
            ctx->pc = 0x17FF28u;
            goto label_17ff28;
        }
    }
    ctx->pc = 0x17FF10u;
    // 0x17ff10: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x17ff10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x17ff14: 0x2464b060  addiu       $a0, $v1, -0x4FA0
    ctx->pc = 0x17ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946912));
    // 0x17ff18: 0xc04ae3a  jal         func_12B8E8
    ctx->pc = 0x17FF18u;
    SET_GPR_U32(ctx, 31, 0x17FF20u);
    ctx->pc = 0x17FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF18u;
    // 0x17ff1c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B8E8u, 0x17FF18u, 0x17FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF20u;
label_17ff20:
    // 0x17ff20: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x17FF20u;
    {
        const bool branch_taken_0x17ff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF20u;
        // 0x17ff24: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff20) {
            ctx->pc = 0x17FFA8u;
            goto label_17ffa8;
        }
    }
    ctx->pc = 0x17FF28u;
label_17ff28:
    // 0x17ff28: 0xc09d150  jal         func_274540
    ctx->pc = 0x17FF28u;
    SET_GPR_U32(ctx, 31, 0x17FF30u);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x17FF28u, 0x17FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF30u;
label_17ff30:
    // 0x17ff30: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x17FF30u;
    {
        const bool branch_taken_0x17ff30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF30u;
        // 0x17ff34: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff30) {
            ctx->pc = 0x17FFBCu;
            goto label_17ffbc;
        }
    }
    ctx->pc = 0x17FF38u;
    // 0x17ff38: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x17ff38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x17ff3c: 0x24a39a08  addiu       $v1, $a1, -0x65F8
    ctx->pc = 0x17ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x17ff40: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17ff44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ff48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ff4c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x17ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x17ff50: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FF50u;
    {
        const bool branch_taken_0x17ff50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ff50) {
            ctx->pc = 0x17FF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FF50u;
            // 0x17ff54: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FF60u;
            goto label_17ff60;
        }
    }
    ctx->pc = 0x17FF58u;
    // 0x17ff58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17FF58u;
    {
        const bool branch_taken_0x17ff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF58u;
        // 0x17ff5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff58) {
            ctx->pc = 0x17FF68u;
            goto label_17ff68;
        }
    }
    ctx->pc = 0x17FF60u;
label_17ff60:
    // 0x17ff60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ff64: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x17ff64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17ff68:
    // 0x17ff68: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17ff68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ff6c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x17FF6Cu;
    SET_GPR_U32(ctx, 31, 0x17FF74u);
    ctx->pc = 0x17FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF6Cu;
    // 0x17ff70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x17FF6Cu, 0x17FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF74u;
label_17ff74:
    // 0x17ff74: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17ff74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17ff78: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x17ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17ff7c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x17ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17ff80: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17ff80u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17ff84: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17ff84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17ff88: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x17ff88u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17ff8c: 0x46000004  c1          0x4
    ctx->pc = 0x17ff8cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x17ff90: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x17ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x17ff94: 0xc4412238  lwc1        $f1, 0x2238($v0)
    ctx->pc = 0x17ff94u;
    { uint32_t bits = FAST_READ32(0x5B2238u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ff98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17ff98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ff9c: 0x0  nop
    ctx->pc = 0x17ff9cu;
    // NOP
    // 0x17ffa0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17FFA0u;
    {
        const bool branch_taken_0x17ffa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFA0u;
        // 0x17ffa4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffa0) {
            ctx->pc = 0x17FFBCu;
            goto label_17ffbc;
        }
    }
    ctx->pc = 0x17FFA8u;
label_17ffa8:
    // 0x17ffa8: 0x13c20003  beq         $fp, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FFA8u;
    {
        const bool branch_taken_0x17ffa8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x17FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFA8u;
        // 0x17ffac: 0x2bc20003  slti        $v0, $fp, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffa8) {
            ctx->pc = 0x17FFB8u;
            goto label_17ffb8;
        }
    }
    ctx->pc = 0x17FFB0u;
    // 0x17ffb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FFB0u;
    {
        const bool branch_taken_0x17ffb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFB0u;
        // 0x17ffb4: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffb0) {
            ctx->pc = 0x17FFC0u;
            goto label_17ffc0;
        }
    }
    ctx->pc = 0x17FFB8u;
label_17ffb8:
    // 0x17ffb8: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x17ffb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17ffbc:
    // 0x17ffbc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x17ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_17ffc0:
    // 0x17ffc0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x17ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x17ffc4: 0xac438a5c  sw          $v1, -0x75A4($v0)
    ctx->pc = 0x17ffc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F8A5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A5Cu, _value); } while (0);
label_17ffc8:
    // 0x17ffc8: 0x92420412  lbu         $v0, 0x412($s2)
    ctx->pc = 0x17ffc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1042)));
    // 0x17ffcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ffd0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x17ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17ffd4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17ffd8: 0x16c30002  bne         $s6, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FFD8u;
    {
        const bool branch_taken_0x17ffd8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x17FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFD8u;
        // 0x17ffdc: 0xac5e0024  sw          $fp, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffd8) {
            ctx->pc = 0x17FFE4u;
            goto label_17ffe4;
        }
    }
    ctx->pc = 0x17FFE0u;
    // 0x17ffe0: 0xae400420  sw          $zero, 0x420($s2)
    ctx->pc = 0x17ffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1056), GPR_U32(ctx, 0));
label_17ffe4:
    // 0x17ffe4: 0x92450412  lbu         $a1, 0x412($s2)
    ctx->pc = 0x17ffe4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1042)));
    // 0x17ffe8: 0xc060164  jal         func_180590
    ctx->pc = 0x17FFE8u;
    SET_GPR_U32(ctx, 31, 0x17FFF0u);
    ctx->pc = 0x17FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFE8u;
    // 0x17ffec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180590u, 0x17FFE8u, 0x17FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFF0u;
label_17fff0:
    // 0x17fff0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17fff4: 0x13c20029  beq         $fp, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x17FFF4u;
    {
        const bool branch_taken_0x17fff4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x17FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFF4u;
        // 0x17fff8: 0x2bc20002  slti        $v0, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fff4) {
            ctx->pc = 0x18009Cu;
            goto label_18009c;
        }
    }
    ctx->pc = 0x17FFFCu;
    // 0x17fffc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FFFCu;
    {
        const bool branch_taken_0x17fffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fffc) {
            ctx->pc = 0x180014u;
            goto label_180014;
        }
    }
    ctx->pc = 0x180004u;
    // 0x180004: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x180004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x180008: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x180008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18000c: 0xc04445e  jal         func_111178
    ctx->pc = 0x18000Cu;
    SET_GPR_U32(ctx, 31, 0x180014u);
    ctx->pc = 0x180010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18000Cu;
    // 0x180010: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x18000Cu, 0x180014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180014u;
label_180014:
    // 0x180014: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x180014u;
    SET_GPR_U32(ctx, 31, 0x18001Cu);
    ctx->pc = 0x180018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180014u;
    // 0x180018: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x180014u, 0x18001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18001Cu;
label_18001c:
    // 0x18001c: 0x92430412  lbu         $v1, 0x412($s2)
    ctx->pc = 0x18001cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1042)));
    // 0x180020: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x180020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x180024: 0x24a49a08  addiu       $a0, $a1, -0x65F8
    ctx->pc = 0x180024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x180028: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x180028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18002c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x18002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x180030: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x180030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x180034: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x180034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180038: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x180038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18003c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18003cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180040: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x180040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x180044: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x180044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x180048: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180048u;
    {
        const bool branch_taken_0x180048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180048u;
        // 0x18004c: 0x92450412  lbu         $a1, 0x412($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180048) {
            ctx->pc = 0x180058u;
            goto label_180058;
        }
    }
    ctx->pc = 0x180050u;
    // 0x180050: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x180050u;
    {
        const bool branch_taken_0x180050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180050u;
        // 0x180054: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180050) {
            ctx->pc = 0x180064u;
            goto label_180064;
        }
    }
    ctx->pc = 0x180058u;
label_180058:
    // 0x180058: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x180058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x18005c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180060: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x180060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_180064:
    // 0x180064: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x180064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x180068: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x180068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18006c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x18006cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180070: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x180070u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x180074: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x180074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180078: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x180078u;
    {
        const bool branch_taken_0x180078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180078u;
        // 0x18007c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180078) {
            ctx->pc = 0x1800A0u;
            goto label_1800a0;
        }
    }
    ctx->pc = 0x180080u;
    // 0x180080: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x180080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x180084: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x180084u;
    {
        const bool branch_taken_0x180084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x180088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180084u;
        // 0x180088: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180084) {
            ctx->pc = 0x1800A4u;
            goto label_1800a4;
        }
    }
    ctx->pc = 0x18008Cu;
    // 0x18008c: 0xc0601d8  jal         func_180760
    ctx->pc = 0x18008Cu;
    SET_GPR_U32(ctx, 31, 0x180094u);
    ctx->pc = 0x180090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18008Cu;
    // 0x180090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180760u, 0x18008Cu, 0x180094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180094u;
label_180094:
    // 0x180094: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x180094u;
    {
        const bool branch_taken_0x180094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180094u;
        // 0x180098: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180094) {
            ctx->pc = 0x1800A4u;
            goto label_1800a4;
        }
    }
    ctx->pc = 0x18009Cu;
label_18009c:
    // 0x18009c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18009cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1800a0:
    // 0x1800a0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1800a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1800a4:
    // 0x1800a4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1800a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1800a8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1800a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1800ac: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1800acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1800b0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1800b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1800b4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1800b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1800b8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1800b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1800bc: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1800bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1800c0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1800c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1800c4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1800c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1800c8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1800c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1800cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1800CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1800D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800CCu;
        // 0x1800d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1800CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1800D4u;
    // 0x1800d4: 0x0  nop
    ctx->pc = 0x1800d4u;
    // NOP
    ctx->pc = 0x1800d8u;
}
