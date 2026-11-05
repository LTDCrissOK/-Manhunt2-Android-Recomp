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

// Function: sub_001563C0
// Address: 0x1563c0 - 0x156448
void sub_001563C0_0x1563c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001563C0_0x1563c0");
#endif

    switch (ctx->pc) {
        case 0x1563e0u: goto label_1563e0;
        case 0x1563f0u: goto label_1563f0;
        case 0x1563fcu: goto label_1563fc;
        case 0x15640cu: goto label_15640c;
        default: break;
    }

    ctx->pc = 0x1563c0u;

    // 0x1563c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1563c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1563c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1563c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1563c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1563c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1563cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1563ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1563d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1563d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1563d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1563d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1563d8: 0xc046086  jal         func_118218
    ctx->pc = 0x1563D8u;
    SET_GPR_U32(ctx, 31, 0x1563E0u);
    ctx->pc = 0x1563DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1563D8u;
    // 0x1563dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x1563D8u, 0x1563E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1563E0u;
label_1563e0:
    // 0x1563e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1563e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1563e4: 0xfa210530  sqc2        $vf1, 0x530($s1)
    ctx->pc = 0x1563e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1328), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1563e8: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x1563E8u;
    SET_GPR_U32(ctx, 31, 0x1563F0u);
    ctx->pc = 0x1563ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1563E8u;
    // 0x1563ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x1563E8u, 0x1563F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1563F0u;
label_1563f0:
    // 0x1563f0: 0xae220540  sw          $v0, 0x540($s1)
    ctx->pc = 0x1563f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1344), GPR_U32(ctx, 2));
    // 0x1563f4: 0xc046002  jal         func_118008
    ctx->pc = 0x1563F4u;
    SET_GPR_U32(ctx, 31, 0x1563FCu);
    ctx->pc = 0x1563F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1563F4u;
    // 0x1563f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x1563F4u, 0x1563FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1563FCu;
label_1563fc:
    // 0x1563fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1563FCu;
    {
        const bool branch_taken_0x1563fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563FCu;
        // 0x156400: 0xae220544  sw          $v0, 0x544($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563fc) {
            ctx->pc = 0x156430u;
            goto label_156430;
        }
    }
    ctx->pc = 0x156404u;
    // 0x156404: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x156404u;
    SET_GPR_U32(ctx, 31, 0x15640Cu);
    ctx->pc = 0x156408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156404u;
    // 0x156408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x156404u, 0x15640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15640Cu;
label_15640c:
    // 0x15640c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15640cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x156410: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x156410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156414: 0x0  nop
    ctx->pc = 0x156414u;
    // NOP
    // 0x156418: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x156418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15641c: 0x0  nop
    ctx->pc = 0x15641cu;
    // NOP
    // 0x156420: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x156420u;
    {
        const bool branch_taken_0x156420 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156420) {
            ctx->pc = 0x156424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156420u;
            // 0x156424: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x156428u;
            goto label_156428;
        }
    }
    ctx->pc = 0x156428u;
label_156428:
    // 0x156428: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x156428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x15642c: 0xe6200548  swc1        $f0, 0x548($s1)
    ctx->pc = 0x15642cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1352), bits); }
label_156430:
    // 0x156430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15643c: 0x3e00008  jr          $ra
    ctx->pc = 0x15643Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15643Cu;
        // 0x156440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15643Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156444u;
    // 0x156444: 0x0  nop
    ctx->pc = 0x156444u;
    // NOP
    ctx->pc = 0x156448u;
}
