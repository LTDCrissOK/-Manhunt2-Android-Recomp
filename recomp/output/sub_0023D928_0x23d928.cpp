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

// Function: sub_0023D928
// Address: 0x23d928 - 0x23d9c8
void sub_0023D928_0x23d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D928_0x23d928");
#endif

    switch (ctx->pc) {
        case 0x23d954u: goto label_23d954;
        case 0x23d964u: goto label_23d964;
        case 0x23d974u: goto label_23d974;
        case 0x23d990u: goto label_23d990;
        default: break;
    }

    ctx->pc = 0x23d928u;

    // 0x23d928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23d928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23d92c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23d930: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23d930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23d934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23d938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23d93c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x23d940: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23d940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x23d944: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23D944u;
    {
        const bool branch_taken_0x23d944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d944) {
            ctx->pc = 0x23D988u;
            goto label_23d988;
        }
    }
    ctx->pc = 0x23D94Cu;
    // 0x23d94c: 0xc08da92  jal         func_236A48
    ctx->pc = 0x23D94Cu;
    SET_GPR_U32(ctx, 31, 0x23D954u);
    ctx->pc = 0x23D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D94Cu;
    // 0x23d950: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x23D94Cu, 0x23D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D954u;
label_23d954:
    // 0x23d954: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x23D954u;
    {
        const bool branch_taken_0x23d954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d954) {
            ctx->pc = 0x23D958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D954u;
            // 0x23d958: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D980u;
            goto label_23d980;
        }
    }
    ctx->pc = 0x23D95Cu;
    // 0x23d95c: 0xc08db10  jal         func_236C40
    ctx->pc = 0x23D95Cu;
    SET_GPR_U32(ctx, 31, 0x23D964u);
    ctx->pc = 0x23D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D95Cu;
    // 0x23d960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C40u, 0x23D95Cu, 0x23D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D964u;
label_23d964:
    // 0x23d964: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D964u;
    {
        const bool branch_taken_0x23d964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d964) {
            ctx->pc = 0x23D968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D964u;
            // 0x23d968: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D980u;
            goto label_23d980;
        }
    }
    ctx->pc = 0x23D96Cu;
    // 0x23d96c: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x23D96Cu;
    SET_GPR_U32(ctx, 31, 0x23D974u);
    ctx->pc = 0x23D970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D96Cu;
    // 0x23d970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x23D96Cu, 0x23D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D974u;
label_23d974:
    // 0x23d974: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D974u;
    {
        const bool branch_taken_0x23d974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D974u;
        // 0x23d978: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d974) {
            ctx->pc = 0x23D994u;
            goto label_23d994;
        }
    }
    ctx->pc = 0x23D97Cu;
    // 0x23d97c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23d97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d980:
    // 0x23d980: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23D980u;
    {
        const bool branch_taken_0x23d980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D980u;
        // 0x23d984: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d980) {
            ctx->pc = 0x23D994u;
            goto label_23d994;
        }
    }
    ctx->pc = 0x23D988u;
label_23d988:
    // 0x23d988: 0xc08da92  jal         func_236A48
    ctx->pc = 0x23D988u;
    SET_GPR_U32(ctx, 31, 0x23D990u);
    ctx->pc = 0x23D98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D988u;
    // 0x23d98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x23D988u, 0x23D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D990u;
label_23d990:
    // 0x23d990: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23d990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23d994:
    // 0x23d994: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D994u;
    {
        const bool branch_taken_0x23d994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D994u;
        // 0x23d998: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d994) {
            ctx->pc = 0x23D9ACu;
            goto label_23d9ac;
        }
    }
    ctx->pc = 0x23D99Cu;
    // 0x23d99c: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x23d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x23d9a0: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x23d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x23d9a4: 0x2442ffeb  addiu       $v0, $v0, -0x15
    ctx->pc = 0x23d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
    // 0x23d9a8: 0x2c440003  sltiu       $a0, $v0, 0x3
    ctx->pc = 0x23d9a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_23d9ac:
    // 0x23d9ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d9b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23d9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23d9b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23d9b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23d9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x23D9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9BCu;
        // 0x23d9c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D9C4u;
    // 0x23d9c4: 0x0  nop
    ctx->pc = 0x23d9c4u;
    // NOP
    ctx->pc = 0x23d9c8u;
}
