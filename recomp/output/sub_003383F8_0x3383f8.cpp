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

// Function: sub_003383F8
// Address: 0x3383f8 - 0x3384a0
void sub_003383F8_0x3383f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003383F8_0x3383f8");
#endif

    switch (ctx->pc) {
        case 0x338418u: goto label_338418;
        case 0x338450u: goto label_338450;
        default: break;
    }

    ctx->pc = 0x3383f8u;

    // 0x3383f8: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3383f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x3383fc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3383fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x338400: 0x24446ec0  addiu       $a0, $v0, 0x6EC0
    ctx->pc = 0x338400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28352));
    // 0x338404: 0xac406ec0  sw          $zero, 0x6EC0($v0)
    ctx->pc = 0x338404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B6EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6EC0u, _value); } while (0);
    // 0x338408: 0xac602c94  sw          $zero, 0x2C94($v1)
    ctx->pc = 0x338408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C94u, _value); } while (0);
    // 0x33840c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x33840cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x338410: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x338410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x338414: 0x0  nop
    ctx->pc = 0x338414u;
    // NOP
label_338418:
    // 0x338418: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x338418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x33841c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33841cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x338420: 0x0  nop
    ctx->pc = 0x338420u;
    // NOP
    // 0x338424: 0x0  nop
    ctx->pc = 0x338424u;
    // NOP
    // 0x338428: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x338428u;
    {
        const bool branch_taken_0x338428 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x33842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338428u;
        // 0x33842c: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338428) {
            ctx->pc = 0x338418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338418;
        }
    }
    ctx->pc = 0x338430u;
    // 0x338430: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x338430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x338434: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x338434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x338438: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x338438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x33843c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x33843cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x338440: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x338440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x338444: 0x24426fa8  addiu       $v0, $v0, 0x6FA8
    ctx->pc = 0x338444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28584));
    // 0x338448: 0x2463bf40  addiu       $v1, $v1, -0x40C0
    ctx->pc = 0x338448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950720));
    // 0x33844c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_338450:
    // 0x338450: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x338450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338454: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x338454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x338458: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x338458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33845c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x33845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338460: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x338460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x338464: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x338464u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x338468: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x338468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33846c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x33846cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x338470: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x338470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338474: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x338474u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x338478: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x338478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x33847c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33847cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x338480: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x338480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x338484: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x338484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x338488: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x338488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33848c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x33848cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x338490: 0x481ffef  bgez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x338490u;
    {
        const bool branch_taken_0x338490 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x338494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338490u;
        // 0x338494: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338490) {
            ctx->pc = 0x338450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338450;
        }
    }
    ctx->pc = 0x338498u;
    // 0x338498: 0x3e00008  jr          $ra
    ctx->pc = 0x338498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3384A0u;
}
