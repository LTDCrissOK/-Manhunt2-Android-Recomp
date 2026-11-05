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

// Function: sub_003D3448
// Address: 0x3d3448 - 0x3d3988
void sub_003D3448_0x3d3448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3448_0x3d3448");
#endif

    ctx->pc = 0x3d3448u;

    // 0x3d3448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d3448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d344c: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x3d344cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3d3450: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x3d3450u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3d3454: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x3d3454u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3d3458: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x3d3458u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3d345c: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x3d345cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3d3460: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x3d3460u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x3d3464: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x3D3464u;
    {
        const bool branch_taken_0x3d3464 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3464u;
        // 0x3d3468: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3464) {
            ctx->pc = 0x3D3734u;
            goto label_3d3734;
        }
    }
    ctx->pc = 0x3D346Cu;
    // 0x3d346c: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x3d346cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d3470: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3D3470u;
    {
        const bool branch_taken_0x3d3470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3470u;
        // 0x3d3474: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3470) {
            ctx->pc = 0x3D3500u;
            goto label_3d3500;
        }
    }
    ctx->pc = 0x3D3478u;
    // 0x3d3478: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3d3478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d347c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D347Cu;
    {
        const bool branch_taken_0x3d347c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D347Cu;
        // 0x3d3480: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d347c) {
            ctx->pc = 0x3D3498u;
            goto label_3d3498;
        }
    }
    ctx->pc = 0x3D3484u;
    // 0x3d3484: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x3d3484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3d3488: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d3488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d348c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D348Cu;
    {
        const bool branch_taken_0x3d348c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D348Cu;
        // 0x3d3490: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d348c) {
            ctx->pc = 0x3D34B0u;
            goto label_3d34b0;
        }
    }
    ctx->pc = 0x3D3494u;
    // 0x3d3494: 0x0  nop
    ctx->pc = 0x3d3494u;
    // NOP
label_3d3498:
    // 0x3d3498: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3d3498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3d349c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d349cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d34a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d34a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d34a4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3d34a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d34a8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3d34a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3d34ac: 0x0  nop
    ctx->pc = 0x3d34acu;
    // NOP
label_3d34b0:
    // 0x3d34b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d34b4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x3d34b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3d34b8: 0x24422318  addiu       $v0, $v0, 0x2318
    ctx->pc = 0x3d34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8984));
    // 0x3d34bc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3d34bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d34c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d34c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d34c4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d34c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d34c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d34c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d34cc: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x3d34ccu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d34d0: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D34D0u;
    {
        const bool branch_taken_0x3d34d0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34D0u;
        // 0x3d34d4: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d34d0) {
            ctx->pc = 0x3D34ECu;
            goto label_3d34ec;
        }
    }
    ctx->pc = 0x3D34D8u;
    // 0x3d34d8: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3d34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d34dc: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x3d34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x3d34e0: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3d34e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d34e4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3d34e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d34e8: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3d34e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_3d34ec:
    // 0x3d34ec: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3d34ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3d34f0: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x3d34f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3d34f4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3D34F4u;
    {
        const bool branch_taken_0x3d34f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34F4u;
        // 0x3d34f8: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d34f4) {
            ctx->pc = 0x3D3678u;
            goto label_3d3678;
        }
    }
    ctx->pc = 0x3D34FCu;
    // 0x3d34fc: 0x0  nop
    ctx->pc = 0x3d34fcu;
    // NOP
label_3d3500:
    // 0x3d3500: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D3500u;
    {
        const bool branch_taken_0x3d3500 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3500u;
        // 0x3d3504: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3500) {
            ctx->pc = 0x3D3528u;
            goto label_3d3528;
        }
    }
    ctx->pc = 0x3D3508u;
    // 0x3d3508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d3508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d350c: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D350Cu;
    {
        const bool branch_taken_0x3d350c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d350c) {
            ctx->pc = 0x3D3510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D350Cu;
            // 0x3d3510: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3514u;
            goto label_3d3514;
        }
    }
    ctx->pc = 0x3D3514u;
