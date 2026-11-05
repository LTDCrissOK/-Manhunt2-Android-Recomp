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

// Function: sub_003DF340
// Address: 0x3df340 - 0x3df410
void sub_003DF340_0x3df340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF340_0x3df340");
#endif

    switch (ctx->pc) {
        case 0x3df358u: goto label_3df358;
        default: break;
    }

    ctx->pc = 0x3df340u;

    // 0x3df340: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x3df340u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3df344: 0x23903  sra         $a3, $v0, 4
    ctx->pc = 0x3df344u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3df348: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x3DF348u;
    {
        const bool branch_taken_0x3df348 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3DF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF348u;
        // 0x3df34c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df348) {
            ctx->pc = 0x3DF3A4u;
            goto label_3df3a4;
        }
    }
    ctx->pc = 0x3DF350u;
    // 0x3df350: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3df350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3df354: 0x0  nop
    ctx->pc = 0x3df354u;
    // NOP
label_3df358:
    // 0x3df358: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3df358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df35c: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3DF35Cu;
    {
        const bool branch_taken_0x3df35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3df35c) {
            ctx->pc = 0x3DF400u;
            goto label_3df400;
        }
    }
    ctx->pc = 0x3DF364u;
    // 0x3df364: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3df364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3df368: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3df368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df36c: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3DF36Cu;
    {
        const bool branch_taken_0x3df36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3df36c) {
            ctx->pc = 0x3DF400u;
            goto label_3df400;
        }
    }
    ctx->pc = 0x3DF374u;
    // 0x3df374: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3df374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3df378: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3df378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df37c: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3DF37Cu;
    {
        const bool branch_taken_0x3df37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3df37c) {
            ctx->pc = 0x3DF400u;
            goto label_3df400;
        }
    }
    ctx->pc = 0x3DF384u;
    // 0x3df384: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3df384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3df388: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3df388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df38c: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DF38Cu;
    {
        const bool branch_taken_0x3df38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF38Cu;
        // 0x3df390: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df38c) {
            ctx->pc = 0x3DF400u;
            goto label_3df400;
        }
    }
    ctx->pc = 0x3DF394u;
    // 0x3df394: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3DF394u;
    {
        const bool branch_taken_0x3df394 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x3DF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF394u;
        // 0x3df398: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df394) {
            ctx->pc = 0x3DF358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df358;
        }
    }
    ctx->pc = 0x3DF39Cu;
    // 0x3df39c: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x3df39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3df3a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3df3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3df3a4:
    // 0x3df3a4: 0x23883  sra         $a3, $v0, 2
    ctx->pc = 0x3df3a4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3df3a8: 0x10e30011  beq         $a3, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DF3A8u;
    {
        const bool branch_taken_0x3df3a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3A8u;
        // 0x3df3ac: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df3a8) {
            ctx->pc = 0x3DF3F0u;
            goto label_3df3f0;
        }
    }
    ctx->pc = 0x3DF3B0u;
    // 0x3df3b0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3DF3B0u;
    {
        const bool branch_taken_0x3df3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3B0u;
        // 0x3df3b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df3b0) {
            ctx->pc = 0x3DF408u;
            goto label_3df408;
        }
    }
    ctx->pc = 0x3DF3B8u;
    // 0x3df3b8: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DF3B8u;
    {
        const bool branch_taken_0x3df3b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3B8u;
        // 0x3df3bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df3b8) {
            ctx->pc = 0x3DF3DCu;
            goto label_3df3dc;
        }
    }
    ctx->pc = 0x3DF3C0u;
    // 0x3df3c0: 0x14e20011  bne         $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DF3C0u;
    {
        const bool branch_taken_0x3df3c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3df3c0) {
            ctx->pc = 0x3DF408u;
            goto label_3df408;
        }
    }
    ctx->pc = 0x3DF3C8u;
    // 0x3df3c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3df3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df3cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3df3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3df3d0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3DF3D0u;
    {
        const bool branch_taken_0x3df3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3df3d0) {
            ctx->pc = 0x3DF400u;
            goto label_3df400;
        }
    }
    ctx->pc = 0x3DF3D8u;
    // 0x3df3d8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3df3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3df3dc:
    // 0x3df3dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3df3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df3e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3df3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3df3e4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DF3E4u;
    {
        const bool branch_taken_0x3df3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3df3e4) {
            ctx->pc = 0x3DF400u;
            goto label_3df400;
        }
    }
    ctx->pc = 0x3DF3ECu;
    // 0x3df3ec: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3df3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3df3f0:
    // 0x3df3f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3df3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3df3f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3df3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df3f8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DF3F8u;
    {
        const bool branch_taken_0x3df3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3df3f8) {
            ctx->pc = 0x3DF408u;
            goto label_3df408;
        }
    }
    ctx->pc = 0x3DF400u;
label_3df400:
    // 0x3df400: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF400u;
        // 0x3df404: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF408u;
label_3df408:
    // 0x3df408: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF408u;
        // 0x3df40c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF410u;
}
