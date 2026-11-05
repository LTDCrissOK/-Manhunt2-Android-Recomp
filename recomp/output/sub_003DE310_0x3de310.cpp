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

// Function: sub_003DE310
// Address: 0x3de310 - 0x3de3e0
void sub_003DE310_0x3de310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE310_0x3de310");
#endif

    switch (ctx->pc) {
        case 0x3de328u: goto label_3de328;
        default: break;
    }

    ctx->pc = 0x3de310u;

    // 0x3de310: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x3de310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3de314: 0x23903  sra         $a3, $v0, 4
    ctx->pc = 0x3de314u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3de318: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x3DE318u;
    {
        const bool branch_taken_0x3de318 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3DE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE318u;
        // 0x3de31c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de318) {
            ctx->pc = 0x3DE374u;
            goto label_3de374;
        }
    }
    ctx->pc = 0x3DE320u;
    // 0x3de320: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3de320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3de324: 0x0  nop
    ctx->pc = 0x3de324u;
    // NOP
label_3de328:
    // 0x3de328: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3de328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de32c: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3DE32Cu;
    {
        const bool branch_taken_0x3de32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3de32c) {
            ctx->pc = 0x3DE3D0u;
            goto label_3de3d0;
        }
    }
    ctx->pc = 0x3DE334u;
    // 0x3de334: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3de334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3de338: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3de338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de33c: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3DE33Cu;
    {
        const bool branch_taken_0x3de33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3de33c) {
            ctx->pc = 0x3DE3D0u;
            goto label_3de3d0;
        }
    }
    ctx->pc = 0x3DE344u;
    // 0x3de344: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3de344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3de348: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3de348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de34c: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3DE34Cu;
    {
        const bool branch_taken_0x3de34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3de34c) {
            ctx->pc = 0x3DE3D0u;
            goto label_3de3d0;
        }
    }
    ctx->pc = 0x3DE354u;
    // 0x3de354: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3de354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3de358: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3de358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de35c: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DE35Cu;
    {
        const bool branch_taken_0x3de35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE35Cu;
        // 0x3de360: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de35c) {
            ctx->pc = 0x3DE3D0u;
            goto label_3de3d0;
        }
    }
    ctx->pc = 0x3DE364u;
    // 0x3de364: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3DE364u;
    {
        const bool branch_taken_0x3de364 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x3DE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE364u;
        // 0x3de368: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de364) {
            ctx->pc = 0x3DE328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de328;
        }
    }
    ctx->pc = 0x3DE36Cu;
    // 0x3de36c: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x3de36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3de370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3de370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3de374:
    // 0x3de374: 0x23883  sra         $a3, $v0, 2
    ctx->pc = 0x3de374u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3de378: 0x10e30011  beq         $a3, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DE378u;
    {
        const bool branch_taken_0x3de378 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE378u;
        // 0x3de37c: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de378) {
            ctx->pc = 0x3DE3C0u;
            goto label_3de3c0;
        }
    }
    ctx->pc = 0x3DE380u;
    // 0x3de380: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3DE380u;
    {
        const bool branch_taken_0x3de380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE380u;
        // 0x3de384: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de380) {
            ctx->pc = 0x3DE3D8u;
            goto label_3de3d8;
        }
    }
    ctx->pc = 0x3DE388u;
    // 0x3de388: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE388u;
    {
        const bool branch_taken_0x3de388 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE388u;
        // 0x3de38c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de388) {
            ctx->pc = 0x3DE3ACu;
            goto label_3de3ac;
        }
    }
    ctx->pc = 0x3DE390u;
    // 0x3de390: 0x14e20011  bne         $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DE390u;
    {
        const bool branch_taken_0x3de390 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de390) {
            ctx->pc = 0x3DE3D8u;
            goto label_3de3d8;
        }
    }
    ctx->pc = 0x3DE398u;
    // 0x3de398: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3de398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de39c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3de39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3de3a0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3DE3A0u;
    {
        const bool branch_taken_0x3de3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3de3a0) {
            ctx->pc = 0x3DE3D0u;
            goto label_3de3d0;
        }
    }
    ctx->pc = 0x3DE3A8u;
    // 0x3de3a8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3de3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3de3ac:
    // 0x3de3ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3de3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de3b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3de3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3de3b4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DE3B4u;
    {
        const bool branch_taken_0x3de3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3de3b4) {
            ctx->pc = 0x3DE3D0u;
            goto label_3de3d0;
        }
    }
    ctx->pc = 0x3DE3BCu;
    // 0x3de3bc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3de3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3de3c0:
    // 0x3de3c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3de3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3de3c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3de3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de3c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DE3C8u;
    {
        const bool branch_taken_0x3de3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3de3c8) {
            ctx->pc = 0x3DE3D8u;
            goto label_3de3d8;
        }
    }
    ctx->pc = 0x3DE3D0u;
label_3de3d0:
    // 0x3de3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3D0u;
        // 0x3de3d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE3D8u;
label_3de3d8:
    // 0x3de3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3D8u;
        // 0x3de3dc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE3E0u;
}
