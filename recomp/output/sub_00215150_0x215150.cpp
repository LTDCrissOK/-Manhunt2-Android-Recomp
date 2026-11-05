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

// Function: sub_00215150
// Address: 0x215150 - 0x2151e0
void sub_00215150_0x215150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215150_0x215150");
#endif

    switch (ctx->pc) {
        case 0x215188u: goto label_215188;
        case 0x2151a8u: goto label_2151a8;
        default: break;
    }

    ctx->pc = 0x215150u;

    // 0x215150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215154: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x215154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x215158: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x215158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21515c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21515cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215160: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x215160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x215164: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x215164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x215168: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x215168u;
    {
        const bool branch_taken_0x215168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215168u;
        // 0x21516c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215168) {
            ctx->pc = 0x2151C8u;
            goto label_2151c8;
        }
    }
    ctx->pc = 0x215170u;
    // 0x215170: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x215170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x215174: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x215174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215178: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x215178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21517c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21517cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215180: 0xc0f769a  jal         func_3DDA68
    ctx->pc = 0x215180u;
    SET_GPR_U32(ctx, 31, 0x215188u);
    ctx->pc = 0x215184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215180u;
    // 0x215184: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDA68u, 0x215180u, 0x215188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215188u;
label_215188:
    // 0x215188: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215188u;
    {
        const bool branch_taken_0x215188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x21518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215188u;
        // 0x21518c: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215188) {
            ctx->pc = 0x215198u;
            goto label_215198;
        }
    }
    ctx->pc = 0x215190u;
    // 0x215190: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x215190u;
    {
        const bool branch_taken_0x215190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215190u;
        // 0x215194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215190) {
            ctx->pc = 0x2151C4u;
            goto label_2151c4;
        }
    }
    ctx->pc = 0x215198u;
label_215198:
    // 0x215198: 0x1070000a  beq         $v1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x215198u;
    {
        const bool branch_taken_0x215198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x21519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215198u;
        // 0x21519c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215198) {
            ctx->pc = 0x2151C4u;
            goto label_2151c4;
        }
    }
    ctx->pc = 0x2151A0u;
    // 0x2151a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2151a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2151a4: 0x0  nop
    ctx->pc = 0x2151a4u;
    // NOP
label_2151a8:
    // 0x2151a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2151a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2151ac: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2151ACu;
    {
        const bool branch_taken_0x2151ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2151B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151ACu;
        // 0x2151b0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2151ac) {
            ctx->pc = 0x2151BCu;
            goto label_2151bc;
        }
    }
    ctx->pc = 0x2151B4u;
    // 0x2151b4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2151b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2151b8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2151b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2151bc:
    // 0x2151bc: 0x5470fffa  bnel        $v1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2151BCu;
    {
        const bool branch_taken_0x2151bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2151bc) {
            ctx->pc = 0x2151C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2151BCu;
            // 0x2151c0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2151A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2151a8;
        }
    }
    ctx->pc = 0x2151C4u;
label_2151c4:
    // 0x2151c4: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x2151c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
label_2151c8:
    // 0x2151c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2151c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2151cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2151ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2151d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2151d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2151d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2151d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2151d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2151D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2151DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151D8u;
        // 0x2151dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2151D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2151E0u;
}
