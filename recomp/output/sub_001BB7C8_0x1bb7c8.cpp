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

// Function: sub_001BB7C8
// Address: 0x1bb7c8 - 0x1bb8c0
void sub_001BB7C8_0x1bb7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB7C8_0x1bb7c8");
#endif

    switch (ctx->pc) {
        case 0x1bb84cu: goto label_1bb84c;
        default: break;
    }

    ctx->pc = 0x1bb7c8u;

    // 0x1bb7c8: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x1bb7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb7cc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1bb7ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb7d0: 0x0  nop
    ctx->pc = 0x1bb7d0u;
    // NOP
    // 0x1bb7d4: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1bb7d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb7d8: 0x0  nop
    ctx->pc = 0x1bb7d8u;
    // NOP
    // 0x1bb7dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB7DCu;
    {
        const bool branch_taken_0x1bb7dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7DCu;
        // 0x1bb7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7dc) {
            ctx->pc = 0x1BB7E8u;
            goto label_1bb7e8;
        }
    }
    ctx->pc = 0x1BB7E4u;
    // 0x1bb7e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb7e8:
    // 0x1bb7e8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BB7E8u;
    {
        const bool branch_taken_0x1bb7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7E8u;
        // 0x1bb7ec: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7e8) {
            ctx->pc = 0x1BB84Cu;
            goto label_1bb84c;
        }
    }
    ctx->pc = 0x1BB7F0u;
    // 0x1bb7f0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1bb7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1bb7f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb7f8: 0x0  nop
    ctx->pc = 0x1bb7f8u;
    // NOP
    // 0x1bb7fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bb7fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb800: 0x0  nop
    ctx->pc = 0x1bb800u;
    // NOP
    // 0x1bb804: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB804u;
    {
        const bool branch_taken_0x1bb804 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB804u;
        // 0x1bb808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb804) {
            ctx->pc = 0x1BB810u;
            goto label_1bb810;
        }
    }
    ctx->pc = 0x1BB80Cu;
    // 0x1bb80c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb810:
    // 0x1bb810: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB810u;
    {
        const bool branch_taken_0x1bb810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb810) {
            ctx->pc = 0x1BB840u;
            goto label_1bb840;
        }
    }
    ctx->pc = 0x1BB818u;
    // 0x1bb818: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bb818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bb81c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb820: 0x0  nop
    ctx->pc = 0x1bb820u;
    // NOP
    // 0x1bb824: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bb824u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb828: 0x0  nop
    ctx->pc = 0x1bb828u;
    // NOP
    // 0x1bb82c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB82Cu;
    {
        const bool branch_taken_0x1bb82c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB82Cu;
        // 0x1bb830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb82c) {
            ctx->pc = 0x1BB838u;
            goto label_1bb838;
        }
    }
    ctx->pc = 0x1BB834u;
    // 0x1bb834: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb838:
    // 0x1bb838: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB838u;
    {
        const bool branch_taken_0x1bb838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb838) {
            ctx->pc = 0x1BB854u;
            goto label_1bb854;
        }
    }
    ctx->pc = 0x1BB840u;
label_1bb840:
    // 0x1bb840: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1bb840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1bb844: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bb844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bb848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bb84c:
    // 0x1bb84c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB854u;
label_1bb854:
    // 0x1bb854: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1bb854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1bb858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb85c: 0x0  nop
    ctx->pc = 0x1bb85cu;
    // NOP
    // 0x1bb860: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bb860u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb864: 0x0  nop
    ctx->pc = 0x1bb864u;
    // NOP
    // 0x1bb868: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB868u;
    {
        const bool branch_taken_0x1bb868 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB868u;
        // 0x1bb86c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb868) {
            ctx->pc = 0x1BB874u;
            goto label_1bb874;
        }
    }
    ctx->pc = 0x1BB870u;
    // 0x1bb870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb874:
    // 0x1bb874: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB874u;
    {
        const bool branch_taken_0x1bb874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb874) {
            ctx->pc = 0x1BB88Cu;
            goto label_1bb88c;
        }
    }
    ctx->pc = 0x1BB87Cu;
    // 0x1bb87c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bb87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb884: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB88Cu;
label_1bb88c:
    // 0x1bb88c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bb88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb890: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb894: 0x0  nop
    ctx->pc = 0x1bb894u;
    // NOP
    // 0x1bb898: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bb898u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb89c: 0x0  nop
    ctx->pc = 0x1bb89cu;
    // NOP
    // 0x1bb8a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB8A0u;
    {
        const bool branch_taken_0x1bb8a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8A0u;
        // 0x1bb8a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8a0) {
            ctx->pc = 0x1BB8ACu;
            goto label_1bb8ac;
        }
    }
    ctx->pc = 0x1BB8A8u;
    // 0x1bb8a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb8ac:
    // 0x1bb8ac: 0x5040ffe7  beql        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1BB8ACu;
    {
        const bool branch_taken_0x1bb8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb8ac) {
            ctx->pc = 0x1BB8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB8ACu;
            // 0x1bb8b0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB84Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb84c;
        }
    }
    ctx->pc = 0x1BB8B4u;
    // 0x1bb8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB8BCu;
    // 0x1bb8bc: 0x0  nop
    ctx->pc = 0x1bb8bcu;
    // NOP
    ctx->pc = 0x1bb8c0u;
}