label_3d3514:
    // 0x3d3514: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x3d3514u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3d3518: 0x1012  mflo        $v0
    ctx->pc = 0x3d3518u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d351c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3d351cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3520: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3d3520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3d3524: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3d3524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3d3528:
    // 0x3d3528: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3528u;
    {
        const bool branch_taken_0x3d3528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3528u;
        // 0x3d352c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3528) {
            ctx->pc = 0x3D3540u;
            goto label_3d3540;
        }
    }
    ctx->pc = 0x3D3530u;
    // 0x3d3530: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x3d3530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3d3534: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d3534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d3538: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3538u;
    {
        const bool branch_taken_0x3d3538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3538u;
        // 0x3d353c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3538) {
            ctx->pc = 0x3D3558u;
            goto label_3d3558;
        }
    }
    ctx->pc = 0x3D3540u;
label_3d3540:
    // 0x3d3540: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3d3540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3d3544: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d3544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d3548: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d3548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d354c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3d354cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d3550: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3d3550u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3d3554: 0x0  nop
    ctx->pc = 0x3d3554u;
    // NOP
label_3d3558:
    // 0x3d3558: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d3558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d355c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x3d355cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3d3560: 0x24422318  addiu       $v0, $v0, 0x2318
    ctx->pc = 0x3d3560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8984));
    // 0x3d3564: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3d3564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d3568: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d3568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d356c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d356cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3570: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d3570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d3574: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x3d3574u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d3578: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3578u;
    {
        const bool branch_taken_0x3d3578 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3578u;
        // 0x3d357c: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3578) {
            ctx->pc = 0x3D3590u;
            goto label_3d3590;
        }
    }
    ctx->pc = 0x3D3580u;
    // 0x3d3580: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x3d3580u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3d3584: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3d3584u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3d3588: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3D3588u;
    {
        const bool branch_taken_0x3d3588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3588u;
        // 0x3d358c: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3588) {
            ctx->pc = 0x3D366Cu;
            goto label_3d366c;
        }
    }
    ctx->pc = 0x3D3590u;
label_3d3590:
    // 0x3d3590: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3d3590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d3594: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x3d3594u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d3598: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x3d3598u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d359c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3d359cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d35a0: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3d35a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d35a4: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3d35a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d35a8: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3d35a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3d35ac: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x3d35acu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3d35b0: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x3d35b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3d35b4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3d35b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d35b8: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x3d35b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x3d35bc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D35BCu;
    {
        const bool branch_taken_0x3d35bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d35bc) {
            ctx->pc = 0x3D35C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D35BCu;
            // 0x3d35c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D35C4u;
            goto label_3d35c4;
        }
    }
    ctx->pc = 0x3D35C4u;
label_3d35c4:
    // 0x3d35c4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x3d35c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d35c8: 0x1012  mflo        $v0
    ctx->pc = 0x3d35c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d35cc: 0x1810  mfhi        $v1
    ctx->pc = 0x3d35ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d35d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d35d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d35d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d35d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d35d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d35d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d35dc: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x3d35dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d35e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d35e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d35e4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d35e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d35e8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3D35E8u;
    {
        const bool branch_taken_0x3d35e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d35e8) {
            ctx->pc = 0x3D35ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D35E8u;
            // 0x3d35ec: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3614u;
            goto label_3d3614;
        }
    }
    ctx->pc = 0x3D35F0u;
    // 0x3d35f0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d35f4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3d35f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d35f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D35F8u;
    {
        const bool branch_taken_0x3d35f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d35f8) {
            ctx->pc = 0x3D35FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D35F8u;
            // 0x3d35fc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3614u;
            goto label_3d3614;
        }
    }
    ctx->pc = 0x3D3600u;
    // 0x3d3600: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d3600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d3604: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D3604u;
    {
        const bool branch_taken_0x3d3604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3604) {
            ctx->pc = 0x3D3608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3604u;
            // 0x3d3608: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3610u;
            goto label_3d3610;
        }
    }
    ctx->pc = 0x3D360Cu;
    // 0x3d360c: 0x0  nop
    ctx->pc = 0x3d360cu;
    // NOP
