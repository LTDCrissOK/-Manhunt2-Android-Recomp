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

// Function: sub_00248758
// Address: 0x248758 - 0x2487a0
void sub_00248758_0x248758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248758_0x248758");
#endif

    switch (ctx->pc) {
        case 0x24876cu: goto label_24876c;
        default: break;
    }

    ctx->pc = 0x248758u;

    // 0x248758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24875c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24875cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x248760: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x248760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x248764: 0xc092178  jal         func_2485E0
    ctx->pc = 0x248764u;
    SET_GPR_U32(ctx, 31, 0x24876Cu);
    ctx->pc = 0x248768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248764u;
    // 0x248768: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2485E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2485E0u, 0x248764u, 0x24876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24876Cu;
label_24876c:
    // 0x24876c: 0xc6000500  lwc1        $f0, 0x500($s0)
    ctx->pc = 0x24876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248770: 0xc60104fc  lwc1        $f1, 0x4FC($s0)
    ctx->pc = 0x248770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248774: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x248774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x248778: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x248778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24877c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x24877cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x248780: 0xe4410174  swc1        $f1, 0x174($v0)
    ctx->pc = 0x248780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 372), bits); }
    // 0x248784: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x248784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248788: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x248788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24878c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24878cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x248790: 0xe4400178  swc1        $f0, 0x178($v0)
    ctx->pc = 0x248790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
    // 0x248794: 0x3e00008  jr          $ra
    ctx->pc = 0x248794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248794u;
        // 0x248798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24879Cu;
    // 0x24879c: 0x0  nop
    ctx->pc = 0x24879cu;
    // NOP
    ctx->pc = 0x2487a0u;
}
