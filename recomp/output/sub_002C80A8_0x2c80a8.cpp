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

// Function: sub_002C80A8
// Address: 0x2c80a8 - 0x2c84f0
void sub_002C80A8_0x2c80a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C80A8_0x2c80a8");
#endif

    switch (ctx->pc) {
        case 0x2c80f8u: goto label_2c80f8;
        case 0x2c81acu: goto label_2c81ac;
        case 0x2c81d8u: goto label_2c81d8;
        case 0x2c81dcu: goto label_2c81dc;
        case 0x2c821cu: goto label_2c821c;
        case 0x2c828cu: goto label_2c828c;
        case 0x2c82d8u: goto label_2c82d8;
        case 0x2c8308u: goto label_2c8308;
        case 0x2c8310u: goto label_2c8310;
        case 0x2c831cu: goto label_2c831c;
        case 0x2c83fcu: goto label_2c83fc;
        case 0x2c8410u: goto label_2c8410;
        case 0x2c8448u: goto label_2c8448;
        case 0x2c8468u: goto label_2c8468;
        case 0x2c84acu: goto label_2c84ac;
        default: break;
    }

    ctx->pc = 0x2c80a8u;

    // 0x2c80a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c80a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c80ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c80acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c80b0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2c80b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2c80b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c80b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c80b8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2c80b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2c80bc: 0x263601b8  addiu       $s6, $s1, 0x1B8
    ctx->pc = 0x2c80bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 440));
    // 0x2c80c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c80c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c80c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c80c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2c80c8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c80c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2c80cc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2c80ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2c80d0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2c80d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2c80d4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2c80d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2c80d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c80d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c80dc: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x2c80dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2c80e0: 0x124000f6  beqz        $s2, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2C80E0u;
    {
        const bool branch_taken_0x2c80e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80E0u;
        // 0x2c80e4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80e0) {
            ctx->pc = 0x2C84BCu;
            goto label_2c84bc;
        }
    }
    ctx->pc = 0x2C80E8u;
    // 0x2c80e8: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x2c80e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x2c80ec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c80ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c80f0: 0x36b5fffc  ori         $s5, $s5, 0xFFFC
    ctx->pc = 0x2c80f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65532);
    // 0x2c80f4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2c80f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2c80f8:
    // 0x2c80f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c80f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c80fc: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x2c80fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c8100: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2c8100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c8104: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2C8104u;
    {
        const bool branch_taken_0x2c8104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8104u;
        // 0x2c8108: 0x8e570008  lw          $s7, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8104) {
            ctx->pc = 0x2C84ACu;
            goto label_2c84ac;
        }
    }
    ctx->pc = 0x2C810Cu;
    // 0x2c810c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2c810cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2c8110: 0x544000e7  bnel        $v0, $zero, . + 4 + (0xE7 << 2)
    ctx->pc = 0x2C8110u;
    {
        const bool branch_taken_0x2c8110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8110) {
            ctx->pc = 0x2C8114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8110u;
            // 0x2c8114: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C84B0u;
            goto label_2c84b0;
        }
    }
    ctx->pc = 0x2C8118u;
    // 0x2c8118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c811c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2c811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2c8120: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2c8120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c8124: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8124u;
    {
        const bool branch_taken_0x2c8124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8124u;
        // 0x2c8128: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8124) {
            ctx->pc = 0x2C8134u;
            goto label_2c8134;
        }
    }
    ctx->pc = 0x2C812Cu;
    // 0x2c812c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2c812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c8130: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c8130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c8134:
    // 0x2c8134: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c8138: 0x55a024  and         $s4, $v0, $s5
    ctx->pc = 0x2c8138u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2c813c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c813cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c8140: 0x544000db  bnel        $v0, $zero, . + 4 + (0xDB << 2)
    ctx->pc = 0x2C8140u;
    {
        const bool branch_taken_0x2c8140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8140) {
            ctx->pc = 0x2C8144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8140u;
            // 0x2c8144: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C84B0u;
            goto label_2c84b0;
        }
    }
    ctx->pc = 0x2C8148u;
    // 0x2c8148: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x2c8148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2c814c: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x2c814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2c8150: 0x2442ffc8  addiu       $v0, $v0, -0x38
    ctx->pc = 0x2c8150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
    // 0x2c8154: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2c8154u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8158: 0x546000d5  bnel        $v1, $zero, . + 4 + (0xD5 << 2)
    ctx->pc = 0x2C8158u;
    {
        const bool branch_taken_0x2c8158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8158) {
            ctx->pc = 0x2C815Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8158u;
            // 0x2c815c: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C84B0u;
            goto label_2c84b0;
        }
    }
    ctx->pc = 0x2C8160u;
    // 0x2c8160: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2c8160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c8164: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8164u;
    {
        const bool branch_taken_0x2c8164 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c8164) {
            ctx->pc = 0x2C8168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8164u;
            // 0x2c8168: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8178u;
            goto label_2c8178;
        }
    }
    ctx->pc = 0x2C816Cu;
    // 0x2c816c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2c816cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2c8170: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2C8170u;
    {
        const bool branch_taken_0x2c8170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8170u;
        // 0x2c8174: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8170) {
            ctx->pc = 0x2C8310u;
            goto label_2c8310;
        }
    }
    ctx->pc = 0x2C8178u;
