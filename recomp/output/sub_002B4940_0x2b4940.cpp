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

// Function: sub_002B4940
// Address: 0x2b4940 - 0x2b4a00
void sub_002B4940_0x2b4940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4940_0x2b4940");
#endif

    switch (ctx->pc) {
        case 0x2b4968u: goto label_2b4968;
        case 0x2b4988u: goto label_2b4988;
        case 0x2b49a0u: goto label_2b49a0;
        case 0x2b49b0u: goto label_2b49b0;
        case 0x2b49c8u: goto label_2b49c8;
        default: break;
    }

    ctx->pc = 0x2b4940u;

    // 0x2b4940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4944: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b4944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b4948: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b4948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b494c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b494cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b4950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4954: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b4954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b4958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b495c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b4960: 0xc0ad114  jal         func_2B4450
    ctx->pc = 0x2B4960u;
    SET_GPR_U32(ctx, 31, 0x2B4968u);
    ctx->pc = 0x2B4964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4960u;
    // 0x2b4964: 0x24060203  addiu       $a2, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4450u, 0x2B4960u, 0x2B4968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4968u;
label_2b4968:
    // 0x2b4968: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b4968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b496c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2b496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b4970: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B4970u;
    {
        const bool branch_taken_0x2b4970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4970u;
        // 0x2b4974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4970) {
            ctx->pc = 0x2B49D0u;
            goto label_2b49d0;
        }
    }
    ctx->pc = 0x2B4978u;
    // 0x2b4978: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2B4978u;
    {
        const bool branch_taken_0x2b4978 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4978) {
            ctx->pc = 0x2B497Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4978u;
            // 0x2b497c: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B49B4u;
            goto label_2b49b4;
        }
    }
    ctx->pc = 0x2B4980u;
    // 0x2b4980: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2B4980u;
    SET_GPR_U32(ctx, 31, 0x2B4988u);
    ctx->pc = 0x2B4984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4980u;
    // 0x2b4984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2B4980u, 0x2B4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4988u;
label_2b4988:
    // 0x2b4988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b498c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b498cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b4990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4994: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4998: 0xc0ad184  jal         func_2B4610
    ctx->pc = 0x2B4998u;
    SET_GPR_U32(ctx, 31, 0x2B49A0u);
    ctx->pc = 0x2B499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4998u;
    // 0x2b499c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4610u, 0x2B4998u, 0x2B49A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B49A0u;
label_2b49a0:
    // 0x2b49a0: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B49A0u;
    {
        const bool branch_taken_0x2b49a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b49a0) {
            ctx->pc = 0x2B49A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B49A0u;
            // 0x2b49a4: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B49B4u;
            goto label_2b49b4;
        }
    }
    ctx->pc = 0x2B49A8u;
    // 0x2b49a8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2B49A8u;
    SET_GPR_U32(ctx, 31, 0x2B49B0u);
    ctx->pc = 0x2B49ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B49A8u;
    // 0x2b49ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2B49A8u, 0x2B49B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B49B0u;
label_2b49b0:
    // 0x2b49b0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2b49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2b49b4:
    // 0x2b49b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B49B4u;
    {
        const bool branch_taken_0x2b49b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b49b4) {
            ctx->pc = 0x2B49B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B49B4u;
            // 0x2b49b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B49D0u;
            goto label_2b49d0;
        }
    }
    ctx->pc = 0x2B49BCu;
    // 0x2b49bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b49bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49c0: 0xc0ad164  jal         func_2B4590
    ctx->pc = 0x2B49C0u;
    SET_GPR_U32(ctx, 31, 0x2B49C8u);
    ctx->pc = 0x2B49C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B49C0u;
    // 0x2b49c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4590u, 0x2B49C0u, 0x2B49C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B49C8u;
label_2b49c8:
    // 0x2b49c8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2b49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b49cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b49ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b49d0:
    // 0x2b49d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b49d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b49d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b49d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b49d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b49d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b49dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b49dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b49e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b49e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b49e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B49E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49E4u;
        // 0x2b49e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B49E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B49ECu;
    // 0x2b49ec: 0x0  nop
    ctx->pc = 0x2b49ecu;
    // NOP
    // 0x2b49f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2b49f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b49f4: 0x0  nop
    ctx->pc = 0x2b49f4u;
    // NOP
    // 0x2b49f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2b49f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b49fc: 0x0  nop
    ctx->pc = 0x2b49fcu;
    // NOP
    ctx->pc = 0x2b4a00u;
}
