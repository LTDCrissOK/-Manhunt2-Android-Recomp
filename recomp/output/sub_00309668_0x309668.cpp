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

// Function: sub_00309668
// Address: 0x309668 - 0x3096f8
void sub_00309668_0x309668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309668_0x309668");
#endif

    switch (ctx->pc) {
        case 0x3096a0u: goto label_3096a0;
        case 0x3096c8u: goto label_3096c8;
        case 0x3096d0u: goto label_3096d0;
        default: break;
    }

    ctx->pc = 0x309668u;

    // 0x309668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x309668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30966c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x309670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x309670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309678: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x309678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30967c: 0x262412c0  addiu       $a0, $s1, 0x12C0
    ctx->pc = 0x30967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4800));
    // 0x309680: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x309680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x309684: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x309684u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309688: 0xae201310  sw          $zero, 0x1310($s1)
    ctx->pc = 0x309688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4880), GPR_U32(ctx, 0));
    // 0x30968c: 0xae20130c  sw          $zero, 0x130C($s1)
    ctx->pc = 0x30968cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4876), GPR_U32(ctx, 0));
    // 0x309690: 0xae2012e0  sw          $zero, 0x12E0($s1)
    ctx->pc = 0x309690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4832), GPR_U32(ctx, 0));
    // 0x309694: 0xae2012dc  sw          $zero, 0x12DC($s1)
    ctx->pc = 0x309694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4828), GPR_U32(ctx, 0));
    // 0x309698: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x309698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x30969c: 0x0  nop
    ctx->pc = 0x30969cu;
    // NOP
label_3096a0:
    // 0x3096a0: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x3096a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x3096a4: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x3096a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x3096a8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3096a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3096ac: 0x0  nop
    ctx->pc = 0x3096acu;
    // NOP
    // 0x3096b0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3096B0u;
    {
        const bool branch_taken_0x3096b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3096b0) {
            ctx->pc = 0x3096B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3096B0u;
            // 0x3096b4: 0xac600020  sw          $zero, 0x20($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3096A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3096a0;
        }
    }
    ctx->pc = 0x3096B8u;
    // 0x3096b8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3096b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3096bc: 0x261212c0  addiu       $s2, $s0, 0x12C0
    ctx->pc = 0x3096bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
    // 0x3096c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3096c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3096c4: 0x0  nop
    ctx->pc = 0x3096c4u;
    // NOP
label_3096c8:
    // 0x3096c8: 0xc0c2568  jal         func_3095A0
    ctx->pc = 0x3096C8u;
    SET_GPR_U32(ctx, 31, 0x3096D0u);
    ctx->pc = 0x3096CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3096C8u;
    // 0x3096cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3095A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3095A0u, 0x3096C8u, 0x3096D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3096D0u;
label_3096d0:
    // 0x3096d0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x3096d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3096d4: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x3096d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3096d8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3096D8u;
    {
        const bool branch_taken_0x3096d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3096DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096D8u;
        // 0x3096dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096d8) {
            ctx->pc = 0x3096C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3096c8;
        }
    }
    ctx->pc = 0x3096E0u;
    // 0x3096e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3096e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3096e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3096e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3096e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3096e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3096ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3096ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3096f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3096F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3096F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096F0u;
        // 0x3096f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3096F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3096F8u;
}
