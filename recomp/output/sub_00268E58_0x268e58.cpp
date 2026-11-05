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

// Function: sub_00268E58
// Address: 0x268e58 - 0x268eb0
void sub_00268E58_0x268e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268E58_0x268e58");
#endif

    switch (ctx->pc) {
        case 0x268e6cu: goto label_268e6c;
        default: break;
    }

    ctx->pc = 0x268e58u;

    // 0x268e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x268e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x268e5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x268e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x268e60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x268e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x268e64: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x268E64u;
    SET_GPR_U32(ctx, 31, 0x268E6Cu);
    ctx->pc = 0x268E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E64u;
    // 0x268e68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x268E64u, 0x268E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E6Cu;
label_268e6c:
    // 0x268e6c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x268e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x268e70: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x268e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x268e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x268e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e78: 0x24632648  addiu       $v1, $v1, 0x2648
    ctx->pc = 0x268e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9800));
    // 0x268e7c: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x268e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x268e80: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x268e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x268e84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x268e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e88: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x268e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x268e8c: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x268e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x268e90: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x268e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x268e94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x268e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x268e98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x268e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268e9c: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x268e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ea0: 0xe6000228  swc1        $f0, 0x228($s0)
    ctx->pc = 0x268ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    // 0x268ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x268ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x268EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EA8u;
        // 0x268eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268EB0u;
}
