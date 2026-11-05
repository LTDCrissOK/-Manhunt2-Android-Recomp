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

// Function: sub_0024B798
// Address: 0x24b798 - 0x24b960
void sub_0024B798_0x24b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B798_0x24b798");
#endif

    switch (ctx->pc) {
        case 0x24b7b4u: goto label_24b7b4;
        case 0x24b820u: goto label_24b820;
        case 0x24b878u: goto label_24b878;
        case 0x24b8d0u: goto label_24b8d0;
        case 0x24b8e8u: goto label_24b8e8;
        case 0x24b93cu: goto label_24b93c;
        case 0x24b944u: goto label_24b944;
        case 0x24b94cu: goto label_24b94c;
        default: break;
    }

    ctx->pc = 0x24b798u;

    // 0x24b798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b79c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24b79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b7a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b7a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24b7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b7a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24b7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24b7ac: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x24B7ACu;
    SET_GPR_U32(ctx, 31, 0x24B7B4u);
    ctx->pc = 0x24B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7ACu;
    // 0x24b7b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x24B7ACu, 0x24B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7B4u;
label_24b7b4:
    // 0x24b7b4: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x24b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x24b7b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24b7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b7bc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x24b7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24b7c0: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x24b7c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x24b7c4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x24b7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x24b7c8: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x24b7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x24b7cc: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x24b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x24b7d0: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x24b7d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x24b7d4: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x24b7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x24b7d8: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x24b7d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x24b7dc: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x24b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x24b7e0: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x24b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x24b7e4: 0xa0450030  sb          $a1, 0x30($v0)
    ctx->pc = 0x24b7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x24b7e8: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x24b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x24b7ec: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B7ECu;
    {
        const bool branch_taken_0x24b7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x24B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7ECu;
        // 0x24b7f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7ec) {
            ctx->pc = 0x24B800u;
            goto label_24b800;
        }
    }
    ctx->pc = 0x24B7F4u;
    // 0x24b7f4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x24b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24b7f8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B7F8u;
    {
        const bool branch_taken_0x24b7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b7f8) {
            ctx->pc = 0x24B804u;
            goto label_24b804;
        }
    }
    ctx->pc = 0x24B800u;
label_24b800:
    // 0x24b800: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24b800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b804:
    // 0x24b804: 0x50e00012  beql        $a3, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x24B804u;
    {
        const bool branch_taken_0x24b804 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b804) {
            ctx->pc = 0x24B808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B804u;
            // 0x24b808: 0x8e03014c  lw          $v1, 0x14C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B850u;
            goto label_24b850;
        }
    }
    ctx->pc = 0x24B80Cu;
    // 0x24b80c: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x24b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x24b810: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24B810u;
    {
        const bool branch_taken_0x24b810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B810u;
        // 0x24b814: 0x260301ec  addiu       $v1, $s0, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b810) {
            ctx->pc = 0x24B840u;
            goto label_24b840;
        }
    }
    ctx->pc = 0x24B818u;
    // 0x24b818: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24b818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b81c: 0x0  nop
    ctx->pc = 0x24b81cu;
    // NOP
label_24b820:
    // 0x24b820: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24b820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b824: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B824u;
    {
        const bool branch_taken_0x24b824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b824) {
            ctx->pc = 0x24B840u;
            goto label_24b840;
        }
    }
    ctx->pc = 0x24B82Cu;
    // 0x24b82c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24b830: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x24b830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24b834: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24B834u;
    {
        const bool branch_taken_0x24b834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B834u;
        // 0x24b838: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b834) {
            ctx->pc = 0x24B820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b820;
        }
    }
    ctx->pc = 0x24B83Cu;
    // 0x24b83c: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x24b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_24b840:
    // 0x24b840: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x24b840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x24b844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b848: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x24B848u;
    {
        const bool branch_taken_0x24b848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B848u;
        // 0x24b84c: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b848) {
            ctx->pc = 0x24B8A8u;
            goto label_24b8a8;
        }
    }
    ctx->pc = 0x24B850u;
label_24b850:
    // 0x24b850: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x24b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x24b854: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B854u;
    {
        const bool branch_taken_0x24b854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B854u;
        // 0x24b858: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b854) {
            ctx->pc = 0x24B864u;
            goto label_24b864;
        }
    }
    ctx->pc = 0x24B85Cu;
    // 0x24b85c: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x24B85Cu;
    {
        const bool branch_taken_0x24b85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b85c) {
            ctx->pc = 0x24B860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B85Cu;
            // 0x24b860: 0x8e0201e4  lw          $v0, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B8D8u;
            goto label_24b8d8;
        }
    }
    ctx->pc = 0x24B864u;
label_24b864:
    // 0x24b864: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x24b864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x24b868: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x24B868u;
    {
        const bool branch_taken_0x24b868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b868) {
            ctx->pc = 0x24B86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B868u;
            // 0x24b86c: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B89Cu;
            goto label_24b89c;
        }
    }
    ctx->pc = 0x24B870u;
    // 0x24b870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24b870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b874: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x24b874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
