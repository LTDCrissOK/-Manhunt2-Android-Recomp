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

// Function: sub_00315280
// Address: 0x315280 - 0x3152c8
void sub_00315280_0x315280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315280_0x315280");
#endif

    switch (ctx->pc) {
        case 0x315290u: goto label_315290;
        case 0x3152a4u: goto label_3152a4;
        default: break;
    }

    ctx->pc = 0x315280u;

    // 0x315280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x315280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x315284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x315284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x315288: 0xc0c5542  jal         func_315508
    ctx->pc = 0x315288u;
    SET_GPR_U32(ctx, 31, 0x315290u);
    ctx->pc = 0x315508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315508u, 0x315288u, 0x315290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315290u;
label_315290:
    // 0x315290: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x315294: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x315294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x315298: 0xac62bd48  sw          $v0, -0x42B8($v1)
    ctx->pc = 0x315298u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBD48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBD48u, _value); } while (0);
    // 0x31529c: 0xc0c259a  jal         func_309668
    ctx->pc = 0x31529Cu;
    SET_GPR_U32(ctx, 31, 0x3152A4u);
    ctx->pc = 0x3152A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31529Cu;
    // 0x3152a0: 0x24846920  addiu       $a0, $a0, 0x6920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309668u, 0x31529Cu, 0x3152A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3152A4u;
label_3152a4:
    // 0x3152a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3152a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3152a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3152a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3152ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3152acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3152b0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3152b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3152b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3152b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3152b8: 0xac402c50  sw          $zero, 0x2C50($v0)
    ctx->pc = 0x3152b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C50u, _value); } while (0);
    // 0x3152bc: 0xe4602c48  swc1        $f0, 0x2C48($v1)
    ctx->pc = 0x3152bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482C48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C48u, _value); } while (0); }
    // 0x3152c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3152C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3152C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152C0u;
        // 0x3152c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3152C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3152C8u;
}
