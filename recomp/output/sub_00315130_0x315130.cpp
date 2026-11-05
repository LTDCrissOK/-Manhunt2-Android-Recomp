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

// Function: sub_00315130
// Address: 0x315130 - 0x315178
void sub_00315130_0x315130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315130_0x315130");
#endif

    switch (ctx->pc) {
        case 0x31515cu: goto label_31515c;
        default: break;
    }

    ctx->pc = 0x315130u;

    // 0x315130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x315130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x315134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x315134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x315138: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x315138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31513c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31513cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315140: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x315140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x315144: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x315144u;
    {
        const bool branch_taken_0x315144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315144) {
            ctx->pc = 0x315148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315144u;
            // 0x315148: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31516Cu;
            goto label_31516c;
        }
    }
    ctx->pc = 0x31514Cu;
    // 0x31514c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315150: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x315150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x315154: 0xc0c7c38  jal         func_31F0E0
    ctx->pc = 0x315154u;
    SET_GPR_U32(ctx, 31, 0x31515Cu);
    ctx->pc = 0x315158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315154u;
    // 0x315158: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F0E0u, 0x315154u, 0x31515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31515Cu;
label_31515c:
    // 0x31515c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x31515Cu;
    {
        const bool branch_taken_0x31515c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31515c) {
            ctx->pc = 0x315160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31515Cu;
            // 0x315160: 0xa2000004  sb          $zero, 0x4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315168u;
            goto label_315168;
        }
    }
    ctx->pc = 0x315164u;
    // 0x315164: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x315164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_315168:
    // 0x315168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x315168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31516c:
    // 0x31516c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31516cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x315170: 0x3e00008  jr          $ra
    ctx->pc = 0x315170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315170u;
        // 0x315174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315178u;
}
