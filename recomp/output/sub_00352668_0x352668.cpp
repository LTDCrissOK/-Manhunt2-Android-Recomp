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

// Function: sub_00352668
// Address: 0x352668 - 0x3526d8
void sub_00352668_0x352668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352668_0x352668");
#endif

    switch (ctx->pc) {
        case 0x352668u: goto label_352668;
        case 0x35266cu: goto label_35266c;
        case 0x352670u: goto label_352670;
        case 0x352674u: goto label_352674;
        case 0x352678u: goto label_352678;
        case 0x35267cu: goto label_35267c;
        case 0x352680u: goto label_352680;
        case 0x352684u: goto label_352684;
        case 0x352688u: goto label_352688;
        case 0x35268cu: goto label_35268c;
        case 0x352690u: goto label_352690;
        case 0x352694u: goto label_352694;
        case 0x352698u: goto label_352698;
        case 0x35269cu: goto label_35269c;
        case 0x3526a0u: goto label_3526a0;
        case 0x3526a4u: goto label_3526a4;
        case 0x3526a8u: goto label_3526a8;
        case 0x3526acu: goto label_3526ac;
        case 0x3526b0u: goto label_3526b0;
        case 0x3526b4u: goto label_3526b4;
        case 0x3526b8u: goto label_3526b8;
        case 0x3526bcu: goto label_3526bc;
        case 0x3526c0u: goto label_3526c0;
        case 0x3526c4u: goto label_3526c4;
        case 0x3526c8u: goto label_3526c8;
        case 0x3526ccu: goto label_3526cc;
        case 0x3526d0u: goto label_3526d0;
        case 0x3526d4u: goto label_3526d4;
        default: break;
    }

    ctx->pc = 0x352668u;

label_352668:
    // 0x352668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35266c:
    // 0x35266c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35266cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_352670:
    // 0x352670: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x352670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_352674:
    // 0x352674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x352674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_352678:
    // 0x352678: 0xc0d49b6  jal         func_3526D8
label_35267c:
    if (ctx->pc == 0x35267Cu) {
        ctx->pc = 0x35267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352678u;
        // 0x35267c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352680u;
        goto label_352680;
    }
    ctx->pc = 0x352678u;
    SET_GPR_U32(ctx, 31, 0x352680u);
    ctx->pc = 0x35267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352678u;
    // 0x35267c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3526D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3526D8u, 0x352678u, 0x352680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352680u;
label_352680:
    // 0x352680: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x352680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352684:
    // 0x352684: 0xc0d15ae  jal         func_3456B8
label_352688:
    if (ctx->pc == 0x352688u) {
        ctx->pc = 0x352688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352684u;
        // 0x352688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35268Cu;
        goto label_35268c;
    }
    ctx->pc = 0x352684u;
    SET_GPR_U32(ctx, 31, 0x35268Cu);
    ctx->pc = 0x352688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352684u;
    // 0x352688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3456B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3456B8u, 0x352684u, 0x35268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35268Cu;
label_35268c:
    // 0x35268c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x35268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_352690:
    // 0x352690: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_352694:
    if (ctx->pc == 0x352694u) {
        ctx->pc = 0x352694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352690u;
        // 0x352694: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352698u;
        goto label_352698;
    }
    ctx->pc = 0x352690u;
    {
        const bool branch_taken_0x352690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352690) {
            ctx->pc = 0x352694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352690u;
            // 0x352694: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3526C8u;
            goto label_3526c8;
        }
    }
    ctx->pc = 0x352698u;
label_352698:
    // 0x352698: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x352698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_35269c:
    // 0x35269c: 0x0  nop
    ctx->pc = 0x35269cu;
    // NOP
label_3526a0:
    // 0x3526a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3526a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3526a4:
    // 0x3526a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3526a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3526a8:
    // 0x3526a8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x3526a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3526ac:
    // 0x3526ac: 0x60f809  jalr        $v1
label_3526b0:
    if (ctx->pc == 0x3526B0u) {
        ctx->pc = 0x3526B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526ACu;
        // 0x3526b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3526B4u;
        goto label_3526b4;
    }
    ctx->pc = 0x3526ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3526B4u);
        ctx->pc = 0x3526B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526ACu;
        // 0x3526b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3526ACu, 0x3526B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3526B4u;
label_3526b4:
    // 0x3526b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3526b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3526b8:
    // 0x3526b8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3526b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3526bc:
    // 0x3526bc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_3526c0:
    if (ctx->pc == 0x3526C0u) {
        ctx->pc = 0x3526C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526BCu;
        // 0x3526c0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3526C4u;
        goto label_3526c4;
    }
    ctx->pc = 0x3526BCu;
    {
        const bool branch_taken_0x3526bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3526bc) {
            ctx->pc = 0x3526C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3526BCu;
            // 0x3526c0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3526A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3526a0;
        }
    }
    ctx->pc = 0x3526C4u;
label_3526c4:
    // 0x3526c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3526c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3526c8:
    // 0x3526c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3526c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3526cc:
    // 0x3526cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3526ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3526d0:
    // 0x3526d0: 0x3e00008  jr          $ra
label_3526d4:
    if (ctx->pc == 0x3526D4u) {
        ctx->pc = 0x3526D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526D0u;
        // 0x3526d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3526D8u;
        goto label_fallthrough_0x3526d0;
    }
    ctx->pc = 0x3526D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3526D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526D0u;
        // 0x3526d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3526D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3526d0:
    ctx->pc = 0x3526D8u;
}
