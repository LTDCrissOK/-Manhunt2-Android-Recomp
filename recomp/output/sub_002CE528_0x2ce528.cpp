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

// Function: sub_002CE528
// Address: 0x2ce528 - 0x2ce588
void sub_002CE528_0x2ce528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE528_0x2ce528");
#endif

    ctx->pc = 0x2ce528u;

    // 0x2ce528: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ce528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ce52c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ce52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ce530: 0x8ca32c24  lw          $v1, 0x2C24($a1)
    ctx->pc = 0x2ce530u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482C24u));
    // 0x2ce534: 0x8c442c30  lw          $a0, 0x2C30($v0)
    ctx->pc = 0x2ce534u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482C30u));
    // 0x2ce538: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ce538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ce53c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CE53Cu;
    {
        const bool branch_taken_0x2ce53c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE53Cu;
        // 0x2ce540: 0xaca32c24  sw          $v1, 0x2C24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 11300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce53c) {
            ctx->pc = 0x2CE56Cu;
            goto label_2ce56c;
        }
    }
    ctx->pc = 0x2CE544u;
    // 0x2ce544: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ce544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ce548: 0x8ca42c34  lw          $a0, 0x2C34($a1)
    ctx->pc = 0x2ce548u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482C34u));
    // 0x2ce54c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2ce54cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ce550: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE550u;
    {
        const bool branch_taken_0x2ce550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce550) {
            ctx->pc = 0x2CE56Cu;
            goto label_2ce56c;
        }
    }
    ctx->pc = 0x2CE558u;
    // 0x2ce558: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ce558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ce55c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ce55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ce560: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE560u;
    {
        const bool branch_taken_0x2ce560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE560u;
        // 0x2ce564: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce560) {
            ctx->pc = 0x2CE56Cu;
            goto label_2ce56c;
        }
    }
    ctx->pc = 0x2CE568u;
    // 0x2ce568: 0xaca22c34  sw          $v0, 0x2C34($a1)
    ctx->pc = 0x2ce568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11316), GPR_U32(ctx, 2));
label_2ce56c:
    // 0x2ce56c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE574u;
    // 0x2ce574: 0x0  nop
    ctx->pc = 0x2ce574u;
    // NOP
    // 0x2ce578: 0x0  nop
    ctx->pc = 0x2ce578u;
    // NOP
    // 0x2ce57c: 0x0  nop
    ctx->pc = 0x2ce57cu;
    // NOP
    // 0x2ce580: 0x0  nop
    ctx->pc = 0x2ce580u;
    // NOP
    // 0x2ce584: 0x0  nop
    ctx->pc = 0x2ce584u;
    // NOP
    ctx->pc = 0x2ce588u;
}
