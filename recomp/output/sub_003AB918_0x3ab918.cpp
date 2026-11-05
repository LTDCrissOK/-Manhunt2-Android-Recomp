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

// Function: sub_003AB918
// Address: 0x3ab918 - 0x3ab970
void sub_003AB918_0x3ab918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB918_0x3ab918");
#endif

    switch (ctx->pc) {
        case 0x3ab95cu: goto label_3ab95c;
        default: break;
    }

    ctx->pc = 0x3ab918u;

    // 0x3ab918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ab918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ab91c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AB91Cu;
    {
        const bool branch_taken_0x3ab91c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB91Cu;
        // 0x3ab920: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab91c) {
            ctx->pc = 0x3AB938u;
            goto label_3ab938;
        }
    }
    ctx->pc = 0x3AB924u;
    // 0x3ab924: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ab928: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3ab92c: 0x2484f0e8  addiu       $a0, $a0, -0xF18
    ctx->pc = 0x3ab92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963432));
    // 0x3ab930: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB930u;
    {
        const bool branch_taken_0x3ab930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB930u;
        // 0x3ab934: 0x24a5f098  addiu       $a1, $a1, -0xF68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab930) {
            ctx->pc = 0x3AB954u;
            goto label_3ab954;
        }
    }
    ctx->pc = 0x3AB938u;
label_3ab938:
    // 0x3ab938: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x3ab938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ab93c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB93Cu;
    {
        const bool branch_taken_0x3ab93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab93c) {
            ctx->pc = 0x3AB940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB93Cu;
            // 0x3ab940: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB960u;
            goto label_3ab960;
        }
    }
    ctx->pc = 0x3AB944u;
    // 0x3ab944: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ab948: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3ab94c: 0x2484f0f8  addiu       $a0, $a0, -0xF08
    ctx->pc = 0x3ab94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963448));
    // 0x3ab950: 0x24a5f0c8  addiu       $a1, $a1, -0xF38
    ctx->pc = 0x3ab950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
label_3ab954:
    // 0x3ab954: 0xc0ead68  jal         func_3AB5A0
    ctx->pc = 0x3AB954u;
    SET_GPR_U32(ctx, 31, 0x3AB95Cu);
    ctx->pc = 0x3AB5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB5A0u, 0x3AB954u, 0x3AB95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB95Cu;
label_3ab95c:
    // 0x3ab95c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ab95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ab960:
    // 0x3ab960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ab960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab964: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB964u;
        // 0x3ab968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB96Cu;
    // 0x3ab96c: 0x0  nop
    ctx->pc = 0x3ab96cu;
    // NOP
    ctx->pc = 0x3ab970u;
}
