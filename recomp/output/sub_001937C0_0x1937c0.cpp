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

// Function: sub_001937C0
// Address: 0x1937c0 - 0x193830
void sub_001937C0_0x1937c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001937C0_0x1937c0");
#endif

    switch (ctx->pc) {
        case 0x193810u: goto label_193810;
        default: break;
    }

    ctx->pc = 0x1937c0u;

    // 0x1937c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1937c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1937c4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1937c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1937c8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1937c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1937cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1937ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1937d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1937d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1937d4: 0x8c840ff8  lw          $a0, 0xFF8($a0)
    ctx->pc = 0x1937d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1937d8: 0xc4810138  lwc1        $f1, 0x138($a0)
    ctx->pc = 0x1937d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1937dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1937dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1937e0: 0x0  nop
    ctx->pc = 0x1937e0u;
    // NOP
    // 0x1937e4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1937E4u;
    {
        const bool branch_taken_0x1937e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1937E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937E4u;
        // 0x1937e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937e4) {
            ctx->pc = 0x193824u;
            goto label_193824;
        }
    }
    ctx->pc = 0x1937ECu;
    // 0x1937ec: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x1937ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x1937f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1937f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1937f4: 0x0  nop
    ctx->pc = 0x1937f4u;
    // NOP
    // 0x1937f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1937f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1937fc: 0x0  nop
    ctx->pc = 0x1937fcu;
    // NOP
    // 0x193800: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x193800u;
    {
        const bool branch_taken_0x193800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x193804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193800u;
        // 0x193804: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193800) {
            ctx->pc = 0x193828u;
            goto label_193828;
        }
    }
    ctx->pc = 0x193808u;
    // 0x193808: 0xc072fee  jal         func_1CBFB8
    ctx->pc = 0x193808u;
    SET_GPR_U32(ctx, 31, 0x193810u);
    ctx->pc = 0x1CBFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFB8u, 0x193808u, 0x193810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193810u;
label_193810:
    // 0x193810: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x193810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193814: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x193814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x193818: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x193818u;
    {
        const bool branch_taken_0x193818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193818u;
        // 0x19381c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193818) {
            ctx->pc = 0x193824u;
            goto label_193824;
        }
    }
    ctx->pc = 0x193820u;
    // 0x193820: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x193820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193824:
    // 0x193824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193828:
    // 0x193828: 0x3e00008  jr          $ra
    ctx->pc = 0x193828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193828u;
        // 0x19382c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193830u;
}
