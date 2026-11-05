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

// Function: sub_00112068
// Address: 0x112068 - 0x112298
void sub_00112068_0x112068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112068_0x112068");
#endif

    switch (ctx->pc) {
        case 0x1120acu: goto label_1120ac;
        case 0x112150u: goto label_112150;
        case 0x1121bcu: goto label_1121bc;
        case 0x1121d8u: goto label_1121d8;
        default: break;
    }

    ctx->pc = 0x112068u;

    // 0x112068: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x112068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11206c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11206cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x112070: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x112070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x112074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112078: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x112078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11207c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11207cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x112080: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x112080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x112084: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x112084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x112088: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x112088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x11208c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x11208cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x112090: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x112090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x112094: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x112094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x112098: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x112098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11209c: 0x8e1e0248  lw          $fp, 0x248($s0)
    ctx->pc = 0x11209cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x1120a0: 0x8e160240  lw          $s6, 0x240($s0)
    ctx->pc = 0x1120a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1120a4: 0xc0443da  jal         func_110F68
    ctx->pc = 0x1120A4u;
    SET_GPR_U32(ctx, 31, 0x1120ACu);
    ctx->pc = 0x1120A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1120A4u;
    // 0x1120a8: 0x8e170120  lw          $s7, 0x120($s0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F68u, 0x1120A4u, 0x1120ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1120ACu;
label_1120ac:
    // 0x1120ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1120ACu;
    {
        const bool branch_taken_0x1120ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1120ac) {
            ctx->pc = 0x1120B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1120ACu;
            // 0x1120b0: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1120C4u;
            goto label_1120c4;
        }
    }
    ctx->pc = 0x1120B4u;
    // 0x1120b4: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x1120b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1120b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1120b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1120bc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1120bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1120c0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1120c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1120c4:
    // 0x1120c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1120C4u;
    {
        const bool branch_taken_0x1120c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1120C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120C4u;
        // 0x1120c8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120c4) {
            ctx->pc = 0x1120F0u;
            goto label_1120f0;
        }
    }
    ctx->pc = 0x1120CCu;
    // 0x1120cc: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x1120ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1120d0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1120D0u;
    {
        const bool branch_taken_0x1120d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1120d0) {
            ctx->pc = 0x1120D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1120D0u;
            // 0x1120d4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1120F4u;
            goto label_1120f4;
        }
    }
    ctx->pc = 0x1120D8u;
    // 0x1120d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1120d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1120dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1120DCu;
    {
        const bool branch_taken_0x1120dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1120dc) {
            ctx->pc = 0x1120E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1120DCu;
            // 0x1120e0: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1120F4u;
            goto label_1120f4;
        }
    }
    ctx->pc = 0x1120E4u;
    // 0x1120e4: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x1120e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1120e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1120e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1120ec: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1120ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_1120f0:
    // 0x1120f0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1120f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1120f4:
    // 0x1120f4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1120f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1120f8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1120f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1120fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1120fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112104: 0x8c510108  lw          $s1, 0x108($v0)
    ctx->pc = 0x112104u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x112108: 0x52200058  beql        $s1, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x112108u;
    {
        const bool branch_taken_0x112108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x112108) {
            ctx->pc = 0x11210Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112108u;
            // 0x11210c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11226Cu;
            goto label_11226c;
        }
    }
    ctx->pc = 0x112110u;
    // 0x112110: 0x8e240ff8  lw          $a0, 0xFF8($s1)
    ctx->pc = 0x112110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
    // 0x112114: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x112114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112118: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x112118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x11211c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11211Cu;
    {
        const bool branch_taken_0x11211c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11211Cu;
        // 0x112120: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11211c) {
            ctx->pc = 0x112130u;
            goto label_112130;
        }
    }
    ctx->pc = 0x112124u;
    // 0x112124: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x112124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x112128: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x112128u;
    {
        const bool branch_taken_0x112128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112128) {
            ctx->pc = 0x11212Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112128u;
            // 0x11212c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112138u;
            goto label_112138;
        }
    }
    ctx->pc = 0x112130u;
