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

// Function: sub_00121298
// Address: 0x121298 - 0x1212e0
void sub_00121298_0x121298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121298_0x121298");
#endif

    switch (ctx->pc) {
        case 0x1212b8u: goto label_1212b8;
        case 0x1212c8u: goto label_1212c8;
        case 0x1212d4u: goto label_1212d4;
        default: break;
    }

    ctx->pc = 0x121298u;

    // 0x121298: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x121298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12129c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1212a0: 0x90a210dc  lbu         $v0, 0x10DC($a1)
    ctx->pc = 0x1212a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4316)));
    // 0x1212a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1212A4u;
    {
        const bool branch_taken_0x1212a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212A4u;
        // 0x1212a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212a4) {
            ctx->pc = 0x1212D4u;
            goto label_1212d4;
        }
    }
    ctx->pc = 0x1212ACu;
    // 0x1212ac: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x1212acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x1212b0: 0xc0aade6  jal         func_2AB798
    ctx->pc = 0x1212B0u;
    SET_GPR_U32(ctx, 31, 0x1212B8u);
    ctx->pc = 0x1212B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1212B0u;
    // 0x1212b4: 0x24a5cd68  addiu       $a1, $a1, -0x3298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB798u, 0x1212B0u, 0x1212B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1212B8u;
label_1212b8:
    // 0x1212b8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1212b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1212bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1212bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212c0: 0xc0f6b12  jal         func_3DAC48
    ctx->pc = 0x1212C0u;
    SET_GPR_U32(ctx, 31, 0x1212C8u);
    ctx->pc = 0x1212C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1212C0u;
    // 0x1212c4: 0x24848730  addiu       $a0, $a0, -0x78D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAC48u, 0x1212C0u, 0x1212C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1212C8u;
label_1212c8:
    // 0x1212c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1212c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212cc: 0xc0aae4e  jal         func_2AB938
    ctx->pc = 0x1212CCu;
    SET_GPR_U32(ctx, 31, 0x1212D4u);
    ctx->pc = 0x1212D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1212CCu;
    // 0x1212d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB938u, 0x1212CCu, 0x1212D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1212D4u;
label_1212d4:
    // 0x1212d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1212d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1212d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1212D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1212DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212D8u;
        // 0x1212dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1212D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1212E0u;
}
