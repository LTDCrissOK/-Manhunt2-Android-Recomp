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

// Function: sub_00170538
// Address: 0x170538 - 0x170610
void sub_00170538_0x170538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170538_0x170538");
#endif

    switch (ctx->pc) {
        case 0x17055cu: goto label_17055c;
        case 0x17059cu: goto label_17059c;
        case 0x1705acu: goto label_1705ac;
        default: break;
    }

    ctx->pc = 0x170538u;

    // 0x170538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17053c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17053cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170540: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170548: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x170548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x17054c: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x17054Cu;
    {
        const bool branch_taken_0x17054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17054c) {
            ctx->pc = 0x170550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17054Cu;
            // 0x170550: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170604u;
            goto label_170604;
        }
    }
    ctx->pc = 0x170554u;
    // 0x170554: 0xc04f8aa  jal         func_13E2A8
    ctx->pc = 0x170554u;
    SET_GPR_U32(ctx, 31, 0x17055Cu);
    ctx->pc = 0x13E2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E2A8u, 0x170554u, 0x17055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17055Cu;
label_17055c:
    // 0x17055c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x17055cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x170560: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x170560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x170564: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x170564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x170568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17056c: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x17056cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x170570: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x170570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x170574: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x170574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x170578: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x170578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x17057c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x17057cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x170580: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x170580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x170584: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x170584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x170588: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x170588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x17058c: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x17058cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x170590: 0xa20300b8  sb          $v1, 0xB8($s0)
    ctx->pc = 0x170590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x170594: 0xc05c184  jal         func_170610
    ctx->pc = 0x170594u;
    SET_GPR_U32(ctx, 31, 0x17059Cu);
    ctx->pc = 0x170598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170594u;
    // 0x170598: 0xa20200c8  sb          $v0, 0xC8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 200), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170610u, 0x170594u, 0x17059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17059Cu;
label_17059c:
    // 0x17059c: 0xae00025c  sw          $zero, 0x25C($s0)
    ctx->pc = 0x17059cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
    // 0x1705a0: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1705a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1705a4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x1705A4u;
    SET_GPR_U32(ctx, 31, 0x1705ACu);
    ctx->pc = 0x1705A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1705A4u;
    // 0x1705a8: 0xae000268  sw          $zero, 0x268($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x1705A4u, 0x1705ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1705ACu;
label_1705ac:
    // 0x1705ac: 0x240300c7  addiu       $v1, $zero, 0xC7
    ctx->pc = 0x1705acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x1705b0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1705b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1705b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1705b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1705b8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1705b8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1705bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1705BCu;
    {
        const bool branch_taken_0x1705bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1705bc) {
            ctx->pc = 0x1705C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1705BCu;
            // 0x1705c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1705C4u;
            goto label_1705c4;
        }
    }
    ctx->pc = 0x1705C4u;
label_1705c4:
    // 0x1705c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1705c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1705c8: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x1705c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x1705cc: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x1705ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
    // 0x1705d0: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x1705d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x1705d4: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1705d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1705d8: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1705d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x1705dc: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1705dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1705e0: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x1705e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x1705e4: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1705e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x1705e8: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1705e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1705ec: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1705ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1705f0: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1705f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x1705f4: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x1705f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x1705f8: 0x2010  mfhi        $a0
    ctx->pc = 0x1705f8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1705fc: 0xae04026c  sw          $a0, 0x26C($s0)
    ctx->pc = 0x1705fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 4));
    // 0x170600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170604:
    // 0x170604: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170608: 0x3e00008  jr          $ra
    ctx->pc = 0x170608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170608u;
        // 0x17060c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170610u;
}
