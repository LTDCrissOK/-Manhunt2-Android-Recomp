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

// Function: sub_001753D8
// Address: 0x1753d8 - 0x175420
void sub_001753D8_0x1753d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001753D8_0x1753d8");
#endif

    switch (ctx->pc) {
        case 0x1753ecu: goto label_1753ec;
        case 0x175408u: goto label_175408;
        default: break;
    }

    ctx->pc = 0x1753d8u;

    // 0x1753d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1753d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1753dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1753dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1753e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1753e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1753e4: 0xc04f794  jal         func_13DE50
    ctx->pc = 0x1753E4u;
    SET_GPR_U32(ctx, 31, 0x1753ECu);
    ctx->pc = 0x1753E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753E4u;
    // 0x1753e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE50u, 0x1753E4u, 0x1753ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753ECu;
label_1753ec:
    // 0x1753ec: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1753ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1753f0: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1753f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1753f4: 0x24630eb0  addiu       $v1, $v1, 0xEB0
    ctx->pc = 0x1753f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3760));
    // 0x1753f8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1753f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1753fc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1753fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x175400: 0xc05d5ca  jal         func_175728
    ctx->pc = 0x175400u;
    SET_GPR_U32(ctx, 31, 0x175408u);
    ctx->pc = 0x175404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175400u;
    // 0x175404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175728u, 0x175400u, 0x175408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175408u;
label_175408:
    // 0x175408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17540c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17540cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175414: 0x3e00008  jr          $ra
    ctx->pc = 0x175414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175414u;
        // 0x175418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17541Cu;
    // 0x17541c: 0x0  nop
    ctx->pc = 0x17541cu;
    // NOP
    ctx->pc = 0x175420u;
}
