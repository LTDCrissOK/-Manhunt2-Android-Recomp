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

// Function: sub_0010F2C0
// Address: 0x10f2c0 - 0x10f340
void sub_0010F2C0_0x10f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F2C0_0x10f2c0");
#endif

    switch (ctx->pc) {
        case 0x10f2e8u: goto label_10f2e8;
        case 0x10f300u: goto label_10f300;
        case 0x10f30cu: goto label_10f30c;
        case 0x10f32cu: goto label_10f32c;
        default: break;
    }

    ctx->pc = 0x10f2c0u;

    // 0x10f2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f2c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10f2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f2d4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x10f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10f2d8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x10F2D8u;
    {
        const bool branch_taken_0x10f2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f2d8) {
            ctx->pc = 0x10F2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F2D8u;
            // 0x10f2dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F330u;
            goto label_10f330;
        }
    }
    ctx->pc = 0x10F2E0u;
    // 0x10f2e0: 0xc0449c8  jal         func_112720
    ctx->pc = 0x10F2E0u;
    SET_GPR_U32(ctx, 31, 0x10F2E8u);
    ctx->pc = 0x112720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112720u, 0x10F2E0u, 0x10F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F2E8u;
label_10f2e8:
    // 0x10f2e8: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x10f2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10f2ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10f2ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2f0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10f2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10f2f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2f8: 0xc045612  jal         func_115848
    ctx->pc = 0x10F2F8u;
    SET_GPR_U32(ctx, 31, 0x10F300u);
    ctx->pc = 0x10F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F2F8u;
    // 0x10f2fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x10F2F8u, 0x10F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F300u;
label_10f300:
    // 0x10f300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f304: 0xc045668  jal         func_1159A0
    ctx->pc = 0x10F304u;
    SET_GPR_U32(ctx, 31, 0x10F30Cu);
    ctx->pc = 0x10F308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F304u;
    // 0x10f308: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x10F304u, 0x10F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F30Cu;
label_10f30c:
    // 0x10f30c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10f310: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x10f310u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10f314: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10f314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10f318: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f31c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10f320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f324: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x10F324u;
    SET_GPR_U32(ctx, 31, 0x10F32Cu);
    ctx->pc = 0x10F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F324u;
    // 0x10f328: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x10F324u, 0x10F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F32Cu;
label_10f32c:
    // 0x10f32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f330:
    // 0x10f330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f338: 0x3e00008  jr          $ra
    ctx->pc = 0x10F338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F338u;
        // 0x10f33c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F340u;
}
