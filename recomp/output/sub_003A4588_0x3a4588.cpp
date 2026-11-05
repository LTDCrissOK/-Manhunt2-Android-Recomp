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

// Function: sub_003A4588
// Address: 0x3a4588 - 0x3a4620
void sub_003A4588_0x3a4588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4588_0x3a4588");
#endif

    switch (ctx->pc) {
        case 0x3a45a4u: goto label_3a45a4;
        default: break;
    }

    ctx->pc = 0x3a4588u;

    // 0x3a4588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a458c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a458cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4590: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A4590u;
    {
        const bool branch_taken_0x3a4590 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4590u;
        // 0x3a4594: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4590) {
            ctx->pc = 0x3A45B0u;
            goto label_3a45b0;
        }
    }
    ctx->pc = 0x3A4598u;
    // 0x3a4598: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a4598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a459c: 0xc0e8ff0  jal         func_3A3FC0
    ctx->pc = 0x3A459Cu;
    SET_GPR_U32(ctx, 31, 0x3A45A4u);
    ctx->pc = 0x3A45A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A459Cu;
    // 0x3a45a0: 0x24a5d8c8  addiu       $a1, $a1, -0x2738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FC0u, 0x3A459Cu, 0x3A45A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A45A4u;
label_3a45a4:
    // 0x3a45a4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3A45A4u;
    {
        const bool branch_taken_0x3a45a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45A4u;
        // 0x3a45a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45a4) {
            ctx->pc = 0x3A4610u;
            goto label_3a4610;
        }
    }
    ctx->pc = 0x3A45ACu;
    // 0x3a45ac: 0x0  nop
    ctx->pc = 0x3a45acu;
    // NOP
label_3a45b0:
    // 0x3a45b0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A45B0u;
    {
        const bool branch_taken_0x3a45b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45B0u;
        // 0x3a45b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45b0) {
            ctx->pc = 0x3A45C0u;
            goto label_3a45c0;
        }
    }
    ctx->pc = 0x3A45B8u;
    // 0x3a45b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A45B8u;
    {
        const bool branch_taken_0x3a45b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45B8u;
        // 0x3a45bc: 0xace5000c  sw          $a1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45b8) {
            ctx->pc = 0x3A45F0u;
            goto label_3a45f0;
        }
    }
    ctx->pc = 0x3A45C0u;
label_3a45c0:
    // 0x3a45c0: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A45C0u;
    {
        const bool branch_taken_0x3a45c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45C0u;
        // 0x3a45c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45c0) {
            ctx->pc = 0x3A45D8u;
            goto label_3a45d8;
        }
    }
    ctx->pc = 0x3A45C8u;
    // 0x3a45c8: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x3a45c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3a45cc: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x3a45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a45d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A45D0u;
    {
        const bool branch_taken_0x3a45d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45D0u;
        // 0x3a45d4: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45d0) {
            ctx->pc = 0x3A45F4u;
            goto label_3a45f4;
        }
    }
    ctx->pc = 0x3A45D8u;
label_3a45d8:
    // 0x3a45d8: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A45D8u;
    {
        const bool branch_taken_0x3a45d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45D8u;
        // 0x3a45dc: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45d8) {
            ctx->pc = 0x3A45F4u;
            goto label_3a45f4;
        }
    }
    ctx->pc = 0x3A45E0u;
    // 0x3a45e0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x3a45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3a45e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3a45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a45e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A45E8u;
    {
        const bool branch_taken_0x3a45e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A45ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45E8u;
        // 0x3a45ec: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45e8) {
            ctx->pc = 0x3A45F4u;
            goto label_3a45f4;
        }
    }
    ctx->pc = 0x3A45F0u;
label_3a45f0:
    // 0x3a45f0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x3a45f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_3a45f4:
    // 0x3a45f4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x3a45f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3a45f8: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x3a45f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x3a45fc: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x3a45fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a4600: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3a4600u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3a4604: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x3a4604u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3a4608: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x3a4608u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3a460c: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x3a460cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_3a4610:
    // 0x3a4610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4614: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4614u;
        // 0x3a4618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A461Cu;
    // 0x3a461c: 0x0  nop
    ctx->pc = 0x3a461cu;
    // NOP
    ctx->pc = 0x3a4620u;
}
