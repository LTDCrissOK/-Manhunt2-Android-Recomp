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

// Function: sub_003D43D0
// Address: 0x3d43d0 - 0x3d4488
void sub_003D43D0_0x3d43d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D43D0_0x3d43d0");
#endif

    switch (ctx->pc) {
        case 0x3d4450u: goto label_3d4450;
        case 0x3d447cu: goto label_3d447c;
        default: break;
    }

    ctx->pc = 0x3d43d0u;

    // 0x3d43d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d43d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d43d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d43d8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x3d43d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3d43dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d43dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d43e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3d43e4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D43E4u;
    {
        const bool branch_taken_0x3d43e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D43E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D43E4u;
        // 0x3d43e8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d43e4) {
            ctx->pc = 0x3D43F8u;
            goto label_3d43f8;
        }
    }
    ctx->pc = 0x3D43ECu;
    // 0x3d43ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d43f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3D43F0u;
    {
        const bool branch_taken_0x3d43f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D43F0u;
        // 0x3d43f4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d43f0) {
            ctx->pc = 0x3D4474u;
            goto label_3d4474;
        }
    }
    ctx->pc = 0x3D43F8u;
label_3d43f8:
    // 0x3d43f8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3d43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3d43fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D43FCu;
    {
        const bool branch_taken_0x3d43fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D43FCu;
        // 0x3d4400: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d43fc) {
            ctx->pc = 0x3D4428u;
            goto label_3d4428;
        }
    }
    ctx->pc = 0x3D4404u;
    // 0x3d4404: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d4404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d4408: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4408u;
    {
        const bool branch_taken_0x3d4408 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4408u;
        // 0x3d440c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4408) {
            ctx->pc = 0x3D4420u;
            goto label_3d4420;
        }
    }
    ctx->pc = 0x3D4410u;
    // 0x3d4410: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x3d4410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x3d4414: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3d4414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3d4418: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3D4418u;
    {
        const bool branch_taken_0x3d4418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4418u;
        // 0x3d441c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4418) {
            ctx->pc = 0x3D4480u;
            goto label_3d4480;
        }
    }
    ctx->pc = 0x3D4420u;
label_3d4420:
    // 0x3d4420: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D4420u;
    {
        const bool branch_taken_0x3d4420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4420u;
        // 0x3d4424: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4420) {
            ctx->pc = 0x3D442Cu;
            goto label_3d442c;
        }
    }
    ctx->pc = 0x3D4428u;
label_3d4428:
    // 0x3d4428: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x3d4428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_3d442c:
    // 0x3d442c: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x3d442cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d4430: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d4430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d4434: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x3d4434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x3d4438: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3d4438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3d443c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3D443Cu;
    {
        const bool branch_taken_0x3d443c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D443Cu;
        // 0x3d4440: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d443c) {
            ctx->pc = 0x3D4474u;
            goto label_3d4474;
        }
    }
    ctx->pc = 0x3D4444u;
    // 0x3d4444: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3d4444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d4448: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x3d4448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x3d444c: 0x0  nop
    ctx->pc = 0x3d444cu;
    // NOP
label_3d4450:
    // 0x3d4450: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x3d4450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x3d4454: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d4454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d4458: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3d4458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d445c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x3d445cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d4460: 0x0  nop
    ctx->pc = 0x3d4460u;
    // NOP
    // 0x3d4464: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D4464u;
    {
        const bool branch_taken_0x3d4464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4464) {
            ctx->pc = 0x3D4450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4450;
        }
    }
    ctx->pc = 0x3D446Cu;
    // 0x3d446c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3d446cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3d4470: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x3d4470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_3d4474:
    // 0x3d4474: 0xc0f4e62  jal         func_3D3988
    ctx->pc = 0x3D4474u;
    SET_GPR_U32(ctx, 31, 0x3D447Cu);
    ctx->pc = 0x3D4478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4474u;
    // 0x3d4478: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3988u, 0x3D4474u, 0x3D447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D447Cu;
label_3d447c:
    // 0x3d447c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d447cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4480:
    // 0x3d4480: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4480u;
        // 0x3d4484: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4488u;
}
