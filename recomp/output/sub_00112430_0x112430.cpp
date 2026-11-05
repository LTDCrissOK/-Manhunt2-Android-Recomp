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

// Function: sub_00112430
// Address: 0x112430 - 0x112480
void sub_00112430_0x112430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112430_0x112430");
#endif

    ctx->pc = 0x112430u;

    // 0x112430: 0x8c8201ec  lw          $v0, 0x1EC($a0)
    ctx->pc = 0x112430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 492)));
    // 0x112434: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x112434u;
    {
        const bool branch_taken_0x112434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112434) {
            ctx->pc = 0x112478u;
            goto label_112478;
        }
    }
    ctx->pc = 0x11243Cu;
    // 0x11243c: 0x908201f0  lbu         $v0, 0x1F0($a0)
    ctx->pc = 0x11243cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x112440: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x112440u;
    {
        const bool branch_taken_0x112440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112440u;
        // 0x112444: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112440) {
            ctx->pc = 0x112478u;
            goto label_112478;
        }
    }
    ctx->pc = 0x112448u;
    // 0x112448: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x112448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11244c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11244Cu;
    {
        const bool branch_taken_0x11244c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x112450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11244Cu;
        // 0x112450: 0xa08201f0  sb          $v0, 0x1F0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 496), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11244c) {
            ctx->pc = 0x112478u;
            goto label_112478;
        }
    }
    ctx->pc = 0x112454u;
    // 0x112454: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x112454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x112458: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x112458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x11245c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x11245cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x112460: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112464: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x112464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x112468: 0x8c640108  lw          $a0, 0x108($v1)
    ctx->pc = 0x112468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x11246c: 0x8c820390  lw          $v0, 0x390($a0)
    ctx->pc = 0x11246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x112470: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x112470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x112474: 0xac820390  sw          $v0, 0x390($a0)
    ctx->pc = 0x112474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 912), GPR_U32(ctx, 2));
label_112478:
    // 0x112478: 0x3e00008  jr          $ra
    ctx->pc = 0x112478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112480u;
}
