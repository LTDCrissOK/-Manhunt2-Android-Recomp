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

// Function: sub_00365318
// Address: 0x365318 - 0x365378
void sub_00365318_0x365318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365318_0x365318");
#endif

    switch (ctx->pc) {
        case 0x365340u: goto label_365340;
        case 0x365350u: goto label_365350;
        default: break;
    }

    ctx->pc = 0x365318u;

    // 0x365318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36531c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x365320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x365320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x365324: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x365324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x365328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36532c: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36532Cu;
    {
        const bool branch_taken_0x36532c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x365330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36532Cu;
        // 0x365330: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36532c) {
            ctx->pc = 0x365338u;
            goto label_365338;
        }
    }
    ctx->pc = 0x365334u;
    // 0x365334: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x365334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_365338:
    // 0x365338: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x365338u;
    SET_GPR_U32(ctx, 31, 0x365340u);
    ctx->pc = 0x36533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365338u;
    // 0x36533c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x365338u, 0x365340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365340u;
label_365340:
    // 0x365340: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x365340u;
    {
        const bool branch_taken_0x365340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365340u;
        // 0x365344: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365340) {
            ctx->pc = 0x365354u;
            goto label_365354;
        }
    }
    ctx->pc = 0x365348u;
    // 0x365348: 0xc0c4900  jal         func_312400
    ctx->pc = 0x365348u;
    SET_GPR_U32(ctx, 31, 0x365350u);
    ctx->pc = 0x36534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365348u;
    // 0x36534c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x365348u, 0x365350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365350u;
label_365350:
    // 0x365350: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x365350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_365354:
    // 0x365354: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x365354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x365358: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x365358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x36535c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36535cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x365360: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x365360u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x365364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x365364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x365368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36536c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36536cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365370: 0x3e00008  jr          $ra
    ctx->pc = 0x365370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365370u;
        // 0x365374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365378u;
}