label_2c8178:
    // 0x2c8178: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8178u;
    {
        const bool branch_taken_0x2c8178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8178u;
        // 0x2c817c: 0x8e080018  lw          $t0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8178) {
            ctx->pc = 0x2C81ACu;
            goto label_2c81ac;
        }
    }
    ctx->pc = 0x2C8180u;
    // 0x2c8180: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8184: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c8184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c8188: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2c8188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c818c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c818cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8190: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8190u;
    {
        const bool branch_taken_0x2c8190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8190) {
            ctx->pc = 0x2C81A4u;
            goto label_2c81a4;
        }
    }
    ctx->pc = 0x2C8198u;
    // 0x2c8198: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x2c8198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x2c819c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2C819Cu;
    {
        const bool branch_taken_0x2c819c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C819Cu;
        // 0x2c81a0: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c819c) {
            ctx->pc = 0x2C821Cu;
            goto label_2c821c;
        }
    }
    ctx->pc = 0x2C81A4u;
label_2c81a4:
    // 0x2c81a4: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C81A4u;
    SET_GPR_U32(ctx, 31, 0x2C81ACu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C81A4u, 0x2C81ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C81ACu;
label_2c81ac:
    // 0x2c81ac: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2c81acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c81b0: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C81B0u;
    {
        const bool branch_taken_0x2c81b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81B0u;
        // 0x2c81b4: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81b0) {
            ctx->pc = 0x2C81C4u;
            goto label_2c81c4;
        }
    }
    ctx->pc = 0x2C81B8u;
    // 0x2c81b8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2c81b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c81bc: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C81BCu;
    {
        const bool branch_taken_0x2c81bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81BCu;
        // 0x2c81c0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81bc) {
            ctx->pc = 0x2C821Cu;
            goto label_2c821c;
        }
    }
    ctx->pc = 0x2C81C4u;
label_2c81c4:
    // 0x2c81c4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2c81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2c81c8: 0x24a30014  addiu       $v1, $a1, 0x14
    ctx->pc = 0x2c81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x2c81cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C81CCu;
    {
        const bool branch_taken_0x2c81cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81CCu;
        // 0x2c81d0: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81cc) {
            ctx->pc = 0x2C81E8u;
            goto label_2c81e8;
        }
    }
    ctx->pc = 0x2C81D4u;
    // 0x2c81d4: 0x0  nop
    ctx->pc = 0x2c81d4u;
    // NOP
label_2c81d8:
    // 0x2c81d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2c81d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c81dc:
    // 0x2c81dc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2c81dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c81e0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2c81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2c81e4: 0x24a30014  addiu       $v1, $a1, 0x14
    ctx->pc = 0x2c81e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
