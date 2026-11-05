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

// Function: sub_003AA140
// Address: 0x3aa140 - 0x3aa208
void sub_003AA140_0x3aa140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA140_0x3aa140");
#endif

    switch (ctx->pc) {
        case 0x3aa170u: goto label_3aa170;
        case 0x3aa1f4u: goto label_3aa1f4;
        default: break;
    }

    ctx->pc = 0x3aa140u;

    // 0x3aa140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aa144: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x3aa144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x3aa148: 0x24c2d490  addiu       $v0, $a2, -0x2B70
    ctx->pc = 0x3aa148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956176));
    // 0x3aa14c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aa150: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3aa150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3aa154: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x3aa154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3aa158: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3aa158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa15c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3aa15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa160: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3aa160u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x41D494u));
    // 0x3aa164: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AA164u;
    {
        const bool branch_taken_0x3aa164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA164u;
        // 0x3aa168: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa164) {
            ctx->pc = 0x3AA194u;
            goto label_3aa194;
        }
    }
    ctx->pc = 0x3AA16Cu;
    // 0x3aa16c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3aa16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3aa170:
    // 0x3aa170: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x3aa170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3aa174: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AA174u;
    {
        const bool branch_taken_0x3aa174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA174u;
        // 0x3aa178: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa174) {
            ctx->pc = 0x3AA194u;
            goto label_3aa194;
        }
    }
    ctx->pc = 0x3AA17Cu;
    // 0x3aa17c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3aa17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3aa180: 0x0  nop
    ctx->pc = 0x3aa180u;
    // NOP
    // 0x3aa184: 0x0  nop
    ctx->pc = 0x3aa184u;
    // NOP
    // 0x3aa188: 0x0  nop
    ctx->pc = 0x3aa188u;
    // NOP
    // 0x3aa18c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3AA18Cu;
    {
        const bool branch_taken_0x3aa18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa18c) {
            ctx->pc = 0x3AA190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA18Cu;
            // 0x3aa190: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa170;
        }
    }
    ctx->pc = 0x3AA194u;
label_3aa194:
    // 0x3aa194: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3aa194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3aa198: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3AA198u;
    {
        const bool branch_taken_0x3aa198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA198u;
        // 0x3aa19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa198) {
            ctx->pc = 0x3AA1F8u;
            goto label_3aa1f8;
        }
    }
    ctx->pc = 0x3AA1A0u;
    // 0x3aa1a0: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x3aa1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3aa1a4: 0x24c2d490  addiu       $v0, $a2, -0x2B70
    ctx->pc = 0x3aa1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956176));
    // 0x3aa1a8: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x3aa1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x3aa1ac: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3aa1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3aa1b0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x3aa1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3aa1b4: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3aa1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3aa1b8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3aa1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3aa1bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3aa1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3aa1c0: 0x2463d458  addiu       $v1, $v1, -0x2BA8
    ctx->pc = 0x3aa1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956120));
    // 0x3aa1c4: 0x24c6ed60  addiu       $a2, $a2, -0x12A0
    ctx->pc = 0x3aa1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962528));
    // 0x3aa1c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa1cc: 0x24a59f90  addiu       $a1, $a1, -0x6070
    ctx->pc = 0x3aa1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942608));
    // 0x3aa1d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3aa1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3aa1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa1d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3aa1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3aa1dc: 0xae080014  sw          $t0, 0x14($s0)
    ctx->pc = 0x3aa1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
    // 0x3aa1e0: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x3aa1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x3aa1e4: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x3aa1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x3aa1e8: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3aa1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3aa1ec: 0xc0ea90c  jal         func_3AA430
    ctx->pc = 0x3AA1ECu;
    SET_GPR_U32(ctx, 31, 0x3AA1F4u);
    ctx->pc = 0x3AA1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA1ECu;
    // 0x3aa1f0: 0xae100020  sw          $s0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA430u, 0x3AA1ECu, 0x3AA1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA1F4u;
label_3aa1f4:
    // 0x3aa1f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3aa1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aa1f8:
    // 0x3aa1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa1fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aa1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa200: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA200u;
        // 0x3aa204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA208u;
}
