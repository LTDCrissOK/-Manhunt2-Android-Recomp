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

// Function: sub_00297220
// Address: 0x297220 - 0x297288
void sub_00297220_0x297220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297220_0x297220");
#endif

    switch (ctx->pc) {
        case 0x297234u: goto label_297234;
        default: break;
    }

    ctx->pc = 0x297220u;

    // 0x297220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297228: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x297228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29722c: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x29722Cu;
    SET_GPR_U32(ctx, 31, 0x297234u);
    ctx->pc = 0x297230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29722Cu;
    // 0x297230: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x29722Cu, 0x297234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297234u;
label_297234:
    // 0x297234: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x297234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x297238: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x297238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x29723c: 0x24633258  addiu       $v1, $v1, 0x3258
    ctx->pc = 0x29723cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12888));
    // 0x297240: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x297240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x297244: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x297244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x297248: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x297248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29724c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29724cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x297250: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x297250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297254: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x297254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x297258: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x297258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29725c: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x29725cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
    // 0x297260: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x297260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x297264: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x297264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x297268: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x297268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x29726c: 0xa2000089  sb          $zero, 0x89($s0)
    ctx->pc = 0x29726cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 137), (uint8_t)GPR_U32(ctx, 0));
    // 0x297270: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x297270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x297274: 0xa2000088  sb          $zero, 0x88($s0)
    ctx->pc = 0x297274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x297278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29727c: 0x3e00008  jr          $ra
    ctx->pc = 0x29727Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29727Cu;
        // 0x297280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29727Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297284u;
    // 0x297284: 0x0  nop
    ctx->pc = 0x297284u;
    // NOP
    ctx->pc = 0x297288u;
}
