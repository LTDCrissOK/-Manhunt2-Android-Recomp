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

// Function: sub_00308908
// Address: 0x308908 - 0x308960
void sub_00308908_0x308908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308908_0x308908");
#endif

    switch (ctx->pc) {
        case 0x308908u: goto label_308908;
        case 0x30890cu: goto label_30890c;
        case 0x308910u: goto label_308910;
        case 0x308914u: goto label_308914;
        case 0x308918u: goto label_308918;
        case 0x30891cu: goto label_30891c;
        case 0x308920u: goto label_308920;
        case 0x308924u: goto label_308924;
        case 0x308928u: goto label_308928;
        case 0x30892cu: goto label_30892c;
        case 0x308930u: goto label_308930;
        case 0x308934u: goto label_308934;
        case 0x308938u: goto label_308938;
        case 0x30893cu: goto label_30893c;
        case 0x308940u: goto label_308940;
        case 0x308944u: goto label_308944;
        case 0x308948u: goto label_308948;
        case 0x30894cu: goto label_30894c;
        case 0x308950u: goto label_308950;
        case 0x308954u: goto label_308954;
        case 0x308958u: goto label_308958;
        case 0x30895cu: goto label_30895c;
        default: break;
    }

    ctx->pc = 0x308908u;

label_308908:
    // 0x308908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30890c:
    // 0x30890c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_308910:
    // 0x308910: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x308910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_308914:
    // 0x308914: 0xc09824e  jal         func_260938
label_308918:
    if (ctx->pc == 0x308918u) {
        ctx->pc = 0x308918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308914u;
        // 0x308918: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30891Cu;
        goto label_30891c;
    }
    ctx->pc = 0x308914u;
    SET_GPR_U32(ctx, 31, 0x30891Cu);
    ctx->pc = 0x308918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308914u;
    // 0x308918: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260938u, 0x308914u, 0x30891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30891Cu;
label_30891c:
    // 0x30891c: 0x8e040234  lw          $a0, 0x234($s0)
    ctx->pc = 0x30891cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_308920:
    // 0x308920: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_308924:
    if (ctx->pc == 0x308924u) {
        ctx->pc = 0x308924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308920u;
        // 0x308924: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308928u;
        goto label_308928;
    }
    ctx->pc = 0x308920u;
    {
        const bool branch_taken_0x308920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308920) {
            ctx->pc = 0x308924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308920u;
            // 0x308924: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308950u;
            goto label_308950;
        }
    }
    ctx->pc = 0x308928u;
label_308928:
    // 0x308928: 0xc0899bc  jal         func_2266F0
label_30892c:
    if (ctx->pc == 0x30892Cu) {
        ctx->pc = 0x308930u;
        goto label_308930;
    }
    ctx->pc = 0x308928u;
    SET_GPR_U32(ctx, 31, 0x308930u);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x308928u, 0x308930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308930u;
label_308930:
    // 0x308930: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_308934:
    if (ctx->pc == 0x308934u) {
        ctx->pc = 0x308934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308930u;
        // 0x308934: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308938u;
        goto label_308938;
    }
    ctx->pc = 0x308930u;
    {
        const bool branch_taken_0x308930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x308934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308930u;
        // 0x308934: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308930) {
            ctx->pc = 0x308950u;
            goto label_308950;
        }
    }
    ctx->pc = 0x308938u;
label_308938:
    // 0x308938: 0x8c4402e4  lw          $a0, 0x2E4($v0)
    ctx->pc = 0x308938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
label_30893c:
    // 0x30893c: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x30893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_308940:
    // 0x308940: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308944:
    // 0x308944: 0x40f809  jalr        $v0
label_308948:
    if (ctx->pc == 0x308948u) {
        ctx->pc = 0x30894Cu;
        goto label_30894c;
    }
    ctx->pc = 0x308944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30894Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308944u, 0x30894Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30894Cu;
label_30894c:
    // 0x30894c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30894cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308950:
    // 0x308950: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x308950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_308954:
    // 0x308954: 0x3e00008  jr          $ra
label_308958:
    if (ctx->pc == 0x308958u) {
        ctx->pc = 0x308958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308954u;
        // 0x308958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30895Cu;
        goto label_30895c;
    }
    ctx->pc = 0x308954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308954u;
        // 0x308958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30895Cu;
label_30895c:
    // 0x30895c: 0x0  nop
    ctx->pc = 0x30895cu;
    // NOP
    ctx->pc = 0x308960u;
}
