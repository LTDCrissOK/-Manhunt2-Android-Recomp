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

// Function: sub_001BC3B0
// Address: 0x1bc3b0 - 0x1bc438
void sub_001BC3B0_0x1bc3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC3B0_0x1bc3b0");
#endif

    switch (ctx->pc) {
        case 0x1bc3b0u: goto label_1bc3b0;
        case 0x1bc3b4u: goto label_1bc3b4;
        case 0x1bc3b8u: goto label_1bc3b8;
        case 0x1bc3bcu: goto label_1bc3bc;
        case 0x1bc3c0u: goto label_1bc3c0;
        case 0x1bc3c4u: goto label_1bc3c4;
        case 0x1bc3c8u: goto label_1bc3c8;
        case 0x1bc3ccu: goto label_1bc3cc;
        case 0x1bc3d0u: goto label_1bc3d0;
        case 0x1bc3d4u: goto label_1bc3d4;
        case 0x1bc3d8u: goto label_1bc3d8;
        case 0x1bc3dcu: goto label_1bc3dc;
        case 0x1bc3e0u: goto label_1bc3e0;
        case 0x1bc3e4u: goto label_1bc3e4;
        case 0x1bc3e8u: goto label_1bc3e8;
        case 0x1bc3ecu: goto label_1bc3ec;
        case 0x1bc3f0u: goto label_1bc3f0;
        case 0x1bc3f4u: goto label_1bc3f4;
        case 0x1bc3f8u: goto label_1bc3f8;
        case 0x1bc3fcu: goto label_1bc3fc;
        case 0x1bc400u: goto label_1bc400;
        case 0x1bc404u: goto label_1bc404;
        case 0x1bc408u: goto label_1bc408;
        case 0x1bc40cu: goto label_1bc40c;
        case 0x1bc410u: goto label_1bc410;
        case 0x1bc414u: goto label_1bc414;
        case 0x1bc418u: goto label_1bc418;
        case 0x1bc41cu: goto label_1bc41c;
        case 0x1bc420u: goto label_1bc420;
        case 0x1bc424u: goto label_1bc424;
        case 0x1bc428u: goto label_1bc428;
        case 0x1bc42cu: goto label_1bc42c;
        case 0x1bc430u: goto label_1bc430;
        case 0x1bc434u: goto label_1bc434;
        default: break;
    }

    ctx->pc = 0x1bc3b0u;

label_1bc3b0:
    // 0x1bc3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bc3b4:
    // 0x1bc3b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bc3b8:
    // 0x1bc3b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bc3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1bc3bc:
    // 0x1bc3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc3c0:
    // 0x1bc3c0: 0x7e000300  sq          $zero, 0x300($s0)
    ctx->pc = 0x1bc3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 768), GPR_VEC(ctx, 0));
label_1bc3c4:
    // 0x1bc3c4: 0xc06f10e  jal         func_1BC438
label_1bc3c8:
    if (ctx->pc == 0x1BC3C8u) {
        ctx->pc = 0x1BC3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3C4u;
        // 0x1bc3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC3CCu;
        goto label_1bc3cc;
    }
    ctx->pc = 0x1BC3C4u;
    SET_GPR_U32(ctx, 31, 0x1BC3CCu);
    ctx->pc = 0x1BC3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC3C4u;
    // 0x1bc3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC438u, 0x1BC3C4u, 0x1BC3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3CCu;
label_1bc3cc:
    // 0x1bc3cc: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x1bc3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1bc3d0:
    // 0x1bc3d0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bc3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1bc3d4:
    // 0x1bc3d4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1bc3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1bc3d8:
    // 0x1bc3d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bc3dc:
    if (ctx->pc == 0x1BC3DCu) {
        ctx->pc = 0x1BC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3D8u;
        // 0x1bc3dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC3E0u;
        goto label_1bc3e0;
    }
    ctx->pc = 0x1BC3D8u;
    {
        const bool branch_taken_0x1bc3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3D8u;
        // 0x1bc3dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3d8) {
            ctx->pc = 0x1BC404u;
            goto label_1bc404;
        }
    }
    ctx->pc = 0x1BC3E0u;