label_3d3610:
    // 0x3d3610: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3d3610u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d3614:
    // 0x3d3614: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x3d3614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3d3618: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x3d3618u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3d361c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D361Cu;
    {
        const bool branch_taken_0x3d361c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d361c) {
            ctx->pc = 0x3D3620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D361Cu;
            // 0x3d3620: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3624u;
            goto label_3d3624;
        }
    }
    ctx->pc = 0x3D3624u;
label_3d3624:
    // 0x3d3624: 0x1012  mflo        $v0
    ctx->pc = 0x3d3624u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d3628: 0x1810  mfhi        $v1
    ctx->pc = 0x3d3628u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d362c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d362cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d3630: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d3630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d3634: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d3634u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d3638: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x3d3638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d363c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d363cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d3640: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d3640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d3644: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D3644u;
    {
        const bool branch_taken_0x3d3644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3644) {
            ctx->pc = 0x3D3648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3644u;
            // 0x3d3648: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D366Cu;
            goto label_3d366c;
        }
    }
    ctx->pc = 0x3D364Cu;
    // 0x3d364c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d364cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d3650: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3d3650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d3654: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3654u;
    {
        const bool branch_taken_0x3d3654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3654u;
        // 0x3d3658: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3654) {
            ctx->pc = 0x3D366Cu;
            goto label_3d366c;
        }
    }
    ctx->pc = 0x3D365Cu;
    // 0x3d365c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d365cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d3660: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D3660u;
    {
        const bool branch_taken_0x3d3660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3660) {
            ctx->pc = 0x3D3664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3660u;
            // 0x3d3664: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3668u;
            goto label_3d3668;
        }
    }
    ctx->pc = 0x3D3668u;
label_3d3668:
    // 0x3d3668: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x3d3668u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d366c:
    // 0x3d366c: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x3d366cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x3d3670: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3d3670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3674: 0x0  nop
    ctx->pc = 0x3d3674u;
    // NOP
label_3d3678:
    // 0x3d3678: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x3d3678u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x3d367c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D367Cu;
    {
        const bool branch_taken_0x3d367c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d367c) {
            ctx->pc = 0x3D3680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D367Cu;
            // 0x3d3680: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3684u;
            goto label_3d3684;
        }
    }
    ctx->pc = 0x3D3684u;
label_3d3684:
    // 0x3d3684: 0x1012  mflo        $v0
    ctx->pc = 0x3d3684u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d3688: 0x1810  mfhi        $v1
    ctx->pc = 0x3d3688u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d368c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d368cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d3690: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d3690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d3694: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d3694u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d3698: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x3d3698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d369c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d369cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d36a0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d36a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d36a4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D36A4u;
    {
        const bool branch_taken_0x3d36a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d36a4) {
            ctx->pc = 0x3D36A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D36A4u;
            // 0x3d36a8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D36CCu;
            goto label_3d36cc;
        }
    }
    ctx->pc = 0x3D36ACu;
    // 0x3d36ac: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d36acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d36b0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3d36b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d36b4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D36B4u;
    {
        const bool branch_taken_0x3d36b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d36b4) {
            ctx->pc = 0x3D36B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D36B4u;
            // 0x3d36b8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D36CCu;
            goto label_3d36cc;
        }
    }
    ctx->pc = 0x3D36BCu;
    // 0x3d36bc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d36bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d36c0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D36C0u;
    {
        const bool branch_taken_0x3d36c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d36c0) {
            ctx->pc = 0x3D36C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D36C0u;
            // 0x3d36c4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D36C8u;
            goto label_3d36c8;
        }
    }
    ctx->pc = 0x3D36C8u;
label_3d36c8:
    // 0x3d36c8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3d36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d36cc:
    // 0x3d36cc: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x3d36ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x3d36d0: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3d36d0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3d36d4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D36D4u;
    {
        const bool branch_taken_0x3d36d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d36d4) {
            ctx->pc = 0x3D36D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D36D4u;
            // 0x3d36d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D36DCu;
            goto label_3d36dc;
        }
    }
    ctx->pc = 0x3D36DCu;
