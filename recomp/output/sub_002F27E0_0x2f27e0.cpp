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

// Function: sub_002F27E0
// Address: 0x2f27e0 - 0x2f2838
void sub_002F27E0_0x2f27e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F27E0_0x2f27e0");
#endif

    switch (ctx->pc) {
        case 0x2f2818u: goto label_2f2818;
        case 0x2f2828u: goto label_2f2828;
        default: break;
    }

    ctx->pc = 0x2f27e0u;

    // 0x2f27e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f27e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f27e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f27e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f27e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f27e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f27ec: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2f27ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f27f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f27f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f27f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f27f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f27f8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2f27f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2f27fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f27fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f2800: 0x240503e9  addiu       $a1, $zero, 0x3E9
    ctx->pc = 0x2f2800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x2f2804: 0xe45411d4  swc1        $f20, 0x11D4($v0)
    ctx->pc = 0x2f2804u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4564), bits); }
    // 0x2f2808: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2f2808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2f280c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2f280cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2f2810: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x2F2810u;
    SET_GPR_U32(ctx, 31, 0x2F2818u);
    ctx->pc = 0x2F2814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2810u;
    // 0x2f2814: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2F2810u, 0x2F2818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2818u;
label_2f2818:
    // 0x2f2818: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f2818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f281c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2f281cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2f2820: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x2F2820u;
    SET_GPR_U32(ctx, 31, 0x2F2828u);
    ctx->pc = 0x2F2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2820u;
    // 0x2f2824: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x2F2820u, 0x2F2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2828u;
label_2f2828:
    // 0x2f2828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f2828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f282c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2f282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f2830: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2830u;
        // 0x2f2834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2838u;
}