label_1bc3e0:
    // 0x1bc3e0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1bc3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1bc3e4:
    // 0x1bc3e4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1bc3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1bc3e8:
    // 0x1bc3e8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1bc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1bc3ec:
    // 0x1bc3ec: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1bc3f0:
    if (ctx->pc == 0x1BC3F0u) {
        ctx->pc = 0x1BC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3ECu;
        // 0x1bc3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC3F4u;
        goto label_1bc3f4;
    }
    ctx->pc = 0x1BC3ECu;
    {
        const bool branch_taken_0x1bc3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc3ec) {
            ctx->pc = 0x1BC3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC3ECu;
            // 0x1bc3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC404u;
            goto label_1bc404;
        }
    }
    ctx->pc = 0x1BC3F4u;
label_1bc3f4:
    // 0x1bc3f4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1bc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1bc3f8:
    // 0x1bc3f8: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1bc3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1bc3fc:
    // 0x1bc3fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1bc400:
    if (ctx->pc == 0x1BC400u) {
        ctx->pc = 0x1BC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3FCu;
        // 0x1bc400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC404u;
        goto label_1bc404;
    }
    ctx->pc = 0x1BC3FCu;
    {
        const bool branch_taken_0x1bc3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3fc) {
            ctx->pc = 0x1BC400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC3FCu;
            // 0x1bc400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC404u;
            goto label_1bc404;
        }
    }
    ctx->pc = 0x1BC404u;
label_1bc404:
    // 0x1bc404: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1bc408:
    if (ctx->pc == 0x1BC408u) {
        ctx->pc = 0x1BC40Cu;
        goto label_1bc40c;
    }
    ctx->pc = 0x1BC404u;
    {
        const bool branch_taken_0x1bc404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc404) {
            ctx->pc = 0x1BC41Cu;
            goto label_1bc41c;
        }
    }
    ctx->pc = 0x1BC40Cu;
label_1bc40c:
    // 0x1bc40c: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x1bc40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1bc410:
    // 0x1bc410: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1bc410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1bc414:
    // 0x1bc414: 0x40f809  jalr        $v0
label_1bc418:
    if (ctx->pc == 0x1BC418u) {
        ctx->pc = 0x1BC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC414u;
        // 0x1bc418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC41Cu;
        goto label_1bc41c;
    }
    ctx->pc = 0x1BC414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC41Cu);
        ctx->pc = 0x1BC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC414u;
        // 0x1bc418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC414u, 0x1BC41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC41Cu;
label_1bc41c:
    // 0x1bc41c: 0xc06f162  jal         func_1BC588
label_1bc420:
    if (ctx->pc == 0x1BC420u) {
        ctx->pc = 0x1BC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC41Cu;
        // 0x1bc420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC424u;
        goto label_1bc424;
    }
    ctx->pc = 0x1BC41Cu;
    SET_GPR_U32(ctx, 31, 0x1BC424u);
    ctx->pc = 0x1BC420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC41Cu;
    // 0x1bc420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC588u, 0x1BC41Cu, 0x1BC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC424u;
label_1bc424:
    // 0x1bc424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc428:
    // 0x1bc428: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bc428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bc42c:
    // 0x1bc42c: 0x3e00008  jr          $ra
label_1bc430:
    if (ctx->pc == 0x1BC430u) {
        ctx->pc = 0x1BC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC42Cu;
        // 0x1bc430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC434u;
        goto label_1bc434;
    }
    ctx->pc = 0x1BC42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC42Cu;
        // 0x1bc430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC434u;
label_1bc434:
    // 0x1bc434: 0x0  nop
    ctx->pc = 0x1bc434u;
    // NOP
    ctx->pc = 0x1bc438u;
}
