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

// Function: sub_003A71A8
// Address: 0x3a71a8 - 0x3a7240
void sub_003A71A8_0x3a71a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A71A8_0x3a71a8");
#endif

    switch (ctx->pc) {
        case 0x3a7208u: goto label_3a7208;
        case 0x3a7218u: goto label_3a7218;
        default: break;
    }

    ctx->pc = 0x3a71a8u;

    // 0x3a71a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a71a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a71ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a71acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a71b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a71b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a71b4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A71B4u;
    {
        const bool branch_taken_0x3a71b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A71B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71B4u;
        // 0x3a71b8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a71b4) {
            ctx->pc = 0x3A71D8u;
            goto label_3a71d8;
        }
    }
    ctx->pc = 0x3A71BCu;
    // 0x3a71bc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a71bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a71c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a71c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a71c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a71c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a71c8: 0x2484e148  addiu       $a0, $a0, -0x1EB8
    ctx->pc = 0x3a71c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959432));
    // 0x3a71cc: 0x80e9d40  j           func_3A7500
    ctx->pc = 0x3A71CCu;
    ctx->pc = 0x3A71D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A71CCu;
    // 0x3a71d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7500u;
    sub_003A7500_0x3a7500(rdram, ctx, runtime); return;
    ctx->pc = 0x3A71D4u;
    // 0x3a71d4: 0x0  nop
    ctx->pc = 0x3a71d4u;
    // NOP
label_3a71d8:
    // 0x3a71d8: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x3a71d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3a71dc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A71DCu;
    {
        const bool branch_taken_0x3a71dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a71dc) {
            ctx->pc = 0x3A71E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A71DCu;
            // 0x3a71e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7220u;
            goto label_3a7220;
        }
    }
    ctx->pc = 0x3A71E4u;
    // 0x3a71e4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3a71e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3a71e8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A71E8u;
    {
        const bool branch_taken_0x3a71e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71E8u;
        // 0x3a71ec: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a71e8) {
            ctx->pc = 0x3A720Cu;
            goto label_3a720c;
        }
    }
    ctx->pc = 0x3A71F0u;
    // 0x3a71f0: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x3a71f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a71f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a71f8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A71F8u;
    {
        const bool branch_taken_0x3a71f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a71f8) {
            ctx->pc = 0x3A71FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A71F8u;
            // 0x3a71fc: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7210u;
            goto label_3a7210;
        }
    }
    ctx->pc = 0x3A7200u;
    // 0x3a7200: 0xc0e6760  jal         func_399D80
    ctx->pc = 0x3A7200u;
    SET_GPR_U32(ctx, 31, 0x3A7208u);
    ctx->pc = 0x399D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399D80u, 0x3A7200u, 0x3A7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7208u;
label_3a7208:
    // 0x3a7208: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a7208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_3a720c:
    // 0x3a720c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3a720cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_3a7210:
    // 0x3a7210: 0xc0e9c1c  jal         func_3A7070
    ctx->pc = 0x3A7210u;
    SET_GPR_U32(ctx, 31, 0x3A7218u);
    ctx->pc = 0x3A7214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7210u;
    // 0x3a7214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7070u, 0x3A7210u, 0x3A7218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7218u;
label_3a7218:
    // 0x3a7218: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3a7218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x3a721c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a721cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a7220:
    // 0x3a7220: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a7220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7224: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7224u;
        // 0x3a7228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A722Cu;
    // 0x3a722c: 0x0  nop
    ctx->pc = 0x3a722cu;
    // NOP
    // 0x3a7230: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a7230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a7234: 0x0  nop
    ctx->pc = 0x3a7234u;
    // NOP
    // 0x3a7238: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a7238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a723c: 0x0  nop
    ctx->pc = 0x3a723cu;
    // NOP
    ctx->pc = 0x3a7240u;
}
