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

// Function: sub_003D4268
// Address: 0x3d4268 - 0x3d4380
void sub_003D4268_0x3d4268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4268_0x3d4268");
#endif

    switch (ctx->pc) {
        case 0x3d42b0u: goto label_3d42b0;
        case 0x3d4320u: goto label_3d4320;
        case 0x3d434cu: goto label_3d434c;
        default: break;
    }

    ctx->pc = 0x3d4268u;

    // 0x3d4268: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3d4268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d426c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x3d426cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d4270: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4270u;
    {
        const bool branch_taken_0x3d4270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4270) {
            ctx->pc = 0x3D4288u;
            goto label_3d4288;
        }
    }
    ctx->pc = 0x3D4278u;
    // 0x3d4278: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3d4278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d427c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x3d427cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d4280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4280u;
    {
        const bool branch_taken_0x3d4280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4280u;
        // 0x3d4284: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4280) {
            ctx->pc = 0x3D4290u;
            goto label_3d4290;
        }
    }
    ctx->pc = 0x3D4288u;
label_3d4288:
    // 0x3d4288: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4288u;
        // 0x3d428c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4290u;
label_3d4290:
    // 0x3d4290: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D4290u;
    {
        const bool branch_taken_0x3d4290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4290u;
        // 0x3d4294: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4290) {
            ctx->pc = 0x3D42C0u;
            goto label_3d42c0;
        }
    }
    ctx->pc = 0x3D4298u;
    // 0x3d4298: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4298u;
    {
        const bool branch_taken_0x3d4298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4298) {
            ctx->pc = 0x3D429Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4298u;
            // 0x3d429c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D42B0u;
            goto label_3d42b0;
        }
    }
    ctx->pc = 0x3D42A0u;
    // 0x3d42a0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3d42a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d42a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d42a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D42A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D42ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42A8u;
        // 0x3d42ac: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D42A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D42B0u;
label_3d42b0:
    // 0x3d42b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d42b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d42b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d42b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D42B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42B8u;
        // 0x3d42bc: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D42B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D42C0u;
label_3d42c0:
    // 0x3d42c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D42C0u;
    {
        const bool branch_taken_0x3d42c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d42c0) {
            ctx->pc = 0x3D42C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D42C0u;
            // 0x3d42c4: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D42DCu;
            goto label_3d42dc;
        }
    }
    ctx->pc = 0x3D42C8u;
    // 0x3d42c8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3d42c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d42cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d42ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d42d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d42d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D42D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42D4u;
        // 0x3d42d8: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D42D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D42DCu;
label_3d42dc:
    // 0x3d42dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D42DCu;
    {
        const bool branch_taken_0x3d42dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D42E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42DCu;
        // 0x3d42e0: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d42dc) {
            ctx->pc = 0x3D4304u;
            goto label_3d4304;
        }
    }
    ctx->pc = 0x3D42E4u;
    // 0x3d42e4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D42E4u;
    {
        const bool branch_taken_0x3d42e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d42e4) {
            ctx->pc = 0x3D42E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D42E4u;
            // 0x3d42e8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D42F4u;
            goto label_3d42f4;
        }
    }
    ctx->pc = 0x3D42ECu;
    // 0x3d42ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3D42ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42ECu;
        // 0x3d42f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D42ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D42F4u;
label_3d42f4:
    // 0x3d42f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d42f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d42f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d42fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D42FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42FCu;
        // 0x3d4300: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D42FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4304u;
label_3d4304:
    // 0x3d4304: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3D4304u;
    {
        const bool branch_taken_0x3d4304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4304) {
            ctx->pc = 0x3D4308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4304u;
            // 0x3d4308: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D42B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d42b0;
        }
    }
    ctx->pc = 0x3D430Cu;
    // 0x3d430c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x3d430cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d4310: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3d4310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d4314: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4314u;
    {
        const bool branch_taken_0x3d4314 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d4314) {
            ctx->pc = 0x3D4318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4314u;
            // 0x3d4318: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D432Cu;
            goto label_3d432c;
        }
    }
    ctx->pc = 0x3D431Cu;
    // 0x3d431c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4320:
    // 0x3d4320: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d4320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d4324: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4324u;
        // 0x3d4328: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D432Cu;
label_3d432c:
    // 0x3d432c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3d432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d4330: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x3d4330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3d4334: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D4334u;
    {
        const bool branch_taken_0x3d4334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4334) {
            ctx->pc = 0x3D4338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4334u;
            // 0x3d4338: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4320;
        }
    }
    ctx->pc = 0x3D433Cu;
    // 0x3d433c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x3d433cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3d4340: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4340u;
    {
        const bool branch_taken_0x3d4340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4340) {
            ctx->pc = 0x3D4344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4340u;
            // 0x3d4344: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4358u;
            goto label_3d4358;
        }
    }
    ctx->pc = 0x3D4348u;
    // 0x3d4348: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d4348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d434c:
    // 0x3d434c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d434cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4350: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4350u;
        // 0x3d4354: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4358u;
label_3d4358:
    // 0x3d4358: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x3d4358u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3d435c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x3d435cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d4360: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3D4360u;
    {
        const bool branch_taken_0x3d4360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4360) {
            ctx->pc = 0x3D4364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4360u;
            // 0x3d4364: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4320;
        }
    }
    ctx->pc = 0x3D4368u;
    // 0x3d4368: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x3d4368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d436c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3D436Cu;
    {
        const bool branch_taken_0x3d436c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D436Cu;
        // 0x3d4370: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d436c) {
            ctx->pc = 0x3D434Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d434c;
        }
    }
    ctx->pc = 0x3D4374u;
    // 0x3d4374: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4374u;
        // 0x3d4378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D437Cu;
    // 0x3d437c: 0x0  nop
    ctx->pc = 0x3d437cu;
    // NOP
    ctx->pc = 0x3d4380u;
}
