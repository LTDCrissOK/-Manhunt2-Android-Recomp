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

// Function: sub_00312400
// Address: 0x312400 - 0x312490
void sub_00312400_0x312400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312400_0x312400");
#endif

    switch (ctx->pc) {
        case 0x312468u: goto label_312468;
        case 0x31247cu: goto label_31247c;
        default: break;
    }

    ctx->pc = 0x312400u;

    // 0x312400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x312404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x312408: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x312408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31240c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x31240cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x312410: 0x90c20038  lbu         $v0, 0x38($a2)
    ctx->pc = 0x312410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x312414: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x312414u;
    {
        const bool branch_taken_0x312414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312414u;
        // 0x312418: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312414) {
            ctx->pc = 0x312480u;
            goto label_312480;
        }
    }
    ctx->pc = 0x31241Cu;
    // 0x31241c: 0xa0c00038  sb          $zero, 0x38($a2)
    ctx->pc = 0x31241cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x312420: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x312420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x312424: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x312424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x312428: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x312428u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31242c: 0xfa010080  sqc2        $vf1, 0x80($s0)
    ctx->pc = 0x31242cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312430: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x312430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x312434: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x312434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x312438: 0xfa010090  sqc2        $vf1, 0x90($s0)
    ctx->pc = 0x312438u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31243c: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x31243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x312440: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x312440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x312444: 0xfa0100a0  sqc2        $vf1, 0xA0($s0)
    ctx->pc = 0x312444u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312448: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x312448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x31244c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31244cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x312450: 0xfa0100b0  sqc2        $vf1, 0xB0($s0)
    ctx->pc = 0x312450u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312454: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x312454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x312458: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x312458u;
    {
        const bool branch_taken_0x312458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x312458) {
            ctx->pc = 0x31245Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312458u;
            // 0x31245c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31246Cu;
            goto label_31246c;
        }
    }
    ctx->pc = 0x312460u;
    // 0x312460: 0xc0c48e6  jal         func_312398
    ctx->pc = 0x312460u;
    SET_GPR_U32(ctx, 31, 0x312468u);
    ctx->pc = 0x312464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312460u;
    // 0x312464: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312398u, 0x312460u, 0x312468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312468u;
label_312468:
    // 0x312468: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x312468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_31246c:
    // 0x31246c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31246Cu;
    {
        const bool branch_taken_0x31246c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31246c) {
            ctx->pc = 0x312470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31246Cu;
            // 0x312470: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312480u;
            goto label_312480;
        }
    }
    ctx->pc = 0x312474u;
    // 0x312474: 0xc0c48e6  jal         func_312398
    ctx->pc = 0x312474u;
    SET_GPR_U32(ctx, 31, 0x31247Cu);
    ctx->pc = 0x312478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312474u;
    // 0x312478: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312398u, 0x312474u, 0x31247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31247Cu;
label_31247c:
    // 0x31247c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31247cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_312480:
    // 0x312480: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x312480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x312484: 0x3e00008  jr          $ra
    ctx->pc = 0x312484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312484u;
        // 0x312488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31248Cu;
    // 0x31248c: 0x0  nop
    ctx->pc = 0x31248cu;
    // NOP
    ctx->pc = 0x312490u;
}
