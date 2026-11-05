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

// Function: sub_00169738
// Address: 0x169738 - 0x169788
void sub_00169738_0x169738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169738_0x169738");
#endif

    switch (ctx->pc) {
        case 0x169760u: goto label_169760;
        case 0x169774u: goto label_169774;
        default: break;
    }

    ctx->pc = 0x169738u;

    // 0x169738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16973c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16973cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169740: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16974c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x169750: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169750u;
    {
        const bool branch_taken_0x169750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169750u;
        // 0x169754: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169750) {
            ctx->pc = 0x169760u;
            goto label_169760;
        }
    }
    ctx->pc = 0x169758u;
    // 0x169758: 0xc05a5ee  jal         func_1697B8
    ctx->pc = 0x169758u;
    SET_GPR_U32(ctx, 31, 0x169760u);
    ctx->pc = 0x1697B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697B8u, 0x169758u, 0x169760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169760u;
label_169760:
    // 0x169760: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x169760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x169764: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x169764u;
    {
        const bool branch_taken_0x169764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169764) {
            ctx->pc = 0x169768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169764u;
            // 0x169768: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169778u;
            goto label_169778;
        }
    }
    ctx->pc = 0x16976Cu;
    // 0x16976c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x16976Cu;
    SET_GPR_U32(ctx, 31, 0x169774u);
    ctx->pc = 0x169770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16976Cu;
    // 0x169770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x16976Cu, 0x169774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169774u;
label_169774:
    // 0x169774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169778:
    // 0x169778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16977c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16977cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169780: 0x3e00008  jr          $ra
    ctx->pc = 0x169780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169780u;
        // 0x169784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169788u;
}
