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

// Function: sub_002236D0
// Address: 0x2236d0 - 0x2237e0
void sub_002236D0_0x2236d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002236D0_0x2236d0");
#endif

    switch (ctx->pc) {
        case 0x223700u: goto label_223700;
        case 0x223710u: goto label_223710;
        case 0x223718u: goto label_223718;
        case 0x223720u: goto label_223720;
        case 0x223734u: goto label_223734;
        case 0x22373cu: goto label_22373c;
        case 0x223744u: goto label_223744;
        case 0x22374cu: goto label_22374c;
        case 0x223754u: goto label_223754;
        case 0x223794u: goto label_223794;
        default: break;
    }

    ctx->pc = 0x2236d0u;

    // 0x2236d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2236d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2236d4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2236d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2236d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2236d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2236dc: 0x24421830  addiu       $v0, $v0, 0x1830
    ctx->pc = 0x2236dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6192));
    // 0x2236e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2236e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2236e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2236e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2236e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2236e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2236ec: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2236ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2236f0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2236f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2236f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2236f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2236f8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2236F8u;
    SET_GPR_U32(ctx, 31, 0x223700u);
    ctx->pc = 0x2236FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2236F8u;
    // 0x2236fc: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2236F8u, 0x223700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223700u;
label_223700:
    // 0x223700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223704: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x223704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x223708: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223708u;
    SET_GPR_U32(ctx, 31, 0x223710u);
    ctx->pc = 0x22370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223708u;
    // 0x22370c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223708u, 0x223710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223710u;
label_223710:
    // 0x223710: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223710u;
    SET_GPR_U32(ctx, 31, 0x223718u);
    ctx->pc = 0x223714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223710u;
    // 0x223714: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223710u, 0x223718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223718u;
label_223718:
    // 0x223718: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223718u;
    SET_GPR_U32(ctx, 31, 0x223720u);
    ctx->pc = 0x22371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223718u;
    // 0x22371c: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223718u, 0x223720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223720u;
label_223720:
    // 0x223720: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x223720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x223724: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x223724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x223728: 0x246317e8  addiu       $v1, $v1, 0x17E8
    ctx->pc = 0x223728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6120));
    // 0x22372c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22372Cu;
    SET_GPR_U32(ctx, 31, 0x223734u);
    ctx->pc = 0x223730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22372Cu;
    // 0x223730: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22372Cu, 0x223734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223734u;
label_223734:
    // 0x223734: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223734u;
    SET_GPR_U32(ctx, 31, 0x22373Cu);
    ctx->pc = 0x223738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223734u;
    // 0x223738: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223734u, 0x22373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22373Cu;
label_22373c:
    // 0x22373c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22373Cu;
    SET_GPR_U32(ctx, 31, 0x223744u);
    ctx->pc = 0x223740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22373Cu;
    // 0x223740: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22373Cu, 0x223744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223744u;
label_223744:
    // 0x223744: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223744u;
    SET_GPR_U32(ctx, 31, 0x22374Cu);
    ctx->pc = 0x223748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223744u;
    // 0x223748: 0x26040044  addiu       $a0, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223744u, 0x22374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22374Cu;
label_22374c:
    // 0x22374c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22374Cu;
    SET_GPR_U32(ctx, 31, 0x223754u);
    ctx->pc = 0x223750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22374Cu;
    // 0x223750: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22374Cu, 0x223754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223754u;
label_223754:
    // 0x223754: 0xae110070  sw          $s1, 0x70($s0)
    ctx->pc = 0x223754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
    // 0x223758: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x223758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x22375c: 0xe614008c  swc1        $f20, 0x8C($s0)
    ctx->pc = 0x22375cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x223760: 0xe6140090  swc1        $f20, 0x90($s0)
    ctx->pc = 0x223760u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x223764: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x223764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x223768: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x223768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x22376c: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x22376cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x223770: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x223770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x223774: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x223774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x223778: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x223778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x22377c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x22377cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x223780: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x223780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x223784: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x223784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x223788: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x223788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x22378c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22378Cu;
    SET_GPR_U32(ctx, 31, 0x223794u);
    ctx->pc = 0x223790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22378Cu;
    // 0x223790: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22378Cu, 0x223794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223794u;
label_223794:
    // 0x223794: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x223794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x223798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22379c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22379cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237a0: 0xae1100b4  sw          $s1, 0xB4($s0)
    ctx->pc = 0x2237a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
    // 0x2237a4: 0xe61400c0  swc1        $f20, 0xC0($s0)
    ctx->pc = 0x2237a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x2237a8: 0xe61400b8  swc1        $f20, 0xB8($s0)
    ctx->pc = 0x2237a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x2237ac: 0xe61400bc  swc1        $f20, 0xBC($s0)
    ctx->pc = 0x2237acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x2237b0: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x2237b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x2237b4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2237b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2237b8: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2237b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2237bc: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x2237bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x2237c0: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x2237c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x2237c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2237c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2237c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2237c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2237cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2237ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2237d0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2237d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2237d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2237D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2237D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237D4u;
        // 0x2237d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2237D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2237DCu;
    // 0x2237dc: 0x0  nop
    ctx->pc = 0x2237dcu;
    // NOP
    ctx->pc = 0x2237e0u;
}
