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

// Function: sub_00136030
// Address: 0x136030 - 0x1360c8
void sub_00136030_0x136030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136030_0x136030");
#endif

    switch (ctx->pc) {
        case 0x13608cu: goto label_13608c;
        case 0x13609cu: goto label_13609c;
        case 0x1360acu: goto label_1360ac;
        default: break;
    }

    ctx->pc = 0x136030u;

    // 0x136030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136034: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136038: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13603c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13603cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136044: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x136044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136048: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x136048u;
    {
        const bool branch_taken_0x136048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136048u;
        // 0x13604c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136048) {
            ctx->pc = 0x1360ACu;
            goto label_1360ac;
        }
    }
    ctx->pc = 0x136050u;
    // 0x136050: 0x9223046c  lbu         $v1, 0x46C($s1)
    ctx->pc = 0x136050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x136054: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x136054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x136058: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x136058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13605c: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x13605cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x136060: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x136064: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x136064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x136068: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x136068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13606c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13606cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136070: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x136070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x136074: 0x8c90020c  lw          $s0, 0x20C($a0)
    ctx->pc = 0x136074u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x136078: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x136078u;
    {
        const bool branch_taken_0x136078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136078u;
        // 0x13607c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136078) {
            ctx->pc = 0x1360ACu;
            goto label_1360ac;
        }
    }
    ctx->pc = 0x136080u;
    // 0x136080: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136084: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x136084u;
    SET_GPR_U32(ctx, 31, 0x13608Cu);
    ctx->pc = 0x136088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136084u;
    // 0x136088: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x136084u, 0x13608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13608Cu;
label_13608c:
    // 0x13608c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13608cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136094: 0xc04dfe0  jal         func_137F80
    ctx->pc = 0x136094u;
    SET_GPR_U32(ctx, 31, 0x13609Cu);
    ctx->pc = 0x136098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136094u;
    // 0x136098: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F80u, 0x136094u, 0x13609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13609Cu;
label_13609c:
    // 0x13609c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13609cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1360a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360a4: 0xc04dff8  jal         func_137FE0
    ctx->pc = 0x1360A4u;
    SET_GPR_U32(ctx, 31, 0x1360ACu);
    ctx->pc = 0x1360A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1360A4u;
    // 0x1360a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137FE0u, 0x1360A4u, 0x1360ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360ACu;
label_1360ac:
    // 0x1360ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1360acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1360b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1360b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1360b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1360b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1360b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1360b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1360bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1360BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1360C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360BCu;
        // 0x1360c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1360BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1360C4u;
    // 0x1360c4: 0x0  nop
    ctx->pc = 0x1360c4u;
    // NOP
    ctx->pc = 0x1360c8u;
}
