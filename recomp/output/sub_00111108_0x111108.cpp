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

// Function: sub_00111108
// Address: 0x111108 - 0x111150
void sub_00111108_0x111108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111108_0x111108");
#endif

    switch (ctx->pc) {
        case 0x11112cu: goto label_11112c;
        case 0x11113cu: goto label_11113c;
        default: break;
    }

    ctx->pc = 0x111108u;

    // 0x111108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11110c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11110cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111110: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x111110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x111114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111118: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x111118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x11111c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11111Cu;
    {
        const bool branch_taken_0x11111c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x111120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11111Cu;
        // 0x111120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11111c) {
            ctx->pc = 0x11113Cu;
            goto label_11113c;
        }
    }
    ctx->pc = 0x111124u;
    // 0x111124: 0xc05aa12  jal         func_16A848
    ctx->pc = 0x111124u;
    SET_GPR_U32(ctx, 31, 0x11112Cu);
    ctx->pc = 0x16A848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A848u, 0x111124u, 0x11112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11112Cu;
label_11112c:
    // 0x11112c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11112Cu;
    {
        const bool branch_taken_0x11112c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11112c) {
            ctx->pc = 0x111130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11112Cu;
            // 0x111130: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111140u;
            goto label_111140;
        }
    }
    ctx->pc = 0x111134u;
    // 0x111134: 0xc05aa14  jal         func_16A850
    ctx->pc = 0x111134u;
    SET_GPR_U32(ctx, 31, 0x11113Cu);
    ctx->pc = 0x111138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111134u;
    // 0x111138: 0x8e0400b4  lw          $a0, 0xB4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A850u, 0x111134u, 0x11113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11113Cu;
label_11113c:
    // 0x11113c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11113cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111140:
    // 0x111140: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x111140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x111144: 0x3e00008  jr          $ra
    ctx->pc = 0x111144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111144u;
        // 0x111148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11114Cu;
    // 0x11114c: 0x0  nop
    ctx->pc = 0x11114cu;
    // NOP
    ctx->pc = 0x111150u;
}
