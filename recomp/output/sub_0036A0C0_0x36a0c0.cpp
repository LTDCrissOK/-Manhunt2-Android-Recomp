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

// Function: sub_0036A0C0
// Address: 0x36a0c0 - 0x36a148
void sub_0036A0C0_0x36a0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A0C0_0x36a0c0");
#endif

    switch (ctx->pc) {
        case 0x36a138u: goto label_36a138;
        default: break;
    }

    ctx->pc = 0x36a0c0u;

    // 0x36a0c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x36a0c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36a0c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x36a0c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36a0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36a0cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36a0ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36a0d0: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x36a0d0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0d4: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x36a0d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36a0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0dc: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36a0dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36a0e0: 0x46000c06  mov.s       $f16, $f1
    ctx->pc = 0x36a0e0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[1]);
    // 0x36a0e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x36a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x36a0e8: 0x46000486  mov.s       $f18, $f0
    ctx->pc = 0x36a0e8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[0]);
    // 0x36a0ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36a0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36a0f0: 0x46008446  mov.s       $f17, $f16
    ctx->pc = 0x36a0f0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[16]);
    // 0x36a0f4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x36a0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36a0f8: 0x460084c6  mov.s       $f19, $f16
    ctx->pc = 0x36a0f8u;
    ctx->f[19] = FPU_MOV_S(ctx->f[16]);
    // 0x36a0fc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x36a0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36a100: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x36a100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a104: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x36a104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36a108: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x36a108u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a10c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x36a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x36a110: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x36a110u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a114: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x36a114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x36a118: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x36a118u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a11c: 0xafac0030  sw          $t4, 0x30($sp)
    ctx->pc = 0x36a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 12));
    // 0x36a120: 0xafad0038  sw          $t5, 0x38($sp)
    ctx->pc = 0x36a120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 13));
    // 0x36a124: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x36a124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x36a128: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x36a128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x36a12c: 0xafac0050  sw          $t4, 0x50($sp)
    ctx->pc = 0x36a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 12));
    // 0x36a130: 0xc0da68a  jal         func_369A28
    ctx->pc = 0x36A130u;
    SET_GPR_U32(ctx, 31, 0x36A138u);
    ctx->pc = 0x36A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A130u;
    // 0x36a134: 0xafad0058  sw          $t5, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369A28u, 0x36A130u, 0x36A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A138u;
label_36a138:
    // 0x36a138: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x36a138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36a13c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A13Cu;
        // 0x36a140: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A144u;
    // 0x36a144: 0x0  nop
    ctx->pc = 0x36a144u;
    // NOP
    ctx->pc = 0x36a148u;
}