label_3d36dc:
    // 0x3d36dc: 0x1012  mflo        $v0
    ctx->pc = 0x3d36dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d36e0: 0x1810  mfhi        $v1
    ctx->pc = 0x3d36e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d36e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d36e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d36e8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d36e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d36ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d36ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d36f0: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x3d36f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d36f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d36f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d36f8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d36f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d36fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D36FCu;
    {
        const bool branch_taken_0x3d36fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d36fc) {
            ctx->pc = 0x3D371Cu;
            goto label_3d371c;
        }
    }
    ctx->pc = 0x3D3704u;
    // 0x3d3704: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d3704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d3708: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3d3708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d370c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D370Cu;
    {
        const bool branch_taken_0x3d370c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D370Cu;
        // 0x3d3710: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d370c) {
            ctx->pc = 0x3D371Cu;
            goto label_3d371c;
        }
    }
    ctx->pc = 0x3D3714u;
    // 0x3d3714: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D3714u;
    {
        const bool branch_taken_0x3d3714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3714) {
            ctx->pc = 0x3D3718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3714u;
            // 0x3d3718: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D371Cu;
            goto label_3d371c;
        }
    }
    ctx->pc = 0x3D371Cu;
label_3d371c:
    // 0x3d371c: 0x13000097  beqz        $t8, . + 4 + (0x97 << 2)
    ctx->pc = 0x3D371Cu;
    {
        const bool branch_taken_0x3d371c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D371Cu;
        // 0x3d3720: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d371c) {
            ctx->pc = 0x3D397Cu;
            goto label_3d397c;
        }
    }
    ctx->pc = 0x3D3724u;
    // 0x3d3724: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x3d3724u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d3728: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d3728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d372c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x3D372Cu;
    {
        const bool branch_taken_0x3d372c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D372Cu;
        // 0x3d3730: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d372c) {
            ctx->pc = 0x3D3978u;
            goto label_3d3978;
        }
    }
    ctx->pc = 0x3D3734u;
label_3d3734:
    // 0x3d3734: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x3d3734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d3738: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3738u;
    {
        const bool branch_taken_0x3d3738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3738u;
        // 0x3d373c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3738) {
            ctx->pc = 0x3D3754u;
            goto label_3d3754;
        }
    }
    ctx->pc = 0x3D3740u;
    // 0x3d3740: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x3d3740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3d3744: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x3d3744u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d3748: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x3d3748u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x3d374c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x3D374Cu;
    {
        const bool branch_taken_0x3d374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D374Cu;
        // 0x3d3750: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d374c) {
            ctx->pc = 0x3D397Cu;
            goto label_3d397c;
        }
    }
    ctx->pc = 0x3D3754u;
label_3d3754:
    // 0x3d3754: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3d3754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3d3758: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3d3758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d375c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D375Cu;
    {
        const bool branch_taken_0x3d375c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D375Cu;
        // 0x3d3760: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d375c) {
            ctx->pc = 0x3D3778u;
            goto label_3d3778;
        }
    }
    ctx->pc = 0x3D3764u;
    // 0x3d3764: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x3d3764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3d3768: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d3768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d376c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D376Cu;
    {
        const bool branch_taken_0x3d376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D376Cu;
        // 0x3d3770: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d376c) {
            ctx->pc = 0x3D3790u;
            goto label_3d3790;
        }
    }
    ctx->pc = 0x3D3774u;
    // 0x3d3774: 0x0  nop
    ctx->pc = 0x3d3774u;
    // NOP
label_3d3778:
    // 0x3d3778: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3d3778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3d377c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d377cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d3780: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d3780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d3784: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3d3784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d3788: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3d3788u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3d378c: 0x0  nop
    ctx->pc = 0x3d378cu;
    // NOP
