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

// Function: sub_003D4648
// Address: 0x3d4648 - 0x3d4758
void sub_003D4648_0x3d4648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4648_0x3d4648");
#endif

    ctx->pc = 0x3d4648u;

    // 0x3d4648: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d4648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d464c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d464cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4650: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x3d4650u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d4654: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x3d4654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d4658: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4658u;
    {
        const bool branch_taken_0x3d4658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4658u;
        // 0x3d465c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4658) {
            ctx->pc = 0x3D4670u;
            goto label_3d4670;
        }
    }
    ctx->pc = 0x3D4660u;
    // 0x3d4660: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3d4660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3d4664: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3d4664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3d4668: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3D4668u;
    {
        const bool branch_taken_0x3d4668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4668u;
        // 0x3d466c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4668) {
            ctx->pc = 0x3D4704u;
            goto label_3d4704;
        }
    }
    ctx->pc = 0x3D4670u;
label_3d4670:
    // 0x3d4670: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x3d4670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x3d4674: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D4674u;
    {
        const bool branch_taken_0x3d4674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4674u;
        // 0x3d4678: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4674) {
            ctx->pc = 0x3D46C8u;
            goto label_3d46c8;
        }
    }
    ctx->pc = 0x3D467Cu;
    // 0x3d467c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D467Cu;
    {
        const bool branch_taken_0x3d467c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d467c) {
            ctx->pc = 0x3D468Cu;
            goto label_3d468c;
        }
    }
    ctx->pc = 0x3D4684u;
    // 0x3d4684: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3D4684u;
    {
        const bool branch_taken_0x3d4684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4684u;
        // 0x3d4688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4684) {
            ctx->pc = 0x3D4704u;
            goto label_3d4704;
        }
    }
    ctx->pc = 0x3D468Cu;
label_3d468c:
    // 0x3d468c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3D468Cu;
    {
        const bool branch_taken_0x3d468c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D468Cu;
        // 0x3d4690: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d468c) {
            ctx->pc = 0x3D4708u;
            goto label_3d4708;
        }
    }
    ctx->pc = 0x3D4694u;
    // 0x3d4694: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3d4694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d4698: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x3d4698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x3d469c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D469Cu;
    {
        const bool branch_taken_0x3d469c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D469Cu;
        // 0x3d46a0: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d469c) {
            ctx->pc = 0x3D46BCu;
            goto label_3d46bc;
        }
    }
    ctx->pc = 0x3D46A4u;
    // 0x3d46a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3d46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d46a8: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x3d46a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x3d46ac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D46ACu;
    {
        const bool branch_taken_0x3d46ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D46ACu;
        // 0x3d46b0: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d46ac) {
            ctx->pc = 0x3D4700u;
            goto label_3d4700;
        }
    }
    ctx->pc = 0x3D46B4u;
    // 0x3d46b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3D46B4u;
    {
        const bool branch_taken_0x3d46b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D46B4u;
        // 0x3d46b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d46b4) {
            ctx->pc = 0x3D4700u;
            goto label_3d4700;
        }
    }
    ctx->pc = 0x3D46BCu;
label_3d46bc:
    // 0x3d46bc: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x3d46bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3d46c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D46C0u;
    {
        const bool branch_taken_0x3d46c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D46C0u;
        // 0x3d46c4: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d46c0) {
            ctx->pc = 0x3D46D4u;
            goto label_3d46d4;
        }
    }
    ctx->pc = 0x3D46C8u;
label_3d46c8:
    // 0x3d46c8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3d46c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3d46cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3D46CCu;
    {
        const bool branch_taken_0x3d46cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D46CCu;
        // 0x3d46d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d46cc) {
            ctx->pc = 0x3D4704u;
            goto label_3d4704;
        }
    }
    ctx->pc = 0x3D46D4u;
label_3d46d4:
    // 0x3d46d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3d46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3d46d8: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x3d46d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x3d46dc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D46DCu;
    {
        const bool branch_taken_0x3d46dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d46dc) {
            ctx->pc = 0x3D46E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D46DCu;
            // 0x3d46e0: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D46F0u;
            goto label_3d46f0;
        }
    }
    ctx->pc = 0x3D46E4u;
    // 0x3d46e4: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x3d46e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x3d46e8: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x3d46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x3d46ec: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x3d46ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_3d46f0:
    // 0x3d46f0: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D46F0u;
    {
        const bool branch_taken_0x3d46f0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x3d46f0) {
            ctx->pc = 0x3D46F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D46F0u;
            // 0x3d46f4: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4704u;
            goto label_3d4704;
        }
    }
    ctx->pc = 0x3D46F8u;
    // 0x3d46f8: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x3d46f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3d46fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3d46fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3d4700:
    // 0x3d4700: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x3d4700u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_3d4704:
    // 0x3d4704: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x3d4704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_3d4708:
    // 0x3d4708: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x3d4708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x3d470c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3d470cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3d4710: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d4710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d4714: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3d4714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3d4718: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x3d4718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x3d471c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3d471cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3d4720: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d4720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3d4724: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3d4724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3d4728: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3d4728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3d472c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x3d472cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x3d4730: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3d4730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3d4734: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x3d4734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3d4738: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d4738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d473c: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x3d473cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x3d4740: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x3d4740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3d4744: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3d4744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3d4748: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3d4748u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d474c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D474Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4754u;
    // 0x3d4754: 0x0  nop
    ctx->pc = 0x3d4754u;
    // NOP
    ctx->pc = 0x3d4758u;
}