label_112130:
    // 0x112130: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x112130u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112134: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x112134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_112138:
    // 0x112138: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x112138u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11213c: 0x8e320ff0  lw          $s2, 0xFF0($s1)
    ctx->pc = 0x11213cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
    // 0x112140: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x112140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x112144: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x112144u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x112148: 0xc06e0f0  jal         func_1B83C0
    ctx->pc = 0x112148u;
    SET_GPR_U32(ctx, 31, 0x112150u);
    ctx->pc = 0x11214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112148u;
    // 0x11214c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x112148u, 0x112150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112150u;
label_112150:
    // 0x112150: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112150u;
    {
        const bool branch_taken_0x112150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112150) {
            ctx->pc = 0x112160u;
            goto label_112160;
        }
    }
    ctx->pc = 0x112158u;
    // 0x112158: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x112158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x11215c: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x11215cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_112160:
    // 0x112160: 0x13c0000b  beqz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x112160u;
    {
        const bool branch_taken_0x112160 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x112164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112160u;
        // 0x112164: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112160) {
            ctx->pc = 0x112190u;
            goto label_112190;
        }
    }
    ctx->pc = 0x112168u;
    // 0x112168: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x112168u;
    {
        const bool branch_taken_0x112168 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x112168) {
            ctx->pc = 0x112190u;
            goto label_112190;
        }
    }
    ctx->pc = 0x112170u;
    // 0x112170: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x112170u;
    {
        const bool branch_taken_0x112170 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x112174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112170u;
        // 0x112174: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112170) {
            ctx->pc = 0x112190u;
            goto label_112190;
        }
    }
    ctx->pc = 0x112178u;
    // 0x112178: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112178u;
    {
        const bool branch_taken_0x112178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112178u;
        // 0x11217c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112178) {
            ctx->pc = 0x112190u;
            goto label_112190;
        }
    }
    ctx->pc = 0x112180u;
    // 0x112180: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112180u;
    {
        const bool branch_taken_0x112180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112180) {
            ctx->pc = 0x112190u;
            goto label_112190;
        }
    }
    ctx->pc = 0x112188u;
    // 0x112188: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x112188u;
    {
        const bool branch_taken_0x112188 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x112188) {
            ctx->pc = 0x11218Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112188u;
            // 0x11218c: 0x3a830001  xori        $v1, $s4, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x112190u;
            goto label_112190;
        }
    }
    ctx->pc = 0x112190u;
label_112190:
    // 0x112190: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x112190u;
    {
        const bool branch_taken_0x112190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x112190) {
            ctx->pc = 0x112194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112190u;
            // 0x112194: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1121A4u;
            goto label_1121a4;
        }
    }
    ctx->pc = 0x112198u;
    // 0x112198: 0x8e02024c  lw          $v0, 0x24C($s0)
    ctx->pc = 0x112198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x11219c: 0x262180b  movn        $v1, $s3, $v0
    ctx->pc = 0x11219cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
    // 0x1121a0: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1121a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1121a4:
    // 0x1121a4: 0x50620031  beql        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1121A4u;
    {
        const bool branch_taken_0x1121a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1121a4) {
            ctx->pc = 0x1121A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1121A4u;
            // 0x1121a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11226Cu;
            goto label_11226c;
        }
    }
    ctx->pc = 0x1121ACu;
    // 0x1121ac: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1121ACu;
    {
        const bool branch_taken_0x1121ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121ac) {
            ctx->pc = 0x11220Cu;
            goto label_11220c;
        }
    }
    ctx->pc = 0x1121B4u;
    // 0x1121b4: 0xc043b6e  jal         func_10EDB8
    ctx->pc = 0x1121B4u;
    SET_GPR_U32(ctx, 31, 0x1121BCu);
    ctx->pc = 0x1121B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1121B4u;
    // 0x1121b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EDB8u, 0x1121B4u, 0x1121BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1121BCu;
