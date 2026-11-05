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

// Function: sub_003699B8
// Address: 0x3699b8 - 0x369a28
void sub_003699B8_0x3699b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003699B8_0x3699b8");
#endif

    switch (ctx->pc) {
        case 0x369a1cu: goto label_369a1c;
        default: break;
    }

    ctx->pc = 0x3699b8u;

    // 0x3699b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3699b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3699bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3699bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3699c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3699c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3699c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3699c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3699c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699cc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3699ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699d0: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x3699d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699d4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x3699d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3699d8: 0xafa90048  sw          $t1, 0x48($sp)
    ctx->pc = 0x3699d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 9));
    // 0x3699dc: 0xafaa0050  sw          $t2, 0x50($sp)
    ctx->pc = 0x3699dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 10));
    // 0x3699e0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3699e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3699e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3699e8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3699e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3699ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3699f0: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x3699f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699f4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3699f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3699f8: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x3699f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699fc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3699fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x369a00: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x369a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x369a04: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x369a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x369a08: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x369a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x369a0c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x369a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x369a10: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x369a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x369a14: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x369A14u;
    SET_GPR_U32(ctx, 31, 0x369A1Cu);
    ctx->pc = 0x369A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A14u;
    // 0x369a18: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x369A14u, 0x369A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A1Cu;
label_369a1c:
    // 0x369a1c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x369a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x369a20: 0x3e00008  jr          $ra
    ctx->pc = 0x369A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369A20u;
        // 0x369a24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369A28u;
}
