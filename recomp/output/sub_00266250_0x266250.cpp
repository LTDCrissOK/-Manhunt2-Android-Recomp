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

// Function: sub_00266250
// Address: 0x266250 - 0x266290
void sub_00266250_0x266250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266250_0x266250");
#endif

    switch (ctx->pc) {
        case 0x266284u: goto label_266284;
        default: break;
    }

    ctx->pc = 0x266250u;

    // 0x266250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26625c: 0xa08202bc  sb          $v0, 0x2BC($a0)
    ctx->pc = 0x26625cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 700), (uint8_t)GPR_U32(ctx, 2));
    // 0x266260: 0x9083028e  lbu         $v1, 0x28E($a0)
    ctx->pc = 0x266260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 654)));
    // 0x266264: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x266264u;
    {
        const bool branch_taken_0x266264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x266268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266264u;
        // 0x266268: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266264) {
            ctx->pc = 0x266284u;
            goto label_266284;
        }
    }
    ctx->pc = 0x26626Cu;
    // 0x26626c: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x26626cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x266270: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x266270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x266274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x266274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x266278: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x266278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26627c: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x26627Cu;
    SET_GPR_U32(ctx, 31, 0x266284u);
    ctx->pc = 0x266280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26627Cu;
    // 0x266280: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x26627Cu, 0x266284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266284u;
label_266284:
    // 0x266284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266288: 0x3e00008  jr          $ra
    ctx->pc = 0x266288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266288u;
        // 0x26628c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266290u;
}
