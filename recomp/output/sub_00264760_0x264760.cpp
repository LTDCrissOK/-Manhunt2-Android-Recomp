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

// Function: sub_00264760
// Address: 0x264760 - 0x264820
void sub_00264760_0x264760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264760_0x264760");
#endif

    switch (ctx->pc) {
        case 0x264794u: goto label_264794;
        case 0x2647b0u: goto label_2647b0;
        case 0x2647c0u: goto label_2647c0;
        case 0x2647f0u: goto label_2647f0;
        case 0x264800u: goto label_264800;
        case 0x264808u: goto label_264808;
        case 0x264810u: goto label_264810;
        default: break;
    }

    ctx->pc = 0x264760u;

    // 0x264760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264768: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x264768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26476c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26476cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264770: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x264770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x264774: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x264774u;
    {
        const bool branch_taken_0x264774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264774) {
            ctx->pc = 0x264778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264774u;
            // 0x264778: 0x8e040284  lw          $a0, 0x284($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2647A0u;
            goto label_2647a0;
        }
    }
    ctx->pc = 0x26477Cu;
    // 0x26477c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26477cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x264780: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x264780u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x264784: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x264784u;
    {
        const bool branch_taken_0x264784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x264784) {
            ctx->pc = 0x264788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264784u;
            // 0x264788: 0x8e040284  lw          $a0, 0x284($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2647A0u;
            goto label_2647a0;
        }
    }
    ctx->pc = 0x26478Cu;
    // 0x26478c: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x26478Cu;
    SET_GPR_U32(ctx, 31, 0x264794u);
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x26478Cu, 0x264794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264794u;
label_264794:
    // 0x264794: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x264794u;
    {
        const bool branch_taken_0x264794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264794) {
            ctx->pc = 0x264798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264794u;
            // 0x264798: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264814u;
            goto label_264814;
        }
    }
    ctx->pc = 0x26479Cu;
    // 0x26479c: 0x8e040284  lw          $a0, 0x284($s0)
    ctx->pc = 0x26479cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_2647a0:
    // 0x2647a0: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2647A0u;
    {
        const bool branch_taken_0x2647a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2647a0) {
            ctx->pc = 0x2647A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2647A0u;
            // 0x2647a4: 0x8e04028c  lw          $a0, 0x28C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2647C4u;
            goto label_2647c4;
        }
    }
    ctx->pc = 0x2647A8u;
    // 0x2647a8: 0xc0c313a  jal         func_30C4E8
    ctx->pc = 0x2647A8u;
    SET_GPR_U32(ctx, 31, 0x2647B0u);
    ctx->pc = 0x30C4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C4E8u, 0x2647A8u, 0x2647B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2647B0u;
label_2647b0:
    // 0x2647b0: 0x8e040284  lw          $a0, 0x284($s0)
    ctx->pc = 0x2647b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x2647b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2647b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2647b8: 0xc0c3244  jal         func_30C910
    ctx->pc = 0x2647B8u;
    SET_GPR_U32(ctx, 31, 0x2647C0u);
    ctx->pc = 0x2647BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2647B8u;
    // 0x2647bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C910u, 0x2647B8u, 0x2647C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2647C0u;
label_2647c0:
    // 0x2647c0: 0x8e04028c  lw          $a0, 0x28C($s0)
    ctx->pc = 0x2647c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_2647c4:
    // 0x2647c4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2647C4u;
    {
        const bool branch_taken_0x2647c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2647c4) {
            ctx->pc = 0x264800u;
            goto label_264800;
        }
    }
    ctx->pc = 0x2647CCu;
    // 0x2647cc: 0xc6010294  lwc1        $f1, 0x294($s0)
    ctx->pc = 0x2647ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2647d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2647d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2647d4: 0x0  nop
    ctx->pc = 0x2647d4u;
    // NOP
    // 0x2647d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2647d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2647dc: 0x0  nop
    ctx->pc = 0x2647dcu;
    // NOP
    // 0x2647e0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2647E0u;
    {
        const bool branch_taken_0x2647e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2647e0) {
            ctx->pc = 0x264800u;
            goto label_264800;
        }
    }
    ctx->pc = 0x2647E8u;
    // 0x2647e8: 0xc0c313a  jal         func_30C4E8
    ctx->pc = 0x2647E8u;
    SET_GPR_U32(ctx, 31, 0x2647F0u);
    ctx->pc = 0x30C4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C4E8u, 0x2647E8u, 0x2647F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2647F0u;
label_2647f0:
    // 0x2647f0: 0x8e04028c  lw          $a0, 0x28C($s0)
    ctx->pc = 0x2647f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x2647f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2647f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2647f8: 0xc0c3244  jal         func_30C910
    ctx->pc = 0x2647F8u;
    SET_GPR_U32(ctx, 31, 0x264800u);
    ctx->pc = 0x2647FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2647F8u;
    // 0x2647fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C910u, 0x2647F8u, 0x264800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264800u;
label_264800:
    // 0x264800: 0xc098330  jal         func_260CC0
    ctx->pc = 0x264800u;
    SET_GPR_U32(ctx, 31, 0x264808u);
    ctx->pc = 0x264804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264800u;
    // 0x264804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260CC0u, 0x264800u, 0x264808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264808u;
label_264808:
    // 0x264808: 0xc09730e  jal         func_25CC38
    ctx->pc = 0x264808u;
    SET_GPR_U32(ctx, 31, 0x264810u);
    ctx->pc = 0x26480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264808u;
    // 0x26480c: 0x260402b4  addiu       $a0, $s0, 0x2B4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC38u, 0x264808u, 0x264810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264810u;
label_264810:
    // 0x264810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264814:
    // 0x264814: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x264814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x264818: 0x3e00008  jr          $ra
    ctx->pc = 0x264818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264818u;
        // 0x26481c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264820u;
}
