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

// Function: sub_00209470
// Address: 0x209470 - 0x2094d0
void sub_00209470_0x209470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209470_0x209470");
#endif

    switch (ctx->pc) {
        case 0x2094c0u: goto label_2094c0;
        default: break;
    }

    ctx->pc = 0x209470u;

    // 0x209470: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x209470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x209474: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x209474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209478: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x209478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x20947c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x20947cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x209480: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x209480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x209484: 0x2484bcd0  addiu       $a0, $a0, -0x4330
    ctx->pc = 0x209484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950096));
    // 0x209488: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x209488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x20948c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20948cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209494: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x209494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x209498: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x209498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x20949c: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x20949cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2094a0: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x2094a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x2094a4: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x2094a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x2094a8: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x2094a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x2094ac: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x2094acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2094b0: 0xe7ae004c  swc1        $f14, 0x4C($sp)
    ctx->pc = 0x2094b0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2094b4: 0xe7b00050  swc1        $f16, 0x50($sp)
    ctx->pc = 0x2094b4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2094b8: 0xc0f0258  jal         func_3C0960
    ctx->pc = 0x2094B8u;
    SET_GPR_U32(ctx, 31, 0x2094C0u);
    ctx->pc = 0x2094BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094B8u;
    // 0x2094bc: 0xe7b20054  swc1        $f18, 0x54($sp) (Delay Slot)
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0960u, 0x2094B8u, 0x2094C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094C0u;
label_2094c0:
    // 0x2094c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2094c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2094c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2094C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2094C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094C4u;
        // 0x2094c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2094C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2094CCu;
    // 0x2094cc: 0x0  nop
    ctx->pc = 0x2094ccu;
    // NOP
    ctx->pc = 0x2094d0u;
}
