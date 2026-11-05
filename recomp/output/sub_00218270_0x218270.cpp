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

// Function: sub_00218270
// Address: 0x218270 - 0x2182d0
void sub_00218270_0x218270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218270_0x218270");
#endif

    switch (ctx->pc) {
        case 0x218288u: goto label_218288;
        default: break;
    }

    ctx->pc = 0x218270u;

    // 0x218270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218274: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x218274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x218278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21827c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21827cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x218280: 0xc086084  jal         func_218210
    ctx->pc = 0x218280u;
    SET_GPR_U32(ctx, 31, 0x218288u);
    ctx->pc = 0x218284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218280u;
    // 0x218284: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218210u, 0x218280u, 0x218288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218288u;
label_218288:
    // 0x218288: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x218288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21828c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21828cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218290: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x218290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218294: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x218294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218298: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x218298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21829c: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x21829cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2182a0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2182a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2182a4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2182a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2182a8: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x2182a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2182ac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2182acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2182b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2182b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2182b4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2182b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2182b8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2182b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2182bc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2182bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2182c0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2182c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2182c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2182C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2182C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2182C4u;
        // 0x2182c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2182C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2182CCu;
    // 0x2182cc: 0x0  nop
    ctx->pc = 0x2182ccu;
    // NOP
    ctx->pc = 0x2182d0u;
}
