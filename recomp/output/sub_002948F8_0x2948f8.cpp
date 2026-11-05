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

// Function: sub_002948F8
// Address: 0x2948f8 - 0x2949b0
void sub_002948F8_0x2948f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002948F8_0x2948f8");
#endif

    switch (ctx->pc) {
        case 0x294990u: goto label_294990;
        default: break;
    }

    ctx->pc = 0x2948f8u;

    // 0x2948f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2948f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2948fc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2948fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x294900: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x294900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x294904: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x294904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x294908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29490c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x29490cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x294910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294914: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x294914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x294918: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x294918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x29491c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x29491cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x294920: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x294920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294924: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x294924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x294928: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x294928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29492c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x29492cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x294930: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x294930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294934: 0x24422d20  addiu       $v0, $v0, 0x2D20
    ctx->pc = 0x294934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11552));
    // 0x294938: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x294938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x29493c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29493cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x294940: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x294940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x294944: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x294944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x294948: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x294948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x29494c: 0x24a5b838  addiu       $a1, $a1, -0x47C8
    ctx->pc = 0x29494cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948920));
    // 0x294950: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x294950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x294954: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x294954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x294958: 0xa2060000  sb          $a2, 0x0($s0)
    ctx->pc = 0x294958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x29495c: 0xe60c000c  swc1        $f12, 0xC($s0)
    ctx->pc = 0x29495cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x294960: 0xe60d0010  swc1        $f13, 0x10($s0)
    ctx->pc = 0x294960u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x294964: 0xe60e0014  swc1        $f14, 0x14($s0)
    ctx->pc = 0x294964u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x294968: 0xe60f0018  swc1        $f15, 0x18($s0)
    ctx->pc = 0x294968u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x29496c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x29496cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x294970: 0xae080028  sw          $t0, 0x28($s0)
    ctx->pc = 0x294970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 8));
    // 0x294974: 0xae070030  sw          $a3, 0x30($s0)
    ctx->pc = 0x294974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 7));
    // 0x294978: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x294978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x29497c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x29497cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x294980: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x294980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x294984: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x294984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x294988: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x294988u;
    SET_GPR_U32(ctx, 31, 0x294990u);
    ctx->pc = 0x29498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294988u;
    // 0x29498c: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x294988u, 0x294990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294990u;
label_294990:
    // 0x294990: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x294990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x294994: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x294994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294998: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x294998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x29499c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29499cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2949a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2949a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2949a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2949A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2949A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949A4u;
        // 0x2949a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2949A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2949ACu;
    // 0x2949ac: 0x0  nop
    ctx->pc = 0x2949acu;
    // NOP
    ctx->pc = 0x2949b0u;
}
