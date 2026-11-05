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

// Function: sub_002CF2C8
// Address: 0x2cf2c8 - 0x2cf5f8
void sub_002CF2C8_0x2cf2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF2C8_0x2cf2c8");
#endif

    switch (ctx->pc) {
        case 0x2cf334u: goto label_2cf334;
        case 0x2cf3e8u: goto label_2cf3e8;
        case 0x2cf3f8u: goto label_2cf3f8;
        case 0x2cf4fcu: goto label_2cf4fc;
        case 0x2cf520u: goto label_2cf520;
        case 0x2cf558u: goto label_2cf558;
        case 0x2cf5a8u: goto label_2cf5a8;
        case 0x2cf5c8u: goto label_2cf5c8;
        default: break;
    }

    ctx->pc = 0x2cf2c8u;

    // 0x2cf2c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cf2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cf2cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf2d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cf2d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cf2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cf2dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cf2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cf2e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2cf2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2cf2e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf2e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cf2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cf2ec: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2cf2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2cf2f0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2cf2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2cf2f4: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x2cf2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2cf2f8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2cf2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2cf2fc: 0x3056007f  andi        $s6, $v0, 0x7F
    ctx->pc = 0x2cf2fcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2cf300: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2cf300u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2cf304: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2cf304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2cf308: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2cf308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cf30c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x2cf30cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2cf310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cf310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf314: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x2cf314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2cf318: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2cf318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cf31c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2cf31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2cf320: 0xe39023  subu        $s2, $a3, $v1
    ctx->pc = 0x2cf320u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2cf324: 0xc2a821  addu        $s5, $a2, $v0
    ctx->pc = 0x2cf324u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2cf328: 0x34b30100  ori         $s3, $a1, 0x100
    ctx->pc = 0x2cf328u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x2cf32c: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x2CF32Cu;
    SET_GPR_U32(ctx, 31, 0x2CF334u);
    ctx->pc = 0x2CF330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF32Cu;
    // 0x2cf330: 0x8e140020  lw          $s4, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x2CF32Cu, 0x2CF334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF334u;
label_2cf334:
    // 0x2cf334: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2cf334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf338: 0x247102b  sltu        $v0, $s2, $a3
    ctx->pc = 0x2cf338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2cf33c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CF33Cu;
    {
        const bool branch_taken_0x2cf33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF33Cu;
        // 0x2cf340: 0x3c080fff  lui         $t0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf33c) {
            ctx->pc = 0x2CF3DCu;
            goto label_2cf3dc;
        }
    }
    ctx->pc = 0x2CF344u;
    // 0x2cf344: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2cf344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cf348: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2cf348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cf34c: 0xf21023  subu        $v0, $a3, $s2
    ctx->pc = 0x2cf34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2cf350: 0x532c0  sll         $a2, $a1, 11
    ctx->pc = 0x2cf350u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x2cf354: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2cf354u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2cf358: 0x8e09001c  lw          $t1, 0x1C($s0)
    ctx->pc = 0x2cf358u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2cf35c: 0x2a902  srl         $s5, $v0, 4
    ctx->pc = 0x2cf35cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2cf360: 0x68a024  and         $s4, $v1, $t0
    ctx->pc = 0x2cf360u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x2cf364: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x2cf364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2cf368: 0x11270005  beq         $t1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF368u;
    {
        const bool branch_taken_0x2cf368 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x2CF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF368u;
        // 0x2cf36c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf368) {
            ctx->pc = 0x2CF380u;
            goto label_2cf380;
        }
    }
    ctx->pc = 0x2CF370u;
    // 0x2cf370: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2cf370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2cf374: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cf374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cf378: 0x1221026  xor         $v0, $t1, $v0
    ctx->pc = 0x2cf378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
    // 0x2cf37c: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x2cf37cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_2cf380:
    // 0x2cf380: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2cf380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cf384: 0x42700  sll         $a0, $a0, 28
    ctx->pc = 0x2cf384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 28));
    // 0x2cf388: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2cf388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2cf38c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF38Cu;
    {
        const bool branch_taken_0x2cf38c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf38c) {
            ctx->pc = 0x2CF390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF38Cu;
            // 0x2cf390: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF394u;
            goto label_2cf394;
        }
    }
    ctx->pc = 0x2CF394u;