label_24b878:
    // 0x24b878: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b87c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B87Cu;
    {
        const bool branch_taken_0x24b87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b87c) {
            ctx->pc = 0x24B880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B87Cu;
            // 0x24b880: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B89Cu;
            goto label_24b89c;
        }
    }
    ctx->pc = 0x24B884u;
    // 0x24b884: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24b884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24b888: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x24b888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24b88c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24B88Cu;
    {
        const bool branch_taken_0x24b88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B88Cu;
        // 0x24b890: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b88c) {
            ctx->pc = 0x24B878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b878;
        }
    }
    ctx->pc = 0x24B894u;
    // 0x24b894: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x24b894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x24b898: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x24b898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24b89c:
    // 0x24b89c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x24b89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x24b8a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24b8a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24b8a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24b8a8:
    // 0x24b8a8: 0x0  nop
    ctx->pc = 0x24b8a8u;
    // NOP
    // 0x24b8ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24b8acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b8b0: 0x0  nop
    ctx->pc = 0x24b8b0u;
    // NOP
    // 0x24b8b4: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x24B8B4u;
    {
        const bool branch_taken_0x24b8b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8B4u;
        // 0x24b8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8b4) {
            ctx->pc = 0x24B93Cu;
            goto label_24b93c;
        }
    }
    ctx->pc = 0x24B8BCu;
    // 0x24b8bc: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x24b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x24b8c0: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x24b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x24b8c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24b8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b8c8: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x24B8C8u;
    SET_GPR_U32(ctx, 31, 0x24B8D0u);
    ctx->pc = 0x24B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B8C8u;
    // 0x24b8cc: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x24B8C8u, 0x24B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B8D0u;
label_24b8d0:
    // 0x24b8d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x24B8D0u;
    {
        const bool branch_taken_0x24b8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b8d0) {
            ctx->pc = 0x24B93Cu;
            goto label_24b93c;
        }
    }
    ctx->pc = 0x24B8D8u;
label_24b8d8:
    // 0x24b8d8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x24B8D8u;
    {
        const bool branch_taken_0x24b8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b8d8) {
            ctx->pc = 0x24B8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B8D8u;
            // 0x24b8dc: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B90Cu;
            goto label_24b90c;
        }
    }
    ctx->pc = 0x24B8E0u;
    // 0x24b8e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24b8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b8e4: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x24b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
label_24b8e8:
    // 0x24b8e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b8ec: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B8ECu;
    {
        const bool branch_taken_0x24b8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b8ec) {
            ctx->pc = 0x24B8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B8ECu;
            // 0x24b8f0: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B90Cu;
            goto label_24b90c;
        }
    }
    ctx->pc = 0x24B8F4u;
    // 0x24b8f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24b8f8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x24b8f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24b8fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24B8FCu;
    {
        const bool branch_taken_0x24b8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8FCu;
        // 0x24b900: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8fc) {
            ctx->pc = 0x24B8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b8e8;
        }
    }
    ctx->pc = 0x24B904u;
    // 0x24b904: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x24b904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x24b908: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x24b908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24b90c:
    // 0x24b90c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x24b90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x24b910: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b914: 0x0  nop
    ctx->pc = 0x24b914u;
    // NOP
    // 0x24b918: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24b918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b91c: 0x0  nop
    ctx->pc = 0x24b91cu;
    // NOP
    // 0x24b920: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24B920u;
    {
        const bool branch_taken_0x24b920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B920u;
        // 0x24b924: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b920) {
            ctx->pc = 0x24B93Cu;
            goto label_24b93c;
        }
    }
    ctx->pc = 0x24B928u;
    // 0x24b928: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x24b928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x24b92c: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x24b92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x24b930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24b930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b934: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x24B934u;
    SET_GPR_U32(ctx, 31, 0x24B93Cu);
    ctx->pc = 0x24B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B934u;
    // 0x24b938: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x24B934u, 0x24B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B93Cu;
label_24b93c:
    // 0x24b93c: 0xc08fde2  jal         func_23F788
    ctx->pc = 0x24B93Cu;
    SET_GPR_U32(ctx, 31, 0x24B944u);
    ctx->pc = 0x24B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B93Cu;
    // 0x24b940: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x24B93Cu, 0x24B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B944u;
label_24b944:
    // 0x24b944: 0xc094224  jal         func_250890
    ctx->pc = 0x24B944u;
    SET_GPR_U32(ctx, 31, 0x24B94Cu);
    ctx->pc = 0x24B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B944u;
    // 0x24b948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24B944u, 0x24B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B94Cu;
label_24b94c:
    // 0x24b94c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b950: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b954: 0x3e00008  jr          $ra
    ctx->pc = 0x24B954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B954u;
        // 0x24b958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B95Cu;
    // 0x24b95c: 0x0  nop
    ctx->pc = 0x24b95cu;
    // NOP
    ctx->pc = 0x24b960u;
}
