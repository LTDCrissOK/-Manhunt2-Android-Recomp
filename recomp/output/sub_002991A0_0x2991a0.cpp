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

// Function: sub_002991A0
// Address: 0x2991a0 - 0x299210
void sub_002991A0_0x2991a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002991A0_0x2991a0");
#endif

    switch (ctx->pc) {
        case 0x2991b4u: goto label_2991b4;
        default: break;
    }

    ctx->pc = 0x2991a0u;

    // 0x2991a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2991a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2991a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2991a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2991a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2991a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2991ac: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x2991ACu;
    SET_GPR_U32(ctx, 31, 0x2991B4u);
    ctx->pc = 0x2991B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2991ACu;
    // 0x2991b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x2991ACu, 0x2991B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2991B4u;
label_2991b4:
    // 0x2991b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2991b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2991b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2991b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2991bc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2991bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2991c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2991c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2991c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2991c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2991c8: 0x24633098  addiu       $v1, $v1, 0x3098
    ctx->pc = 0x2991c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12440));
    // 0x2991cc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2991ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2991d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2991d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2991d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2991d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2991d8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2991d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2991dc: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x2991dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x2991e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2991e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991e4: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x2991e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2991e8: 0xe602007c  swc1        $f2, 0x7C($s0)
    ctx->pc = 0x2991e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2991ec: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2991ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2991f0: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x2991f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x2991f4: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2991f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x2991f8: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2991f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2991fc: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x2991fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x299200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299204: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x299204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x299208: 0x3e00008  jr          $ra
    ctx->pc = 0x299208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299208u;
        // 0x29920c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299210u;
}
