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

// Function: sub_00131728
// Address: 0x131728 - 0x131788
void sub_00131728_0x131728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131728_0x131728");
#endif

    switch (ctx->pc) {
        case 0x131748u: goto label_131748;
        case 0x131758u: goto label_131758;
        case 0x131768u: goto label_131768;
        case 0x131778u: goto label_131778;
        default: break;
    }

    ctx->pc = 0x131728u;

    // 0x131728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13172c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13172cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131730: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x131730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131734: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x131734u;
    {
        const bool branch_taken_0x131734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x131738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131734u;
        // 0x131738: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131734) {
            ctx->pc = 0x131778u;
            goto label_131778;
        }
    }
    ctx->pc = 0x13173Cu;
    // 0x13173c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13173cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x131740: 0xc04785a  jal         func_11E168
    ctx->pc = 0x131740u;
    SET_GPR_U32(ctx, 31, 0x131748u);
    ctx->pc = 0x131744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131740u;
    // 0x131744: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x131740u, 0x131748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131748u;
label_131748:
    // 0x131748: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x131748u;
    {
        const bool branch_taken_0x131748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131748) {
            ctx->pc = 0x13174Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131748u;
            // 0x13174c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13177Cu;
            goto label_13177c;
        }
    }
    ctx->pc = 0x131750u;
    // 0x131750: 0xc0443da  jal         func_110F68
    ctx->pc = 0x131750u;
    SET_GPR_U32(ctx, 31, 0x131758u);
    ctx->pc = 0x131754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131750u;
    // 0x131754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F68u, 0x131750u, 0x131758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131758u;
label_131758:
    // 0x131758: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131758u;
    {
        const bool branch_taken_0x131758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131758) {
            ctx->pc = 0x131770u;
            goto label_131770;
        }
    }
    ctx->pc = 0x131760u;
    // 0x131760: 0xc0619d0  jal         func_186740
    ctx->pc = 0x131760u;
    SET_GPR_U32(ctx, 31, 0x131768u);
    ctx->pc = 0x131764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131760u;
    // 0x131764: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186740u, 0x131760u, 0x131768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131768u;
label_131768:
    // 0x131768: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131768u;
    {
        const bool branch_taken_0x131768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131768u;
        // 0x13176c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131768) {
            ctx->pc = 0x13177Cu;
            goto label_13177c;
        }
    }
    ctx->pc = 0x131770u;
label_131770:
    // 0x131770: 0xc0619b2  jal         func_1866C8
    ctx->pc = 0x131770u;
    SET_GPR_U32(ctx, 31, 0x131778u);
    ctx->pc = 0x131774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131770u;
    // 0x131774: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1866C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1866C8u, 0x131770u, 0x131778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131778u;
label_131778:
    // 0x131778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13177c:
    // 0x13177c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13177cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131780: 0x3e00008  jr          $ra
    ctx->pc = 0x131780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131780u;
        // 0x131784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131788u;
}
