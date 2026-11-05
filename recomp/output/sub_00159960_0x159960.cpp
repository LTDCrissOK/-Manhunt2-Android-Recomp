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

// Function: sub_00159960
// Address: 0x159960 - 0x1599d8
void sub_00159960_0x159960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159960_0x159960");
#endif

    switch (ctx->pc) {
        case 0x1599acu: goto label_1599ac;
        case 0x1599bcu: goto label_1599bc;
        case 0x1599ccu: goto label_1599cc;
        default: break;
    }

    ctx->pc = 0x159960u;

    // 0x159960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159964: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x159964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x159968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15996c: 0x8c8302e0  lw          $v1, 0x2E0($a0)
    ctx->pc = 0x15996cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x159970: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x159970u;
    {
        const bool branch_taken_0x159970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159970u;
        // 0x159974: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159970) {
            ctx->pc = 0x1599C4u;
            goto label_1599c4;
        }
    }
    ctx->pc = 0x159978u;
    // 0x159978: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159978u;
    {
        const bool branch_taken_0x159978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159978u;
        // 0x15997c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159978) {
            ctx->pc = 0x159990u;
            goto label_159990;
        }
    }
    ctx->pc = 0x159980u;
    // 0x159980: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x159980u;
    {
        const bool branch_taken_0x159980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159980u;
        // 0x159984: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159980) {
            ctx->pc = 0x1599A4u;
            goto label_1599a4;
        }
    }
    ctx->pc = 0x159988u;
    // 0x159988: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x159988u;
    {
        const bool branch_taken_0x159988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159988) {
            ctx->pc = 0x1599D0u;
            goto label_1599d0;
        }
    }
    ctx->pc = 0x159990u;
label_159990:
    // 0x159990: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x159990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x159994: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x159994u;
    {
        const bool branch_taken_0x159994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159994u;
        // 0x159998: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159994) {
            ctx->pc = 0x1599B4u;
            goto label_1599b4;
        }
    }
    ctx->pc = 0x15999Cu;
    // 0x15999c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15999Cu;
    {
        const bool branch_taken_0x15999c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15999c) {
            ctx->pc = 0x1599D0u;
            goto label_1599d0;
        }
    }
    ctx->pc = 0x1599A4u;
label_1599a4:
    // 0x1599a4: 0xc056676  jal         func_1599D8
    ctx->pc = 0x1599A4u;
    SET_GPR_U32(ctx, 31, 0x1599ACu);
    ctx->pc = 0x1599D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1599D8u, 0x1599A4u, 0x1599ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1599ACu;
label_1599ac:
    // 0x1599ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1599ACu;
    {
        const bool branch_taken_0x1599ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599ACu;
        // 0x1599b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599ac) {
            ctx->pc = 0x1599D0u;
            goto label_1599d0;
        }
    }
    ctx->pc = 0x1599B4u;
label_1599b4:
    // 0x1599b4: 0xc056698  jal         func_159A60
    ctx->pc = 0x1599B4u;
    SET_GPR_U32(ctx, 31, 0x1599BCu);
    ctx->pc = 0x159A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A60u, 0x1599B4u, 0x1599BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1599BCu;
label_1599bc:
    // 0x1599bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1599BCu;
    {
        const bool branch_taken_0x1599bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599BCu;
        // 0x1599c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599bc) {
            ctx->pc = 0x1599D0u;
            goto label_1599d0;
        }
    }
    ctx->pc = 0x1599C4u;
label_1599c4:
    // 0x1599c4: 0xc056698  jal         func_159A60
    ctx->pc = 0x1599C4u;
    SET_GPR_U32(ctx, 31, 0x1599CCu);
    ctx->pc = 0x159A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A60u, 0x1599C4u, 0x1599CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1599CCu;
label_1599cc:
    // 0x1599cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1599ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1599d0:
    // 0x1599d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1599D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1599D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599D0u;
        // 0x1599d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1599D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1599D8u;
}
