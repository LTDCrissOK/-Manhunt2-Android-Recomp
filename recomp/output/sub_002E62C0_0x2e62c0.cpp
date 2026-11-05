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

// Function: sub_002E62C0
// Address: 0x2e62c0 - 0x2e6338
void sub_002E62C0_0x2e62c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E62C0_0x2e62c0");
#endif

    ctx->pc = 0x2e62c0u;

    // 0x2e62c0: 0x908211c0  lbu         $v0, 0x11C0($a0)
    ctx->pc = 0x2e62c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4544)));
    // 0x2e62c4: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2e62c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2e62c8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E62C8u;
    {
        const bool branch_taken_0x2e62c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E62CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62C8u;
        // 0x2e62cc: 0x248312ec  addiu       $v1, $a0, 0x12EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4844));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62c8) {
            ctx->pc = 0x2E6330u;
            goto label_2e6330;
        }
    }
    ctx->pc = 0x2E62D0u;
    // 0x2e62d0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2e62d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e62d4: 0xe48112ec  swc1        $f1, 0x12EC($a0)
    ctx->pc = 0x2e62d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4844), bits); }
    // 0x2e62d8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2e62d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e62dc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2e62dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e62e0: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x2e62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x2e62e4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2e62e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2e62e8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E62E8u;
    {
        const bool branch_taken_0x2e62e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e62e8) {
            ctx->pc = 0x2E62ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E62E8u;
            // 0x2e62ec: 0x8c8211c0  lw          $v0, 0x11C0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E631Cu;
            goto label_2e631c;
        }
    }
    ctx->pc = 0x2E62F0u;
    // 0x2e62f0: 0xc48012ec  lwc1        $f0, 0x12EC($a0)
    ctx->pc = 0x2e62f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e62f4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2e62f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2e62f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e62f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e62fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e62fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e6300: 0x0  nop
    ctx->pc = 0x2e6300u;
    // NOP
    // 0x2e6304: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e6304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e6308: 0xe48012ec  swc1        $f0, 0x12EC($a0)
    ctx->pc = 0x2e6308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4844), bits); }
    // 0x2e630c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2e630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6310: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e6310u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e6314: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2e6314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e6318: 0x8c8211c0  lw          $v0, 0x11C0($a0)
    ctx->pc = 0x2e6318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4544)));
label_2e631c:
    // 0x2e631c: 0xe48c12e4  swc1        $f12, 0x12E4($a0)
    ctx->pc = 0x2e631cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4836), bits); }
    // 0x2e6320: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2e6320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2e6324: 0xac8012f0  sw          $zero, 0x12F0($a0)
    ctx->pc = 0x2e6324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4848), GPR_U32(ctx, 0));
    // 0x2e6328: 0xac8211c0  sw          $v0, 0x11C0($a0)
    ctx->pc = 0x2e6328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4544), GPR_U32(ctx, 2));
    // 0x2e632c: 0xe48c12e8  swc1        $f12, 0x12E8($a0)
    ctx->pc = 0x2e632cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4840), bits); }
label_2e6330:
    // 0x2e6330: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6338u;
}