label_3d3790:
    // 0x3d3790: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d3790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d3794: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x3d3794u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x3d3798: 0x24422318  addiu       $v0, $v0, 0x2318
    ctx->pc = 0x3d3798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8984));
    // 0x3d379c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3d379cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d37a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d37a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d37a4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d37a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d37a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d37a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d37ac: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x3d37acu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d37b0: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D37B0u;
    {
        const bool branch_taken_0x3d37b0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D37B0u;
        // 0x3d37b4: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d37b0) {
            ctx->pc = 0x3D37F8u;
            goto label_3d37f8;
        }
    }
    ctx->pc = 0x3D37B8u;
    // 0x3d37b8: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x3d37b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3d37bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D37BCu;
    {
        const bool branch_taken_0x3d37bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D37BCu;
        // 0x3d37c0: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d37bc) {
            ctx->pc = 0x3D37D0u;
            goto label_3d37d0;
        }
    }
    ctx->pc = 0x3D37C4u;
    // 0x3d37c4: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x3d37c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d37c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D37C8u;
    {
        const bool branch_taken_0x3d37c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d37c8) {
            ctx->pc = 0x3D37E0u;
            goto label_3d37e0;
        }
    }
    ctx->pc = 0x3D37D0u;
label_3d37d0:
    // 0x3d37d0: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x3d37d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3d37d4: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x3d37d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d37d8: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x3d37d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d37dc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3d37dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d37e0:
    // 0x3d37e0: 0x13000066  beqz        $t8, . + 4 + (0x66 << 2)
    ctx->pc = 0x3D37E0u;
    {
        const bool branch_taken_0x3d37e0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D37E0u;
        // 0x3d37e4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d37e0) {
            ctx->pc = 0x3D397Cu;
            goto label_3d397c;
        }
    }
    ctx->pc = 0x3D37E8u;
    // 0x3d37e8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x3d37e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3d37ec: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x3d37ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d37f0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3D37F0u;
    {
        const bool branch_taken_0x3d37f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D37F0u;
        // 0x3d37f4: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d37f0) {
            ctx->pc = 0x3D3978u;
            goto label_3d3978;
        }
    }
    ctx->pc = 0x3D37F8u;
label_3d37f8:
    // 0x3d37f8: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x3d37f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d37fc: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x3d37fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d3800: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x3d3800u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d3804: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x3d3804u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d3808: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3d3808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d380c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3d380cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d3810: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x3d3810u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3d3814: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3d3814u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d3818: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3d3818u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d381c: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x3d381cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3d3820: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x3d3820u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3d3824: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x3d3824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x3d3828: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x3d3828u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x3d382c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D382Cu;
    {
        const bool branch_taken_0x3d382c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d382c) {
            ctx->pc = 0x3D3830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D382Cu;
            // 0x3d3830: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3834u;
            goto label_3d3834;
        }
    }
    ctx->pc = 0x3D3834u;
label_3d3834:
    // 0x3d3834: 0x1012  mflo        $v0
    ctx->pc = 0x3d3834u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d3838: 0x1810  mfhi        $v1
    ctx->pc = 0x3d3838u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d383c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3d383cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3840: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d3840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d3844: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d3844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d3848: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d3848u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d384c: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x3d384cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3d3850: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d3850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d3854: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3d3854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d3858: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3D3858u;
    {
        const bool branch_taken_0x3d3858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3858) {
            ctx->pc = 0x3D385Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3858u;
            // 0x3d385c: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D388Cu;
            goto label_3d388c;
        }
    }
    ctx->pc = 0x3D3860u;
    // 0x3d3860: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d3860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3d3864: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3d3864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d3868: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3868u;
    {
        const bool branch_taken_0x3d3868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3868u;
        // 0x3d386c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3868) {
            ctx->pc = 0x3D3888u;
            goto label_3d3888;
        }
    }
    ctx->pc = 0x3D3870u;
    // 0x3d3870: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3d3870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d3874: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3874u;
    {
        const bool branch_taken_0x3d3874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3874) {
            ctx->pc = 0x3D3878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3874u;
            // 0x3d3878: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D388Cu;
            goto label_3d388c;
        }
    }
    ctx->pc = 0x3D387Cu;
    // 0x3d387c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3d387cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3d3880: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d3880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3d3884: 0x0  nop
    ctx->pc = 0x3d3884u;
    // NOP
label_3d3888:
    // 0x3d3888: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3d3888u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3d388c:
    // 0x3d388c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D388Cu;
    {
        const bool branch_taken_0x3d388c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d388c) {
            ctx->pc = 0x3D3890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D388Cu;
            // 0x3d3890: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3894u;
            goto label_3d3894;
        }
    }
    ctx->pc = 0x3D3894u;
