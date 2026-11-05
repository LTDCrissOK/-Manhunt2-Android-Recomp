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

// Function: sub_002A9050
// Address: 0x2a9050 - 0x2a90f0
void sub_002A9050_0x2a9050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9050_0x2a9050");
#endif

    switch (ctx->pc) {
        case 0x2a9074u: goto label_2a9074;
        default: break;
    }

    ctx->pc = 0x2a9050u;

    // 0x2a9050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a9054: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a9054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2a9058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a9058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a905c: 0x24422d20  addiu       $v0, $v0, 0x2D20
    ctx->pc = 0x2a905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11552));
    // 0x2a9060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9064: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a9064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a9068: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x2a9068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x2a906c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A906Cu;
    SET_GPR_U32(ctx, 31, 0x2A9074u);
    ctx->pc = 0x2A9070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A906Cu;
    // 0x2a9070: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A906Cu, 0x2A9074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9074u;
label_2a9074:
    // 0x2a9074: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2a9074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2a9078: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a9078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a907c: 0x246337f8  addiu       $v1, $v1, 0x37F8
    ctx->pc = 0x2a907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14328));
    // 0x2a9080: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2a9080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2a9084: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x2a9084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x2a9088: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2a9088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2a908c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2a908cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2a9090: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a9090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9094: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2a9094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2a9098: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2a9098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2a909c: 0xae050064  sw          $a1, 0x64($s0)
    ctx->pc = 0x2a909cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 5));
    // 0x2a90a0: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2a90a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x2a90a4: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2a90a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x2a90a8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2a90a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x2a90ac: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2a90acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2a90b0: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2a90b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x2a90b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a90b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a90b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a90b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a90bc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a90bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a90c0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2a90c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2a90c4: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x2a90c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x2a90c8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2a90c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2a90cc: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x2a90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x2a90d0: 0xa200008c  sb          $zero, 0x8C($s0)
    ctx->pc = 0x2a90d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a90d4: 0xa200008d  sb          $zero, 0x8D($s0)
    ctx->pc = 0x2a90d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a90d8: 0xa200008e  sb          $zero, 0x8E($s0)
    ctx->pc = 0x2a90d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a90dc: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2a90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2a90e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a90e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a90e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a90e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a90e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A90E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90E8u;
        // 0x2a90ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A90E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A90F0u;
}