label_2c81e8:
    // 0x2c81e8: 0x0  nop
    ctx->pc = 0x2c81e8u;
    // NOP
    // 0x2c81ec: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C81ECu;
    {
        const bool branch_taken_0x2c81ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c81ec) {
            ctx->pc = 0x2C81F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C81ECu;
            // 0x2c81f0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C81DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c81dc;
        }
    }
    ctx->pc = 0x2C81F4u;
    // 0x2c81f4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2c81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c81f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C81F8u;
    {
        const bool branch_taken_0x2c81f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81F8u;
        // 0x2c81fc: 0x24a30010  addiu       $v1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81f8) {
            ctx->pc = 0x2C81D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c81d8;
        }
    }
    ctx->pc = 0x2C8200u;
    // 0x2c8200: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x2c8200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c8204: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8204u;
    {
        const bool branch_taken_0x2c8204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8204) {
            ctx->pc = 0x2C8214u;
            goto label_2c8214;
        }
    }
    ctx->pc = 0x2C820Cu;
    // 0x2c820c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C820Cu;
    {
        const bool branch_taken_0x2c820c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C820Cu;
        // 0x2c8210: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c820c) {
            ctx->pc = 0x2C821Cu;
            goto label_2c821c;
        }
    }
    ctx->pc = 0x2C8214u;
label_2c8214:
    // 0x2c8214: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8214u;
    SET_GPR_U32(ctx, 31, 0x2C821Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8214u, 0x2C821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C821Cu;
label_2c821c:
    // 0x2c821c: 0x5100003d  beql        $t0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x2C821Cu;
    {
        const bool branch_taken_0x2c821c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c821c) {
            ctx->pc = 0x2C8220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C821Cu;
            // 0x2c8220: 0x7fa90000  sq          $t1, 0x0($sp) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8314u;
            goto label_2c8314;
        }
    }
    ctx->pc = 0x2C8224u;
    // 0x2c8224: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2c8224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2c8228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c822c: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2c822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2c8230: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c8230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c8234: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c8234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8238: 0x5603000a  bnel        $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C8238u;
    {
        const bool branch_taken_0x2c8238 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c8238) {
            ctx->pc = 0x2C823Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8238u;
            // 0x2c823c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8264u;
            goto label_2c8264;
        }
    }
    ctx->pc = 0x2C8240u;
    // 0x2c8240: 0x14a00014  bnez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C8240u;
    {
        const bool branch_taken_0x2c8240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8240u;
        // 0x2c8244: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8240) {
            ctx->pc = 0x2C8294u;
            goto label_2c8294;
        }
    }
    ctx->pc = 0x2C8248u;
    // 0x2c8248: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2c8248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2c824c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2c824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c8250: 0x491004  sllv        $v0, $t1, $v0
    ctx->pc = 0x2c8250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c8254: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c8254u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2c8258: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c8258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c825c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C825Cu;
    {
        const bool branch_taken_0x2c825c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C825Cu;
        // 0x2c8260: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c825c) {
            ctx->pc = 0x2C828Cu;
            goto label_2c828c;
        }
    }
    ctx->pc = 0x2C8264u;
label_2c8264:
    // 0x2c8264: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x2c8264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8268: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8268u;
    {
        const bool branch_taken_0x2c8268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8268) {
            ctx->pc = 0x2C8284u;
            goto label_2c8284;
        }
    }
    ctx->pc = 0x2C8270u;
    // 0x2c8270: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x2c8270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2c8274: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8274u;
    {
        const bool branch_taken_0x2c8274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c8274) {
            ctx->pc = 0x2C8278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8274u;
            // 0x2c8278: 0xad050014  sw          $a1, 0x14($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C828Cu;
            goto label_2c828c;
        }
    }
    ctx->pc = 0x2C827Cu;
    // 0x2c827c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C827Cu;
    {
        const bool branch_taken_0x2c827c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C827Cu;
        // 0x2c8280: 0xad050010  sw          $a1, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c827c) {
            ctx->pc = 0x2C828Cu;
            goto label_2c828c;
        }
    }
    ctx->pc = 0x2C8284u;
label_2c8284:
    // 0x2c8284: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8284u;
    SET_GPR_U32(ctx, 31, 0x2C828Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8284u, 0x2C828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C828Cu;
label_2c828c:
    // 0x2c828c: 0x50a00021  beql        $a1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C828Cu;
    {
        const bool branch_taken_0x2c828c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c828c) {
            ctx->pc = 0x2C8290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C828Cu;
            // 0x2c8290: 0x7fa90000  sq          $t1, 0x0($sp) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8314u;
            goto label_2c8314;
        }
    }
    ctx->pc = 0x2C8294u;
