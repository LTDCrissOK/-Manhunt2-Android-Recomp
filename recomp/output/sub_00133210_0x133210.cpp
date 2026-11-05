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

// Function: sub_00133210
// Address: 0x133210 - 0x133270
void sub_00133210_0x133210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133210_0x133210");
#endif

    switch (ctx->pc) {
        case 0x133238u: goto label_133238;
        case 0x13324cu: goto label_13324c;
        default: break;
    }

    ctx->pc = 0x133210u;

    // 0x133210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133218: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x133218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13321c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13321cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133220: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133224: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x133224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x133228: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x133228u;
    {
        const bool branch_taken_0x133228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133228u;
        // 0x13322c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133228) {
            ctx->pc = 0x133258u;
            goto label_133258;
        }
    }
    ctx->pc = 0x133230u;
    // 0x133230: 0xc04561a  jal         func_115868
    ctx->pc = 0x133230u;
    SET_GPR_U32(ctx, 31, 0x133238u);
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x133230u, 0x133238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133238u;
label_133238:
    // 0x133238: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x133238u;
    {
        const bool branch_taken_0x133238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x13323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133238u;
        // 0x13323c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133238) {
            ctx->pc = 0x13325Cu;
            goto label_13325c;
        }
    }
    ctx->pc = 0x133240u;
    // 0x133240: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x133240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x133244: 0xc043c20  jal         func_10F080
    ctx->pc = 0x133244u;
    SET_GPR_U32(ctx, 31, 0x13324Cu);
    ctx->pc = 0x133248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133244u;
    // 0x133248: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F080u, 0x133244u, 0x13324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13324Cu;
label_13324c:
    // 0x13324c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x13324cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x133250: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x133250u;
    {
        const bool branch_taken_0x133250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133250u;
        // 0x133254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133250) {
            ctx->pc = 0x13325Cu;
            goto label_13325c;
        }
    }
    ctx->pc = 0x133258u;
label_133258:
    // 0x133258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13325c:
    // 0x13325c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13325cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133260: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133268: 0x3e00008  jr          $ra
    ctx->pc = 0x133268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133268u;
        // 0x13326c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133270u;
}
