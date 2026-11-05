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

// Function: sub_00394458
// Address: 0x394458 - 0x3944a8
void sub_00394458_0x394458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394458_0x394458");
#endif

    switch (ctx->pc) {
        case 0x394474u: goto label_394474;
        default: break;
    }

    ctx->pc = 0x394458u;

    // 0x394458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x394458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39445c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x394460: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x394460u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x394464: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x394464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x394468: 0x2610ea78  addiu       $s0, $s0, -0x1588
    ctx->pc = 0x394468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961784));
    // 0x39446c: 0xc0e53da  jal         func_394F68
    ctx->pc = 0x39446Cu;
    SET_GPR_U32(ctx, 31, 0x394474u);
    ctx->pc = 0x394470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39446Cu;
    // 0x394470: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F68u, 0x39446Cu, 0x394474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394474u;
label_394474:
    // 0x394474: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x394474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x394478: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x394478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39447c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x394480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x394480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394484: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x394484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x394488: 0xac40ea74  sw          $zero, -0x158C($v0)
    ctx->pc = 0x394488u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FEA74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA74u, _value); } while (0);
    // 0x39448c: 0xac60ea8c  sw          $zero, -0x1574($v1)
    ctx->pc = 0x39448cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FEA8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA8Cu, _value); } while (0);
    // 0x394490: 0x3e00008  jr          $ra
    ctx->pc = 0x394490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394490u;
        // 0x394494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394498u;
    // 0x394498: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x394498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39449c: 0x0  nop
    ctx->pc = 0x39449cu;
    // NOP
    // 0x3944a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3944a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3944a4: 0x0  nop
    ctx->pc = 0x3944a4u;
    // NOP
    ctx->pc = 0x3944a8u;
}