label_2cf394:
    // 0x2cf394: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2cf394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2cf398: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x2cf398u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf39c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x2cf39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x2cf3a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2cf3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2cf3a4: 0x3010  mfhi        $a2
    ctx->pc = 0x2cf3a4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2cf3a8: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF3A8u;
    {
        const bool branch_taken_0x2cf3a8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2CF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3A8u;
        // 0x2cf3ac: 0x34730100  ori         $s3, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3a8) {
            ctx->pc = 0x2CF3C8u;
            goto label_2cf3c8;
        }
    }
    ctx->pc = 0x2CF3B0u;
    // 0x2cf3b0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF3B0u;
    {
        const bool branch_taken_0x2cf3b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3b0) {
            ctx->pc = 0x2CF3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF3B0u;
            // 0x2cf3b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF3B8u;
            goto label_2cf3b8;
        }
    }
    ctx->pc = 0x2CF3B8u;
label_2cf3b8:
    // 0x2cf3b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cf3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cf3bc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2cf3bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cf3c0: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x2CF3C0u;
    {
        const bool branch_taken_0x2cf3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3c0) {
            ctx->pc = 0x2CF3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF3C0u;
            // 0x2cf3c4: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF4C4u;
            goto label_2cf4c4;
        }
    }
    ctx->pc = 0x2CF3C8u;
label_2cf3c8:
    // 0x2cf3c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cf3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cf3cc: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2cf3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2cf3d0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2cf3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2cf3d4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2CF3D4u;
    {
        const bool branch_taken_0x2cf3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3D4u;
        // 0x2cf3d8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3d4) {
            ctx->pc = 0x2CF4BCu;
            goto label_2cf4bc;
        }
    }
    ctx->pc = 0x2CF3DCu;
label_2cf3dc:
    // 0x2cf3dc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2cf3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2cf3e0: 0xc0b3ad0  jal         func_2CEB40
    ctx->pc = 0x2CF3E0u;
    SET_GPR_U32(ctx, 31, 0x2CF3E8u);
    ctx->pc = 0x2CF3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF3E0u;
    // 0x2cf3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEB40u, 0x2CF3E0u, 0x2CF3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3E8u;
label_2cf3e8:
    // 0x2cf3e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cf3e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3f0: 0xc0b3ad0  jal         func_2CEB40
    ctx->pc = 0x2CF3F0u;
    SET_GPR_U32(ctx, 31, 0x2CF3F8u);
    ctx->pc = 0x2CF3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF3F0u;
    // 0x2cf3f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEB40u, 0x2CF3F0u, 0x2CF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3F8u;
label_2cf3f8:
    // 0x2cf3f8: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x2cf3f8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3fc: 0x122e0030  beq         $s1, $t6, . + 4 + (0x30 << 2)
    ctx->pc = 0x2CF3FCu;
    {
        const bool branch_taken_0x2cf3fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 14));
        ctx->pc = 0x2CF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3FCu;
        // 0x2cf400: 0x3c090fff  lui         $t1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3fc) {
            ctx->pc = 0x2CF4C0u;
            goto label_2cf4c0;
        }
    }
    ctx->pc = 0x2CF404u;
    // 0x2cf404: 0x8e0c0008  lw          $t4, 0x8($s0)
    ctx->pc = 0x2cf404u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cf408: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x2cf408u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf40c: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x2cf40cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cf410: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2cf410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2cf414: 0xc1ac0  sll         $v1, $t4, 11
    ctx->pc = 0x2cf414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
    // 0x2cf418: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF418u;
    {
        const bool branch_taken_0x2cf418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf418) {
            ctx->pc = 0x2CF41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF418u;
            // 0x2cf41c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF420u;
            goto label_2cf420;
        }
    }
    ctx->pc = 0x2CF420u;
