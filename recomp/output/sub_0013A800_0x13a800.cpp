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

// Function: sub_0013A800
// Address: 0x13a800 - 0x13a840
void sub_0013A800_0x13a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A800_0x13a800");
#endif

    switch (ctx->pc) {
        case 0x13a828u: goto label_13a828;
        default: break;
    }

    ctx->pc = 0x13a800u;

    // 0x13a800: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13a800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13a804: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x13a804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13a808: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x13a808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13a80c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13a80cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13a810: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13a810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13a814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a81c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x13a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a820: 0xc04e9fa  jal         func_13A7E8
    ctx->pc = 0x13A820u;
    SET_GPR_U32(ctx, 31, 0x13A828u);
    ctx->pc = 0x13A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A820u;
    // 0x13a824: 0x8c500518  lw          $s0, 0x518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7E8u, 0x13A820u, 0x13A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A828u;
label_13a828:
    // 0x13a828: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13a828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a82c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13a82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13a830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a834: 0x3e00008  jr          $ra
    ctx->pc = 0x13A834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A834u;
        // 0x13a838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A83Cu;
    // 0x13a83c: 0x0  nop
    ctx->pc = 0x13a83cu;
    // NOP
    ctx->pc = 0x13a840u;
}
