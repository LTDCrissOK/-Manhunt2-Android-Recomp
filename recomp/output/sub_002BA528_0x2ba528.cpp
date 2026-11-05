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

// Function: sub_002BA528
// Address: 0x2ba528 - 0x2ba568
void sub_002BA528_0x2ba528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA528_0x2ba528");
#endif

    switch (ctx->pc) {
        case 0x2ba54cu: goto label_2ba54c;
        default: break;
    }

    ctx->pc = 0x2ba528u;

    // 0x2ba528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ba52c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ba52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ba530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ba530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ba534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba538: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ba538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba53c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA53Cu;
    {
        const bool branch_taken_0x2ba53c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba53c) {
            ctx->pc = 0x2BA540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA53Cu;
            // 0x2ba540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA558u;
            goto label_2ba558;
        }
    }
    ctx->pc = 0x2BA544u;
    // 0x2ba544: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2BA544u;
    SET_GPR_U32(ctx, 31, 0x2BA54Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2BA544u, 0x2BA54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA54Cu;
label_2ba54c:
    // 0x2ba54c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ba54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ba550: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ba550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2ba554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ba554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba558:
    // 0x2ba558: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ba558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba55c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA55Cu;
        // 0x2ba560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA564u;
    // 0x2ba564: 0x0  nop
    ctx->pc = 0x2ba564u;
    // NOP
    ctx->pc = 0x2ba568u;
}
