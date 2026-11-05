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

// Function: sub_003BADA0
// Address: 0x3bada0 - 0x3bae28
void sub_003BADA0_0x3bada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BADA0_0x3bada0");
#endif

    ctx->pc = 0x3bada0u;

    // 0x3bada0: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x3bada0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3bada4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3bada4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3bada8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3bada8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3badac: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x3badacu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3badb0: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x3badb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x3badb4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3badb4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3badb8: 0x2143e  dsrl32      $v0, $v0, 16
    ctx->pc = 0x3badb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x3badbc: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x3badbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x3badc0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x3badc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x3badc4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3badc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3badc8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3badc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3badcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3badccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3badd0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3badd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3badd4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3badd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3badd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3badd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3baddc: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x3baddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3bade0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bade0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bade4: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x3bade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x3bade8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3bade8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3badec: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3badecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3badf0: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x3badf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x3badf4: 0xc2302f  dsubu       $a2, $a2, $v0
    ctx->pc = 0x3badf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 2));
    // 0x3badf8: 0xa3282f  dsubu       $a1, $a1, $v1
    ctx->pc = 0x3badf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 3));
    // 0x3badfc: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x3badfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x3bae00: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x3bae00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x3bae04: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BAE04u;
    {
        const bool branch_taken_0x3bae04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE04u;
        // 0x3bae08: 0x52938  dsll        $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae04) {
            ctx->pc = 0x3BAE18u;
            goto label_3bae18;
        }
    }
    ctx->pc = 0x3BAE0Cu;
    // 0x3bae0c: 0x64420008  daddiu      $v0, $v0, 0x8
    ctx->pc = 0x3bae0cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)8);
    // 0x3bae10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BAE10u;
    {
        const bool branch_taken_0x3bae10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE10u;
        // 0x3bae14: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae10) {
            ctx->pc = 0x3BAE1Cu;
            goto label_3bae1c;
        }
    }
    ctx->pc = 0x3BAE18u;
label_3bae18:
    // 0x3bae18: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x3bae18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
label_3bae1c:
    // 0x3bae1c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3bae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3bae20: 0x3e00008  jr          $ra
    ctx->pc = 0x3BAE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE20u;
        // 0x3bae24: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BAE28u;
}
