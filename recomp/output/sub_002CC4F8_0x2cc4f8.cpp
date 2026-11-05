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

// Function: sub_002CC4F8
// Address: 0x2cc4f8 - 0x2cc548
void sub_002CC4F8_0x2cc4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC4F8_0x2cc4f8");
#endif

    switch (ctx->pc) {
        case 0x2cc508u: goto label_2cc508;
        case 0x2cc53cu: goto label_2cc53c;
        default: break;
    }

    ctx->pc = 0x2cc4f8u;

    // 0x2cc4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc4fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc500: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x2CC500u;
    SET_GPR_U32(ctx, 31, 0x2CC508u);
    ctx->pc = 0x2CC504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC500u;
    // 0x2cc504: 0x24047d7f  addiu       $a0, $zero, 0x7D7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x2CC500u, 0x2CC508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC508u;
label_2cc508:
    // 0x2cc508: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2cc508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2cc50c: 0x2445003f  addiu       $a1, $v0, 0x3F
    ctx->pc = 0x2cc50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2cc510: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x2cc510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x2cc514: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x2cc514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x2cc518: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2cc518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2cc51c: 0x24e4a600  addiu       $a0, $a3, -0x5A00
    ctx->pc = 0x2cc51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944256));
    // 0x2cc520: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2cc520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2cc524: 0x24a63e80  addiu       $a2, $a1, 0x3E80
    ctx->pc = 0x2cc524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16000));
    // 0x2cc528: 0xac62b498  sw          $v0, -0x4B68($v1)
    ctx->pc = 0x2cc528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FB498u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FB498u, _value); } while (0);
    // 0x2cc52c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2cc52cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2cc530: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cc530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc534: 0xc0f2708  jal         func_3C9C20
    ctx->pc = 0x2CC534u;
    SET_GPR_U32(ctx, 31, 0x2CC53Cu);
    ctx->pc = 0x2CC538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC534u;
    // 0x2cc538: 0xace5a600  sw          $a1, -0x5A00($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294944256), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9C20u, 0x2CC534u, 0x2CC53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC53Cu;
label_2cc53c:
    // 0x2cc53c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc540: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC540u;
        // 0x2cc544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC548u;
}