label_3d3894:
    // 0x3d3894: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x3d3894u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3d3898: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x3d3898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3d389c: 0x1012  mflo        $v0
    ctx->pc = 0x3d389cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d38a0: 0x1810  mfhi        $v1
    ctx->pc = 0x3d38a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d38a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3d38a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d38a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d38a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d38ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d38acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d38b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d38b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d38b4: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x3d38b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3d38b8: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x3d38b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d38bc: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3d38bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d38c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D38C0u;
    {
        const bool branch_taken_0x3d38c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38C0u;
        // 0x3d38c4: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d38c0) {
            ctx->pc = 0x3D38F0u;
            goto label_3d38f0;
        }
    }
    ctx->pc = 0x3D38C8u;
    // 0x3d38c8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x3d38c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3d38cc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3d38ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d38d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D38D0u;
    {
        const bool branch_taken_0x3d38d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38D0u;
        // 0x3d38d4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d38d0) {
            ctx->pc = 0x3D38ECu;
            goto label_3d38ec;
        }
    }
    ctx->pc = 0x3D38D8u;
    // 0x3d38d8: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3d38d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d38dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D38DCu;
    {
        const bool branch_taken_0x3d38dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38DCu;
        // 0x3d38e0: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d38dc) {
            ctx->pc = 0x3D38F0u;
            goto label_3d38f0;
        }
    }
    ctx->pc = 0x3D38E4u;
    // 0x3d38e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3d38e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3d38e8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x3d38e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_3d38ec:
    // 0x3d38ec: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x3d38ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_3d38f0:
    // 0x3d38f0: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x3d38f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3d38f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3d38f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3d38f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d38f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d38fc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3d38fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3900: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3d3900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3d3904: 0x480019  multu       $v0, $t0
    ctx->pc = 0x3d3904u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3d3908: 0x3810  mfhi        $a3
    ctx->pc = 0x3d3908u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x3d390c: 0x3012  mflo        $a2
    ctx->pc = 0x3d390cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3d3910: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x3d3910u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d3914: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3914u;
    {
        const bool branch_taken_0x3d3914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3914u;
        // 0x3d3918: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3914) {
            ctx->pc = 0x3D3930u;
            goto label_3d3930;
        }
    }
    ctx->pc = 0x3D391Cu;
    // 0x3d391c: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D391Cu;
    {
        const bool branch_taken_0x3d391c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x3D3920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D391Cu;
        // 0x3d3920: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d391c) {
            ctx->pc = 0x3D3940u;
            goto label_3d3940;
        }
    }
    ctx->pc = 0x3D3924u;
    // 0x3d3924: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3924u;
    {
        const bool branch_taken_0x3d3924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3924) {
            ctx->pc = 0x3D3940u;
            goto label_3d3940;
        }
    }
    ctx->pc = 0x3D392Cu;
    // 0x3d392c: 0x0  nop
    ctx->pc = 0x3d392cu;
    // NOP
label_3d3930:
    // 0x3d3930: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x3d3930u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3d3934: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x3d3934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d3938: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x3d3938u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d393c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3d393cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d3940:
    // 0x3d3940: 0x1300000e  beqz        $t8, . + 4 + (0xE << 2)
    ctx->pc = 0x3D3940u;
    {
        const bool branch_taken_0x3d3940 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3940u;
        // 0x3d3944: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3940) {
            ctx->pc = 0x3D397Cu;
            goto label_3d397c;
        }
    }
    ctx->pc = 0x3D3948u;
    // 0x3d3948: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x3d3948u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3d394c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x3d394cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d3950: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x3d3950u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d3954: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x3d3954u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d3958: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x3d3958u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d395c: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x3d395cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d3960: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3d3960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3d3964: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d3964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d3968: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3d3968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3d396c: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x3d396cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3d3970: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x3d3970u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x3d3974: 0x0  nop
    ctx->pc = 0x3d3974u;
    // NOP
label_3d3978:
    // 0x3d3978: 0xff0f0000  sd          $t7, 0x0($t8)
    ctx->pc = 0x3d3978u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 15));
label_3d397c:
    // 0x3d397c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x3d397cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d3980: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3980u;
        // 0x3d3984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3988u;
}
