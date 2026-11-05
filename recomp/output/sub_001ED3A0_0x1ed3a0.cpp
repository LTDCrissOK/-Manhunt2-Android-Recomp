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

// Function: sub_001ED3A0
// Address: 0x1ed3a0 - 0x1ed4b8
void sub_001ED3A0_0x1ed3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED3A0_0x1ed3a0");
#endif

    ctx->pc = 0x1ed3a0u;

    // 0x1ed3a0: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x1ed3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x1ed3a4: 0x1122002d  beq         $t1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1ED3A4u;
    {
        const bool branch_taken_0x1ed3a4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3A4u;
        // 0x1ed3a8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3a4) {
            ctx->pc = 0x1ED45Cu;
            goto label_1ed45c;
        }
    }
    ctx->pc = 0x1ED3ACu;
    // 0x1ed3ac: 0x29220068  slti        $v0, $t1, 0x68
    ctx->pc = 0x1ed3acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)104) ? 1 : 0);
    // 0x1ed3b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED3B0u;
    {
        const bool branch_taken_0x1ed3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3B0u;
        // 0x1ed3b4: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3b0) {
            ctx->pc = 0x1ED3F0u;
            goto label_1ed3f0;
        }
    }
    ctx->pc = 0x1ED3B8u;
    // 0x1ed3b8: 0x1122001f  beq         $t1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1ED3B8u;
    {
        const bool branch_taken_0x1ed3b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3B8u;
        // 0x1ed3bc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3b8) {
            ctx->pc = 0x1ED438u;
            goto label_1ed438;
        }
    }
    ctx->pc = 0x1ED3C0u;
    // 0x1ed3c0: 0x2922003b  slti        $v0, $t1, 0x3B
    ctx->pc = 0x1ed3c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)59) ? 1 : 0);
    // 0x1ed3c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED3C4u;
    {
        const bool branch_taken_0x1ed3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3C4u;
        // 0x1ed3c8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3c4) {
            ctx->pc = 0x1ED3DCu;
            goto label_1ed3dc;
        }
    }
    ctx->pc = 0x1ED3CCu;
    // 0x1ed3cc: 0x11220020  beq         $t1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1ED3CCu;
    {
        const bool branch_taken_0x1ed3cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3CCu;
        // 0x1ed3d0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3cc) {
            ctx->pc = 0x1ED450u;
            goto label_1ed450;
        }
    }
    ctx->pc = 0x1ED3D4u;
    // 0x1ed3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3D4u;
        // 0x1ed3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED3DCu;
label_1ed3dc:
    // 0x1ed3dc: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x1ed3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1ed3e0: 0x11220018  beq         $t1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1ED3E0u;
    {
        const bool branch_taken_0x1ed3e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3E0u;
        // 0x1ed3e4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3e0) {
            ctx->pc = 0x1ED444u;
            goto label_1ed444;
        }
    }
    ctx->pc = 0x1ED3E8u;
    // 0x1ed3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3E8u;
        // 0x1ed3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED3F0u;
label_1ed3f0:
    // 0x1ed3f0: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x1ed3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x1ed3f4: 0x1122001c  beq         $t1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1ED3F4u;
    {
        const bool branch_taken_0x1ed3f4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3F4u;
        // 0x1ed3f8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3f4) {
            ctx->pc = 0x1ED468u;
            goto label_1ed468;
        }
    }
    ctx->pc = 0x1ED3FCu;
    // 0x1ed3fc: 0x2922008d  slti        $v0, $t1, 0x8D
    ctx->pc = 0x1ed3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)141) ? 1 : 0);
    // 0x1ed400: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED400u;
    {
        const bool branch_taken_0x1ed400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED400u;
        // 0x1ed404: 0x2402008b  addiu       $v0, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed400) {
            ctx->pc = 0x1ED418u;
            goto label_1ed418;
        }
    }
    ctx->pc = 0x1ED408u;
    // 0x1ed408: 0x11220020  beq         $t1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1ED408u;
    {
        const bool branch_taken_0x1ed408 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED408u;
        // 0x1ed40c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed408) {
            ctx->pc = 0x1ED48Cu;
            goto label_1ed48c;
        }
    }
    ctx->pc = 0x1ED410u;
    // 0x1ed410: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1ED410u;
    {
        const bool branch_taken_0x1ed410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed410) {
            ctx->pc = 0x1ED4B0u;
            goto label_1ed4b0;
        }
    }
    ctx->pc = 0x1ED418u;
