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

// Function: sub_00325D48
// Address: 0x325d48 - 0x325d98
void sub_00325D48_0x325d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325D48_0x325d48");
#endif

    switch (ctx->pc) {
        case 0x325d6cu: goto label_325d6c;
        case 0x325d74u: goto label_325d74;
        default: break;
    }

    ctx->pc = 0x325d48u;

    // 0x325d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x325d4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x325d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x325d50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325d54: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x325d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x325d58: 0xac44be8c  sw          $a0, -0x4174($v0)
    ctx->pc = 0x325d58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3FBE8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE8Cu, _value); } while (0);
    // 0x325d5c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x325d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x325d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x325d64: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x325D64u;
    SET_GPR_U32(ctx, 31, 0x325D6Cu);
    ctx->pc = 0x325D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D64u;
    // 0x325d68: 0x2464d7e8  addiu       $a0, $v1, -0x2818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x325D64u, 0x325D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D6Cu;
label_325d6c:
    // 0x325d6c: 0xc0c99e0  jal         func_326780
    ctx->pc = 0x325D6Cu;
    SET_GPR_U32(ctx, 31, 0x325D74u);
    ctx->pc = 0x325D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D6Cu;
    // 0x325d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326780u, 0x325D6Cu, 0x325D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D74u;
label_325d74:
    // 0x325d74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x325d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x325d78: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x325d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x325d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325d80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x325d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325d84: 0xac40be98  sw          $zero, -0x4168($v0)
    ctx->pc = 0x325d84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE98u, _value); } while (0);
    // 0x325d88: 0xac60be94  sw          $zero, -0x416C($v1)
    ctx->pc = 0x325d88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE94u, _value); } while (0);
    // 0x325d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x325D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D8Cu;
        // 0x325d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325D94u;
    // 0x325d94: 0x0  nop
    ctx->pc = 0x325d94u;
    // NOP
    ctx->pc = 0x325d98u;
}