label_2cf420:
    // 0x2cf420: 0x1cc3821  addu        $a3, $t6, $t4
    ctx->pc = 0x2cf420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x2cf424: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2cf424u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cf428: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2cf428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cf42c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2cf42cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cf430: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x2cf430u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cf434: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x2cf434u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2cf438: 0x111ac0  sll         $v1, $s1, 11
    ctx->pc = 0x2cf438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x2cf43c: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2cf43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2cf440: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2cf440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2cf444: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2cf444u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2cf448: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2cf448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2cf44c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x2cf44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2cf450: 0x8e0a0004  lw          $t2, 0x4($s0)
    ctx->pc = 0x2cf450u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cf454: 0x3a902  srl         $s5, $v1, 4
    ctx->pc = 0x2cf454u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2cf458: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x2cf458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x2cf45c: 0x2810  mfhi        $a1
    ctx->pc = 0x2cf45cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2cf460: 0x4c001a  div         $zero, $v0, $t4
    ctx->pc = 0x2cf460u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf464: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x2cf464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2cf468: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2cf468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2cf46c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2cf46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2cf470: 0x49a024  and         $s4, $v0, $t1
    ctx->pc = 0x2cf470u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2cf474: 0x3010  mfhi        $a2
    ctx->pc = 0x2cf474u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2cf478: 0xec001a  div         $zero, $a3, $t4
    ctx->pc = 0x2cf478u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf47c: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x2cf47cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x2cf480: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x2cf480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2cf484: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x2cf484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x2cf488: 0x5580a  movz        $t3, $zero, $a1
    ctx->pc = 0x2cf488u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x2cf48c: 0xb5f00  sll         $t3, $t3, 28
    ctx->pc = 0x2cf48cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 28));
    // 0x2cf490: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x2cf490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x2cf494: 0x1010  mfhi        $v0
    ctx->pc = 0x2cf494u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cf498: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF498u;
    {
        const bool branch_taken_0x2cf498 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF498u;
        // 0x2cf49c: 0x34930100  ori         $s3, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf498) {
            ctx->pc = 0x2CF4B4u;
            goto label_2cf4b4;
        }
    }
    ctx->pc = 0x2CF4A0u;
    // 0x2cf4a0: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF4A0u;
    {
        const bool branch_taken_0x2cf4a0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf4a0) {
            ctx->pc = 0x2CF4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF4A0u;
            // 0x2cf4a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF4A8u;
            goto label_2cf4a8;
        }
    }
    ctx->pc = 0x2CF4A8u;
label_2cf4a8:
    // 0x2cf4a8: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x2cf4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x2cf4ac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF4ACu;
    {
        const bool branch_taken_0x2cf4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf4ac) {
            ctx->pc = 0x2CF4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF4ACu;
            // 0x2cf4b0: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF4C4u;
            goto label_2cf4c4;
        }
    }
    ctx->pc = 0x2CF4B4u;
label_2cf4b4:
    // 0x2cf4b4: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x2cf4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2cf4b8: 0xae0e000c  sw          $t6, 0xC($s0)
    ctx->pc = 0x2cf4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
label_2cf4bc:
    // 0x2cf4bc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2cf4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2cf4c0:
    // 0x2cf4c0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2cf4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2cf4c4:
    // 0x2cf4c4: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2CF4C4u;
    {
        const bool branch_taken_0x2cf4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf4c4) {
            ctx->pc = 0x2CF4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF4C4u;
            // 0x2cf4c8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF500u;
            goto label_2cf500;
        }
    }
    ctx->pc = 0x2CF4CCu;
    // 0x2cf4cc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2cf4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2cf4d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CF4D0u;
    {
        const bool branch_taken_0x2cf4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4D0u;
        // 0x2cf4d4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4d0) {
            ctx->pc = 0x2CF4FCu;
            goto label_2cf4fc;
        }
    }
    ctx->pc = 0x2CF4D8u;
    // 0x2cf4d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2cf4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf4dc: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x2cf4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x2cf4e0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x2cf4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x2cf4e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cf4e4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000b010
    // 0x2cf4e8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2cf4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2cf4ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2cf4ecu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3)); // MMIO: 0x1000b020
    // 0x2cf4f0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2cf4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2cf4f4: 0xc0b3ae2  jal         func_2CEB88
    ctx->pc = 0x2CF4F4u;
    SET_GPR_U32(ctx, 31, 0x2CF4FCu);
    ctx->pc = 0x2CF4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4F4u;
    // 0x2cf4f8: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEB88u, 0x2CF4F4u, 0x2CF4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4FCu;
