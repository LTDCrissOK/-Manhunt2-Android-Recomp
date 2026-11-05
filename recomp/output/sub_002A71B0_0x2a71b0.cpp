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

// Function: sub_002A71B0
// Address: 0x2a71b0 - 0x2a71f0
void sub_002A71B0_0x2a71b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A71B0_0x2a71b0");
#endif

    switch (ctx->pc) {
        case 0x2a71b0u: goto label_2a71b0;
        case 0x2a71b4u: goto label_2a71b4;
        case 0x2a71b8u: goto label_2a71b8;
        case 0x2a71bcu: goto label_2a71bc;
        case 0x2a71c0u: goto label_2a71c0;
        case 0x2a71c4u: goto label_2a71c4;
        case 0x2a71c8u: goto label_2a71c8;
        case 0x2a71ccu: goto label_2a71cc;
        case 0x2a71d0u: goto label_2a71d0;
        case 0x2a71d4u: goto label_2a71d4;
        case 0x2a71d8u: goto label_2a71d8;
        case 0x2a71dcu: goto label_2a71dc;
        case 0x2a71e0u: goto label_2a71e0;
        case 0x2a71e4u: goto label_2a71e4;
        case 0x2a71e8u: goto label_2a71e8;
        case 0x2a71ecu: goto label_2a71ec;
        default: break;
    }

    ctx->pc = 0x2a71b0u;

label_2a71b0:
    // 0x2a71b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a71b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a71b4:
    // 0x2a71b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a71b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a71b8:
    // 0x2a71b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a71b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a71bc:
    // 0x2a71bc: 0xe4ac0030  swc1        $f12, 0x30($a1)
    ctx->pc = 0x2a71bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_2a71c0:
    // 0x2a71c0: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x2a71c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
label_2a71c4:
    // 0x2a71c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a71c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a71c8:
    // 0x2a71c8: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x2a71c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_2a71cc:
    // 0x2a71cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a71ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a71d0:
    // 0x2a71d0: 0xe4a1002c  swc1        $f1, 0x2C($a1)
    ctx->pc = 0x2a71d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_2a71d4:
    // 0x2a71d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a71d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a71d8:
    // 0x2a71d8: 0x40f809  jalr        $v0
label_2a71dc:
    if (ctx->pc == 0x2A71DCu) {
        ctx->pc = 0x2A71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71D8u;
        // 0x2a71dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A71E0u;
        goto label_2a71e0;
    }
    ctx->pc = 0x2A71D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A71E0u);
        ctx->pc = 0x2A71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71D8u;
        // 0x2a71dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A71D8u, 0x2A71E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A71E0u;
label_2a71e0:
    // 0x2a71e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a71e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a71e4:
    // 0x2a71e4: 0x3e00008  jr          $ra
label_2a71e8:
    if (ctx->pc == 0x2A71E8u) {
        ctx->pc = 0x2A71E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71E4u;
        // 0x2a71e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A71ECu;
        goto label_2a71ec;
    }
    ctx->pc = 0x2A71E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A71E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71E4u;
        // 0x2a71e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A71E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A71ECu;
label_2a71ec:
    // 0x2a71ec: 0x0  nop
    ctx->pc = 0x2a71ecu;
    // NOP
    ctx->pc = 0x2a71f0u;
}
