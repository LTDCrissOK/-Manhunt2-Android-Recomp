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

// Function: sub_002B4590
// Address: 0x2b4590 - 0x2b4610
void sub_002B4590_0x2b4590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4590_0x2b4590");
#endif

    switch (ctx->pc) {
        case 0x2b45b0u: goto label_2b45b0;
        case 0x2b45c0u: goto label_2b45c0;
        default: break;
    }

    ctx->pc = 0x2b4590u;

    // 0x2b4590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4594: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b4594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b4598: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b4598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b459c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b459cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b45a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b45a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b45a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b45a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b45a8: 0xc0eefb2  jal         func_3BBEC8
    ctx->pc = 0x2B45A8u;
    SET_GPR_U32(ctx, 31, 0x2B45B0u);
    ctx->pc = 0x2B45ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45A8u;
    // 0x2b45ac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBEC8u, 0x2B45A8u, 0x2B45B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45B0u;
label_2b45b0:
    // 0x2b45b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b45b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b45b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b45b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b45b8: 0xc0ef0b2  jal         func_3BC2C8
    ctx->pc = 0x2B45B8u;
    SET_GPR_U32(ctx, 31, 0x2B45C0u);
    ctx->pc = 0x2B45BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45B8u;
    // 0x2b45bc: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B45B8u, 0x2B45C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45C0u;
label_2b45c0:
    // 0x2b45c0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2b45c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b45c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B45C4u;
    {
        const bool branch_taken_0x2b45c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45C4u;
        // 0x2b45c8: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45c4) {
            ctx->pc = 0x2B45D4u;
            goto label_2b45d4;
        }
    }
    ctx->pc = 0x2B45CCu;
    // 0x2b45cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B45CCu;
    {
        const bool branch_taken_0x2b45cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45CCu;
        // 0x2b45d0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45cc) {
            ctx->pc = 0x2B45F8u;
            goto label_2b45f8;
        }
    }
    ctx->pc = 0x2B45D4u;
label_2b45d4:
    // 0x2b45d4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B45D4u;
    {
        const bool branch_taken_0x2b45d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45D4u;
        // 0x2b45d8: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45d4) {
            ctx->pc = 0x2B45E8u;
            goto label_2b45e8;
        }
    }
    ctx->pc = 0x2B45DCu;
    // 0x2b45dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b45e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B45E0u;
    {
        const bool branch_taken_0x2b45e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45E0u;
        // 0x2b45e4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45e0) {
            ctx->pc = 0x2B45F8u;
            goto label_2b45f8;
        }
    }
    ctx->pc = 0x2B45E8u;
label_2b45e8:
    // 0x2b45e8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B45E8u;
    {
        const bool branch_taken_0x2b45e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b45e8) {
            ctx->pc = 0x2B45ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B45E8u;
            // 0x2b45ec: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B45F8u;
            goto label_2b45f8;
        }
    }
    ctx->pc = 0x2B45F0u;
    // 0x2b45f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b45f4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2b45f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2b45f8:
    // 0x2b45f8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b45fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b45fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4600: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b4600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4604: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4604u;
        // 0x2b4608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B460Cu;
    // 0x2b460c: 0x0  nop
    ctx->pc = 0x2b460cu;
    // NOP
    ctx->pc = 0x2b4610u;
}
