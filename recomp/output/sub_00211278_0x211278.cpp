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

// Function: sub_00211278
// Address: 0x211278 - 0x2112b0
void sub_00211278_0x211278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211278_0x211278");
#endif

    switch (ctx->pc) {
        case 0x21128cu: goto label_21128c;
        case 0x21129cu: goto label_21129c;
        default: break;
    }

    ctx->pc = 0x211278u;

    // 0x211278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21127c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211280: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x211280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x211284: 0xc08443c  jal         func_2110F0
    ctx->pc = 0x211284u;
    SET_GPR_U32(ctx, 31, 0x21128Cu);
    ctx->pc = 0x211288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211284u;
    // 0x211288: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2110F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110F0u, 0x211284u, 0x21128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21128Cu;
label_21128c:
    // 0x21128c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21128Cu;
    {
        const bool branch_taken_0x21128c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21128Cu;
        // 0x211290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21128c) {
            ctx->pc = 0x21129Cu;
            goto label_21129c;
        }
    }
    ctx->pc = 0x211294u;
    // 0x211294: 0xc084492  jal         func_211248
    ctx->pc = 0x211294u;
    SET_GPR_U32(ctx, 31, 0x21129Cu);
    ctx->pc = 0x211298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211294u;
    // 0x211298: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211248u, 0x211294u, 0x21129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21129Cu;
label_21129c:
    // 0x21129c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21129cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2112a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2112a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2112a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2112A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2112A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112A4u;
        // 0x2112a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2112A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2112ACu;
    // 0x2112ac: 0x0  nop
    ctx->pc = 0x2112acu;
    // NOP
    ctx->pc = 0x2112b0u;
}
