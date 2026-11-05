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

// Function: sub_00136AF0
// Address: 0x136af0 - 0x136b28
void sub_00136AF0_0x136af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136AF0_0x136af0");
#endif

    switch (ctx->pc) {
        case 0x136b08u: goto label_136b08;
        case 0x136b14u: goto label_136b14;
        default: break;
    }

    ctx->pc = 0x136af0u;

    // 0x136af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x136af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x136af4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x136af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x136af8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136afc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x136afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x136b00: 0xc041d26  jal         func_107498
    ctx->pc = 0x136B00u;
    SET_GPR_U32(ctx, 31, 0x136B08u);
    ctx->pc = 0x136B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B00u;
    // 0x136b04: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107498u, 0x136B00u, 0x136B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B08u;
label_136b08:
    // 0x136b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x136b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b0c: 0xc0455f2  jal         func_1157C8
    ctx->pc = 0x136B0Cu;
    SET_GPR_U32(ctx, 31, 0x136B14u);
    ctx->pc = 0x136B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B0Cu;
    // 0x136b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1157C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1157C8u, 0x136B0Cu, 0x136B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B14u;
label_136b14:
    // 0x136b14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x136b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x136b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136b1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136b20: 0x3e00008  jr          $ra
    ctx->pc = 0x136B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B20u;
        // 0x136b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136B28u;
}
