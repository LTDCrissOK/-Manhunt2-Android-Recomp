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

// Function: sub_003AC280
// Address: 0x3ac280 - 0x3ac2d8
void sub_003AC280_0x3ac280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC280_0x3ac280");
#endif

    switch (ctx->pc) {
        case 0x3ac2c0u: goto label_3ac2c0;
        default: break;
    }

    ctx->pc = 0x3ac280u;

    // 0x3ac280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ac280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ac284: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3ac284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3ac288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ac288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ac28c: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3ac28cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x3ac290: 0x24428d00  addiu       $v0, $v0, -0x7300
    ctx->pc = 0x3ac290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
    // 0x3ac294: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ac294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ac298: 0x26108e00  addiu       $s0, $s0, -0x7200
    ctx->pc = 0x3ac298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938112));
    // 0x3ac29c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3ac29cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x658D00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x658D00u, _value); } while (0);
    // 0x3ac2a0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3ac2a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x658D04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x658D04u, _value); } while (0);
    // 0x3ac2a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ac2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac2a8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x3ac2a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x658D08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x658D08u, _value); } while (0);
    // 0x3ac2ac: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3ac2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ac2b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ac2b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac2b4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x3ac2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3ac2b8: 0xc0e8f8a  jal         func_3A3E28
    ctx->pc = 0x3AC2B8u;
    SET_GPR_U32(ctx, 31, 0x3AC2C0u);
    ctx->pc = 0x3AC2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC2B8u;
    // 0x3ac2bc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E28u, 0x3AC2B8u, 0x3AC2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC2C0u;
label_3ac2c0:
    // 0x3ac2c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ac2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ac2c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ac2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ac2c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ac2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC2CCu;
        // 0x3ac2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC2D4u;
    // 0x3ac2d4: 0x0  nop
    ctx->pc = 0x3ac2d4u;
    // NOP
    ctx->pc = 0x3ac2d8u;
}
