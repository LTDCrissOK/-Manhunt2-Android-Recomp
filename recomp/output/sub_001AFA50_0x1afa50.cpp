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

// Function: sub_001AFA50
// Address: 0x1afa50 - 0x1afae8
void sub_001AFA50_0x1afa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFA50_0x1afa50");
#endif

    switch (ctx->pc) {
        case 0x1afa64u: goto label_1afa64;
        case 0x1afa7cu: goto label_1afa7c;
        case 0x1afaacu: goto label_1afaac;
        case 0x1afad0u: goto label_1afad0;
        default: break;
    }

    ctx->pc = 0x1afa50u;

    // 0x1afa50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afa54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afa58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1afa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1afa5c: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AFA5Cu;
    SET_GPR_U32(ctx, 31, 0x1AFA64u);
    ctx->pc = 0x1AFA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA5Cu;
    // 0x1afa60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AFA5Cu, 0x1AFA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA64u;
label_1afa64:
    // 0x1afa64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1afa64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa68: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1afa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1afa6c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AFA6Cu;
    {
        const bool branch_taken_0x1afa6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA6Cu;
        // 0x1afa70: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa6c) {
            ctx->pc = 0x1AFA9Cu;
            goto label_1afa9c;
        }
    }
    ctx->pc = 0x1AFA74u;
    // 0x1afa74: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AFA74u;
    SET_GPR_U32(ctx, 31, 0x1AFA7Cu);
    ctx->pc = 0x1AFA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA74u;
    // 0x1afa78: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AFA74u, 0x1AFA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA7Cu;
label_1afa7c:
    // 0x1afa7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFA7Cu;
    {
        const bool branch_taken_0x1afa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA7Cu;
        // 0x1afa80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa7c) {
            ctx->pc = 0x1AFA90u;
            goto label_1afa90;
        }
    }
    ctx->pc = 0x1AFA84u;
    // 0x1afa84: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1afa84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1afa88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AFA88u;
    {
        const bool branch_taken_0x1afa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA88u;
        // 0x1afa8c: 0x2406015c  addiu       $a2, $zero, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa88) {
            ctx->pc = 0x1AFAC8u;
            goto label_1afac8;
        }
    }
    ctx->pc = 0x1AFA90u;
label_1afa90:
    // 0x1afa90: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1afa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1afa94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AFA94u;
    {
        const bool branch_taken_0x1afa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA94u;
        // 0x1afa98: 0x2406015b  addiu       $a2, $zero, 0x15B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa94) {
            ctx->pc = 0x1AFAC8u;
            goto label_1afac8;
        }
    }
    ctx->pc = 0x1AFA9Cu;
label_1afa9c:
    // 0x1afa9c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AFA9Cu;
    {
        const bool branch_taken_0x1afa9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA9Cu;
        // 0x1afaa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa9c) {
            ctx->pc = 0x1AFAD8u;
            goto label_1afad8;
        }
    }
    ctx->pc = 0x1AFAA4u;
    // 0x1afaa4: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AFAA4u;
    SET_GPR_U32(ctx, 31, 0x1AFAACu);
    ctx->pc = 0x1AFAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFAA4u;
    // 0x1afaa8: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AFAA4u, 0x1AFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAACu;
label_1afaac:
    // 0x1afaac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFAACu;
    {
        const bool branch_taken_0x1afaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAACu;
        // 0x1afab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afaac) {
            ctx->pc = 0x1AFAC0u;
            goto label_1afac0;
        }
    }
    ctx->pc = 0x1AFAB4u;
    // 0x1afab4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1afab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1afab8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFAB8u;
    {
        const bool branch_taken_0x1afab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAB8u;
        // 0x1afabc: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afab8) {
            ctx->pc = 0x1AFAC8u;
            goto label_1afac8;
        }
    }
    ctx->pc = 0x1AFAC0u;
label_1afac0:
    // 0x1afac0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1afac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1afac4: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1afac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
label_1afac8:
    // 0x1afac8: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AFAC8u;
    SET_GPR_U32(ctx, 31, 0x1AFAD0u);
    ctx->pc = 0x1AFACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFAC8u;
    // 0x1afacc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AFAC8u, 0x1AFAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAD0u;
label_1afad0:
    // 0x1afad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFAD0u;
    {
        const bool branch_taken_0x1afad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAD0u;
        // 0x1afad4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afad0) {
            ctx->pc = 0x1AFADCu;
            goto label_1afadc;
        }
    }
    ctx->pc = 0x1AFAD8u;
label_1afad8:
    // 0x1afad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1afadc:
    // 0x1afadc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1afadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAE0u;
        // 0x1afae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFAE8u;
}
