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

// Function: sub_001C36C0
// Address: 0x1c36c0 - 0x1c3750
void sub_001C36C0_0x1c36c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C36C0_0x1c36c0");
#endif

    switch (ctx->pc) {
        case 0x1c36fcu: goto label_1c36fc;
        default: break;
    }

    ctx->pc = 0x1c36c0u;

    // 0x1c36c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c36c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c36c4: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x1c36c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x1c36c8: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x1c36c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
    // 0x1c36cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c36ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c36d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c36d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c36d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c36d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c36d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c36dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c36dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c36e0: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1c36e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c36e4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c36e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c36e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36ec: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1c36ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c36f0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c36f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c36f4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C36F4u;
    SET_GPR_U32(ctx, 31, 0x1C36FCu);
    ctx->pc = 0x1C36F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36F4u;
    // 0x1c36f8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C36F4u, 0x1C36FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36FCu;
label_1c36fc:
    // 0x1c36fc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1c36fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c3700: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c3700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c3704: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1c3704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1c3708: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1c3708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1c370c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1c370cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1c3710: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c3710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c3714: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1c3714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1c3718: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c3718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c371c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1c371cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1c3720: 0xc460c714  lwc1        $f0, -0x38EC($v1)
    ctx->pc = 0x1c3720u;
    { uint32_t bits = FAST_READ32(0x45C714u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3724: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c3724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1c3728: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c3728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c372c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1c372cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1c3730: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1c3730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1c3734: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1c3734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1c3738: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x1c3738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x1c373c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c373cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c3744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3748: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3748u;
        // 0x1c374c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3750u;
}
