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

// Function: sub_003C0908
// Address: 0x3c0908 - 0x3c0960
void sub_003C0908_0x3c0908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0908_0x3c0908");
#endif

    switch (ctx->pc) {
        case 0x3c0948u: goto label_3c0948;
        default: break;
    }

    ctx->pc = 0x3c0908u;

    // 0x3c0908: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c0908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c090c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3c090cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3c0910: 0x8c48cddc  lw          $t0, -0x3224($v0)
    ctx->pc = 0x3c0910u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3c0914: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c0914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3c0918: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3c0918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c091c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c091cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3c0920: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x3c0920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x3c0924: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3c0924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3c0928: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3c0928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3c092c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c092cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0930: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3c0930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3c0934: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x3c0934u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c0938: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x3c0938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x3c093c: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x3c093cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x3c0940: 0xc0f0d10  jal         func_3C3440
    ctx->pc = 0x3C0940u;
    SET_GPR_U32(ctx, 31, 0x3C0948u);
    ctx->pc = 0x3C0944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0940u;
    // 0x3c0944: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3440u, 0x3C0940u, 0x3C0948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0948u;
label_3c0948:
    // 0x3c0948: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c0948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c094c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3c094cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c0950: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3c0950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c0954: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0954u;
        // 0x3c0958: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C095Cu;
    // 0x3c095c: 0x0  nop
    ctx->pc = 0x3c095cu;
    // NOP
    ctx->pc = 0x3c0960u;
}
