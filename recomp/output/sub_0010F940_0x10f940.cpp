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

// Function: sub_0010F940
// Address: 0x10f940 - 0x10f978
void sub_0010F940_0x10f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F940_0x10f940");
#endif

    switch (ctx->pc) {
        case 0x10f940u: goto label_10f940;
        case 0x10f944u: goto label_10f944;
        case 0x10f948u: goto label_10f948;
        case 0x10f94cu: goto label_10f94c;
        case 0x10f950u: goto label_10f950;
        case 0x10f954u: goto label_10f954;
        case 0x10f958u: goto label_10f958;
        case 0x10f95cu: goto label_10f95c;
        case 0x10f960u: goto label_10f960;
        case 0x10f964u: goto label_10f964;
        case 0x10f968u: goto label_10f968;
        case 0x10f96cu: goto label_10f96c;
        case 0x10f970u: goto label_10f970;
        case 0x10f974u: goto label_10f974;
        default: break;
    }

    ctx->pc = 0x10f940u;

label_10f940:
    // 0x10f940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10f944:
    // 0x10f944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10f948:
    // 0x10f948: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10f948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10f94c:
    // 0x10f94c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_10f950:
    if (ctx->pc == 0x10F950u) {
        ctx->pc = 0x10F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F94Cu;
        // 0x10f950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F954u;
        goto label_10f954;
    }
    ctx->pc = 0x10F94Cu;
    {
        const bool branch_taken_0x10f94c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F94Cu;
        // 0x10f950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f94c) {
            ctx->pc = 0x10F96Cu;
            goto label_10f96c;
        }
    }
    ctx->pc = 0x10F954u;
label_10f954:
    // 0x10f954: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10f954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10f958:
    // 0x10f958: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x10f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_10f95c:
    // 0x10f95c: 0x40f809  jalr        $v0
label_10f960:
    if (ctx->pc == 0x10F960u) {
        ctx->pc = 0x10F964u;
        goto label_10f964;
    }
    ctx->pc = 0x10F95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10F964u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F95Cu, 0x10F964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F964u;
label_10f964:
    // 0x10f964: 0x10000002  b           . + 4 + (0x2 << 2)
label_10f968:
    if (ctx->pc == 0x10F968u) {
        ctx->pc = 0x10F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F964u;
        // 0x10f968: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F96Cu;
        goto label_10f96c;
    }
    ctx->pc = 0x10F964u;
    {
        const bool branch_taken_0x10f964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F964u;
        // 0x10f968: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f964) {
            ctx->pc = 0x10F970u;
            goto label_10f970;
        }
    }
    ctx->pc = 0x10F96Cu;
label_10f96c:
    // 0x10f96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f970:
    // 0x10f970: 0x3e00008  jr          $ra
label_10f974:
    if (ctx->pc == 0x10F974u) {
        ctx->pc = 0x10F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F970u;
        // 0x10f974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F978u;
        goto label_fallthrough_0x10f970;
    }
    ctx->pc = 0x10F970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F970u;
        // 0x10f974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10f970:
    ctx->pc = 0x10F978u;
}
