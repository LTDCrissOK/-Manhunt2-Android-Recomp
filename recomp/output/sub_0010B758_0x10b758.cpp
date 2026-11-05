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

// Function: sub_0010B758
// Address: 0x10b758 - 0x10b7b8
void sub_0010B758_0x10b758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B758_0x10b758");
#endif

    switch (ctx->pc) {
        case 0x10b77cu: goto label_10b77c;
        case 0x10b790u: goto label_10b790;
        case 0x10b7a4u: goto label_10b7a4;
        default: break;
    }

    ctx->pc = 0x10b758u;

    // 0x10b758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b75c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10b760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b764: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x10b764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x10b768: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10b768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b76c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b770: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b774: 0xc04785a  jal         func_11E168
    ctx->pc = 0x10B774u;
    SET_GPR_U32(ctx, 31, 0x10B77Cu);
    ctx->pc = 0x10B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B774u;
    // 0x10b778: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x10B774u, 0x10B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B77Cu;
label_10b77c:
    // 0x10b77c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B77Cu;
    {
        const bool branch_taken_0x10b77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B77Cu;
        // 0x10b780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b77c) {
            ctx->pc = 0x10B798u;
            goto label_10b798;
        }
    }
    ctx->pc = 0x10B784u;
    // 0x10b784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b788: 0xc0444d2  jal         func_111348
    ctx->pc = 0x10B788u;
    SET_GPR_U32(ctx, 31, 0x10B790u);
    ctx->pc = 0x10B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B788u;
    // 0x10b78c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111348u, 0x10B788u, 0x10B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B790u;
label_10b790:
    // 0x10b790: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10B790u;
    {
        const bool branch_taken_0x10b790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B790u;
        // 0x10b794: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b790) {
            ctx->pc = 0x10B7A8u;
            goto label_10b7a8;
        }
    }
    ctx->pc = 0x10B798u;
label_10b798:
    // 0x10b798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b79c: 0xc094f8c  jal         func_253E30
    ctx->pc = 0x10B79Cu;
    SET_GPR_U32(ctx, 31, 0x10B7A4u);
    ctx->pc = 0x10B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B79Cu;
    // 0x10b7a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E30u, 0x10B79Cu, 0x10B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7A4u;
label_10b7a4:
    // 0x10b7a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b7a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10b7a8:
    // 0x10b7a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b7a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b7ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x10B7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7B0u;
        // 0x10b7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B7B8u;
}
