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

// Function: sub_00137E90
// Address: 0x137e90 - 0x137f20
void sub_00137E90_0x137e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137E90_0x137e90");
#endif

    ctx->pc = 0x137e90u;

    // 0x137e90: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x137e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x137e94: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x137e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x137e98: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x137e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x137e9c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x137e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x137ea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137ea4: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x137ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x137ea8: 0xe4830414  swc1        $f3, 0x414($a0)
    ctx->pc = 0x137ea8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1044), bits); }
    // 0x137eac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x137eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x137eb0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x137eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x137eb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x137eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x137eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137ebc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x137ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x137ec0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x137ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137ec4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x137ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x137ec8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x137ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x137ecc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x137eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x137ed0: 0xa087045c  sb          $a3, 0x45C($a0)
    ctx->pc = 0x137ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1116), (uint8_t)GPR_U32(ctx, 7));
    // 0x137ed4: 0xe4810418  swc1        $f1, 0x418($a0)
    ctx->pc = 0x137ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1048), bits); }
    // 0x137ed8: 0xac860420  sw          $a2, 0x420($a0)
    ctx->pc = 0x137ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1056), GPR_U32(ctx, 6));
    // 0x137edc: 0xe4830424  swc1        $f3, 0x424($a0)
    ctx->pc = 0x137edcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1060), bits); }
    // 0x137ee0: 0xac850430  sw          $a1, 0x430($a0)
    ctx->pc = 0x137ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1072), GPR_U32(ctx, 5));
    // 0x137ee4: 0xac820440  sw          $v0, 0x440($a0)
    ctx->pc = 0x137ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1088), GPR_U32(ctx, 2));
    // 0x137ee8: 0xe4820448  swc1        $f2, 0x448($a0)
    ctx->pc = 0x137ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1096), bits); }
    // 0x137eec: 0xac830450  sw          $v1, 0x450($a0)
    ctx->pc = 0x137eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1104), GPR_U32(ctx, 3));
    // 0x137ef0: 0xe4800458  swc1        $f0, 0x458($a0)
    ctx->pc = 0x137ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1112), bits); }
    // 0x137ef4: 0xac860410  sw          $a2, 0x410($a0)
    ctx->pc = 0x137ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 6));
    // 0x137ef8: 0xa080041c  sb          $zero, 0x41C($a0)
    ctx->pc = 0x137ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1052), (uint8_t)GPR_U32(ctx, 0));
    // 0x137efc: 0xe4800428  swc1        $f0, 0x428($a0)
    ctx->pc = 0x137efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1064), bits); }
    // 0x137f00: 0xa080042c  sb          $zero, 0x42C($a0)
    ctx->pc = 0x137f00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1068), (uint8_t)GPR_U32(ctx, 0));
    // 0x137f04: 0xe4800434  swc1        $f0, 0x434($a0)
    ctx->pc = 0x137f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1076), bits); }
    // 0x137f08: 0xe4820438  swc1        $f2, 0x438($a0)
    ctx->pc = 0x137f08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1080), bits); }
    // 0x137f0c: 0xa080043c  sb          $zero, 0x43C($a0)
    ctx->pc = 0x137f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1084), (uint8_t)GPR_U32(ctx, 0));
    // 0x137f10: 0xe4800444  swc1        $f0, 0x444($a0)
    ctx->pc = 0x137f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1092), bits); }
    // 0x137f14: 0xa087044c  sb          $a3, 0x44C($a0)
    ctx->pc = 0x137f14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1100), (uint8_t)GPR_U32(ctx, 7));
    // 0x137f18: 0x3e00008  jr          $ra
    ctx->pc = 0x137F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F18u;
        // 0x137f1c: 0xe4800454  swc1        $f0, 0x454($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137F20u;
}
