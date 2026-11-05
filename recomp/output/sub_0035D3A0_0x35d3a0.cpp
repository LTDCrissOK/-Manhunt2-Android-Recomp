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

// Function: sub_0035D3A0
// Address: 0x35d3a0 - 0x35d420
void sub_0035D3A0_0x35d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D3A0_0x35d3a0");
#endif

    switch (ctx->pc) {
        case 0x35d3c8u: goto label_35d3c8;
        case 0x35d3d0u: goto label_35d3d0;
        case 0x35d3e8u: goto label_35d3e8;
        case 0x35d3f4u: goto label_35d3f4;
        case 0x35d400u: goto label_35d400;
        default: break;
    }

    ctx->pc = 0x35d3a0u;

    // 0x35d3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35d3a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35d3a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35d3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35d3ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35d3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x35d3b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35d3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3b8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35d3bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35d3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3c0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x35D3C0u;
    SET_GPR_U32(ctx, 31, 0x35D3C8u);
    ctx->pc = 0x35D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3C0u;
    // 0x35d3c4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x35D3C0u, 0x35D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3C8u;
label_35d3c8:
    // 0x35d3c8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x35D3C8u;
    SET_GPR_U32(ctx, 31, 0x35D3D0u);
    ctx->pc = 0x35D3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3C8u;
    // 0x35d3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x35D3C8u, 0x35D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3D0u;
label_35d3d0:
    // 0x35d3d0: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x35d3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35d3d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35d3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3d8: 0x86470004  lh          $a3, 0x4($s2)
    ctx->pc = 0x35d3d8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x35d3dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35d3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3e0: 0xc0d747a  jal         func_35D1E8
    ctx->pc = 0x35D3E0u;
    SET_GPR_U32(ctx, 31, 0x35D3E8u);
    ctx->pc = 0x35D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3E0u;
    // 0x35d3e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1E8u, 0x35D3E0u, 0x35D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3E8u;
label_35d3e8:
    // 0x35d3e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35d3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3ec: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x35D3ECu;
    SET_GPR_U32(ctx, 31, 0x35D3F4u);
    ctx->pc = 0x35D3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3ECu;
    // 0x35d3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x35D3ECu, 0x35D3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3F4u;
label_35d3f4:
    // 0x35d3f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35d3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3f8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x35D3F8u;
    SET_GPR_U32(ctx, 31, 0x35D400u);
    ctx->pc = 0x35D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3F8u;
    // 0x35d3fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x35D3F8u, 0x35D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D400u;
label_35d400:
    // 0x35d400: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35d400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d404: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35d404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d408: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35d408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d40c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35d40cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d410: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35d410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35d414: 0x3e00008  jr          $ra
    ctx->pc = 0x35D414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D414u;
        // 0x35d418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D41Cu;
    // 0x35d41c: 0x0  nop
    ctx->pc = 0x35d41cu;
    // NOP
    ctx->pc = 0x35d420u;
}
