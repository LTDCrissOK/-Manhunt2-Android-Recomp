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

// Function: sub_001A6470
// Address: 0x1a6470 - 0x1a64e0
void sub_001A6470_0x1a6470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6470_0x1a6470");
#endif

    switch (ctx->pc) {
        case 0x1a64d0u: goto label_1a64d0;
        default: break;
    }

    ctx->pc = 0x1a6470u;

    // 0x1a6470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6478: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x1a6478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x1a647c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1a647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1a6480: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1a6480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1a6484: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A6484u;
    {
        const bool branch_taken_0x1a6484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6484u;
        // 0x1a6488: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6484) {
            ctx->pc = 0x1A64C8u;
            goto label_1a64c8;
        }
    }
    ctx->pc = 0x1A648Cu;
    // 0x1a648c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1a648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1a6490: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6494: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x1a6494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x1a6498: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1a6498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a649c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A649Cu;
    {
        const bool branch_taken_0x1a649c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A649Cu;
        // 0x1a64a0: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a649c) {
            ctx->pc = 0x1A64B4u;
            goto label_1a64b4;
        }
    }
    ctx->pc = 0x1A64A4u;
    // 0x1a64a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A64A4u;
    {
        const bool branch_taken_0x1a64a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64A4u;
        // 0x1a64a8: 0x2462ffbf  addiu       $v0, $v1, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64a4) {
            ctx->pc = 0x1A64B8u;
            goto label_1a64b8;
        }
    }
    ctx->pc = 0x1A64ACu;
    // 0x1a64ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A64ACu;
    {
        const bool branch_taken_0x1a64ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A64B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64ACu;
        // 0x1a64b0: 0x2405036a  addiu       $a1, $zero, 0x36A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 874));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64ac) {
            ctx->pc = 0x1A64C4u;
            goto label_1a64c4;
        }
    }
    ctx->pc = 0x1A64B4u;
label_1a64b4:
    // 0x1a64b4: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x1a64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
label_1a64b8:
    // 0x1a64b8: 0x2403036b  addiu       $v1, $zero, 0x36B
    ctx->pc = 0x1a64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 875));
    // 0x1a64bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a64bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a64c0: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1a64c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_1a64c4:
    // 0x1a64c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a64c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a64c8:
    // 0x1a64c8: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A64C8u;
    SET_GPR_U32(ctx, 31, 0x1A64D0u);
    ctx->pc = 0x1A64CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A64C8u;
    // 0x1a64cc: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A64C8u, 0x1A64D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A64D0u;
label_1a64d0:
    // 0x1a64d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a64d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a64d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A64D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64D4u;
        // 0x1a64d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A64D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A64DCu;
    // 0x1a64dc: 0x0  nop
    ctx->pc = 0x1a64dcu;
    // NOP
    ctx->pc = 0x1a64e0u;
}
