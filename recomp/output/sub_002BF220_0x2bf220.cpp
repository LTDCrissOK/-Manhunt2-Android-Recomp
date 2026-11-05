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

// Function: sub_002BF220
// Address: 0x2bf220 - 0x2bf280
void sub_002BF220_0x2bf220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF220_0x2bf220");
#endif

    switch (ctx->pc) {
        case 0x2bf234u: goto label_2bf234;
        case 0x2bf248u: goto label_2bf248;
        case 0x2bf268u: goto label_2bf268;
        default: break;
    }

    ctx->pc = 0x2bf220u;

    // 0x2bf220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf228: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bf228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bf22c: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BF22Cu;
    SET_GPR_U32(ctx, 31, 0x2BF234u);
    ctx->pc = 0x2BF230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF22Cu;
    // 0x2bf230: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BF22Cu, 0x2BF234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF234u;
label_2bf234:
    // 0x2bf234: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bf234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bf238: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bf238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bf23c: 0x24633b48  addiu       $v1, $v1, 0x3B48
    ctx->pc = 0x2bf23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15176));
    // 0x2bf240: 0xc0b0326  jal         func_2C0C98
    ctx->pc = 0x2BF240u;
    SET_GPR_U32(ctx, 31, 0x2BF248u);
    ctx->pc = 0x2BF244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF240u;
    // 0x2bf244: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0C98u, 0x2BF240u, 0x2BF248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF248u;
label_2bf248:
    // 0x2bf248: 0x24032008  addiu       $v1, $zero, 0x2008
    ctx->pc = 0x2bf248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x2bf24c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bf24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bf250: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bf250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bf254: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bf254u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bf258: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bf258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf25c: 0x2484513c  addiu       $a0, $a0, 0x513C
    ctx->pc = 0x2bf25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20796));
    // 0x2bf260: 0xc0f9ef4  jal         func_3E7BD0
    ctx->pc = 0x2BF260u;
    SET_GPR_U32(ctx, 31, 0x2BF268u);
    ctx->pc = 0x2BF264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF260u;
    // 0x2bf264: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7BD0u, 0x2BF260u, 0x2BF268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF268u;
label_2bf268:
    // 0x2bf268: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bf268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bf26c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bf26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf270: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bf270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf278: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF278u;
        // 0x2bf27c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF280u;
}