label_1121bc:
    // 0x1121bc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1121BCu;
    {
        const bool branch_taken_0x1121bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1121C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121BCu;
        // 0x1121c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121bc) {
            ctx->pc = 0x112204u;
            goto label_112204;
        }
    }
    ctx->pc = 0x1121C4u;
    // 0x1121c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1121c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1121c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1121c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1121cc: 0x240501af  addiu       $a1, $zero, 0x1AF
    ctx->pc = 0x1121ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 431));
    // 0x1121d0: 0xc08e0a2  jal         func_238288
    ctx->pc = 0x1121D0u;
    SET_GPR_U32(ctx, 31, 0x1121D8u);
    ctx->pc = 0x1121D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1121D0u;
    // 0x1121d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238288u, 0x1121D0u, 0x1121D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1121D8u;
label_1121d8:
    // 0x1121d8: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1121D8u;
    {
        const bool branch_taken_0x1121d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121d8) {
            ctx->pc = 0x1121DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1121D8u;
            // 0x1121dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11226Cu;
            goto label_11226c;
        }
    }
    ctx->pc = 0x1121E0u;
    // 0x1121e0: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x1121e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
    // 0x1121e4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1121e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1121e8: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x1121e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x1121ec: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1121ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1121f0: 0x425b8  dsll        $a0, $a0, 22
    ctx->pc = 0x1121f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 22);
    // 0x1121f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1121f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1121f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1121f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1121fc: 0xfe221020  sd          $v0, 0x1020($s1)
    ctx->pc = 0x1121fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
    // 0x112200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_112204:
    // 0x112204: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x112204u;
    {
        const bool branch_taken_0x112204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112204u;
        // 0x112208: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112204) {
            ctx->pc = 0x112268u;
            goto label_112268;
        }
    }
    ctx->pc = 0x11220Cu;
label_11220c:
    // 0x11220c: 0x16c00016  bnez        $s6, . + 4 + (0x16 << 2)
    ctx->pc = 0x11220Cu;
    {
        const bool branch_taken_0x11220c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x112210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11220Cu;
        // 0x112210: 0xae000250  sw          $zero, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11220c) {
            ctx->pc = 0x112268u;
            goto label_112268;
        }
    }
    ctx->pc = 0x112214u;
    // 0x112214: 0x16e00015  bnez        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x112214u;
    {
        const bool branch_taken_0x112214 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x112218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112214u;
        // 0x112218: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112214) {
            ctx->pc = 0x11226Cu;
            goto label_11226c;
        }
    }
    ctx->pc = 0x11221Cu;
    // 0x11221c: 0xde231020  ld          $v1, 0x1020($s1)
    ctx->pc = 0x11221cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
    // 0x112220: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x112220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x112224: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x112224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x112228: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x112228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11222c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11222Cu;
    {
        const bool branch_taken_0x11222c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11222c) {
            ctx->pc = 0x112230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11222Cu;
            // 0x112230: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112250u;
            goto label_112250;
        }
    }
    ctx->pc = 0x112234u;
    // 0x112234: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x112234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x112238: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x112238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11223c: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x11223cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x112240: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x112240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x112244: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x112244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x112248: 0xfe221020  sd          $v0, 0x1020($s1)
    ctx->pc = 0x112248u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
    // 0x11224c: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x11224cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
label_112250:
    // 0x112250: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x112250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x112254: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x112254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x112258: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x112258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x11225c: 0x3463007f  ori         $v1, $v1, 0x7F
    ctx->pc = 0x11225cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)127);
    // 0x112260: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x112260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x112264: 0xfe221020  sd          $v0, 0x1020($s1)
    ctx->pc = 0x112264u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
label_112268:
    // 0x112268: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x112268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11226c:
    // 0x11226c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11226cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x112270: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x112270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112274: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x112274u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x112278: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x112278u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11227c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11227cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x112280: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x112280u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112284: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x112284u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x112288: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x112288u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11228c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x11228cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x112290: 0x3e00008  jr          $ra
    ctx->pc = 0x112290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112290u;
        // 0x112294: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112298u;
}