label_2c8294:
    // 0x2c8294: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2c8294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c8298: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2c8298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c829c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C829Cu;
    {
        const bool branch_taken_0x2c829c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c829c) {
            ctx->pc = 0x2C8308u;
            goto label_2c8308;
        }
    }
    ctx->pc = 0x2C82A4u;
    // 0x2c82a4: 0xaca80018  sw          $t0, 0x18($a1)
    ctx->pc = 0x2c82a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 8));
    // 0x2c82a8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2c82a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c82ac: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C82ACu;
    {
        const bool branch_taken_0x2c82ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c82ac) {
            ctx->pc = 0x2C82B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C82ACu;
            // 0x2c82b0: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C82DCu;
            goto label_2c82dc;
        }
    }
    ctx->pc = 0x2C82B4u;
    // 0x2c82b4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2c82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c82b8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c82b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c82bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C82BCu;
    {
        const bool branch_taken_0x2c82bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c82bc) {
            ctx->pc = 0x2C82D0u;
            goto label_2c82d0;
        }
    }
    ctx->pc = 0x2C82C4u;
    // 0x2c82c4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x2c82c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x2c82c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C82C8u;
    {
        const bool branch_taken_0x2c82c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82C8u;
        // 0x2c82cc: 0xac650018  sw          $a1, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82c8) {
            ctx->pc = 0x2C82D8u;
            goto label_2c82d8;
        }
    }
    ctx->pc = 0x2C82D0u;
label_2c82d0:
    // 0x2c82d0: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C82D0u;
    SET_GPR_U32(ctx, 31, 0x2C82D8u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C82D0u, 0x2C82D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C82D8u;
label_2c82d8:
    // 0x2c82d8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2c82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2c82dc:
    // 0x2c82dc: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2C82DCu;
    {
        const bool branch_taken_0x2c82dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c82dc) {
            ctx->pc = 0x2C82E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C82DCu;
            // 0x2c82e0: 0x7fa90000  sq          $t1, 0x0($sp) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8314u;
            goto label_2c8314;
        }
    }
    ctx->pc = 0x2C82E4u;
    // 0x2c82e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2c82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c82e8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c82e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c82ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C82ECu;
    {
        const bool branch_taken_0x2c82ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c82ec) {
            ctx->pc = 0x2C8300u;
            goto label_2c8300;
        }
    }
    ctx->pc = 0x2C82F4u;
    // 0x2c82f4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2c82f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x2c82f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C82F8u;
    {
        const bool branch_taken_0x2c82f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82F8u;
        // 0x2c82fc: 0xac650018  sw          $a1, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82f8) {
            ctx->pc = 0x2C8310u;
            goto label_2c8310;
        }
    }
    ctx->pc = 0x2C8300u;
label_2c8300:
    // 0x2c8300: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8300u;
    SET_GPR_U32(ctx, 31, 0x2C8308u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8300u, 0x2C8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8308u;
label_2c8308:
    // 0x2c8308: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8308u;
    SET_GPR_U32(ctx, 31, 0x2C8310u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8308u, 0x2C8310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8310u;
label_2c8310:
    // 0x2c8310: 0x7fa90000  sq          $t1, 0x0($sp)
    ctx->pc = 0x2c8310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
label_2c8314:
    // 0x2c8314: 0xc0b2820  jal         func_2CA080
    ctx->pc = 0x2C8314u;
    SET_GPR_U32(ctx, 31, 0x2C831Cu);
    ctx->pc = 0x2C8318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8314u;
    // 0x2c8318: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA080u, 0x2C8314u, 0x2C831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C831Cu;
label_2c831c:
    // 0x2c831c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C831Cu;
    {
        const bool branch_taken_0x2c831c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C831Cu;
        // 0x2c8320: 0x7ba90000  lq          $t1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c831c) {
            ctx->pc = 0x2C8340u;
            goto label_2c8340;
        }
    }
    ctx->pc = 0x2C8324u;
    // 0x2c8324: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x2c8324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x2c8328: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x2c8328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c832c: 0x3d3f021  addu        $fp, $fp, $s3
    ctx->pc = 0x2c832cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x2c8330: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2c8330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2c8334: 0xae2201ac  sw          $v0, 0x1AC($s1)
    ctx->pc = 0x2c8334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 2));
    // 0x2c8338: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2C8338u;
    {
        const bool branch_taken_0x2c8338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8338u;
        // 0x2c833c: 0xae570008  sw          $s7, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8338) {
            ctx->pc = 0x2C84ACu;
            goto label_2c84ac;
        }
    }
    ctx->pc = 0x2C8340u;
