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

// Function: sub_0030C350
// Address: 0x30c350 - 0x30c3f0
void sub_0030C350_0x30c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C350_0x30c350");
#endif

    switch (ctx->pc) {
        case 0x30c3c0u: goto label_30c3c0;
        default: break;
    }

    ctx->pc = 0x30c350u;

    // 0x30c350: 0x3c01c7c3  lui         $at, 0xC7C3
    ctx->pc = 0x30c350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51139 << 16));
    // 0x30c354: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x30c354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
    // 0x30c358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c35c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30c35cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30c360: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x30c360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x30c364: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30c364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30c368: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x30c368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x30c36c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c370: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x30c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x30c374: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x30c374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c378: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x30c378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x30c37c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30c380: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x30c380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x30c384: 0x24a5c1b8  addiu       $a1, $a1, -0x3E48
    ctx->pc = 0x30c384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951352));
    // 0x30c388: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x30c388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x30c38c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x30c38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c390: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x30c390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x30c394: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x30c394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
    // 0x30c398: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30c398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30c39c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x30c39cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c3a0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x30c3a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x30c3a4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x30c3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x30c3a8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x30c3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x30c3ac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x30c3acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x30c3b0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x30c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x30c3b4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x30c3b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c3b8: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30C3B8u;
    SET_GPR_U32(ctx, 31, 0x30C3C0u);
    ctx->pc = 0x30C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C3B8u;
    // 0x30c3bc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30C3B8u, 0x30C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C3C0u;
label_30c3c0:
    // 0x30c3c0: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x30c3c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c3c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30c3c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c3c8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x30c3c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c3cc: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x30c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x30c3d0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x30c3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x30c3d4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x30c3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c3d8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x30c3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30c3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x30C3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C3DCu;
        // 0x30c3e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C3E4u;
    // 0x30c3e4: 0x0  nop
    ctx->pc = 0x30c3e4u;
    // NOP
    // 0x30c3e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30c3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30c3ec: 0x0  nop
    ctx->pc = 0x30c3ecu;
    // NOP
    ctx->pc = 0x30c3f0u;
}
