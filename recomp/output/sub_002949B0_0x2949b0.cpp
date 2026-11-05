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

// Function: sub_002949B0
// Address: 0x2949b0 - 0x294a60
void sub_002949B0_0x2949b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002949B0_0x2949b0");
#endif

    switch (ctx->pc) {
        case 0x294a44u: goto label_294a44;
        default: break;
    }

    ctx->pc = 0x2949b0u;

    // 0x2949b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2949b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2949b4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2949b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2949b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2949b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2949bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2949bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2949c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2949c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2949c4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2949c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2949c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2949c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2949cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2949ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2949d0: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x2949d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x2949d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2949d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2949d8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x2949d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x2949dc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2949dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2949e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2949e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2949e4: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x2949e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2949e8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2949e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2949ec: 0x24422d20  addiu       $v0, $v0, 0x2D20
    ctx->pc = 0x2949ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11552));
    // 0x2949f0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x2949f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2949f4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2949f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2949f8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2949f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2949fc: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x2949fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x294a00: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x294a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x294a04: 0x24a5b838  addiu       $a1, $a1, -0x47C8
    ctx->pc = 0x294a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948920));
    // 0x294a08: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x294a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x294a0c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x294a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x294a10: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x294a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x294a14: 0xe60c000c  swc1        $f12, 0xC($s0)
    ctx->pc = 0x294a14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x294a18: 0xe60d0010  swc1        $f13, 0x10($s0)
    ctx->pc = 0x294a18u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x294a1c: 0xe60e0014  swc1        $f14, 0x14($s0)
    ctx->pc = 0x294a1cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x294a20: 0xe60f0018  swc1        $f15, 0x18($s0)
    ctx->pc = 0x294a20u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x294a24: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x294a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x294a28: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x294a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
    // 0x294a2c: 0xae090028  sw          $t1, 0x28($s0)
    ctx->pc = 0x294a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 9));
    // 0x294a30: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x294a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x294a34: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x294a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x294a38: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x294a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x294a3c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x294A3Cu;
    SET_GPR_U32(ctx, 31, 0x294A44u);
    ctx->pc = 0x294A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A3Cu;
    // 0x294a40: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x294A3Cu, 0x294A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A44u;
label_294a44:
    // 0x294a44: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x294a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x294a48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x294a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a4c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x294a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x294a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294a54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x294a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294a58: 0x3e00008  jr          $ra
    ctx->pc = 0x294A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A58u;
        // 0x294a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294A60u;
}
