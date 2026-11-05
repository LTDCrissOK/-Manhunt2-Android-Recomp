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

// Function: sub_00264C80
// Address: 0x264c80 - 0x264cc8
void sub_00264C80_0x264c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264C80_0x264c80");
#endif

    switch (ctx->pc) {
        case 0x264c94u: goto label_264c94;
        default: break;
    }

    ctx->pc = 0x264c80u;

    // 0x264c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264c88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x264c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x264c8c: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x264C8Cu;
    SET_GPR_U32(ctx, 31, 0x264C94u);
    ctx->pc = 0x264C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C8Cu;
    // 0x264c90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x264C8Cu, 0x264C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C94u;
label_264c94:
    // 0x264c94: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x264c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x264c98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x264c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264c9c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x264c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x264ca0: 0x246324b0  addiu       $v1, $v1, 0x24B0
    ctx->pc = 0x264ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9392));
    // 0x264ca4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x264ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ca8: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x264ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x264cac: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x264cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x264cb0: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x264cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x264cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264cb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x264cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x264cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x264CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CBCu;
        // 0x264cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264CC4u;
    // 0x264cc4: 0x0  nop
    ctx->pc = 0x264cc4u;
    // NOP
    ctx->pc = 0x264cc8u;
}
