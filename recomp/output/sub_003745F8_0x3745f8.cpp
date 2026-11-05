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

// Function: sub_003745F8
// Address: 0x3745f8 - 0x374660
void sub_003745F8_0x3745f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003745F8_0x3745f8");
#endif

    ctx->pc = 0x3745f8u;

    // 0x3745f8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3745f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3745fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3745fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374600: 0x8cc2cd08  lw          $v0, -0x32F8($a2)
    ctx->pc = 0x374600u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD08u));
    // 0x374604: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x374604u;
    {
        const bool branch_taken_0x374604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x374608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374604u;
        // 0x374608: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374604) {
            ctx->pc = 0x37461Cu;
            goto label_37461c;
        }
    }
    ctx->pc = 0x37460Cu;
    // 0x37460c: 0xacc5cd08  sw          $a1, -0x32F8($a2)
    ctx->pc = 0x37460cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954248), GPR_U32(ctx, 5));
    // 0x374610: 0x8c62cd00  lw          $v0, -0x3300($v1)
    ctx->pc = 0x374610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954240)));
    // 0x374614: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x374614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x374618: 0xac62cd00  sw          $v0, -0x3300($v1)
    ctx->pc = 0x374618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954240), GPR_U32(ctx, 2));
label_37461c:
    // 0x37461c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x37461cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x374620: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x374620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x374624: 0x8d02cd04  lw          $v0, -0x32FC($t0)
    ctx->pc = 0x374624u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD04u));
    // 0x374628: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x374628u;
    {
        const bool branch_taken_0x374628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374628u;
        // 0x37462c: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374628) {
            ctx->pc = 0x374658u;
            goto label_374658;
        }
    }
    ctx->pc = 0x374630u;
    // 0x374630: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x374630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x374634: 0x8ce6cd00  lw          $a2, -0x3300($a3)
    ctx->pc = 0x374634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954240)));
    // 0x374638: 0x8c642d54  lw          $a0, 0x2D54($v1)
    ctx->pc = 0x374638u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482D54u));
    // 0x37463c: 0x34c20005  ori         $v0, $a2, 0x5
    ctx->pc = 0x37463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    // 0x374640: 0xace2cd00  sw          $v0, -0x3300($a3)
    ctx->pc = 0x374640u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954240), GPR_U32(ctx, 2));
    // 0x374644: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x374644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x374648: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x374648u;
    {
        const bool branch_taken_0x374648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374648u;
        // 0x37464c: 0xad03cd04  sw          $v1, -0x32FC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294954244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374648) {
            ctx->pc = 0x374658u;
            goto label_374658;
        }
    }
    ctx->pc = 0x374650u;
    // 0x374650: 0x34c22005  ori         $v0, $a2, 0x2005
    ctx->pc = 0x374650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8197);
    // 0x374654: 0xace2cd00  sw          $v0, -0x3300($a3)
    ctx->pc = 0x374654u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954240), GPR_U32(ctx, 2));
label_374658:
    // 0x374658: 0x3e00008  jr          $ra
    ctx->pc = 0x374658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374660u;
}
