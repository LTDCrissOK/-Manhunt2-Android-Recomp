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

// Function: sub_002D0628
// Address: 0x2d0628 - 0x2d06e0
void sub_002D0628_0x2d0628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0628_0x2d0628");
#endif

    switch (ctx->pc) {
        case 0x2d0658u: goto label_2d0658;
        case 0x2d0670u: goto label_2d0670;
        case 0x2d0678u: goto label_2d0678;
        default: break;
    }

    ctx->pc = 0x2d0628u;

    // 0x2d0628: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d0628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d062c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d0630: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d0630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0634: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2d0634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d0638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d063c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2d063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2d0640: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2d0640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0644: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2d0644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2d0648: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x2d0648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d064c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2d064cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2d0650: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2D0650u;
    SET_GPR_U32(ctx, 31, 0x2D0658u);
    ctx->pc = 0x2D0654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0650u;
    // 0x2d0654: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D0650u, 0x2D0658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0658u;
label_2d0658:
    // 0x2d0658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d065c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2d065cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2d0660: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2d0660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2d0664: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2d0664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2d0668: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2D0668u;
    SET_GPR_U32(ctx, 31, 0x2D0670u);
    ctx->pc = 0x2D066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0668u;
    // 0x2d066c: 0xa2020038  sb          $v0, 0x38($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D0668u, 0x2D0670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0670u;
label_2d0670:
    // 0x2d0670: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2D0670u;
    SET_GPR_U32(ctx, 31, 0x2D0678u);
    ctx->pc = 0x2D0674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0670u;
    // 0x2d0674: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D0670u, 0x2D0678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0678u;
label_2d0678:
    // 0x2d0678: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d0678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d067c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d067cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0680: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x2d0680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x2d0684: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2d0684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x2d0688: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2d0688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x2d068c: 0xa2000074  sb          $zero, 0x74($s0)
    ctx->pc = 0x2d068cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0690: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2d0690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x2d0694: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2d0694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x2d0698: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2d0698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x2d069c: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x2d069cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x2d06a0: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2d06a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2d06a4: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2d06a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x2d06a8: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2d06a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2d06ac: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2d06acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2d06b0: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2d06b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2d06b4: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2d06b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2d06b8: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2d06b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2d06bc: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2d06bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2d06c0: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x2d06c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x2d06c4: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x2d06c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x2d06c8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2d06c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x2d06cc: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x2d06ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x2d06d0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2d06d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d06d4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d06d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d06d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D06D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06D8u;
        // 0x2d06dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D06D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D06E0u;
}