label_1ed418:
    // 0x1ed418: 0x2402008d  addiu       $v0, $zero, 0x8D
    ctx->pc = 0x1ed418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x1ed41c: 0x11220015  beq         $t1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1ED41Cu;
    {
        const bool branch_taken_0x1ed41c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED41Cu;
        // 0x1ed420: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed41c) {
            ctx->pc = 0x1ED474u;
            goto label_1ed474;
        }
    }
    ctx->pc = 0x1ED424u;
    // 0x1ed424: 0x2402008e  addiu       $v0, $zero, 0x8E
    ctx->pc = 0x1ed424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x1ed428: 0x11220015  beq         $t1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1ED428u;
    {
        const bool branch_taken_0x1ed428 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED428u;
        // 0x1ed42c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed428) {
            ctx->pc = 0x1ED480u;
            goto label_1ed480;
        }
    }
    ctx->pc = 0x1ED430u;
    // 0x1ed430: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED430u;
        // 0x1ed434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED438u;
label_1ed438:
    // 0x1ed438: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed43c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1ED43Cu;
    {
        const bool branch_taken_0x1ed43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED43Cu;
        // 0x1ed440: 0x2442ddb0  addiu       $v0, $v0, -0x2250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed43c) {
            ctx->pc = 0x1ED498u;
            goto label_1ed498;
        }
    }
    ctx->pc = 0x1ED444u;
label_1ed444:
    // 0x1ed444: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed448: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1ED448u;
    {
        const bool branch_taken_0x1ed448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED448u;
        // 0x1ed44c: 0x2442ddc8  addiu       $v0, $v0, -0x2238 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed448) {
            ctx->pc = 0x1ED498u;
            goto label_1ed498;
        }
    }
    ctx->pc = 0x1ED450u;
label_1ed450:
    // 0x1ed450: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed454: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED454u;
    {
        const bool branch_taken_0x1ed454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED454u;
        // 0x1ed458: 0x2442dde0  addiu       $v0, $v0, -0x2220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed454) {
            ctx->pc = 0x1ED498u;
            goto label_1ed498;
        }
    }
    ctx->pc = 0x1ED45Cu;
label_1ed45c:
    // 0x1ed45c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ed45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ed460: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1ED460u;
    {
        const bool branch_taken_0x1ed460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED460u;
        // 0x1ed464: 0x2442dc30  addiu       $v0, $v0, -0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed460) {
            ctx->pc = 0x1ED498u;
            goto label_1ed498;
        }
    }
    ctx->pc = 0x1ED468u;
label_1ed468:
    // 0x1ed468: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed46c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1ED46Cu;
    {
        const bool branch_taken_0x1ed46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED46Cu;
        // 0x1ed470: 0x2442de00  addiu       $v0, $v0, -0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed46c) {
            ctx->pc = 0x1ED498u;
            goto label_1ed498;
        }
    }
    ctx->pc = 0x1ED474u;
label_1ed474:
    // 0x1ed474: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ed474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ed478: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED478u;
    {
        const bool branch_taken_0x1ed478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED478u;
        // 0x1ed47c: 0x2442de20  addiu       $v0, $v0, -0x21E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed478) {
            ctx->pc = 0x1ED498u;
            goto label_1ed498;
        }
    }
    ctx->pc = 0x1ED480u;
label_1ed480:
    // 0x1ed480: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ed480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ed484: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED484u;
    {
        const bool branch_taken_0x1ed484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED484u;
        // 0x1ed488: 0x2442de28  addiu       $v0, $v0, -0x21D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed484) {
            ctx->pc = 0x1ED498u;
            goto label_1ed498;
        }
    }
    ctx->pc = 0x1ED48Cu;
label_1ed48c:
    // 0x1ed48c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed490: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed494: 0x2442de38  addiu       $v0, $v0, -0x21C8
    ctx->pc = 0x1ed494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958648));
label_1ed498:
    // 0x1ed498: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1ed498u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1ed49c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1ed49cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1ed4a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ed4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ed4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed4a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ed4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ed4ac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1ed4acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1ed4b0:
    // 0x1ed4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED4B8u;
}
