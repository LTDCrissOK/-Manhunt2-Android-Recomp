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

// Function: sub_002182D0
// Address: 0x2182d0 - 0x218330
void sub_002182D0_0x2182d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002182D0_0x2182d0");
#endif

    switch (ctx->pc) {
        case 0x2182f0u: goto label_2182f0;
        case 0x218300u: goto label_218300;
        default: break;
    }

    ctx->pc = 0x2182d0u;

    // 0x2182d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2182d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2182d4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2182d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2182d8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2182d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2182dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2182dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2182e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2182e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2182e8: 0xc086084  jal         func_218210
    ctx->pc = 0x2182E8u;
    SET_GPR_U32(ctx, 31, 0x2182F0u);
    ctx->pc = 0x2182ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182E8u;
    // 0x2182ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218210u, 0x2182E8u, 0x2182F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182F0u;
label_2182f0:
    // 0x2182f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2182f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2182f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2182f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182f8: 0xc0f77fe  jal         func_3DDFF8
    ctx->pc = 0x2182F8u;
    SET_GPR_U32(ctx, 31, 0x218300u);
    ctx->pc = 0x2182FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182F8u;
    // 0x2182fc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDFF8u, 0x2182F8u, 0x218300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218300u;
label_218300:
    // 0x218300: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x218300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x218304: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x218304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218308: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x218308u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21830c: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x21830cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218310: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x218310u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x218314: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x218314u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
    // 0x218318: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x218318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21831c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x21831cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x218320: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x218320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218324: 0x3e00008  jr          $ra
    ctx->pc = 0x218324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218324u;
        // 0x218328: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21832Cu;
    // 0x21832c: 0x0  nop
    ctx->pc = 0x21832cu;
    // NOP
    ctx->pc = 0x218330u;
}