label_2cf4fc:
    // 0x2cf4fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cf4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cf500:
    // 0x2cf500: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CF500u;
    {
        const bool branch_taken_0x2cf500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF500u;
        // 0x2cf504: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf500) {
            ctx->pc = 0x2CF570u;
            goto label_2cf570;
        }
    }
    ctx->pc = 0x2CF508u;
    // 0x2cf508: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x2cf508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x2cf50c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cf50cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002010
    // 0x2cf510: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CF510u;
    {
        const bool branch_taken_0x2cf510 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2CF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF510u;
        // 0x2cf514: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf510) {
            ctx->pc = 0x2CF538u;
            goto label_2cf538;
        }
    }
    ctx->pc = 0x2CF518u;
    // 0x2cf518: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2cf518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf51c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2cf51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_2cf520:
    // 0x2cf520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cf520u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x2cf524: 0x0  nop
    ctx->pc = 0x2cf524u;
    // NOP
    // 0x2cf528: 0x0  nop
    ctx->pc = 0x2cf528u;
    // NOP
    // 0x2cf52c: 0x0  nop
    ctx->pc = 0x2cf52cu;
    // NOP
    // 0x2cf530: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CF530u;
    {
        const bool branch_taken_0x2cf530 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF530u;
        // 0x2cf534: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf530) {
            ctx->pc = 0x2CF520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf520;
        }
    }
    ctx->pc = 0x2CF538u;
label_2cf538:
    // 0x2cf538: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2cf538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf53c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2cf53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2cf540: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2cf540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x2cf544: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x2cf544u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22)); // MMIO: 0x10002000
    // 0x2cf548: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf548u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x2cf54c: 0x4810009  bgez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CF54Cu;
    {
        const bool branch_taken_0x2cf54c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2CF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF54Cu;
        // 0x2cf550: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf54c) {
            ctx->pc = 0x2CF574u;
            goto label_2cf574;
        }
    }
    ctx->pc = 0x2CF554u;
    // 0x2cf554: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2cf554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_2cf558:
    // 0x2cf558: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cf558u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x2cf55c: 0x0  nop
    ctx->pc = 0x2cf55cu;
    // NOP
    // 0x2cf560: 0x0  nop
    ctx->pc = 0x2cf560u;
    // NOP
    // 0x2cf564: 0x0  nop
    ctx->pc = 0x2cf564u;
    // NOP
    // 0x2cf568: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CF568u;
    {
        const bool branch_taken_0x2cf568 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2cf568) {
            ctx->pc = 0x2CF558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf558;
        }
    }
    ctx->pc = 0x2CF570u;
label_2cf570:
    // 0x2cf570: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2cf570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_2cf574:
    // 0x2cf574: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2cf574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf578: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x2cf578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x2cf57c: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x2cf57cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x2cf580: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2cf580u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18)); // MMIO: 0x1000b410
    // 0x2cf584: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2cf584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf588: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x2cf588u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 20)); // MMIO: 0x1000b430
    // 0x2cf58c: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x2cf58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x2cf590: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x2cf590u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 21)); // MMIO: 0x1000b420
    // 0x2cf594: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2cf594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cf598: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF598u;
    {
        const bool branch_taken_0x2cf598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf598) {
            ctx->pc = 0x2CF59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF598u;
            // 0x2cf59c: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF5ACu;
            goto label_2cf5ac;
        }
    }
    ctx->pc = 0x2CF5A0u;
    // 0x2cf5a0: 0xc0b3afe  jal         func_2CEBF8
    ctx->pc = 0x2CF5A0u;
    SET_GPR_U32(ctx, 31, 0x2CF5A8u);
    ctx->pc = 0x2CF5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5A0u;
    // 0x2cf5a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEBF8u, 0x2CF5A0u, 0x2CF5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5A8u;
label_2cf5a8:
    // 0x2cf5a8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2cf5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2cf5ac:
    // 0x2cf5ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2cf5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf5b0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2cf5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x2cf5b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cf5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf5b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2cf5b8u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10002010
    // 0x2cf5bc: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x2cf5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x2cf5c0: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x2CF5C0u;
    SET_GPR_U32(ctx, 31, 0x2CF5C8u);
    ctx->pc = 0x2CF5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5C0u;
    // 0x2cf5c4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x2CF5C0u, 0x2CF5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5C8u;
label_2cf5c8:
    // 0x2cf5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf5d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf5d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf5d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf5d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf5d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cf5d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf5dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cf5dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf5e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cf5e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cf5e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2cf5e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf5e8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2cf5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cf5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5ECu;
        // 0x2cf5f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF5F4u;
    // 0x2cf5f4: 0x0  nop
    ctx->pc = 0x2cf5f4u;
    // NOP
    ctx->pc = 0x2cf5f8u;
}