label_2c8340:
    // 0x2c8340: 0x141a02  srl         $v1, $s4, 8
    ctx->pc = 0x2c8340u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
    // 0x2c8344: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8344u;
    {
        const bool branch_taken_0x2c8344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8344u;
        // 0x2c8348: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8344) {
            ctx->pc = 0x2C8354u;
            goto label_2c8354;
        }
    }
    ctx->pc = 0x2C834Cu;
    // 0x2c834c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C834Cu;
    {
        const bool branch_taken_0x2c834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C834Cu;
        // 0x2c8350: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c834c) {
            ctx->pc = 0x2C83BCu;
            goto label_2c83bc;
        }
    }
    ctx->pc = 0x2C8354u;
label_2c8354:
    // 0x2c8354: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c8354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c8358: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8358u;
    {
        const bool branch_taken_0x2c8358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8358u;
        // 0x2c835c: 0x2464ff00  addiu       $a0, $v1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8358) {
            ctx->pc = 0x2C8368u;
            goto label_2c8368;
        }
    }
    ctx->pc = 0x2C8360u;
    // 0x2c8360: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C8360u;
    {
        const bool branch_taken_0x2c8360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8360u;
        // 0x2c8364: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8360) {
            ctx->pc = 0x2C83BCu;
            goto label_2c83bc;
        }
    }
    ctx->pc = 0x2C8368u;
label_2c8368:
    // 0x2c8368: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2c8368u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2c836c: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x2c836cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2c8370: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x2c8370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c8374: 0x2462f000  addiu       $v0, $v1, -0x1000
    ctx->pc = 0x2c8374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x2c8378: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2c8378u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2c837c: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x2c837cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2c8380: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x2c8380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c8384: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c8384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c8388: 0x2462c000  addiu       $v0, $v1, -0x4000
    ctx->pc = 0x2c8388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950912));
    // 0x2c838c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2c838cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2c8390: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x2c8390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c8394: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x2c8394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c8398: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c8398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c839c: 0x31bc2  srl         $v1, $v1, 15
    ctx->pc = 0x2c839cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2c83a0: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x2c83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x2c83a4: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x2c83a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c83a8: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x2c83a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x2c83ac: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2c83acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c83b0: 0x541006  srlv        $v0, $s4, $v0
    ctx->pc = 0x2c83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c83b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c83b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c83b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c83b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c83bc:
    // 0x2c83bc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2c83bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2c83c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c83c4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2c83c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2c83c8: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2c83c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2c83cc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2c83ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2c83d0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2c83d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c83d4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2c83d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c83d8: 0x661006  srlv        $v0, $a2, $v1
    ctx->pc = 0x2c83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c83dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c83dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c83e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c83e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c83e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C83E4u;
    {
        const bool branch_taken_0x2c83e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83E4u;
        // 0x2c83e8: 0x691004  sllv        $v0, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83e4) {
            ctx->pc = 0x2C8420u;
            goto label_2c8420;
        }
    }
    ctx->pc = 0x2C83ECu;
    // 0x2c83ec: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2c83ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2c83f0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2c83f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2c83f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C83F4u;
    {
        const bool branch_taken_0x2c83f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83F4u;
        // 0x2c83f8: 0xacb00000  sw          $s0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83f4) {
            ctx->pc = 0x2C8410u;
            goto label_2c8410;
        }
    }
    ctx->pc = 0x2C83FCu;
label_2c83fc:
    // 0x2c83fc: 0xacb00008  sw          $s0, 0x8($a1)
    ctx->pc = 0x2c83fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
    // 0x2c8400: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2c8400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2c8404: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x2c8404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x2c8408: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2C8408u;
    {
        const bool branch_taken_0x2c8408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8408u;
        // 0x2c840c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8408) {
            ctx->pc = 0x2C84ACu;
            goto label_2c84ac;
        }
    }
    ctx->pc = 0x2C8410u;
label_2c8410:
    // 0x2c8410: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x2c8410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x2c8414: 0xae100008  sw          $s0, 0x8($s0)
    ctx->pc = 0x2c8414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 16));
    // 0x2c8418: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C8418u;
    {
        const bool branch_taken_0x2c8418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8418u;
        // 0x2c841c: 0xae10000c  sw          $s0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8418) {
            ctx->pc = 0x2C84ACu;
            goto label_2c84ac;
        }
    }
    ctx->pc = 0x2C8420u;
