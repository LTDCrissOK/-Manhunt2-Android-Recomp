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

// Function: sub_001BF398
// Address: 0x1bf398 - 0x1bf3e0
void sub_001BF398_0x1bf398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF398_0x1bf398");
#endif

    ctx->pc = 0x1bf398u;

    // 0x1bf398: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1bf398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1bf39c: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BF39Cu;
    {
        const bool branch_taken_0x1bf39c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf39c) {
            ctx->pc = 0x1BF3D8u;
            goto label_1bf3d8;
        }
    }
    ctx->pc = 0x1BF3A4u;
    // 0x1bf3a4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BF3A4u;
    {
        const bool branch_taken_0x1bf3a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3A4u;
        // 0x1bf3a8: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3a4) {
            ctx->pc = 0x1BF3D8u;
            goto label_1bf3d8;
        }
    }
    ctx->pc = 0x1BF3ACu;
    // 0x1bf3ac: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1bf3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1bf3b0: 0xc4625b40  lwc1        $f2, 0x5B40($v1)
    ctx->pc = 0x1bf3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 23360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf3b4: 0x24625b40  addiu       $v0, $v1, 0x5B40
    ctx->pc = 0x1bf3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
    // 0x1bf3b8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1bf3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bf3bc: 0x2483f150  addiu       $v1, $a0, -0xEB0
    ctx->pc = 0x1bf3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963536));
    // 0x1bf3c0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1bf3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf3c4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1bf3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf3c8: 0xe482f150  swc1        $f2, -0xEB0($a0)
    ctx->pc = 0x1bf3c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48F150u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F150u, _value); } while (0); }
    // 0x1bf3cc: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x1bf3ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48F15Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F15Cu, _value); } while (0); }
    // 0x1bf3d0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1bf3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48F154u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F154u, _value); } while (0); }
    // 0x1bf3d4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1bf3d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48F158u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F158u, _value); } while (0); }
label_1bf3d8:
    // 0x1bf3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF3E0u;
}
