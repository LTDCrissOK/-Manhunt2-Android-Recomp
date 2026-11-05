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

// Function: entry_002b635c
// Address: 0x2b635c - 0x2b6390
void entry_002b635c_0x2b635c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b635c_0x2b635c");
#endif

    switch (ctx->pc) {
        case 0x2b6368u: goto label_2b6368;
        default: break;
    }

    ctx->pc = 0x2b635cu;

    // 0x2b635c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b635cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6360: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6360u;
    SET_GPR_U32(ctx, 31, 0x2B6368u);
    ctx->pc = 0x2B6364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6360u;
    // 0x2b6364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6360u, 0x2B6368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6368u;
label_2b6368:
    // 0x2b6368: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b6368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b636c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2b636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b6370: 0xa060a928  sb          $zero, -0x56D8($v1)
    ctx->pc = 0x2b6370u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b6374: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b6374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b6378: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2b6378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2b637c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b637cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6380: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b6380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6384: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6384u;
        // 0x2b6388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B638Cu;
    // 0x2b638c: 0x0  nop
    ctx->pc = 0x2b638cu;
    // NOP
    ctx->pc = 0x2b6390u;
}
