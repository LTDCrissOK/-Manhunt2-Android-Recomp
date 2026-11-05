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

// Function: sub_00113C90
// Address: 0x113c90 - 0x113d20
void sub_00113C90_0x113c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113C90_0x113c90");
#endif

    ctx->pc = 0x113c90u;

    // 0x113c90: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x113c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x113c94: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x113c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x113c98: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x113c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x113c9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113ca0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x113ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x113ca4: 0x8c650108  lw          $a1, 0x108($v1)
    ctx->pc = 0x113ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x113ca8: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x113CA8u;
    {
        const bool branch_taken_0x113ca8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x113ca8) {
            ctx->pc = 0x113D14u;
            goto label_113d14;
        }
    }
    ctx->pc = 0x113CB0u;
    // 0x113cb0: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x113cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x113cb4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x113CB4u;
    {
        const bool branch_taken_0x113cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113cb4) {
            ctx->pc = 0x113D14u;
            goto label_113d14;
        }
    }
    ctx->pc = 0x113CBCu;
    // 0x113cbc: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x113cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x113cc0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x113CC0u;
    {
        const bool branch_taken_0x113cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113cc0) {
            ctx->pc = 0x113D14u;
            goto label_113d14;
        }
    }
    ctx->pc = 0x113CC8u;
    // 0x113cc8: 0xdca31020  ld          $v1, 0x1020($a1)
    ctx->pc = 0x113cc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
    // 0x113ccc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x113cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x113cd0: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x113cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x113cd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x113cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x113cd8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x113CD8u;
    {
        const bool branch_taken_0x113cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113cd8) {
            ctx->pc = 0x113CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113CD8u;
            // 0x113cdc: 0xdca21020  ld          $v0, 0x1020($a1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113CFCu;
            goto label_113cfc;
        }
    }
    ctx->pc = 0x113CE0u;
    // 0x113ce0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x113ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x113ce4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x113ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x113ce8: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x113ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x113cec: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x113cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x113cf0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x113cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x113cf4: 0xfca21020  sd          $v0, 0x1020($a1)
    ctx->pc = 0x113cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
    // 0x113cf8: 0xdca21020  ld          $v0, 0x1020($a1)
    ctx->pc = 0x113cf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
label_113cfc:
    // 0x113cfc: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x113cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x113d00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x113d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x113d04: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x113d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x113d08: 0x3463007f  ori         $v1, $v1, 0x7F
    ctx->pc = 0x113d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)127);
    // 0x113d0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x113d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x113d10: 0xfca21020  sd          $v0, 0x1020($a1)
    ctx->pc = 0x113d10u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
label_113d14:
    // 0x113d14: 0x3e00008  jr          $ra
    ctx->pc = 0x113D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113D1Cu;
    // 0x113d1c: 0x0  nop
    ctx->pc = 0x113d1cu;
    // NOP
    ctx->pc = 0x113d20u;
}