label_2c8420:
    // 0x2c8420: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2c8420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c8424: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2c8424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2c8428: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8428u;
    {
        const bool branch_taken_0x2c8428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8428u;
        // 0x2c842c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8428) {
            ctx->pc = 0x2C8440u;
            goto label_2c8440;
        }
    }
    ctx->pc = 0x2C8430u;
    // 0x2c8430: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c8430u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c8434: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2c8434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2c8438: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c8438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c843c: 0x463004  sllv        $a2, $a2, $v0
    ctx->pc = 0x2c843cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_2c8440:
    // 0x2c8440: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8440u;
    {
        const bool branch_taken_0x2c8440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8440u;
        // 0x2c8444: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8440) {
            ctx->pc = 0x2C8468u;
            goto label_2c8468;
        }
    }
    ctx->pc = 0x2C8448u;
label_2c8448:
    // 0x2c8448: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2c8448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c844c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C844Cu;
    {
        const bool branch_taken_0x2c844c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C844Cu;
        // 0x2c8450: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c844c) {
            ctx->pc = 0x2C8460u;
            goto label_2c8460;
        }
    }
    ctx->pc = 0x2C8454u;
    // 0x2c8454: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2c8454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c8458: 0x5040ffe8  beql        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2C8458u;
    {
        const bool branch_taken_0x2c8458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8458) {
            ctx->pc = 0x2C845Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8458u;
            // 0x2c845c: 0xac70000c  sw          $s0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C83FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c83fc;
        }
    }
    ctx->pc = 0x2C8460u;
label_2c8460:
    // 0x2c8460: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8460u;
    SET_GPR_U32(ctx, 31, 0x2C8468u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8460u, 0x2C8468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8468u;
label_2c8468:
    // 0x2c8468: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2c8468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c846c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2c846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2c8470: 0x1054fff5  beq         $v0, $s4, . + 4 + (-0xB << 2)
    ctx->pc = 0x2C8470u;
    {
        const bool branch_taken_0x2c8470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2C8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8470u;
        // 0x2c8474: 0x617c2  srl         $v0, $a2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8470) {
            ctx->pc = 0x2C8448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8448;
        }
    }
    ctx->pc = 0x2C8478u;
    // 0x2c8478: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c847c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2c847cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c8480: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2c8480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c8484: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c8484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8488: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8488u;
    {
        const bool branch_taken_0x2c8488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8488u;
        // 0x2c848c: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8488) {
            ctx->pc = 0x2C8498u;
            goto label_2c8498;
        }
    }
    ctx->pc = 0x2C8490u;
    // 0x2c8490: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x2C8490u;
    {
        const bool branch_taken_0x2c8490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8490u;
        // 0x2c8494: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8490) {
            ctx->pc = 0x2C8468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8468;
        }
    }
    ctx->pc = 0x2C8498u;
label_2c8498:
    // 0x2c8498: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2c8498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c849c: 0x5040ffdc  beql        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2C849Cu;
    {
        const bool branch_taken_0x2c849c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c849c) {
            ctx->pc = 0x2C84A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C849Cu;
            // 0x2c84a0: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8410;
        }
    }
    ctx->pc = 0x2C84A4u;
    // 0x2c84a4: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C84A4u;
    SET_GPR_U32(ctx, 31, 0x2C84ACu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C84A4u, 0x2C84ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C84ACu;
label_2c84ac:
    // 0x2c84ac: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x2c84acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c84b0:
    // 0x2c84b0: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x2c84b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c84b4: 0x5640ff10  bnel        $s2, $zero, . + 4 + (-0xF0 << 2)
    ctx->pc = 0x2C84B4u;
    {
        const bool branch_taken_0x2c84b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c84b4) {
            ctx->pc = 0x2C84B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C84B4u;
            // 0x2c84b8: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C80F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c80f8;
        }
    }
    ctx->pc = 0x2C84BCu;
label_2c84bc:
    // 0x2c84bc: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2c84bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c84c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c84c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c84c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c84c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c84c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c84c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c84cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c84ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c84d0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c84d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c84d4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2c84d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c84d8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2c84d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c84dc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2c84dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c84e0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2c84e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c84e4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2c84e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c84e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C84E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84E8u;
        // 0x2c84ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C84E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C84F0u;
}
